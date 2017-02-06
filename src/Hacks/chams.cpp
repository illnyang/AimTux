#include "chams.h"

bool Settings::ESP::Chams::enabled = false;
bool Settings::ESP::Chams::Arms::enabled = false;
bool Settings::ESP::Chams::Weapon::enabled = false;
ArmsType Settings::ESP::Chams::Arms::type = ArmsType::DEFAULT;
ImColor Settings::ESP::Chams::allyColor = ImColor(7, 98, 168, 255);
ImColor Settings::ESP::Chams::allyVisibleColor = ImColor(40, 52, 138, 255);
ImColor Settings::ESP::Chams::enemyColor = ImColor(243, 24, 28, 255);
ImColor Settings::ESP::Chams::enemyVisibleColor = ImColor(243, 159, 20, 255);
ImColor Settings::ESP::Chams::localplayerColor = ImColor(117, 43, 73, 255);
bool Settings::ESP::Chams::hpAllyColor = false;
bool Settings::ESP::Chams::hpAllyVisibleColor = false;
bool Settings::ESP::Chams::hpEnemyColor = false;
bool Settings::ESP::Chams::hpEnemyVisibleColor = false;
bool Settings::ESP::Chams::hpLocalplayerColor = false;
ImColor Settings::ESP::Chams::Arms::color = ImColor(117, 43, 73, 255);
ImColor Settings::ESP::Chams::Weapon::color = ImColor(255, 255, 255, 255);
ChamsType Settings::ESP::Chams::type = ChamsType::CHAMS;

float rainbowHue;

IMaterial* materialChams;
IMaterial* materialChamsIgnorez;
IMaterial* materialChamsFlat;
IMaterial* materialChamsFlatIgnorez;
IMaterial* materialChamsArms;
IMaterial* materialChamsWeapons;

void DrawPlayer(void* thisptr, void* context, void *state, const ModelRenderInfo_t &pInfo, matrix3x4_t* pCustomBoneToWorld)
{
	if (!Settings::ESP::Chams::enabled)
		return;

	C_BasePlayer* localplayer = (C_BasePlayer*) entityList->GetClientEntity(engine->GetLocalPlayer());
	if (!localplayer)
		return;

	C_BasePlayer* entity = (C_BasePlayer*) entityList->GetClientEntity(pInfo.entity_index);
	if (!entity
		|| entity->GetDormant()
		|| !entity->GetAlive())
		return;

	if (entity == localplayer && !Settings::ESP::Filters::localplayer)
		return;

	if (entity->GetTeam() != localplayer->GetTeam() && !Settings::ESP::Filters::enemies)
		return;

	if (entity != localplayer && entity->GetTeam() == localplayer->GetTeam() && !Settings::ESP::Filters::allies)
		return;

	IMaterial* visible_material;
	IMaterial* hidden_material;

	switch (Settings::ESP::Chams::type)
	{
		case ChamsType::CHAMS:
		case ChamsType::CHAMS_XQZ:
			visible_material = materialChams;
			hidden_material = materialChamsIgnorez;
			break;
		case ChamsType::CHAMS_FLAT:
		case ChamsType::CHAMS_FLAT_XQZ:
			visible_material = materialChamsFlat;
			hidden_material = materialChamsFlatIgnorez;
			break;
	}

	visible_material->AlphaModulate(1.0f);
	hidden_material->AlphaModulate(1.0f);

	if (entity == localplayer)
	{
		Color visColor = Settings::ESP::Chams::hpLocalplayerColor ? ESP::GetHealthColor(entity) : Color::FromImColor(Settings::ESP::Chams::localplayerColor);
		Color color = visColor;
		color.r *= 0.45f;
		color.g *= 0.45f;
		color.b *= 0.45f;

		visible_material->ColorModulate(visColor);
		hidden_material->ColorModulate(color);
	}
	else if (entity->GetTeam() == localplayer->GetTeam())
	{
		Color visColor = Settings::ESP::Chams::hpAllyVisibleColor ? ESP::GetHealthColor(entity) : Color::FromImColor(Settings::ESP::Chams::allyVisibleColor);
		Color color = Settings::ESP::Chams::hpAllyColor ? ESP::GetHealthColor(entity) : Color::FromImColor(Settings::ESP::Chams::allyColor);

		visible_material->ColorModulate(visColor);
		hidden_material->ColorModulate(color);
	}
	else if (entity->GetTeam() != localplayer->GetTeam())
	{
		Color visColor = Settings::ESP::Chams::hpEnemyVisibleColor ? ESP::GetHealthColor(entity) : Color::FromImColor(Settings::ESP::Chams::enemyVisibleColor);
		Color color = Settings::ESP::Chams::hpEnemyColor ? ESP::GetHealthColor(entity) : Color::FromImColor(Settings::ESP::Chams::enemyColor);

		visible_material->ColorModulate(visColor);
		hidden_material->ColorModulate(color);
	}
	else
	{
		return;
	}

	if (entity->GetImmune())
	{
		visible_material->AlphaModulate(0.5f);
		hidden_material->AlphaModulate(0.5f);
	}

	if (!Settings::ESP::Filters::legit && (Settings::ESP::Chams::type == ChamsType::CHAMS_XQZ || Settings::ESP::Chams::type == ChamsType::CHAMS_FLAT_XQZ))
	{
		modelRender->ForcedMaterialOverride(hidden_material);
		modelRenderVMT->GetOriginalMethod<DrawModelExecuteFn>(21)(thisptr, context, state, pInfo, pCustomBoneToWorld);
	}

	modelRender->ForcedMaterialOverride(visible_material);
	modelRenderVMT->GetOriginalMethod<DrawModelExecuteFn>(21)(thisptr, context, state, pInfo, pCustomBoneToWorld);
}

void DrawWeapon(const ModelRenderInfo_t& pInfo)
{
	if (!Settings::ESP::Chams::Weapon::enabled)
		return;

	std::string modelName = modelInfo->GetModelName(pInfo.pModel);
	IMaterial* mat = materialChamsWeapons;

	if (!Settings::ESP::Chams::Weapon::enabled)
		mat = material->FindMaterial(modelName.c_str(), TEXTURE_GROUP_MODEL);

	mat->AlphaModulate(1.0f);
	mat->ColorModulate(Settings::ESP::Chams::Weapon::color);

	modelRender->ForcedMaterialOverride(mat);
}

void DrawArms(const ModelRenderInfo_t& pInfo)
{
	if (!Settings::ESP::Chams::Arms::enabled)
		return;

	std::string modelName = modelInfo->GetModelName(pInfo.pModel);
	IMaterial* mat = materialChamsArms;

	if (!Settings::ESP::Chams::Arms::enabled)
		mat = material->FindMaterial(modelName.c_str(), TEXTURE_GROUP_MODEL);

	switch (Settings::ESP::Chams::Arms::type)
	{
		default:
			break;
		case ArmsType::DEFAULT:
			mat->AlphaModulate(1.0f);
			mat->ColorModulate(Settings::ESP::Chams::Arms::color);
			break;
		case ArmsType::RAINBOW:
			Color color = Color::FromHSB(rainbowHue, 1.0f, 1.0f);
			mat->AlphaModulate(1.0f);
			mat->ColorModulate(color);
			break;
	}

	mat->SetMaterialVarFlag(MATERIAL_VAR_WIREFRAME, Settings::ESP::Chams::Arms::type == ArmsType::WIREFRAME);
	mat->SetMaterialVarFlag(MATERIAL_VAR_NO_DRAW, Settings::ESP::Chams::Arms::type == ArmsType::NONE);
	modelRender->ForcedMaterialOverride(mat);
}

void Chams::DrawModelExecute(void* thisptr, void* context, void *state, const ModelRenderInfo_t &pInfo, matrix3x4_t* pCustomBoneToWorld)
{
	if (!engine->IsInGame())
		return;

	if (!Settings::ESP::enabled)
		return;

	if (!pInfo.pModel)
		return;

	static bool materialsCreated = false;
	if (!materialsCreated)
	{
		materialChams = Util::CreateMaterial("VertexLitGeneric", "VGUI/white_additive", false, true, true, true, true);
		materialChamsIgnorez = Util::CreateMaterial("VertexLitGeneric", "VGUI/white_additive", true, true, true, true, true);
		materialChamsFlat = Util::CreateMaterial("UnlitGeneric", "VGUI/white_additive", false, true, true, true, true);
		materialChamsFlatIgnorez = Util::CreateMaterial("UnlitGeneric", "VGUI/white_additive", true, true, true, true, true);
		materialChamsArms = Util::CreateMaterial("VertexLitGeneric", "VGUI/white_additive", false, true, true, true, true);
		materialChamsWeapons = Util::CreateMaterial("VertexLitGeneric", "VGUI/white_additive", false, true, true, true, true);
		materialsCreated = true;
	}

	std::string modelName = modelInfo->GetModelName(pInfo.pModel);

	if (modelName.find("models/player") != std::string::npos)
		DrawPlayer(thisptr, context, state, pInfo, pCustomBoneToWorld);
	else if (modelName.find("arms") != std::string::npos)
		DrawArms(pInfo);
	else if (modelName.find("weapon") != std::string::npos)
		DrawWeapon(pInfo);
}

void Chams::CreateMove(CUserCmd* cmd)
{
	if (rainbowHue >= 1.f)
		rainbowHue = 0.f;
	else
		rainbowHue += 0.002;
}
