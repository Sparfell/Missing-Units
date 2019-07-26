
class DefaultEventhandlers;

class CfgPatches
{
	class MU_mercs
	{
		units[] =
		{
			"I_MU_mercs_R1_F",
			"I_MU_mercs_TL1_F", 
			"I_MU_mercs_TL2_F", 
			"I_MU_mercs_GL1_F", 
			"I_MU_mercs_R2_F", 
			"I_MU_mercs_M_F", 
			"I_MU_mercs_AR_F", 
			"I_MU_mercs_medic_F", 
			"I_MU_mercs_GL2_F", 
			"I_MU_mercs_R3_F", 
			"I_MU_mercs_AT_F", 
			"I_MU_mercs_AA_F", 
			"I_MU_mercs_R4_F", 
			"I_MU_mercs_sniper_F", 
			"I_MU_mercs_A_F", 
			"I_MU_mercs_engineer_F", 
			"I_MU_mercs_chef_F", 
			"I_MU_mercs_helipilot_F", 
			"MU_MERC_HummingBird", 
			"MU_MERC_Mohawk", 
			"I_MU_mercs_Offroad_01_F", 
			"I_MU_mercs_Offroad_01_armed_F", 
			"I_MU_mercs_Offroad_01_covered",
			"I_MU_mercs_Offroad_01_comms",
			"I_MU_mercs_Quadbike_01_F", 
			"I_MU_mercs_Offroad_01_repair_F",
			"O_MU_mercs_Boat_Transport_01_F",
			"O_MU_mercs_Mortar_01_F",
			"I_MU_mercs_Jeep",
			"I_MU_mercs_Jeep_MG",
			"I_MU_mercs_Jeep_AT",
			"I_MU_mercs_caesar",
			"I_MU_mercs_rhib",
			"Flag_MU_Mercs_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core", "A3_Characters_F","A3_Weapons_F","A3_Air_F","A3_Air_F_beta","A3_Soft_F","A3_Soft_F_Offroad_01", "A3_Static_F", "A3_boat_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = "\MU\MU_MERCS\data\preview\##x##.jpg"

class CfgFactionClasses
{
	class MU_MERCS_F
	{
		displayName = "$STR_MU_factionname_mercs";
		author = "Sparfell";
		icon = "\MU\MU_MERCS\Data\mercs_icon.paa";
		flag = "\MU\MU_MERCS\Data\MU_Mercs_flag.paa";
		priority = 2;
		side = 2;
	};
};

class CfgMarkers
{
	class flag_NATO;
	class flag_MU_Mercs : flag_NATO
	{
		name = "$STR_MU_Mercs_marker_flag";
		icon = "\MU\MU_MERCS\Data\MU_Mercs_flag_mark.paa";
		texture = "\MU\MU_MERCS\Data\MU_Mercs_flag_mark.paa";
	};
};

class CfgVehicleClasses
{
	class MU_MERCS_Infantry_I
	{
		faction = MU_MERCS_F;
		displayName = $STR_MU_units_grp_mercs;
	};
};

class CfgVehicles
{
	#include "BagsConfig.hpp"
	#include "UnitsConfig.hpp"
	#include "VehicleConfig.hpp"

	class FlagCarrier;
	class Flag_MU_Mercs_F: FlagCarrier
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_MU_Mercs_flagpole";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\MU\MU_MERCS\Data\MU_Mercs_flag.paa'";
		};
		MU_PREVIEW(Flag_MU_Mercs_F);
	};
};
#include "GroupsConfig.hpp"
