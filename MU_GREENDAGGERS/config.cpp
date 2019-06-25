
class CfgPatches
{
	class MU_greendagers
	{
		units[] =
		{
			"I_MU_GrDa_R_F",
			"I_MU_GrDa_R_ADR_F",
			"I_MU_GrDa_Rtws_F", 
			"I_MU_GrDa_TL_F", 
			"I_MU_GrDa_GL_F", 
			"I_MU_GrDa_M_F", 
			"I_MU_GrDa_medic_F", 
			"I_MU_GrDa_A_F", 
			"I_MU_GrDa_AR_F", 
			"I_MU_GrDa_LAT_F",
			"I_MU_GrDa_AT",
			"I_MU_GrDa_engineer_F", 
			"I_MU_GrDa_sniper_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core", "MU_asset", "A3_Characters_F", "A3_Weapons_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = "\MU\MU_GREENDAGGERS\data\preview\##x##.jpg"

class CfgVehicleClasses
{
	class MU_GrDa_I
	{
		faction = IND_F;
		displayName = $STR_MU_units_grp_GrDa;
	};
};
class CfgEditorSubcategories
{
	class MU_EdSubcat_Personnel_GrDa
	{
		displayName = $STR_MU_units_Edensubcat_GrDa;
	};
};


class CfgVehicles
{
	#include "BagsConfig.hpp"		
	#include "UnitsConfig.hpp"
};
#include "GroupsConfig.hpp"
