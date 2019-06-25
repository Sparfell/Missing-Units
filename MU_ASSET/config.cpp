
class CfgPatches {
	class MU_asset {
		units[] = {"B_MU_TacticalPack_cbr", "B_MU_Carryall_blk", "B_MU_Kitbag_blk", "B_MU_Kitbag_digi", "B_MU_soldier_sage_base", "B_MU_soldier_wdl_base", "C_MU_coverall_dirty2_base", "C_MU_coverall_black_base", "C_MU_coverall_urbancamo_base"};
		weapons[] = 
		{
			"H_MU_MilCap_cbr",
			"H_MU_MilCap_blk",
			"H_MU_Watchcap_blue",
			"H_MU_Watchcap_red",
			"H_MU_Beret_Colonel_eagle",
			"U_MU_B_soldier_sage",
			"U_MU_B_soldier_vest_sage",
			"U_MU_B_soldier_tshirt_sage",
			"U_MU_B_soldier_wdl",
			"U_MU_B_soldier_vest_wdl",
			"U_MU_B_soldier_tshirt_wdl",
			"U_MU_B_coverall_dirty2",
			"U_MU_B_coverall_black",
			"U_MU_B_coverall_urbancamo",
			"U_MU_B_coverall_grey",
			"U_MU_B_wetsuit_ru",
			"U_MU_B_GuerillaGarment_grey",
			"U_MU_B_GuerillaGarment_redcamo",
			"U_MU_B_GuerillaGarment_skull",
			"U_MU_B_GuerillaGarment_brown",
			"U_MU_B_GuerillaGarment_orange",
			"U_MU_B_GuerillaGarment_yellow",
			"U_MU_B_GuerillaGarment_blue",
			"B_MU_Protagonist_VR_nolight_base",
			"V_MU_PlateCarrier1_cbr",
			"V_MU_PlateCarrier1_blk",
			"V_MU_PlateCarrier1_khk",
			"V_MU_PlateCarrier2_cbr",
			"V_MU_PlateCarrier2_khk",
			"V_MU_Rebreather_rus"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core", "A3_Characters_F", "A3_Weapons_F"};
	};
};



class cfgWeapons
{
	#include "HeadgearsConfigs.hpp"
	#include "VestsConfigs.hpp"
	#include "UniformsConfigs.hpp"
	#include "WeaponsConfig.hpp"
};


class CfgVehicles
{
	#include "BagsConfigs.hpp"
	#include "UnitsConfigs.hpp"
};

