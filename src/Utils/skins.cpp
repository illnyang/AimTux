#include "skins.h"

std::vector<std::pair<int, const char*>> guns = {
		{ (int) ItemDefinitionIndex::INVALID, "<-Default->"},
		{ (int) ItemDefinitionIndex::WEAPON_AK47, "#SFUI_WPNHUD_AK47" },
		{ (int) ItemDefinitionIndex::WEAPON_AUG, "#SFUI_WPNHUD_Aug" },
		{ (int) ItemDefinitionIndex::WEAPON_AWP, "#SFUI_WPNHUD_AWP" },
		{ (int) ItemDefinitionIndex::WEAPON_CZ75A, "#SFUI_WPNHUD_CZ75" },
		{ (int) ItemDefinitionIndex::WEAPON_DEAGLE, "#SFUI_WPNHUD_DesertEagle" },
		{ (int) ItemDefinitionIndex::WEAPON_ELITE, "#SFUI_WPNHUD_Elites" },
		{ (int) ItemDefinitionIndex::WEAPON_FAMAS, "#SFUI_WPNHUD_Famas" },
		{ (int) ItemDefinitionIndex::WEAPON_FIVESEVEN, "#SFUI_WPNHUD_FiveSeven" },
		{ (int) ItemDefinitionIndex::WEAPON_GALILAR, "#SFUI_WPNHUD_GalilAR" },
		{ (int) ItemDefinitionIndex::WEAPON_G3SG1, "#SFUI_WPNHUD_G3SG1" },
		{ (int) ItemDefinitionIndex::WEAPON_GLOCK, "#SFUI_WPNHUD_Glock18" },
		{ (int) ItemDefinitionIndex::WEAPON_M249, "#SFUI_WPNHUD_M249" },
		{ (int) ItemDefinitionIndex::WEAPON_M4A1_SILENCER, "#SFUI_WPNHUD_M4_SILENCER" },
		{ (int) ItemDefinitionIndex::WEAPON_M4A1, "#SFUI_WPNHUD_M4A1" },
		{ (int) ItemDefinitionIndex::WEAPON_MAC10, "#SFUI_WPNHUD_MAC10" },
		{ (int) ItemDefinitionIndex::WEAPON_MAG7, "#SFUI_WPNHUD_Mag7" },
		{ (int) ItemDefinitionIndex::WEAPON_MP7, "#SFUI_WPNHUD_MP7" },
		{ (int) ItemDefinitionIndex::WEAPON_MP9, "#SFUI_WPNHUD_MP9" },
		{ (int) ItemDefinitionIndex::WEAPON_NEGEV, "#SFUI_WPNHUD_Negev" },
		{ (int) ItemDefinitionIndex::WEAPON_NOVA, "#SFUI_WPNHUD_Nova" },
		{ (int) ItemDefinitionIndex::WEAPON_HKP2000, "#SFUI_WPNHUD_HKP2000" },
		{ (int) ItemDefinitionIndex::WEAPON_P250, "#SFUI_WPNHUD_P250" },
		{ (int) ItemDefinitionIndex::WEAPON_P90, "#SFUI_WPNHUD_P90" },
		{ (int) ItemDefinitionIndex::WEAPON_BIZON, "#SFUI_WPNHUD_Bizon" },
		{ (int) ItemDefinitionIndex::WEAPON_REVOLVER, "#SFUI_WPNHUD_REVOLVER" },
		{ (int) ItemDefinitionIndex::WEAPON_SAWEDOFF, "#SFUI_WPNHUD_Sawedoff" },
		{ (int) ItemDefinitionIndex::WEAPON_SCAR20, "#SFUI_WPNHUD_SCAR20" },
		{ (int) ItemDefinitionIndex::WEAPON_SG556, "#SFUI_WPNHUD_SG556" },
		{ (int) ItemDefinitionIndex::WEAPON_SSG08, "#SFUI_WPNHUD_SSG08" },
		{ (int) ItemDefinitionIndex::WEAPON_TEC9, "#SFUI_WPNHUD_Tec9" },
		{ (int) ItemDefinitionIndex::WEAPON_UMP45, "#SFUI_WPNHUD_UMP45" },
		{ (int) ItemDefinitionIndex::WEAPON_USP_SILENCER, "#SFUI_WPNHUD_USP_SILENCER" },
		{ (int) ItemDefinitionIndex::WEAPON_XM1014, "#SFUI_WPNHUD_xm1014" },
};

std::vector<std::pair<int, const char*>> knives = {
		{ 0, "#SFUI_WPNHUD_KnifeBayonet" },
		{ 5, "#SFUI_WPNHUD_KnifeFlip" },
		{ 6, "#SFUI_WPNHUD_KnifeGut" },
		{ 7, "#SFUI_WPNHUD_KnifeKaram" },
		{ 8, "#SFUI_WPNHUD_KnifeM9" },
		{ 9, "#SFUI_WPNHUD_KnifeTactical" },
		{ 12, "#SFUI_WPNHUD_knife_falchion_advanced" },
		{ 14, "#SFUI_WPNHUD_knife_survival_bowie" },
		{ 15, "#SFUI_WPNHUD_Knife_Butterfly" },
		{ 16, "#SFUI_WPNHUD_knife_push" },
};

std::vector<std::pair<int, const char*>> weapon_skins = {
		{ 2, "#PaintKit_so_olive_Tag" },
		{ 3, "#PaintKit_so_red_Tag" },
		{ 5, "#PaintKit_hy_ddpat_Tag" },
		{ 6, "#PaintKit_hy_arctic_Tag" },
		{ 8, "#PaintKit_hy_desert_Tag" },
		{ 9, "#PaintKit_hy_tiger_Tag" },
		{ 10, "#PaintKit_hy_copperhead_Tag" },
		{ 11, "#PaintKit_hy_skulls_Tag" },
		{ 12, "#PaintKit_hy_webs_Tag" },
		{ 13, "#PaintKit_hy_splatter_Tag" },
		{ 14, "#PaintKit_hy_ak47lam_Tag" },
		{ 15, "#PaintKit_hy_gelpen_Tag" },
		{ 16, "#PaintKit_hy_v_tiger_Tag" },
		{ 17, "#PaintKit_hy_ddpat_urb_Tag" },
		{ 20, "#PaintKit_hy_zombie_Tag" },
		{ 21, "#PaintKit_hy_granite_Tag" },
		{ 22, "#PaintKit_sp_spray_Tag" },
		{ 25, "#PaintKit_sp_leaves_Tag" },
		{ 26, "#PaintKit_sp_short_tape_Tag" },
		{ 27, "#PaintKit_sp_tape_Tag" },
		{ 28, "#PaintKit_an_navy_Tag" },
		{ 30, "#PaintKit_sp_snake_Tag" },
		{ 32, "#PaintKit_an_silver_Tag" },
		{ 33, "#PaintKit_an_red_Tag" },
		{ 34, "#PaintKit_am_urban_Tag" },
		{ 36, "#PaintKit_am_ossify_Tag" },
		{ 37, "#PaintKit_aa_flames_Tag" },
		{ 38, "#PaintKit_aa_fade_Tag" },
		{ 39, "#PaintKit_so_yellow_Tag" },
		{ 40, "#PaintKit_so_night_Tag" },
		{ 41, "#PaintKit_aq_copper_Tag" },
		{ 42, "#PaintKit_aq_blued_Tag" },
		{ 43, "#PaintKit_aq_forced_Tag" },
		{ 44, "#PaintKit_aq_oiled_Tag" },
		{ 46, "#PaintKit_so_pmc_Tag" },
		{ 47, "#PaintKit_so_space_marine_Tag" },
		{ 48, "#PaintKit_am_dragon_glock_Tag" },
		{ 51, "#PaintKit_am_lightning_awp_Tag" },
		{ 59, "#PaintKit_am_zebra_Tag" },
		{ 60, "#PaintKit_am_zebra_dark_Tag" },
		{ 61, "#PaintKit_aa_vertigo_Tag" },
		{ 62, "#PaintKit_cu_spring_nova_Tag" },
		{ 67, "#PaintKit_am_slither_p90_Tag" },
		{ 70, "#PaintKit_am_carbon_fiber_Tag" },
		{ 71, "#PaintKit_am_scorpion_p2000_Tag" },
		{ 72, "#PaintKit_sp_mesh_tan_Tag" },
		{ 73, "#PaintKit_hy_feathers_aug_Tag" },
		{ 74, "#Paintkit_hy_arctic_contrast_Tag" },
		{ 75, "#PaintKit_hy_blizzard_Tag" },
		{ 76, "#PaintKit_hy_forest_winter_Tag" },
		{ 77, "#PaintKit_hy_forest_boreal_Tag" },
		{ 78, "#PaintKit_hy_forest_night_Tag" },
		{ 83, "#PaintKit_hy_ddpat_orange_Tag" },
		{ 84, "#PaintKit_hy_ddpat_pink_Tag" },
		{ 90, "#PaintKit_hy_sediment_Tag" },
		{ 92, "#PaintKit_hy_reef_rock_Tag" },
		{ 93, "#PaintKit_so_caramel_Tag" },
		{ 95, "#PaintKit_so_grassland_Tag" },
		{ 96, "#PaintKit_so_moss_Tag" },
		{ 98, "#PaintKit_so_purple_Tag" },
		{ 99, "#PaintKit_so_sand_Tag" },
		{ 100, "#PaintKit_so_stormfront_Tag" },
		{ 101, "#PaintKit_so_tornado_Tag" },
		{ 102, "#PaintKit_so_whiteout_Tag" },
		{ 104, "#PaintKit_sp_leaves_grassland_Tag" },
		{ 107, "#PaintKit_sp_mesh_arctic_contrast_Tag" },
		{ 110, "#PaintKit_sp_mesh_fire_Tag" },
		{ 111, "#PaintKit_sp_mesh_glacier_Tag" },
		{ 116, "#PaintKit_sp_mesh_sand_Tag" },
		{ 119, "#PaintKit_sp_spray_sage_Tag" },
		{ 122, "#PaintKit_sp_spray_jungle_Tag" },
		{ 124, "#PaintKit_sp_spray_sand_Tag" },
		{ 135, "#PaintKit_sp_tape_dots_urban_Tag" },
		{ 136, "#PaintKit_sp_tape_dots_waves_Tag" },
		{ 141, "#PaintKit_sp_tape_orange_Tag" },
		{ 143, "#PaintKit_sp_tape_urban_Tag" },
		{ 147, "#PaintKit_sp_short_tape_jungle_Tag" },
		{ 148, "#PaintKit_sp_short_tape_sand_Tag" },
		{ 149, "#PaintKit_sp_short_tape_urban_Tag" },
		{ 151, "#PaintKit_so_jungle_Tag" },
		{ 153, "#PaintKit_so_tangerine_Tag" },
		{ 154, "#PaintKit_cu_broken_path_famas_Tag" },
		{ 155, "#PaintKit_cu_bullet_rain_m4a1_Tag" },
		{ 156, "#PaintKit_cu_catskulls_p90_Tag" },
		{ 157, "#PaintKit_sp_palm_Tag" },
		{ 158, "#PaintKit_cu_walnut_nova_Tag" },
		{ 159, "#PaintKit_aq_brass_Tag" },
		{ 162, "#PaintKit_sp_splash_p250_Tag" },
		{ 164, "#PaintKit_hy_hunter_modern_Tag" },
		{ 165, "#PaintKit_hy_hunter_blaze_pink_Tag" },
		{ 166, "#PaintKit_hy_hunter_blaze_orange_Tag" },
		{ 167, "#PaintKit_sp_nukestripe_orange_Tag" },
		{ 168, "#PaintKit_sp_nukestripe_green_Tag" },
		{ 169, "#PaintKit_sp_nukestripe_maroon_Tag" },
		{ 170, "#PaintKit_sp_zebracam_Tag" },
		{ 171, "#PaintKit_sp_nukestripe_brown_Tag" },
		{ 172, "#PaintKit_hy_ak47lam_bw_Tag" },
		{ 174, "#PaintKit_hy_blam_simple_Tag" },
		{ 175, "#PaintKit_sp_dapple_Tag" },
		{ 176, "#PaintKit_sp_zebracam_bw_Tag" },
		{ 177, "#PaintKit_CSGO_Icosahedron_Tag" },
		{ 178, "#PaintKit_CSGO_Doomkitty_Tag" },
		{ 179, "#PaintKit_sp_nukestripe_green_Tag" },
		{ 180, "#PaintKit_cu_fireserpent_ak47_bravo_Tag" },
		{ 181, "#PaintKit_cu_favela_Tag" },
		{ 182, "#PaintKit_cu_dragon_p90_bravo_Tag" },
		{ 183, "#PaintKit_hy_siege_bravo_Tag" },
		{ 184, "#PaintKit_cu_favela_Tag" },
		{ 185, "#PaintKit_am_scales_bravo_Tag" },
		{ 186, "#PaintKit_sp_spray_waves_Tag" },
		{ 187, "#PaintKit_sp_star_bravo_Tag" },
		{ 188, "#PaintKit_aq_etched_mac10_bravo_Tag" },
		{ 189, "#PaintKit_hy_ocean_Tag" },
		{ 190, "#PaintKit_cu_season_elites_bravo_Tag" },
		{ 191, "#PaintKit_hy_seaside_bravo_Tag" },
		{ 192, "#PaintKit_hy_crumple_bravo_Tag" },
		{ 193, "#PaintKit_sp_skull_diagram_bravo_Tag" },
		{ 194, "#PaintKit_sp_spitfire_famas_Tag" },
		{ 195, "#PaintKit_hy_bluepolygon_bravo_Tag" },
		{ 196, "#PaintKit_an_emerald_bravo_Tag" },
		{ 197, "#PaintKit_an_navy_Tag" },
		{ 198, "#PaintKit_sp_hazard_Tag" },
		{ 199, "#PaintKit_sp_tape_dots_Tag" },
		{ 200, "#PaintKit_hy_mayan_dreams_bravo_Tag" },
		{ 201, "#PaintKit_sp_palm_Tag" },
		{ 202, "#PaintKit_hy_ddpat_jungle_Tag" },
		{ 203, "#PaintKit_aq_steel_bravo_Tag" },
		{ 204, "#PaintKit_hy_ali_tile_bravo_Tag" },
		{ 205, "#PaintKit_so_jungle_Tag" },
		{ 206, "#PaintKit_so_tornado_Tag" },
		{ 207, "#PaintKit_hy_crumple_dark_bravo_Tag" },
		{ 208, "#PaintKit_so_sand_Tag" },
		{ 209, "#PaintKit_so_olive_Tag" },
		{ 210, "#PaintKit_an_gunmetal_Tag" },
		{ 211, "#PaintKit_am_ossify_blue_Tag" },
		{ 212, "#PaintKit_am_crumple_Tag" },
		{ 213, "#PaintKit_am_ossify_blue_Tag" },
		{ 214, "#PaintKit_am_crumple_Tag" },
		{ 215, "#PaintKit_cu_xray_m4_Tag" },
		{ 216, "#PaintKit_an_titanium30v_Tag" },
		{ 217, "#PaintKit_hy_redtiger_Tag" },
		{ 218, "#PaintKit_hy_bluehex_Tag" },
		{ 219, "#PaintKit_hy_redhex_Tag" },
		{ 220, "#PaintKit_am_ossify_red_Tag" },
		{ 221, "#PaintKit_am_electric_red_Tag" },
		{ 222, "#PaintKit_cu_shark_Tag" },
		{ 223, "#PaintKit_hy_flowers_Tag" },
		{ 224, "#PaintKit_hy_water_crest_Tag" },
		{ 225, "#PaintKit_sp_camo_wood_blue_Tag" },
		{ 226, "#PaintKit_hy_ak47lam_blue_Tag" },
		{ 227, "#PaintKit_hy_hive_Tag" },
		{ 228, "#PaintKit_hy_modspots_Tag" },
		{ 229, "#PaintKit_sp_zebracam_blue_Tag" },
		{ 230, "#PaintKit_am_ddpatdense_silver_Tag" },
		{ 231, "#PaintKit_am_ddpatdense_peacock_Tag" },
		{ 232, "#PaintKit_hy_webs_Tag" },
		{ 233, "#PaintKit_sp_palm_shadow_Tag" },
		{ 234, "#PaintKit_sp_twigs_Tag" },
		{ 235, "#PaintKit_hy_varicamo_Tag" },
		{ 236, "#PaintKit_hy_varicamo_night_Tag" },
		{ 237, "#PaintKit_hy_varicamo_urban_Tag" },
		{ 238, "#PaintKit_hy_varicamo_blue_Tag" },
		{ 240, "#PaintKit_hy_varicamo_desert_Tag" },
		{ 241, "#PaintKit_sp_mesh_slashes_Tag" },
		{ 242, "#PaintKit_sp_mesh_army_Tag" },
		{ 243, "#PaintKit_sp_mesh_python_Tag" },
		{ 244, "#PaintKit_sp_mesh_hot_and_cold_Tag" },
		{ 245, "#PaintKit_sp_spray_army_Tag" },
		{ 246, "#PaintKit_aa_fade_metallic_Tag" },
		{ 247, "#PaintKit_aq_damascus_Tag" },
		{ 248, "#PaintKit_am_crystallized_red_Tag" },
		{ 249, "#PaintKit_am_crystallized_blue_Tag" },
		{ 250, "#PaintKit_hy_varicamo_red_Tag" },
		{ 251, "#PaintKit_hy_snakeskin_Tag" },
		{ 252, "#PaintKit_am_crystallized_silver_Tag" },
		{ 253, "#PaintKit_aa_fade_grassland_Tag" },
		{ 254, "#PaintKit_so_orange_accents_Tag" },
		{ 255, "#PaintKit_cu_m4_asimov_tag" },
		{ 256, "#PaintKit_cu_sawedoff_octopump_tag" },
		{ 257, "#PaintKit_cu_m4a1-s_elegant_Tag" },
		{ 258, "#PaintKit_cu_p250_refined_Tag" },
		{ 259, "#PaintKit_cu_awp_cobra_tag" },
		{ 260, "#PaintKit_cu_famas_pulse_tag" },
		{ 261, "#PaintKit_hy_marina_sunrise_tag" },
		{ 262, "#PaintKit_am_thorny_rose_mp9_tag" },
		{ 263, "#PaintKit_cu_skull_nova_tag" },
		{ 264, "#PaintKit_cu_sandstorm_tag" },
		{ 265, "#PaintKit_hy_kami_tag" },
		{ 266, "#PaintKit_aq_obsidian_tag" },
		{ 267, "#PaintKit_am_turqoise_halftone_tag" },
		{ 268, "#PaintKit_am_diamond_plate_Tag" },
		{ 269, "#PaintKit_am_fuschia_Tag" },
		{ 270, "#PaintKit_aq_etched_cz75_Tag" },
		{ 271, "#PaintKit_am_p250_beaded_paint_Tag" },
		{ 272, "#PaintKit_am_fluted_tec9_Tag" },
		{ 273, "#PaintKit_aq_engraved_deagle_Tag" },
		{ 274, "#PaintKit_am_copper_flecks_Tag" },
		{ 275, "#PaintKit_hy_poly_camo_Tag" },
		{ 276, "#PaintKit_so_panther_Tag" },
		{ 277, "#PaintKit_aq_usp_stainless_Tag" },
		{ 278, "#PaintKit_hy_craquelure_Tag" },
		{ 279, "#PaintKit_cu_m4_asimov_tag" },
		{ 280, "#PaintKit_cu_aug_chameleonaire_tag" },
		{ 281, "#PaintKit_cu_ump_corporal_tag" },
		{ 282, "#PaintKit_cu_awp_cobra_tag" },
		{ 283, "#PaintKit_cu_p90_trigon_tag" },
		{ 284, "#PaintKit_cu_mac10_redhot_tag" },
		{ 285, "#PaintKit_sp_negev_turq_terrain_tag" },
		{ 286, "#PaintKit_cu_nova_antique_tag" },
		{ 287, "#PaintKit_cu_famas_pulse_tag" },
		{ 288, "#PaintKit_an_famas_sgt_tag" },
		{ 289, "#PaintKit_cu_sandstorm_tag" },
		{ 290, "#PaintKit_cu_m4a1-s_elegant_Tag" },
		{ 291, "#PaintKit_cu_mag7_heaven_tag" },
		{ 293, "#PaintKit_hy_nerodia_Tag" },
		{ 294, "#PaintKit_so_green_Tag" },
		{ 295, "#PaintKit_cu_money_Tag" },
		{ 296, "#PaintKit_am_crystallized_dark_Tag" },
		{ 297, "#PaintKit_so_orca_Tag" },
		{ 298, "#PaintKit_am_army_shine_Tag" },
		{ 299, "#PaintKit_am_oval_hex_Tag" },
		{ 300, "#PaintKit_cu_pinstripe_ak47_Tag" },
		{ 301, "#PaintKit_am_alloy_orange_Tag" },
		{ 302, "#PaintKit_cu_rubber_ak47_Tag" },
		{ 303, "#PaintKit_cu_tec_isaac_tag" },
		{ 304, "#PaintKit_cu_immortal_ssg08_Tag" },
		{ 305, "#PaintKit_cu_progressiv_aug_Tag" },
		{ 306, "#PaintKit_cu_nova_antique_tag" },
		{ 307, "#PaintKit_cu_retribution_beretta_Tag" },
		{ 308, "#PaintKit_hy_kami_tag" },
		{ 309, "#PaintKit_cu_howling_tag" },
		{ 310, "#PaintKit_cu_decay_mac10_tag" },
		{ 311, "#PaintKit_cu_scorpius_p90_tag" },
		{ 312, "#PaintKit_cu_cyrex_tag" },
		{ 313, "#PaintKit_cu_spitfire_tag" },
		{ 314, "#PaintKit_cu_mag7_heaven_tag" },
		{ 315, "#PaintKit_am_nitrogen_tag" },
		{ 316, "#PaintKit_cu_panther_ak47_Tag" },
		{ 317, "#PaintKit_cu_bratatat_negev_Tag" },
		{ 318, "#PaintKit_cu_usp_sandpapered_Tag" },
		{ 319, "#PaintKit_hy_ssg08_marker_Tag" },
		{ 320, "#PaintKit_hy_snakeskin_red_Tag" },
		{ 321, "#PaintKit_cu_m4a1-s_silence_Tag" },
		{ 322, "#PaintKit_so_orange_accents_Tag" },
		{ 323, "#PaintKit_aq_steel_bravo_Tag" },
		{ 325, "#PaintKit_am_royal_Tag" },
		{ 326, "#PaintKit_am_metals_Tag" },
		{ 327, "#PaintKit_am_chainmail_Tag" },
		{ 328, "#PaintKit_aq_handcannon_Tag" },
		{ 329, "#PaintKit_am_metal_inlay_Tag" },
		{ 330, "#PaintKit_hy_vines_Tag" },
		{ 332, "#PaintKit_so_indigo_Tag" },
		{ 333, "#PaintKit_so_indigo_and_grey_Tag" },
		{ 334, "#PaintKit_am_gyrate_tag" },
		{ 335, "#PaintKit_an_royalbleed_tag" },
		{ 336, "#PaintKit_cu_titanstorm_tag" },
		{ 337, "#PaintKit_cu_korupt_tag" },
		{ 338, "#PaintKit_cu_famas_pulse_tag" },
		{ 339, "#PaintKit_cu_kaiman_tag" },
		{ 340, "#PaintKit_cu_well_traveled_ak47_Tag" },
		{ 341, "#PaintKit_cu_green_leather_Tag" },
		{ 342, "#PaintKit_cu_brown_leather_p90_Tag" },
		{ 343, "#PaintKit_cu_luggage_mac10_Tag" },
		{ 344, "#PaintKit_cu_medieval_dragon_awp_Tag" },
		{ 345, "#PaintKit_cu_green_leather_Tag" },
		{ 346, "#PaintKit_cu_luggage_p2000_Tag" },
		{ 347, "#PaintKit_aq_pilot_deagle_Tag" },
		{ 348, "#PaintKit_cu_leather_xm1014_Tag" },
		{ 349, "#PaintKit_cu_bizon-osiris_tag" },
		{ 350, "#PaintKit_cu_c75a-tiger_tag" },
		{ 351, "#PaintKit_cu_deagle_aureus_tag" },
		{ 352, "#PaintKit_aq_57_feathers_tag" },
		{ 353, "#PaintKit_cu_glock-liquescent_tag" },
		{ 354, "#PaintKit_cu_mp7-commander_tag" },
		{ 355, "#PaintKit_cu_titanstorm_tag" },
		{ 356, "#PaintKit_cu_nova_koi_tag" },
		{ 357, "#PaintKit_cu_p2000_ivory_tag" },
		{ 358, "#PaintKit_cu_bittersweet_tag" },
		{ 359, "#PaintKit_cu_m4_asimov_tag" },
		{ 360, "#PaintKit_cu_cyrex_tag" },
		{ 361, "#PaintKit_aq_leviathan_tag" },
		{ 362, "#PaintKit_hy_lines_orange_tag" },
		{ 363, "#PaintKit_cu_luggage_sg553_Tag" },
		{ 364, "#PaintKit_cu_luggage_usp-s_Tag" },
		{ 365, "#PaintKit_hy_plaid1_Tag" },
		{ 366, "#PaintKit_chy_plaid2_Tag" },
		{ 367, "#PaintKit_am_nuclear_pattern1_glock_Tag" },
		{ 368, "#PaintKit_hy_nuclear_pattern2_mp9_Tag" },
		{ 369, "#PaintKit_sp_nuclear_pattern3_negev_Tag" },
		{ 370, "#PaintKit_am_nuclear_skulls1_xm1014_Tag" },
		{ 371, "#PaintKit_am_nuclear_skulls2_famas_Tag" },
		{ 372, "#PaintKit_am_nuclear_skulls3_mac10_Tag" },
		{ 373, "#PaintKit_hy_nuclear_skulls4_p250_Tag" },
		{ 374, "#PaintKit_hy_nuclear_skulls5_tec9_Tag" },
		{ 375, "#PaintKit_sp_nukestripe_orange_Tag" },
		{ 376, "#PaintKit_so_grey_nuclear_green_bizon_Tag" },
		{ 377, "#PaintKit_so_grey_nuclear_orange_five_seven_Tag" },
		{ 378, "#PaintKit_sp_nukestripe_maroon_Tag" },
		{ 379, "#PaintKit_cu_cerbrus_galil_Tag" },
		{ 380, "#PaintKit_cu_tribute_ak47_Tag" },
		{ 381, "#PaintKit_aq_glock_coiled_Tag" },
		{ 382, "#PaintKit_am_g3sg1_murky_Tag" },
		{ 383, "#PaintKit_aq_m4a1s_basilisk_Tag" },
		{ 384, "#PaintKit_cu_m4a4_griffin_Tag" },
		{ 385, "#PaintKit_sp_mag7_firebitten_Tag" },
		{ 386, "#PaintKit_cu_mp9_chevron_Tag" },
		{ 387, "#PaintKit_cu_mp7-commander_tag" },
		{ 388, "#PaintKit_aq_p250_cartel_Tag" },
		{ 389, "#PaintKit_cu_p2000_fire_elemental_Tag" },
		{ 390, "#PaintKit_aq_sawedoff_blackgold_Tag" },
		{ 391, "#PaintKit_cu_scar20_intervention_Tag" },
		{ 392, "#PaintKit_sp_ump45_d-visions_Tag" },
		{ 393, "#PaintKit_cu_xm1014_caritas_Tag" },
		{ 394, "#PaintKit_aq_p250_cartel_Tag" },
		{ 395, "#PaintKit_am_awp_glory_Tag" },
		{ 396, "#PaintKit_cu_elites_urbanstorm_Tag" },
		{ 397, "#PaintKit_aq_deagle_naga_Tag" },
		{ 398, "#PaintKit_cu_galil_abrasion_Tag" },
		{ 399, "#PaintKit_cu_glock_deathtoll_Tag" },
		{ 400, "#PaintKit_cu_m4a4_ancestral_Tag" },
		{ 401, "#PaintKit_cu_m249_sektor_Tag" },
		{ 402, "#PaintKit_am_mac10_malachite_Tag" },
		{ 403, "#PaintKit_cu_mp9_deadly_poison_Tag" },
		{ 404, "#PaintKit_cu_p250_mandala_Tag" },
		{ 405, "#PaintKit_cu_sawedoff_deva_Tag" },
		{ 406, "#PaintKit_aq_scar20_leak_Tag" },
		{ 407, "#PaintKit_aq_xm1014_sigla_Tag" },
		{ 409, "#PaintKit_an_tiger_orange_Tag" },
		{ 410, "#PaintKit_aq_damascus_Tag" },
		{ 411, "#PaintKit_aq_damascus_Tag" },
		{ 413, "#PaintKit_am_marble_fade_Tag" },
		{ 414, "#PaintKit_aq_steel_bravo_Tag" },
		{ 415, "#PaintKit_am_marbleized_Tag" },
		{ 416, "#PaintKit_am_marbleized_Tag" },
		{ 417, "#PaintKit_am_marbleized_Tag" },
		{ 418, "#PaintKit_am_marbleized_Tag" },
		{ 419, "#PaintKit_am_marbleized_Tag" },
		{ 420, "#PaintKit_am_marbleized_Tag" },
		{ 421, "#PaintKit_am_marbleized_Tag" },
		{ 422, "#PaintKit_cu_ak47_mastery_Tag" },
		{ 423, "#PaintKit_aq_mp7_ultramodern_Tag" },
		{ 424, "#PaintKit_aq_awp_twine_Tag" },
		{ 425, "#PaintKit_am_bronze_sparkle_Tag" },
		{ 426, "#PaintKit_aq_p250_contour_Tag" },
		{ 427, "#PaintKit_cu_fiveseven_banana_Tag" },
		{ 428, "#PaintKit_cu_galil_eco_Tag" },
		{ 429, "#PaintKit_aq_famas_jinn_Tag" },
		{ 430, "#PaintKit_cu_m4a1_hyper_beast_Tag" },
		{ 431, "#PaintKit_cu_mac10_redhot_tag" },
		{ 432, "#PaintKit_am_awp_glory_Tag" },
		{ 433, "#PaintKit_cu_mac10_neonrider_Tag" },
		{ 434, "#PaintKit_cu_sawedoff_origami_Tag" },
		{ 435, "#PaintKit_cu_cz75_precision_Tag" },
		{ 436, "#PaintKit_am_ump_racer_Tag" },
		{ 437, "#PaintKit_am_aqua_flecks_Tag" },
		{ 438, "#PaintKit_cu_chronos_g3sg1_Tag" },
		{ 439, "#PaintKit_hy_hades_Tag" },
		{ 440, "#PaintKit_hy_icarus_Tag" },
		{ 441, "#PaintKit_cu_labyrinth_Tag" },
		{ 442, "#PaintKit_sp_labyrinth1_Tag" },
		{ 443, "#PaintKit_sp_labyrinth2_Tag" },
		{ 444, "#PaintKit_sp_labyrinth3_Tag" },
		{ 445, "#PaintKit_an_red_Tag" },
		{ 446, "#PaintKit_cu_medusa_awp_Tag" },
		{ 447, "#PaintKit_gs_mother_of_pearl_elite_Tag" },
		{ 448, "#PaintKit_aa_pandora_Tag" },
		{ 449, "#PaintKit_cu_poseidon_Tag" },
		{ 450, "#PaintKit_hy_zodiac1_Tag" },
		{ 451, "#PaintKit_hy_zodiac2_Tag" },
		{ 452, "#PaintKit_hy_zodiac3_Tag" },
		{ 453, "#PaintKit_an_emerald_bravo_Tag" },
		{ 454, "#PaintKit_so_khaki_green_Tag" },
		{ 455, "#PaintKit_cu_anime_aug_Tag" },
		{ 456, "#PaintKit_am_bamboo_jungle_Tag" },
		{ 457, "#PaintKit_hy_bamboo_jungle_ink_Tag" },
		{ 458, "#PaintKit_hy_bamboo_jungle_black_Tag" },
		{ 459, "#PaintKit_hy_bamboo_jungle_Tag" },
		{ 460, "#PaintKit_am_geometric_steps_Tag" },
		{ 462, "#PaintKit_hy_geometric_steps_green_Tag" },
		{ 463, "#PaintKit_hy_geometric_steps_yellow_Tag" },
		{ 464, "#PaintKit_hy_kimono_diamonds_Tag" },
		{ 465, "#PaintKit_hy_kimono_diamonds_orange_Tag" },
		{ 466, "#PaintKit_hy_kimono_diamonds_red_Tag" },
		{ 467, "#PaintKit_sp_kimono_diamonds_Tag" },
		{ 468, "#PaintKit_am_seastorm_Tag" },
		{ 469, "#PaintKit_am_seastorm_blood_Tag" },
		{ 470, "#PaintKit_am_seastorm_shojo_Tag" },
		{ 471, "#PaintKit_am_kimono_sunrise_Tag" },
		{ 472, "#PaintKit_am_so_keycolors_Tag" },
		{ 473, "#PaintKit_so_aqua_Tag" },
		{ 474, "#PaintKit_cu_ak47_courage_alt_Tag" },
		{ 475, "#PaintKit_cu_m4a1_hyper_beast_Tag" },
		{ 476, "#PaintKit_cu_cz75a_chastizer_Tag" },
		{ 477, "#PaintKit_am_famas_dots_Tag" },
		{ 478, "#PaintKit_cu_galilar_particles_Tag" },
		{ 479, "#PaintKit_aq_glock18_flames_blue_Tag" },
		{ 480, "#PaintKit_cu_m4a4_evil_daimyo_Tag" },
		{ 481, "#PaintKit_cu_mp7_nemsis_Tag" },
		{ 482, "#PaintKit_am_mp9_nitrogen_Tag" },
		{ 483, "#PaintKit_cu_negev_annihilator_Tag" },
		{ 484, "#PaintKit_cu_nova_ranger_Tag" },
		{ 485, "#PaintKit_aq_p2000_boom_Tag" },
		{ 486, "#PaintKit_cu_ak47_mastery_Tag" },
		{ 487, "#PaintKit_cu_cyrex_tag" },
		{ 488, "#PaintKit_cu_ump45_uproar_Tag" },
		{ 489, "#PaintKit_cu_usp_progressiv_Tag" },
		{ 490, "#PaintKit_cu_ak47_winter_sport_Tag" },
		{ 491, "#PaintKit_cu_dualberretta_dragons_Tag" },
		{ 492, "#PaintKit_cu_famas_lenta_Tag" },
		{ 493, "#PaintKit_gs_g3sg1_flux_purple_Tag" },
		{ 494, "#PaintKit_gs_galil_nightwing_Tag" },
		{ 495, "#PaintKit_gs_glock18_wrathys_Tag" },
		{ 496, "#PaintKit_gs_m249_nebula_crusader_Tag" },
		{ 497, "#PaintKit_gs_m4a1s_snakebite_gold_Tag" },
		{ 498, "#PaintKit_cu_mac10_alekhya_duo_Tag" },
		{ 499, "#PaintKit_cu_mag7_myrcene_Tag" },
		{ 500, "#PaintKit_cu_mp7_classified_Tag" },
		{ 501, "#PaintKit_hy_p250_crackshot_Tag" },
		{ 502, "#PaintKit_gs_scar20_peacemaker03_Tag" },
		{ 503, "#PaintKit_cu_ssg08_technicality_Tag" },
		{ 504, "#PaintKit_cu_usp_kill_confirmed_Tag" },
		{ 505, "#PaintKit_aq_xm1014_scumbria_Tag" },
		{ 506, "#PaintKit_cu_ak47_point_disarray_Tag" },
		{ 507, "#PaintKit_am_aug_jumble_Tag" },
		{ 508, "#PaintKit_cu_bizon_noxious_Tag" },
		{ 509, "#PaintKit_aq_deagle_corinthian_Tag" },
		{ 510, "#PaintKit_cu_fiveseven_retrobution_Tag" },
		{ 511, "#PaintKit_cu_g3sg1_executioner_Tag" },
		{ 512, "#PaintKit_gs_m4a4_royal_squire_Tag" },
		{ 514, "#PaintKit_cu_negev_impact_Tag" },
		{ 515, "#PaintKit_am_p2000_imperial_red_Tag" },
		{ 516, "#PaintKit_cu_p90_shapewood_Tag" },
		{ 517, "#PaintKit_gs_sawedoff_necromancer_Tag" },
		{ 518, "#PaintKit_hy_scar20_jungler_Tag" },
		{ 519, "#PaintKit_gs_sg553_tiger_moth_Tag" },
		{ 520, "#PaintKit_cu_tec9_avalanche_Tag" },
		{ 521, "#PaintKit_aq_xm1014_hot_rod_Tag" },
		{ 522, "#PaintKit_aa_fade_Tag" },
		{ 523, "#PaintKit_aa_fade_metallic_Tag" },
		{ 524, "#PaintKit_gs_ak47_supercharged_Tag" },
		{ 525, "#PaintKit_cu_ak47_mastery_Tag" },
		{ 526, "#PaintKit_cu_bizon_citizen_Tag" },
		{ 527, "#PaintKit_aq_deserteagle_kumichodragon_Tag" },
		{ 528, "#PaintKit_aq_p250_cartel_Tag" },
		{ 529, "#PaintKit_aq_p250_contour_Tag" },
		{ 530, "#PaintKit_cu_fiveseven_augmented_Tag" },
		{ 532, "#PaintKit_gs_glock18_award_Tag" },
		{ 533, "#PaintKit_gs_m4a4_pioneer_Tag" },
		{ 534, "#PaintKit_am_mac10_electricity_Tag" },
		{ 535, "#PaintKit_gs_mag7_praetorian_Tag" },
		{ 536, "#PaintKit_sp_mp7_impire_Tag" },
		{ 537, "#PaintKit_cu_m4a1_hyper_beast_Tag" },
		{ 538, "#PaintKit_cu_ssg08_necropos_Tag" },
		{ 539, "#PaintKit_gs_tec9_jambiya_Tag" },
		{ 540, "#PaintKit_gs_usp_voltage_Tag" },
		{ 541, "#PaintKit_cu_aug_swallows_Tag" },
		{ 542, "#PaintKit_cu_bizon_Curse_Tag" },
		{ 543, "#PaintKit_gs_cz75a_redastor_Tag" },
		{ 544, "#PaintKit_gs_dualberettas_ventilators_Tag" },
		{ 545, "#PaintKit_sp_g3sg1_militiaorange_Tag" },
		{ 546, "#PaintKit_gs_galilar_incenerator_Tag" },
		{ 547, "#PaintKit_cu_m249_spectre_Tag" },
		{ 548, "#PaintKit_cu_m4a1s_soultaker_Tag" },
		{ 549, "#PaintKit_am_mp9_bioleak_Tag" },
		{ 550, "#PaintKit_hy_p2000_oceani_Tag" },
		{ 551, "#PaintKit_cu_p250_asiimov_Tag" },
		{ 552, "#PaintKit_gs_sawedoff_fubar_Tag" },
		{ 553, "#PaintKit_cu_sg553_atlas_Tag" },
		{ 554, "#PaintKit_gs_ssg08_armacore_Tag" },
		{ 555, "#PaintKit_am_tec9_redblast_Tag" },
		{ 556, "#PaintKit_cu_ump45_primalsaber_Tag" },
		{ 557, "#PaintKit_cu_xm1014_spectrum_Tag" },
		{ 558, "#Paintkit_cu_lore_Tag" },
		{ 559, "#Paintkit_cu_lore_Tag" },
		{ 560, "#Paintkit_cu_lore_Tag" },
		{ 561, "#Paintkit_cu_lore_Tag" },
		{ 562, "#Paintkit_cu_lore_Tag" },
		{ 563, "#Paintkit_cu_stonewash_Tag" },
		{ 564, "#Paintkit_cu_stonewash_Tag" },
		{ 565, "#Paintkit_cu_stonewash_Tag" },
		{ 566, "#Paintkit_cu_stonewash_Tag" },
		{ 567, "#Paintkit_cu_stonewash_Tag" },
		{ 568, "#PaintKit_am_marbleized_g_Tag" },
		{ 569, "#PaintKit_am_marbleized_g_Tag" },
		{ 570, "#PaintKit_am_marbleized_g_Tag" },
		{ 571, "#PaintKit_am_marbleized_g_Tag" },
		{ 572, "#PaintKit_am_marbleized_g_Tag" },
		{ 573, "#PaintKit_gs_autotronic_Tag" },
		{ 574, "#PaintKit_gs_autotronic_Tag" },
		{ 575, "#PaintKit_gs_autotronic_Tag" },
		{ 576, "#PaintKit_gs_autotronic_Tag" },
		{ 577, "#PaintKit_gs_autotronic_Tag" },
		{ 578, "#PaintKit_hy_ocean_Tag" },
		{ 579, "#PaintKit_hy_ocean_Tag" },
		{ 580, "#PaintKit_am_marked_up_Tag" },
		{ 581, "#PaintKit_am_marked_up_Tag" },
		{ 582, "#PaintKit_am_marked_up_Tag" },
		{ 583, "#PaintKit_gs_aug_aristocrat_Tag" },
		{ 584, "#PaintKit_gs_awp_phobos_Tag" },
		{ 585, "#PaintKit_cu_five_seven_daimyo_Tag" },
		{ 586, "#PaintKit_cu_glock_wasteland_rebel_Tag" },
		{ 587, "#PaintKit_gs_m4a1_mecha_industries_Tag" },
		{ 588, "#PaintKit_cu_m4a4_desolate_space_Tag" },
		{ 589, "#PaintKit_aq_mac_10_alien_camo_Tag" },
		{ 590, "#PaintKit_aq_nova_sci_fi_Tag" },
		{ 591, "#PaintKit_gs_p2000_imperial_dragon_Tag" },
		{ 592, "#PaintKit_gs_p250_metal_panels_Tag" },
		{ 593, "#PaintKit_gs_p90_full_throttle_Tag" },
		{ 594, "#PaintKit_gs_pp_bizon_harvester_Tag" },
		{ 595, "#PaintKit_cu_r8_cybersport_Tag" },
		{ 596, "#PaintKit_cu_sawed_off_lime_Tag" },
		{ 597, "#PaintKit_gs_scar20_bloodsport_Tag" },
		{ 598, "#PaintKit_cu_sg553_aerial_Tag" },
		{ 599, "#PaintKit_am_tec_9_sea_salt_Tag" },
		{ 600, "#PaintKit_cu_AK47_Anarchy_Tag" },
		{ 601, "#PaintKit_gs_AUG_Syd_Mead_Tag" },
		{ 602, "#PaintKit_gs_CZ75_Tread_Tag" },
		{ 603, "#PaintKit_aq_Desert_Eagle_Constable_Tag" },
		{ 604, "#PaintKit_gs_FAMAS_Rally_Tag" },
		{ 605, "#PaintKit_aq_Five_Seven_Scumbria_Tag" },
		{ 606, "#PaintKit_gs_G3SG1_Ventilator_Tag" },
		{ 607, "#PaintKit_cu_Glock18_Weasel_Tag" },
		{ 608, "#PaintKit_cu_MAG7_Tribal_Tag" },
		{ 609, "#PaintKit_cu_MP9_Narcis_Tag" },
		{ 610, "#PaintKit_hy_Negev_Dazzle_Tag" },
		{ 611, "#PaintKit_cu_P90_Grimm_Tag" },
		{ 612, "#PaintKit_gs_SCAR20_Powercore_Tag" },
		{ 613, "#PaintKit_cu_SG556_Triarch_Tag" },
		{ 614, "#PaintKit_gs_TEC9_Supercharged_Tag" },
		{ 615, "#PaintKit_cu_UMP45_Metritera_Tag" },
		{ 616, "#PaintKit_hy_XM1014_Fractal_Blue_Tag" },
		{ 622, "#PaintKit_am_czv2_mf_Tag" },
		{ 623, "#PaintKit_aq_glock_dark-fall_Tag" },
		{ 624, "#PaintKit_cu_ssg08_dragonfire_scope_Tag" },
		{ 625, "#PaintKit_gs_dual_berettas_golden_venice_Tag" },
		{ 626, "#PaintKit_gs_famas_mecha_Tag" },
		{ 627, "#PaintKit_gs_final_pooldeadv2_Tag" },
		{ 628, "#PaintKit_gs_g3sg1_viper_yellow_Tag" },
		{ 629, "#PaintKit_cu_galil_ar-camo_Tag" },
		{ 630, "#PaintKit_aa_hide-mp9_Tag" },
		{ 631, "#PaintKit_cu_m4a1_flashback_Tag" },
		{ 632, "#PaintKit_gs_m4a4_sector_Tag" },
		{ 633, "#PaintKit_am_mag7_malform_Tag" },
		{ 634, "#PaintKit_am_nova_sand_Tag" },
		{ 635, "#PaintKit_gs_p2000-sport_Tag" },
		{ 636, "#PaintKit_gs_p90_shallow_grave_Tag" },
		{ 637, "#PaintKit_cu_usp_cyrex_Tag" },
		{ 638, "#PaintKit_cu_wp_sawedoff_Tag" },
};

std::vector<std::pair<int, const char*>> glove_skins = {
		{ 10006, "#PaintKit_bloodhound_black_silver_tag" },
		{ 10007, "#PaintKit_bloodhound_snakeskin_brass_tag" },
		{ 10008, "#PaintKit_bloodhound_metallic_tag" },
		{ 10009, "#PaintKit_handwrap_leathery_tag" },
		{ 10010, "#PaintKit_handwrap_camo_grey_tag" },
		{ 10013, "#PaintKit_slick_black_tag" },
		{ 10015, "#PaintKit_slick_military_tag" },
		{ 10016, "#PaintKit_slick_red_tag" },
		{ 10018, "#PaintKit_sporty_light_blue_tag" },
		{ 10019, "#PaintKit_sporty_military_tag" },
		{ 10021, "#PaintKit_handwrap_red_slaughter_tag" },
		{ 10024, "#PaintKit_motorcycle_basic_black_tag" },
		{ 10026, "#PaintKit_motorcycle_mint_triangle_tag" },
		{ 10027, "#PaintKit_motorcycle_mono_boom_tag" },
		{ 10028, "#PaintKit_motorcycle_triangle_blue_tag" },
		{ 10030, "#PaintKit_specialist_ddpat_green_camo_tag" },
		{ 10033, "#PaintKit_specialist_kimono_diamonds_red_tag" },
		{ 10034, "#PaintKit_specialist_emerald_web_tag" },
		{ 10035, "#PaintKit_specialist_white_orange_grey_tag" },
		{ 10036, "#PaintKit_handwrap_fabric_orange_camo_tag" },
		{ 10037, "#PaintKit_sporty_purple_tag" },
		{ 10038, "#PaintKit_sporty_green_tag" },
		{ 10039, "#PaintKit_bloodhound_guerrilla_tag" },
		{ 10040, "#PaintKit_slick_snakeskin_yellow_tag" },
};

std::vector<std::pair<int, const char*>> gloves {
		{ (int) ItemDefinitionIndex::GLOVE_STUDDED_BLOODHOUND, "#CSGO_Wearable_t_studdedgloves"},
		{ (int) ItemDefinitionIndex::GLOVE_SPORTY, "#CSGO_Wearable_v_sporty_glove"},
		{ (int) ItemDefinitionIndex::GLOVE_SLICK, "#CSGO_Wearable_v_slick_glove"},
		{ (int) ItemDefinitionIndex::GLOVE_LEATHER_WRAP, "#CSGO_Wearable_v_leather_handwrap"},
		{ (int) ItemDefinitionIndex::GLOVE_MOTORCYCLE, "#CSGO_Wearable_v_motorcycle_glove"},
		{ (int) ItemDefinitionIndex::GLOVE_SPECIALIST, "#CSGO_Wearable_v_specialist_glove"},
};

void LocalizeGuns()
{
	int index = -1;

	for (auto it : guns)
	{
		index++;

		if (it.first == (int) ItemDefinitionIndex::INVALID)
			continue;

		std::string localized = Util::WstringToString(localize->FindSafe(it.second));
		guns[index] = { it.first, strdup(localized.c_str()) };
	}
}

void LocalizeKnives()
{
	int index = -1;

	for (auto it : knives)
	{
		index++;

		if (it.first == -1)
			continue;

		std::string localized = Util::WstringToString(localize->FindSafe(it.second));
		knives[index] = { it.first, strdup(localized.c_str()) };
	}
}

void LocalizeSkins()
{
	int index = -1;

	for (auto it : weapon_skins)
	{
		index++;

		if (it.first == -1)
			continue;

		std::string localized = Util::WstringToString(localize->FindSafe(it.second));
		weapon_skins[index] = { it.first, strdup(localized.c_str()) };
	}

	std::sort(weapon_skins.begin(), weapon_skins.end(), [](auto &left, auto &right) {
		std::size_t leftIter = 0, rightIter = 0;
		std::size_t leftSize = strlen(left.second), rightSize = strlen(right.second);

		while (leftIter != leftSize && rightIter != rightSize)
		{
			if (left.second[leftIter] != right.second[rightIter])
				return left.second[leftIter] < right.second[rightIter];

			++leftIter;
			++rightIter;
		}

		return leftSize < rightSize;
	});
}

void LocalizeGloves()
{
	int index = -1;

	for (auto it : gloves)
	{
		index++;

		if (it.first == -1)
			continue;

		std::string localized = Util::WstringToString(localize->FindSafe(it.second));
		gloves[index] = { it.first, strdup(localized.c_str()) };
	}
}

void LocalizeGloveSkins()
{
	int index = -1;

	for (auto it : glove_skins)
	{
		index++;

		if (it.first == -1)
			continue;

		std::string localized = Util::WstringToString(localize->FindSafe(it.second));
		glove_skins[index] = { it.first, strdup(localized.c_str()) };
	}

	std::sort(glove_skins.begin(), glove_skins.end(), [](auto &left, auto &right) {
		std::size_t leftIter = 0, rightIter = 0;
		std::size_t leftSize = strlen(left.second), rightSize = strlen(right.second);

		while (leftIter != leftSize && rightIter != rightSize)
		{
			if (left.second[leftIter] != right.second[rightIter])
				return left.second[leftIter] < right.second[rightIter];

			++leftIter;
			++rightIter;
		}

		return leftSize < rightSize;
	});
}

void Skins::Localize()
{
	static bool isLocalized = false;
	if (isLocalized)
		return;

	if (guns.size() == 0 || knives.size() == 0 || weapon_skins.size() == 0)
		return;

	LocalizeGuns();
	LocalizeKnives();
	LocalizeSkins();
	LocalizeGloves();
	LocalizeGloveSkins();

	isLocalized = true;
}

AttribItem_t& Skins::GetSkinConfig(ItemDefinitionIndex itemDefinitionIndex)
{
	// Create a new item at the specified index if none exist.
	if (Settings::Skinchanger::skins.find(itemDefinitionIndex) == Settings::Skinchanger::skins.end())
		Settings::Skinchanger::skins[itemDefinitionIndex] = AttribItem_t();

	return Settings::Skinchanger::skins.at(itemDefinitionIndex);
}
