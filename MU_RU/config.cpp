
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
		weapons[] = {"U_MU_O_CombatUniform_RUcamo"};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core", "A3_Characters_F", "A3_Weapons_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = "\MU\MU_RU\data\preview\##x##.jpg"

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

class cfgWeapons {
	class Uniform_Base;
	class UniformItem;
	class U_MU_O_CombatUniform_RUcamo : Uniform_Base {
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_uniform_RUSP_rucamo;
		picture = "\MU\MU_RU\Data\Mu_icon_u_oi_combatuniform_rucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "O_MU_RUSP_R_F";
			containerClass = "Supply40";
			mass = 30;
		};
	};
};

class CfgVehicles
{
#include "BagsConfig.hpp"
#include "UnitsConfig.hpp"
};
#include "GroupsConfig.hpp"
