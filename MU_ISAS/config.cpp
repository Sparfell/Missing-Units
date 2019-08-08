class DefaultEventhandlers;

class CfgPatches
{
	class MU_islam
	{
		units[] =
		{
			"O_MU_islam_R1_F",
			"O_MU_islam_SL_F",
			"O_MU_islam_TL_F",
			"O_MU_islam_GL_F",
			"O_MU_islam_AR_F",
			"O_MU_islam_medic_F",
			"O_MU_islam_A_F",
			"O_MU_islam_AT_F",
			"O_MU_islam_HAT",
			"O_MU_islam_AA_F",
			"O_MU_islam_engineer_F",
			"O_MU_islam_R2_F",
			"O_MU_islam_R3_F",
			"O_MU_islam_M_F",
			"O_MU_islam_Offroad_01_armed_F",
			"O_MU_islam_Offroad_01_F",
			"O_MU_islam_Offroad_01_repair_F",
			"O_MU_islam_Van_01_F",
			"O_MU_IS_Quadbike_01_F",
			"O_MU_IS_Boat_Transport_01_F",
			"O_MU_IS_Mortar_01_F",
			"O_MU_IS_static_AT_F",
			"O_MU_IS_Jeep",
			"O_MU_IS_Jeep_MG",
			"O_MU_IS_Jeep_AT",
			"O_MU_IS_rhib",
			"Flag_MU_ISAS_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core","MU_asset","A3_Characters_F","A3_Weapons_F","A3_Soft_F","A3_Static_F","A3_boat_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = \MU\MU_ISAS\data\preview\##x##.jpg

class CfgFactionClasses
{
	class MU_islam_F
	{
		displayName = "$STR_MU_factionname_islam";
		author = "Sparfell";
		icon = "\MU\MU_ISAS\Data\isas_icon.paa";
		flag = "\MU\MU_ISAS\Data\MU_ISAS_flag.paa";
		priority = 2;
		side = 0;
	};
};

class CfgMarkers
{
	class flag_NATO;
	class flag_MU_ISAS : flag_NATO
	{
		name = "$STR_MU_ISAS_marker_flag";
		icon = "\MU\MU_ISAS\Data\MU_ISAS_flag_mark.paa";
		texture = "\MU\MU_ISAS\Data\MU_ISAS_flag_mark.paa";
	};
};

class CfgVehicleClasses
{
	class MU_islam_Infantry_O
	{
		faction = MU_islam_F;
		displayName = $STR_MU_units_grp_islam;
	};
};

class CfgVehicles {
#include "BagsConfig.hpp"
#include "UnitsConfig.hpp"
#include "VehicleConfig.hpp"
	class FlagCarrier;
	class Flag_MU_ISAS_F: FlagCarrier
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_MU_ISAS_flagpole";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\MU\MU_ISAS\Data\MU_ISAS_flag.paa'";
		};
		MU_PREVIEW(Flag_MU_ISAS_F);
	};
};

#include "GroupsConfig.hpp"
