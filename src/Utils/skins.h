#pragma once

#include "util.h"
#include "../SDK/SDK.h"
#include "../interfaces.h"
#include "../settings.h"

extern std::vector<std::pair<int, const char*>> guns;
extern std::vector<std::pair<int, const char*>> knives;
extern std::vector<std::pair<int, const char*>> weapon_skins;
extern std::vector<std::pair<int, const char*>> gloves;
extern std::vector<std::pair<int, const char*>> glove_skins;

namespace Skins
{
	void Localize();

	AttribItem_t& GetSkinConfig(ItemDefinitionIndex itemDefinitionIndex);
}
