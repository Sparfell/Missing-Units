
class CfgPatches
{
	class MU_divers
	{
		units[] =
		{
			"B_MU_CDT_diver_TL_F", 
			"B_MU_CDT_diver_F", 
			"B_MU_CDT_diver_medic_F", 
			"B_MU_CDT_diver_exp_F", 
			"B_MU_CDT_diver_AR_F", 
			"B_MU_CDT_diver_M_F", 
			"B_MU_CDT_diver_A_F", 
			"O_MU_CDT_diver_TL_F", 
			"O_MU_CDT_diver_F", 
			"O_MU_CDT_diver_medic_F", 
			"O_MU_CDT_diver_exp_F", 
			"O_MU_CDT_diver_AR_F", 
			"O_MU_CDT_diver_M_F", 
			"O_MU_CDT_diver_A_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core", "A3_Characters_F","A3_Weapons_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = "\MU\MU_DIVERS\data\preview\##x##.jpg"
	
class CfgVehicleClasses
{
	class MU_C_Diver_B
	{
		faction = BLU_F;
		displayName = $STR_MU_units_grp_Diver;
	};
	class MU_C_Diver_O
	{
		faction = OPF_F;
		displayName = $STR_MU_units_grp_Diver;
	};
};
class CfgEditorSubcategories
{
	class MU_EdSubcat_Personnel_CombatDivers
	{
		displayName = $STR_MU_units_Edensubcat_CombatDivers;
	};
};
class CfgVehicles
{
	class B_FieldPack_blk;
	class B_MU_FieldPack_blk_medic : B_FieldPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_MU_FieldPack_blk_CDT_AB : B_FieldPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 6;
			};
			class _xx_100Rnd_65x39_caseless_black_mag
			{
				magazine = "100Rnd_65x39_caseless_black_mag";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_Chemlight_blue
			{
				magazine = "Chemlight_blue";
				count = 2;
			};
		};
	};
	class B_AssaultPack_blk;
	
	class B_MU_AssaultPack_blk_CDT_D : B_AssaultPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 6;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
		};
	};
	class B_MU_AssaultPack_blk_CDT_AR : B_AssaultPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_100Rnd_65x39_caseless_black_mag
			{
				magazine = "100Rnd_65x39_caseless_black_mag";
				count = 5;
			};
		};
	};
	class B_MU_AssaultPack_blk_CDT_EXP : B_AssaultPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 3;
			};
		};
	};
	class B_AssaultPack_rgr;
	class O_MU_AssaultPack_rgr_CDT_D : B_AssaultPack_rgr
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 6;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
		};
	};
	class O_MU_AssaultPack_rgr_CDT_AR : B_AssaultPack_rgr
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 2;
			};
			class _xx_150Rnd_762x54_Box_Tracer
			{
				magazine = "150Rnd_762x54_Box_Tracer";
				count = 1;
			};
		};
	};
	class O_MU_AssaultPack_rgr_CDT_EXP : B_AssaultPack_rgr
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 3;
			};
		};
	};
	class B_FieldPack_oli;
	class O_MU_FieldPack_oli_CDT_AB : B_FieldPack_oli
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 6;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_Chemlight_red
			{
				magazine = "Chemlight_red";
				count = 2;
			};
		};
	};
	class O_MU_FieldPack_oli_CDT_medic : B_FieldPack_oli
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_Soldier_diver_base_F;
	class B_MU_CDT_diver_base_F : B_Soldier_diver_base_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = BLU_F;
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.0;
		vehicleClass = "MU_C_Diver_B";
		editorSubcategory = "MU_EdSubcat_Personnel_CombatDivers";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		uniformClass = "U_B_Wetsuit";
		linkedItems[] = {"V_RebreatherB", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherB", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_F", "hgun_P07_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "hgun_P07_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "Chemlight_blue", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "Chemlight_blue", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue"};
	};
    class B_MU_CDT_diver_TL_F : B_MU_CDT_diver_base_F
	{ 
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		cost = 250000;
		linkedItems[] = {"V_RebreatherB", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS"};
		respawnLinkedItems[] = {"V_RebreatherB", "G_B_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS"};
		weapons[] = {"arifle_MXC_Black_F", "hgun_P07_snds_F", "Rangefinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "hgun_P07_snds_F", "Rangefinder", "Throw", "Put"};
		MU_PREVIEW(B_MU_CDT_diver_TL_F);
	};
    class B_MU_CDT_diver_F : B_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		backpack = "B_MU_AssaultPack_blk_CDT_D";
		MU_PREVIEW(B_MU_CDT_diver_F);
	};
    class B_MU_CDT_diver_medic_F : B_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		backpack = "B_MU_FieldPack_blk_medic";
		MU_PREVIEW(B_MU_CDT_diver_medic_F);
	};
    class B_MU_CDT_diver_exp_F : B_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_exp_F0";
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		cost = 93000;
		canDeactivateMines = 1;
		detectSkill = 38;
		backpack = "B_MU_AssaultPack_blk_CDT_EXP";
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "Chemlight_blue", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "Chemlight_blue", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue"};
		MU_PREVIEW(B_MU_CDT_diver_exp_F);
	};
    class B_MU_CDT_diver_AR_F : B_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		backpack = "B_MU_AssaultPack_blk_CDT_AR";
		weapons[] = {"arifle_MX_SW_Black_BI_MU_F", "hgun_P07_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_SW_Black_BI_MU_F", "hgun_P07_snds_F", "Throw", "Put"};
		magazines[] = {"100Rnd_65x39_caseless_black_mag", "Chemlight_blue", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue"};
		Respawnmagazines[] = {"100Rnd_65x39_caseless_black_mag", "Chemlight_blue", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue"};
		MU_PREVIEW(B_MU_CDT_diver_AR_F);
	};
    class B_MU_CDT_diver_M_F : B_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		weapons[] = {"arifle_MXM_Black_Hamr_BI_MU_F", "hgun_P07_snds_F", "Rangefinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXM_Black_Hamr_BI_MU_F", "hgun_P07_snds_F", "Rangefinder", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "Chemlight_blue", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "Chemlight_blue", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_65x39_caseless_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellBlue", "SmokeShellBlue", "Chemlight_blue", "Chemlight_blue", "Chemlight_blue"};
		MU_PREVIEW(B_MU_CDT_diver_M_F);
	};
    class B_MU_CDT_diver_A_F : B_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		backpack = "B_MU_FieldPack_blk_CDT_AB";
		MU_PREVIEW(B_MU_CDT_diver_A_F);
	};
//OPFOR
	class O_Soldier_diver_base_F;
    class O_MU_CDT_diver_base_F : O_Soldier_diver_base_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = OPF_F;
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.0;
		vehicleClass = "MU_C_Diver_O";
		editorSubcategory = "MU_EdSubcat_Personnel_CombatDivers";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		uniformClass = "U_O_Wetsuit";
		linkedItems[] = {"V_RebreatherIR", "G_O_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherIR", "G_O_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed", "Chemlight_red", "Chemlight_red", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed", "Chemlight_red", "Chemlight_red", "Chemlight_red", "Chemlight_red"};
	};
    class O_MU_CDT_diver_TL_F : O_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		cost = 250000;
		linkedItems[] = {"V_RebreatherIR", "G_O_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS"};
		respawnLinkedItems[] = {"V_RebreatherIR", "G_O_Diving", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "itemGPS"};
		weapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_snds_F", "Rangefinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_snds_F", "Rangefinder", "Throw", "Put"};
		MU_PREVIEW(O_MU_CDT_diver_TL_F);
	};
    class O_MU_CDT_diver_F : O_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		backpack = "O_MU_AssaultPack_rgr_CDT_D";
		MU_PREVIEW(O_MU_CDT_diver_F);
	};
    class O_MU_CDT_diver_medic_F : O_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		backpack = "O_MU_FieldPack_oli_CDT_medic";
		MU_PREVIEW(O_MU_CDT_diver_medic_F);
	};
    class O_MU_CDT_diver_exp_F : O_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_exp_F0";
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		cost = 93000;
		canDeactivateMines = 1;
		detectSkill = 38;
		backpack = "O_MU_AssaultPack_rgr_CDT_EXP";
		magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed", "Chemlight_red", "Chemlight_red", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed", "Chemlight_red", "Chemlight_red", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_CDT_diver_exp_F);
	};
    class O_MU_CDT_diver_AR_F : O_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		backpack = "O_MU_AssaultPack_rgr_CDT_AR";
		weapons[] = {"LMG_Zafir_F", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"LMG_Zafir_F", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"150Rnd_762x54_Box", "150Rnd_762x54_Box_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed", "Chemlight_red", "Chemlight_red", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"150Rnd_762x54_Box", "150Rnd_762x54_Box_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed", "Chemlight_red", "Chemlight_red", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_CDT_diver_AR_F);
	};
    class O_MU_CDT_diver_M_F : O_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		weapons[] = {"srifle_DMR_01_DMS_BI_F", "hgun_Rook40_snds_F", "Rangefinder", "Throw", "Put"};
		respawnweapons[] = {"srifle_DMR_01_DMS_BI_F", "hgun_Rook40_snds_F", "Rangefinder", "Throw", "Put"};
		magazines[] = {"10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed", "Chemlight_red", "Chemlight_red", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShellRed", "SmokeShellRed", "Chemlight_red", "Chemlight_red", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_CDT_diver_M_F);
	};
    class O_MU_CDT_diver_A_F : O_MU_CDT_diver_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		backpack = "O_MU_FieldPack_oli_CDT_AB";
		MU_PREVIEW(O_MU_CDT_diver_A_F);
	};
};