
class CfgPatches {
	class MU_vehicles {
		units[] = 
		{
			"C_MU_man_helipilot_F",
			"C_MU_man_police_officer_F",
			"MU_CIV_Mohawk",
			"MU_CIV_Orca",
			"MU_AAF_Orca_unarmed",
			"MU_AAF_Orca",
			"MU_CIV_Zamak_transport_covered",
			"MU_CIV_Zamak_fuel",
			"MU_CIV_Zamak_repair",
			"MU_NATO_Strider",
			"MU_NATO_Strider_HMG",
			"MU_NATO_Strider_GMG",
			"MU_NATO_T_Strider",
			"MU_NATO_T_Strider_HMG",
			"MU_NATO_T_Strider_GMG",
			"MU_CIV_police_Offroad_01_F",
			"MU_NATO_Gorgon",
			"MU_NATO_T_Gorgon",
			"MU_NATO_Panther_unarmed",
			"MU_NATO_T_Panther_unarmed"
		};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"MU_core","A3_Air_F","A3_Air_F","A3_Soft_F","A3_Characters_F","A3_Weapons_F","A3_Armor_F_Gamma","A3_Armor_F_Beta"};
	};
	class MU_littlebird {
		units[] = 
		{
			"C_MU_man_helipilot_F",
			"MU_AAF_HummingBird",
			"MU_AAF_pawnee",
			"MU_CIV_HummingBird_blueline",
			"MU_CIV_HummingBird_elliptical",
			"MU_CIV_HummingBird_furious",
			"MU_CIV_HummingBird_graywatcher",
			"MU_CIV_HummingBird_jeans",
			"MU_CIV_HummingBird_shadow",
			"MU_CIV_HummingBird_sheriff",
			"MU_CIV_HummingBird_speedy",
			"MU_CIV_HummingBird_sunset",
			"MU_CIV_HummingBird_vrana",
			"MU_CIV_HummingBird_wasp",
			"MU_CIV_HummingBird_wave",
			"MU_CIV_HummingBird_blue",
			"MU_CIV_HummingBird_redviolet"
		};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"MU_core","A3_Air_F","A3_Air_F","A3_Soft_F","A3_Characters_F","A3_Weapons_F"};
	};
};

#define MU_PREVIEW(x) 	editorPreview = \MU\MU_VEHICLES\data\preview\##x##.jpg

#include "CfgVehicles.hpp"
