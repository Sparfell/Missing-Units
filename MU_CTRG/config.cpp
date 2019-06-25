
class CfgPatches
{
	class MU_CTRG
	{
		units[] =
		{
			"B_MU_CTRG_R_F",
			"B_MU_CTRG_SL_F", 
			"B_MU_CTRG_TL_F", 
			"B_MU_CTRG_lite_F", 
			"B_MU_CTRG_GL_F", 
			"B_MU_CTRG_AR_F", 
			"B_MU_CTRG_M_Mk18_F", 
			"B_MU_CTRG_M_F", 
			"B_MU_CTRG_LAT_F", 
			"B_MU_CTRG_medic_F", 
			"B_MU_CTRG_officer_F", 
			"B_MU_CTRG_A_F", 
			"B_MU_CTRG_AAR_F", 
			"B_MU_CTRG_repair_F", 
			"B_MU_CTRG_exp_F", 
			"B_MU_CTRG_AT_F", 
			"B_MU_CTRG_AA_F", 
			"B_MU_CTRG_engineer_F", 
			"B_MU_CTRG_AAT_F", 
			"B_MU_CTRG_AAA_F", 
			"B_MU_CTRG_sniper_F", 
			"B_MU_CTRG_spotter_F", 
			"B_MU_CTRG_UAVOP_F", 
			"B_MU_CTRG_helipilot_F", 
			"MU_CTRG_HummingBird", 
			"MU_CTRG_pawnee", 
			"MU_CTRG_speedboat",
			"B_MU_CTRG_MG_F", 
			"B_MU_CTRG_AMG_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core", "A3_Characters_F","A3_Weapons_F","A3_Air_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = \MU\MU_CTRG\data\preview\##x##.jpg
class CfgVehicleClasses
{
	class MU_CTRG_B
	{
		faction = BLU_F;
		displayName = $STR_MU_units_grp_CTRG_D;
	};
};
class CfgEditorSubcategories
{
	class MU_EdSubcat_Personnel_CTRG
	{
		displayName = $STR_MU_units_Edensubcat_CTRG;
	};
};

class CfgVehicles
{
#include "BagsConfig.hpp"
#include "UnitsConfig.hpp"
#include "VehicleConfig.hpp"
};

#include "GroupsConfig.hpp"