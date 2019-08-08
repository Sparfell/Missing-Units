
class CfgPatches
{
	class MU_LIV
	{
		units[] =
		{
			"O_MU_LIVP_soldier_r1",
			"O_MU_LIVP_soldier_ar",
			"O_MU_LIVP_soldier_medic",
			"O_MU_LIVP_soldier_tl",
			"O_MU_LIVP_soldier_m",
			"O_MU_LIVP_soldier_r2",
			"O_MU_LIVP_soldier_eng",
			"O_MU_LIVP_soldier_a",
			"O_MU_LIVP_soldier_gl",
			"O_MU_LIVP_soldier_at",
			"O_MU_LIVP_soldier_aa",
			"O_MU_LIVP_offroad",
			"O_MU_LIVP_offroad_armed",
			"O_MU_LIVP_offroad_repair",
			"O_MU_LIVP_RHIB",
			"O_MU_LIVP_boat",
			"O_MU_LIVP_jeep",
			"O_MU_LIVP_jeep_armed",
			"O_MU_LIVP_jeep_AT",
			"O_MU_LIVP_van",
			"O_MU_LIVP_van_transport",
			"O_MU_LIVP_truck",
			"O_MU_LIVP_truck_fuel",
			"O_MU_LIVP_mortar",
			"O_MU_LIVP_static_AT",
			"O_MU_LIVP_quad",
			"O_MU_LIVP_kamaz",
			"O_MU_LIVP_kamaz_covered",
			"O_MU_LIVP_kamaz_box",
			"O_MU_LIVP_kamaz_fuel"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core","MU_asset","A3_Characters_F","A3_Soft_F","A3_Static_F","A3_boat_F","A3_Supplies_F_Enoch_Bags","A3_Weapons_F_Ammoboxes"};
	};
};


class CfgFactionClasses
{
	class MU_LIVP_F
	{
		displayName = "$STR_MU_factionname_LIVP";
		author = "Sparfell";
		priority = 2;
		side = 0;
	};
};


class CfgVehicles
{
#define MU_PREVIEW(x) 	editorPreview = \MU\MU_LIV\data\preview\##x##.jpg;
#include "BagsConfig.hpp"
#include "UnitsConfig.hpp"
#include "VehicleConfig.hpp"
#undef MU_PREVIEW
};

#include "GroupsConfig.hpp"
