	class SoldierGB;
	class I_Soldier_base_F: SoldierGB
	{
		class EventHandlers;
	};
	class I_soldier_F: I_Soldier_base_F {};

	class I_MU_mercs_base_F : I_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "MU_MERCS_F";
		vehicleClass = "MU_MERCS_Infantry_I";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.4;
		minFireTime = 7;
		identityTypes[] = {"LanguageGRE_F", "Head_Greek", "NoGlasses"};
		class Eventhandlers : Eventhandlers
		{
			class MU_mercs_base
			{
				init="if (local (_this select 0)) then {[(_this select 0), [],[]] call BIS_fnc_unitHeadgear;};";
			};
		};
		headgearList[] =
		{
			"",1,
			"H_FakeHeadgear",1,
			"H_Bandanna_gry",1,
			"H_Bandanna_blu",1,
			"H_Bandanna_camo",1,
			"H_Bandanna_sand",1,
			"H_Bandanna_sgg",1,
			"H_Bandanna_cbr",1,
			"H_Bandanna_khk",1,
			"H_Bandanna_mcamo",1,
			"H_Booniehat_khk",1,
			"H_Booniehat_mcamo",1,
			"H_Booniehat_oli",1,
			"H_Booniehat_tan",1,
			"H_Booniehat_dgtl",1,
			"H_Cap_blk",1,
			"H_Cap_blu",1,
			"H_Cap_blk_CMMG",1,
			"H_Cap_grn",1,
			"H_Cap_oli",1,
			"H_Cap_red",1,
			"H_Cap_tan",1,
			"H_Cap_blk_Raven",1,
			"H_Cap_brn_SPECOPS",1,
			"H_HelmetB",1,
			"H_HelmetB_sand",1,
			"H_Helmet_Skate",1
		};
	};
	class I_MU_mercs_R1_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_mercs_R1;
		uniformClass = "U_MU_I_GuerillaGarment4";
		linkedItems[] = {"V_TacVest_camo", "H_HelmetB", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo", "H_HelmetB", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_TRG21_MRCO_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_TRG21_MRCO_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_R1_F);
	};
	class I_MU_mercs_TL1_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_mercs_TL1;
		icon = "iconManLeader";
		cost = 250000;
		camouflage = 1.4;
		uniformClass = "U_MU_I_GuerillaGarment5_olive";
		linkedItems[] = {"V_TacVest_blk", "H_MilCap_gry", "G_Bandanna_sport", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk", "H_MilCap_gry", "G_Bandanna_sport", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_SPAR_01_blk_hamr_MU", "hgun_P07_F", "binocular", "Throw", "Put"};
		respawnweapons[] = {"arifle_SPAR_01_blk_hamr_MU", "hgun_P07_F", "binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		headgearList[] =
		{
			"H_Watchcap_camo",1,
			"H_Watchcap_blk",1,
			"H_Watchcap_cbr",1,
			"H_Watchcap_khk",1,
			"H_MU_Watchcap_red",1,
			"H_MU_Watchcap_blue",1,
			"H_MilCap_dgtl",0.5,
			"H_MilCap_gry",1,
			"H_MU_MilCap_cbr",1,
			"H_MU_MilCap_blk",1
		};
		MU_PREVIEW(I_MU_mercs_TL1_F);
	};
	class I_MU_mercs_TL2_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_mercs_TL2;
		icon = "iconManLeader";
		cost = 250000;
		camouflage = 1.4;
		uniformClass = "U_MU_I_GuerillaGarment2";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Watchcap_blk", "G_Sport_Blackred", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Watchcap_blk", "G_Sport_Blackred", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_SPAR_01_blk_mrco_MU", "hgun_P07_F", "binocular", "Throw", "Put"};
		respawnweapons[] = {"arifle_SPAR_01_blk_mrco_MU", "hgun_P07_F", "binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		headgearList[] =
		{
			"H_Watchcap_camo",1,
			"H_Watchcap_blk",1,
			"H_Watchcap_cbr",1,
			"H_Watchcap_khk",1,
			"H_MU_Watchcap_red",1,
			"H_MU_Watchcap_blue",1,
			"H_MilCap_dgtl",0.5,
			"H_MilCap_gry",1,
			"H_MU_MilCap_cbr",1,
			"H_MU_MilCap_blk",1
		};
		MU_PREVIEW(I_MU_mercs_TL2_F);
	};
	class I_MU_mercs_GL1_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_mercs_GL1;
		role = "Grenadier";
		cost = 200000;
		uniformClass = "U_MU_I_GuerillaGarment5_skull";
		backpack = "B_MU_M_TacticalPack_blk_GL";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Bandanna_camo", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Bandanna_camo", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_TRG21_GL_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_TRG21_GL_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_GL1_F);
	};
	class I_MU_mercs_R2_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_mercs_R2;
		role = "Grenadier";
		cost = 200000;
		uniformClass = "U_IG_Guerilla2_3";
		linkedItems[] = {"V_MU_PlateCarrier_green", "G_Shades_Red", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_PlateCarrier_green", "G_Shades_Red", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_TRG21_ACO_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_TRG21_ACO_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_R2_F);
	};
	class I_MU_mercs_M_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		uniformClass = "U_IG_Guerrilla_6_1";
		linkedItems[] = {"V_MU_PlateCarrier_green", "H_Cap_blk_Raven", "G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_PlateCarrier_green", "H_Cap_blk_Raven", "G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_DMR_06_olive_KHSold_BI_MU_F", "hgun_P07_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"srifle_DMR_06_olive_KHSold_BI_MU_F", "hgun_P07_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_M_F);
	};
	class I_MU_mercs_AR_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		uniformClass = "U_MU_I_GuerillaGarment_grey";
		linkedItems[] = {"V_TacVest_brn", "H_HelmetB_sand", "G_Bandanna_aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_brn", "H_HelmetB_sand", "G_Bandanna_aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"LMG_Zafir_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"LMG_Zafir_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_AR_F);
	};
	class I_MU_mercs_medic_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		uniformClass = "U_MU_I_GuerillaGarment3_olive";
		backpack = "B_MU_M_Kitbag_rgr_medic";
		linkedItems[] = {"V_TacVest_oli", "H_Cap_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Cap_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"SMG_02_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"SMG_02_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_medic_F);
	};
	class I_MU_mercs_GL2_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_mercs_GL2;
		role = "Grenadier";
		cost = 200000;
		uniformClass = "U_MU_I_GuerillaGarment_skull";
		backpack = "B_MU_M_AssaultPack_cbr_GL";
		linkedItems[] = {"V_HarnessOGL_brn", "H_Helmet_Skate", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn", "H_Helmet_Skate", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20_GL_plain_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_GL2_F);
	};
	class I_MU_mercs_R3_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_mercs_R3;
		uniformClass = "U_IG_Guerilla2_2";
		linkedItems[] = {"V_TacVest_khk", "H_Cap_tan", "G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk", "H_Cap_tan", "G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_SPAR_01_blk_Holo_MU", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_SPAR_01_blk_Holo_MU", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_R3_F);
	};
	class I_MU_mercs_AT_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AT_F0";
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.5;
		secondaryAmmoCoef = 0.5;
		uniformClass = "U_I_C_Soldier_Para_4_F";
		backpack = "B_MU_M_AssaultPack_cbr_AT";
		linkedItems[] = {"V_Chestrig_khk", "H_Booniehat_oli", "G_Bandanna_beast", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk", "H_Booniehat_oli", "G_Bandanna_beast", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20_plain_Holo_MU_F", "launch_RPG32_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20_plain_Holo_MU_F", "launch_RPG32_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_AT_F);
	};
	class I_MU_mercs_AA_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AA_F0";
		cost = 130000;
		threat[] = {0.8,0.1,1.0};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		secondaryAmmoCoef = 0.5;
		uniformClass = "U_IG_Guerilla2_1";
		backpack = "B_MU_M_AssaultPack_rgr_AA";
		linkedItems[] = {"V_TacChestrig_grn_F", "H_Bandanna_surfer_blk", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", "H_Bandanna_surfer_blk", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_TRG20_F", "launch_B_Titan_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_TRG20_F", "launch_B_Titan_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_AA_F);
	};
	class I_MU_mercs_R4_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_mercs_R4;
		uniformClass = "U_MU_I_GuerillaGarment3_grey";
		linkedItems[] = {"V_HarnessO_gry", "H_Bandanna_sand", "G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_gry", "H_Bandanna_sand", "G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20_plain_ARCO_MU_F", "hgun_P07_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20_plain_ARCO_MU_F", "hgun_P07_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_R4_F);
	};
	class I_MU_mercs_sniper_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_sniper_F0";
		role = "Marksman";
		cost = 250000;
		threat[] = {0.8,0.3,0.3};
		camouflage = 1.2;
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
		uniformClass = "U_IG_Guerilla1_1";
		linkedItems[] = {"V_TacVest_camo", "H_Watchcap_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo", "H_Watchcap_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_GM6_LRPS_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"srifle_GM6_LRPS_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		headgearList[] =
		{
			"H_Watchcap_camo",1,
			"H_Watchcap_blk",1,
			"H_Watchcap_cbr",1,
			"H_Watchcap_khk",1
		};
		MU_PREVIEW(I_MU_mercs_sniper_F);
	};
	class I_MU_mercs_A_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		role = "Rifleman";
		camouflage = 1.5;
		uniformClass = "U_IG_Guerilla2_3";
		backpack = "B_MU_M_Carryall_oli_ammo";
		linkedItems[] = {"V_TacChestrig_oli_F", "H_Cap_blk", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F", "H_Cap_blk", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20C_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20C_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_A_F);
	};
	class I_MU_mercs_engineer_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_engineer_F0";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		camouflage = 1.6;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 31;
		uniformClass = "U_IG_Guerrilla_6_1";
		backpack = "B_MU_M_Kitbag_rgr_engineer";
		linkedItems[] = {"V_BandollierB_cbr", "H_Bandanna_blu", "G_Sport_Red", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr", "H_Bandanna_blu", "G_Sport_Red", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_TRG20_ACO_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_TRG20_ACO_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_mercs_engineer_F);
	};
	class I_MU_mercs_chef_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_officer_F0";
		icon = "iconManOfficer";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.6;
		uniformClass = "U_IG_Guerilla2_1";
		linkedItems[] = {"V_TacVest_camo", "H_MilCap_dgtl", "G_Aviator", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo", "H_MilCap_dgtl", "G_Aviator", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"SMG_05_F", "hgun_P07_F", "binocular", "Throw", "Put"};
		respawnweapons[] = {"SMG_05_F", "hgun_P07_F", "binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		headgearList[] =
		{
			"H_MilCap_dgtl",1,
			"H_MilCap_gry",0.3,
			"H_MU_MilCap_cbr",0.3,
			"H_MU_MilCap_blk",0.3
		};
		MU_PREVIEW(I_MU_mercs_chef_F);
	};
	class I_MU_mercs_helipilot_F : I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Helipilot_F0";
		role = "Crewman";
		camouflage = 2.0;
		cost = 93000;
		uniformClass = "U_IG_Guerrilla_6_1";
		linkedItems[] = {"V_BandollierB_rgr", "H_Cap_headphones", "G_Aviator", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "H_Cap_headphones", "G_Aviator", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"hgun_PDW2000_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"hgun_PDW2000_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellYellow", "SmokeShellPurple", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellYellow", "SmokeShellPurple", "Chemlight_yellow", "Chemlight_yellow"};
		headgearList[] =
		{
			"H_Cap_headphones",1
		};
		MU_PREVIEW(I_MU_mercs_helipilot_F);
	};