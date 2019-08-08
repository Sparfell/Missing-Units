	class O_Soldier_F;
	class O_MU_RUSP_base_F : O_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		side = 0;
		Faction = "OPF_F";
		vehicleClass = "MU_RU_O";
		editorSubcategory = "MU_EdSubcat_Personnel_RU";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 0.6;
		nakedUniform = "U_BasicBody";
		uniformClass = "U_MU_O_CombatUniform_RUcamo";
	};
	class O_MU_RUSP_R_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		linkedItems[] = {"V_MU_HarnessO_blk", "H_MU_HelmetO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_HarnessO_blk", "H_MU_HelmetO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_R_F);
	};
	class O_MU_RUSP_RN_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_RUSP_RN;
		linkedItems[] = {"V_MU_HarnessO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_HarnessO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_Nstalker_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_Nstalker_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_RN_F);
	};
	class O_MU_RUSP_TL_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		cost = 250000;
		linkedItems[] = {"V_MU_HarnessO_blk", "G_Bandanna_blk", "H_Watchcap_blk", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_HarnessO_blk", "G_Bandanna_blk", "H_Watchcap_blk", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_ARCO_pointer_snds_MU", "RangeFinder", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_ARCO_pointer_snds_MU", "RangeFinder", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_TL_F);
	};
	class O_MU_RUSP_GL_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		role = "Grenadier";
		cost = 200000;
		linkedItems[] = {"V_MU_HarnessO_blk", "H_MU_HelmetO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_HarnessO_blk", "H_MU_HelmetO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_GL_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_GL_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareCIR_F", "UGL_FlareCIR_F", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareCIR_F", "UGL_FlareCIR_F", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_GL_F);
	};
	class O_MU_RUSP_medic_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		backpack = "B_MU_RUSP_TacticalPack_blk_medic";
		linkedItems[] = {"V_Chestrig_blk", "H_HelmetSpecO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk", "H_HelmetSpecO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_medic_F);
	};
	class O_MU_RUSP_engineer_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_engineer_F0";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 31;
		backpack = "B_MU_RUSP_TacticalPack_blk_eng";
		linkedItems[] = {"V_Chestrig_rgr", "H_Bandanna_khk_hs", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_rgr", "H_Bandanna_khk_hs", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F", "30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_engineer_F);
	};
	class O_MU_RUSP_sniper_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_sniper_F0";
		role = "Marksman";
		cost = 250000;
		threat[] = {0.8,0.3,0.3};
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
		linkedItems[] = {"V_MU_HarnessO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_HarnessO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_GM6_DMS_MU_F", "RangeFinder", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"srifle_GM6_DMS_MU_F", "RangeFinder", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellRed", "Chemlight_red"};
		Respawnmagazines[] = {"5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellRed", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_sniper_F);
	};
	class O_MU_RUSP_AT_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AT_F0";
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 0.8;
		backpack = "B_MU_RUSP_TacticalPack_blk_AT";
		linkedItems[] = {"V_Chestrig_rgr", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_rgr", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "launch_O_Vorona_green_F", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "launch_O_Vorona_green_F", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "Vorona_HEAT", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "Vorona_HEAT", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_AT_F);
	};
	class O_MU_RUSP_AR_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		linkedItems[] = {"V_MU_HarnessO_blk", "H_HelmetSpecO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_HarnessO_blk", "H_HelmetSpecO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_RPK12_ARCO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_RPK12_ARCO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "Chemlight_red"};
		Respawnmagazines[] = {"75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_AR_F);
	};
	class O_MU_RUSP_A_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		role = "Rifleman";
		backpack = "B_MU_RUSP_Carryall_blk_A";
		linkedItems[] = {"V_Chestrig_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_ACO_pointer_snds_MU", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_A_F);
	};
	class O_MU_RUSP_M_F : O_MU_RUSP_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		linkedItems[] = {"V_MU_HarnessO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_HarnessO_blk", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_DMR_04_Nstalker_pointer_BI_MU_F", "hgun_Rook40_snds_F", "Throw", "Put"};
		respawnweapons[] = {"srifle_DMR_04_Nstalker_pointer_BI_MU_F", "hgun_Rook40_snds_F", "Throw", "Put"};
		magazines[] = {"10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellRed", "Chemlight_red"};
		Respawnmagazines[] = {"10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "10Rnd_127x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellRed", "Chemlight_red"};
		MU_PREVIEW(O_MU_RUSP_M_F);
	};