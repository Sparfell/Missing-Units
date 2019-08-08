
class CfgPatches
{
	class MU_RU
	{
		units[] =
		{
			"O_MU_RUSP_R_F", 
			"O_MU_RUSP_RN_F", 
			"O_MU_RUSP_TL_F", 
			"O_MU_RUSP_GL_F", 
			"O_MU_RUSP_medic_F", 
			"O_MU_RUSP_engineer_F", 
			"O_MU_RUSP_sniper_F", 
			"O_MU_RUSP_AT_F", 
			"O_MU_RUSP_AR_F", 
			"O_MU_RUSP_A_F",
			"O_MU_RUSP_M_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core","MU_asset","A3_Characters_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = \MU\MU_RU\data\preview\##x##.jpg

class CfgVehicleClasses
{
	class MU_RU_O
	{
		faction = OPF_F;
		displayName = $STR_MU_units_grp_RUSP;
	};
};
class CfgEditorSubcategories
{
	class MU_EdSubcat_Personnel_RU
	{
		displayName = $STR_MU_units_Edensubcat_RU;
	};
};

class CfgVehicles
{
#include "BagsConfig.hpp"
#include "UnitsConfig.hpp"
};
#include "GroupsConfig.hpp"
