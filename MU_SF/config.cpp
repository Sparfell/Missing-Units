
class CfgPatches
{
	class MU_SF
	{
		units[] =
		{
			"B_MU_SF_TL_F", 
			"B_MU_SF_JTAC_F", 
			"B_MU_SF_medic_F", 
			"B_MU_SF_AR_F", 
			"B_MU_SF_M_F", 
			"B_MU_SF_engineer_F", 
			"B_MU_SF_AT_F",
			"B_MU_SF_sniper_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core", "A3_Characters_F","A3_Weapons_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = \MU\MU_SF\data\preview\##x##.jpg
class CfgVehicleClasses
{
	class MU_spefor_B
	{
		faction = BLU_F;
		displayName = $STR_MU_units_grp_SF;
	};
};
class CfgEditorSubcategories
{
	class MU_EdSubcat_Personnel_SF
	{
		displayName = $STR_MU_units_Edensubcat_SF;
	};
};

class CfgVehicles {
#include "BagsConfig.hpp"
#include "UnitsConfig.hpp"
};
#include "GroupsConfig.hpp"
