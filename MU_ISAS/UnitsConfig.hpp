	class O_Soldier_F;
	class O_MU_islam_base_F : O_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = MU_islam_F;
		vehicleClass = "MU_islam_Infantry_O";
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.4;
		minFireTime = 7;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
	};
	class O_MU_islam_R1_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_islam_R1;
		uniformClass = "U_MU_O_GuerillaGarment_grey";
		linkedItems[] = {"V_MU_Chestrig_light_khk", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_Chestrig_light_khk", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKM_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKM_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_islam_R1_F);
	};
	class O_MU_islam_SL_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		icon = "iconManLeader";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.4;
		identityTypes[] = {"LanguagePER_F", "Head_African"};
		uniformClass = "U_OG_leader";
		linkedItems[] = {"V_TacVest_brn", "H_ShemagOpen_khk", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_brn", "H_ShemagOpen_khk", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_islam_SL_F);
	};
	class O_MU_islam_TL_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.4;
		uniformClass = "U_MU_O_GuerillaGarment2_olive";
		linkedItems[] = {"V_TacChestrig_grn_F", "H_Cap_blk", "G_Bandanna_oli", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F", "H_Cap_blk", "G_Bandanna_oli", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_F", "hgun_Rook40_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_islam_TL_F);
	};
	class O_MU_islam_GL_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		role = "Grenadier";
		cost = 200000;
		uniformClass = "U_OG_Guerilla1_1";
		linkedItems[] = {"V_HarnessOGL_brn", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_GL_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_GL_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_islam_GL_F);
	};
	class O_MU_islam_AR_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		uniformClass = "U_MU_O_GuerillaGarment_skull";
		linkedItems[] = {"V_TacChestrig_cbr_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_cbr_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"LMG_03_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"LMG_03_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Minigrenade", "Minigrenade"};
		Respawnmagazines[] = {"200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Minigrenade", "Minigrenade"};
		MU_PREVIEW(O_MU_islam_AR_F);
	};
	class O_MU_islam_medic_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		uniformClass = "U_MU_O_GuerillaGarment2";
		backpack = "B_MU_IS_AssaultPack_rgr_medic";
		linkedItems[] = {"V_TacVest_camo", "H_Shemag_olive", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo", "H_Shemag_olive", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKS_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen"};
		Respawnmagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen"};
		MU_PREVIEW(O_MU_islam_medic_F);
	};
	class O_MU_islam_A_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		role = "Rifleman";
		uniformClass = "U_MU_O_GuerillaGarment_brown";
		backpack = "B_MU_IS_Carryall_cbr_A";
		linkedItems[] = {"V_BandollierB_rgr", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "H_ShemagOpen_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKM_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKM_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		Respawnmagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		MU_PREVIEW(O_MU_islam_A_F);
	};
	class O_MU_islam_AT_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_islam_AT;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.5;
		secondaryAmmoCoef = 0.5;
		uniformClass = "U_MU_O_GuerillaGarment5_brown";
		backpack = "B_MU_IS_AssaultPack_rgr_AT";
		linkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F", "H_ShemagOpen_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKM_F", "launch_RPG7_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKM_F", "launch_RPG7_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = { "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "RPG7_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		Respawnmagazines[] = { "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "RPG7_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		MU_PREVIEW(O_MU_islam_AT_F);
	};
	class O_MU_islam_HAT : O_MU_islam_AT_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_islam_HAT;
		uniformClass = "U_MU_O_GuerillaGarment3_olive";
		backpack = "B_MU_IS_Carryall_khk_HAT";
		linkedItems[] = {"V_MU_Chestrig_light_khk", "H_Bandanna_cbr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_Chestrig_light_khk", "H_Bandanna_cbr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKM_F", "launch_O_Vorona_brown_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKM_F", "launch_O_Vorona_brown_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = { "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "Vorona_HEAT", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		Respawnmagazines[] = { "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "Vorona_HEAT", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		MU_PREVIEW(O_MU_islam_HAT);
	};
	class O_MU_islam_AA_F : O_MU_islam_base_F
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
		uniformClass = "U_MU_O_GuerillaGarment_grey";
		backpack = "B_MU_IS_AssaultPack_dgtl_AA";
		linkedItems[] = {"V_MU_Chestrig_light_khk", "H_Bandanna_sand", "G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_Chestrig_light_khk", "H_Bandanna_sand", "G_Bandanna_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKM_F", "launch_B_Titan_olive_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKM_F", "launch_B_Titan_olive_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = { "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "Titan_AA", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		Respawnmagazines[] = { "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "Titan_AA", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		MU_PREVIEW(O_MU_islam_AA_F);
	};
	class O_MU_islam_engineer_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		identityTypes[] = {"LanguagePER_F", "Head_African"};
		displayName = "$STR_B_soldier_exp_F0";
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		cost = 93000;
		camouflage = 1.6;
		canDeactivateMines = 1;
		detectSkill = 38;
		engineer = 1;
		uniformClass = "U_MU_O_GuerillaGarment_tank";
		backpack = "B_MU_IS_TacticalPack_blk_engineer";
		linkedItems[] = {"V_MU_Chestrig_light_rgr", "H_ShemagOpen_khk", "G_Lowprofile", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_Chestrig_light_rgr", "H_ShemagOpen_khk", "G_Lowprofile", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKM_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKM_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_islam_engineer_F);
	};
	class O_MU_islam_R2_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_islam_R2;
		uniformClass = "U_MU_O_GuerillaGarment2_brown";
		linkedItems[] = {"V_TacVest_blk", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AK12_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AK12_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_islam_R2_F);
	};
	class O_MU_islam_R3_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_islam_R3;
		identityTypes[] = {"LanguagePER_F", "Head_African"};
		uniformClass = "U_MU_O_GuerillaGarment3_tank";
		linkedItems[] = {"V_TacChestrig_oli_F", "G_Bandanna_aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F", "G_Bandanna_aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_AKM_F", "hgun_Rook40_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_AKM_F", "hgun_Rook40_F", "Throw", "Put"};
		magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_islam_R3_F);
	};
	class O_MU_islam_M_F : O_MU_islam_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		uniformClass = "U_MU_O_GuerillaGarment3_green";
		linkedItems[] = {"V_BandollierB_cbr", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_DMR_06_olive_KHSold_BI_MU_F", "hgun_Rook40_F", "Throw", "RangeFinder", "Put"};
		respawnweapons[] = {"srifle_DMR_06_olive_KHSold_BI_MU_F", "hgun_Rook40_F", "Throw", "RangeFinder", "Put"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen"};
		Respawnmagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen"};
		MU_PREVIEW(O_MU_islam_M_F);
	};