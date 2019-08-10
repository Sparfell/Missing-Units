
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
			"I_MU_mercs_Boat_Transport_01_F",
			"I_MU_mercs_rhib",
			"I_MU_mercs_HummingBird",
			"I_MU_mercs_MD500", 
			"I_MU_mercs_Mohawk",
			"I_MU_mercs_Orca",
			"I_MU_mercs_Offroad_01_F", 
			"I_MU_mercs_Offroad_01_armed_F", 
			"I_MU_mercs_Offroad_01_covered",
			"I_MU_mercs_Offroad_01_comms",
			"I_MU_mercs_Quadbike_01_F", 
			"I_MU_mercs_Offroad_01_repair_F",
			"I_MU_mercs_Jeep",
			"I_MU_mercs_Jeep_MG",
			"I_MU_mercs_caesar",
			"I_MU_mercs_SUV",
			"I_MU_mercs_truck",
			"I_MU_mercs_van",
			"I_MU_mercs_van_transport",
			"Flag_MU_Mercs_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core","MU_asset","A3_Characters_F","A3_Weapons_F","A3_Air_F","A3_Air_F_beta","A3_Soft_F","A3_Soft_F_Offroad_01","A3_Static_F","A3_boat_F","A3_Supplies_F_Enoch"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = \MU\MU_MERCS\data\preview\##x##.jpg

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

class CfgWeapons
{
	class Uniform_Base;
	class U_O_R_Gorka_01_brown_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_MU_I_Gorka_01_brown : U_O_R_Gorka_01_brown_F
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		class ItemInfo: ItemInfo
		{
			uniformClass = "I_MU_mercs_base_F";
		};
	};
	class U_Marshal: Uniform_Base
	{
		class ItemInfo;
	};
	class U_MU_I_Marshal : U_Marshal
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		class ItemInfo: ItemInfo
		{
			uniformClass = "I_MU_mercs_base_2_F";
		};
	};
};

class CfgVehicles
{
	#include "BagsConfig2.hpp"
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
	
	// legacy backpacks
	#include "BagsConfig.hpp"
};
#include "GroupsConfig.hpp"
