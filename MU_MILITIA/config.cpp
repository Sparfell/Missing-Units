
class CfgPatches
{
	class MU_MILITIA
	{
		units[] =
		{
			"O_MU_militia_R_F", 
			"O_MU_militia_Officer_F", 
			"O_MU_militia_SL_F", 
			"O_MU_militia_TL_F", 
			"O_MU_militia_GL_F", 
			"O_MU_militia_crew_F", 
			"O_MU_militia_MG_F", 
			"O_MU_militia_AR_F", 
			"O_MU_militia_medic_F", 
			"O_MU_militia_A_F", 
			"O_MU_militia_M_F", 
			"O_MU_militia_AT_F",
			"O_MU_militia_AT2",
			"O_MU_militia_HAT",
			"O_MU_militia_AA_F",
			"O_MU_militia_engineer_F",
			"O_MU_militia_sniper_F",
			"O_MU_militia_RL_F",
			"O_MU_militia_helipilot_F", 
			"O_MU_militia_MG2_F", 
			"O_MU_militia_AMG2_F",
			"O_MU_MIL_APC_Wheeled_02_rcws_F",
			"O_MU_MIL_APC_Wheeled_03_cannon",
			"O_MU_MIL_Truck_02_covered_F", 
			"O_MU_MIL_Truck_02_transport_F", 
			"O_MU_MIL_Truck_02_box_F", 
			"O_MU_MIL_Truck_02_medical_F", 
			"O_MU_MIL_Truck_02_Ammo_F", 
			"O_MU_MIL_Truck_02_fuel_F", 
			"O_MU_MIL_Heli_Light_02_unarmed_F", 
			"O_MU_MIL_Quadbike_01_F", 
			"O_MU_MIL_Boat_Transport_01_F", 
			"O_MU_MIL_Mortar_01_F", 
			"O_MU_MIL_HMG_01_F", 
			"O_MU_MIL_HMG_01_high_F", 
			"O_MU_MIL_Jeep",
			"O_MU_MIL_Jeep_MG",
			"O_MU_MIL_rhib",
			"O_MU_MIL_Van_02_vehicle",
			"O_MU_MIL_Van_02_transport",
			"Flag_MU_MILITIA_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core","MU_vehicles","A3_Characters_F","A3_Weapons_F","A3_Soft_F","A3_Static_F","A3_armor_F","A3_boat_F","A3_Air_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = "\MU\MU_MILITIA\data\preview\##x##.jpg"

class CfgMarkers
{
	class flag_NATO;
	class flag_MU_MILITIA : flag_NATO
	{
		name = "$STR_MU_MILITIA_marker_flag";
		icon = "\MU\MU_MILITIA\Data\MU_MILITIA_flag_mark.paa";
		texture = "\MU\MU_MILITIA\Data\MU_MILITIA_flag_mark.paa";
	};
};

class CfgFactionClasses
{
	class MU_MILITIA_F
	{
		displayName = "$STR_MU_factionname_militia";
		author = "Sparfell";
		icon = "\MU\MU_MILITIA\Data\militia_icon.paa";
		priority = 2;
		side = 0;
	};
};

class CfgVehicleClasses
{
	class MU_MILITIA_Infantry_O
	{
		faction = MU_MILITIA_F;
		displayName = $STR_MU_units_grp_militia;
	};
};


class CfgVehicles
{
#include "BagsConfig.hpp"
#include "UnitsConfig.hpp"
#include "VehicleConfig.hpp"
	class FlagCarrier;
	class Flag_MU_MILITIA_F: FlagCarrier
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_MU_MILITIA_flagpole";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\MU\MU_MILITIA\Data\MU_MILITIA_flag.paa'";
		};
		MU_PREVIEW(Flag_MU_MILITIA_F);
	};
};
#include "GroupsConfig.hpp"
