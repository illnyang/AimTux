#include "asuswalls.h"

bool Settings::ASUSWalls::enabled = false;
ImColor Settings::ASUSWalls::color = ImColor(255, 255, 255, 150);

std::unordered_map<MaterialHandle_t, ImColor> worldMaterials;

void ASUSWalls::FrameStageNotify(ClientFrameStage_t stage)
{
	if (!engine->IsInGame() && worldMaterials.size() > 0)
	{
		for (const auto& it: worldMaterials)
		{
			IMaterial *mat = material->GetMaterial(it.first);

			if (!mat)
				continue;

			float r, g, b;

			mat->GetColorModulate(&r, &g, &b);

			mat->ColorModulate(r, g, b);
			mat->AlphaModulate(mat->GetAlphaModulation());
		}

		worldMaterials.clear();
	}
	
	if (stage != ClientFrameStage_t::FRAME_NET_UPDATE_POSTDATAUPDATE_END)
		return;

	for (MaterialHandle_t i = material->FirstMaterial(); i != material->InvalidMaterial(); i = material->NextMaterial(i))
	{
		IMaterial *mat = material->GetMaterial(i);

		float r, g, b;

		mat->GetColorModulate(&r, &g, &b);

		if (!mat || strcmp(mat->GetTextureGroupName(), TEXTURE_GROUP_WORLD) != 0)
			continue;

		if (worldMaterials.find(i) == worldMaterials.end())
			worldMaterials.emplace(i, ImColor());

		ImColor color = Settings::ASUSWalls::enabled ? Settings::ASUSWalls::color: ImColor(r, g, b, mat->GetAlphaModulation());

		if (worldMaterials.at(i) != color)
		{
			mat->ColorModulate(color);
			mat->AlphaModulate(color.Value.w);

			worldMaterials.at(i) = color;
		}
	}
}