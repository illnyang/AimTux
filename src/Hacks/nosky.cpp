#include "nosky.h"

bool Settings::NoSky::enabled = false;
ImColor Settings::NoSky::color = ImColor(0, 0, 0, 255);

std::unordered_map<MaterialHandle_t, ImColor> skyboxMaterials;

void NoSky::FrameStageNotify(ClientFrameStage_t stage)
{
	if (!engine->IsInGame() && skyboxMaterials.size() > 0)
	{
		for (const auto& it: skyboxMaterials)
		{
			IMaterial *mat = material->GetMaterial(it.first);

			if (!mat)
				continue;

			float r, g, b;

			mat->GetColorModulate(&r, &g, &b);

			mat->ColorModulate(r, g, b);
			mat->AlphaModulate(mat->GetAlphaModulation());
		}

		skyboxMaterials.clear();
	}
	
	if (stage != ClientFrameStage_t::FRAME_NET_UPDATE_POSTDATAUPDATE_END)
		return;

	for (MaterialHandle_t i = material->FirstMaterial(); i != material->InvalidMaterial(); i = material->NextMaterial(i))
	{
		IMaterial *mat = material->GetMaterial(i);
		float r, g, b;

		if (!mat || strcmp(mat->GetTextureGroupName(), TEXTURE_GROUP_SKYBOX) != 0)
			continue;

		mat->GetColorModulate(&r, &g, &b);

		if (skyboxMaterials.find(i) == skyboxMaterials.end())
			skyboxMaterials.emplace(i, ImColor());

		ImColor color = Settings::NoSky::enabled ? Settings::NoSky::color : ImColor(r, g, b, mat->GetAlphaModulation());

		if (skyboxMaterials.at(i) != color)
		{
			mat->ColorModulate(color);

			skyboxMaterials.at(i) = color;
		}
	}
}