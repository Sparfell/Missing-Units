	class B_Soldier_F;
    class B_MU_CTRG_base_F : B_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = BLU_F;
		vehicleClass = "MU_CTRG_B";
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.4;
		minFireTime = 7;
		canCarryBackPack = 1;
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		editorSubcategory = "MU_EdSubcat_Personnel_CTRG";
	};
    class B_MU_CTRG_R_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		uniformClass = "U_B_CTRG_1";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", "HandGrenade", "HandGrenade"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", "HandGrenade", "HandGrenade"};
		MU_PREVIEW(B_MU_CTRG_R_F);
	};
    class B_MU_CTRG_SL_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		icon = "iconManLeader";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.4;
		uniformClass = "U_B_CTRG_2";
		linkedItems[] = {"V_PlateCarrierH_CTRG", "H_Watchcap_cbr", "G_Tactical_Black", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG", "H_Watchcap_cbr", "G_Tactical_Black", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_RCO_pointer_MU_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_RCO_pointer_MU_F", "hgun_P07_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green", "B_IR_Grenade", "B_IR_Grenade", "HandGrenade", "HandGrenade"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green", "B_IR_Grenade", "B_IR_Grenade", "HandGrenade", "HandGrenade"};
		MU_PREVIEW(B_MU_CTRG_SL_F);
	};
    class B_MU_CTRG_TL_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		role = "Grenadier";
		cost = 250000;
		camouflage = 1.4;
		uniformClass = "U_B_CTRG_3";
		linkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_light_grass", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_light_grass", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "MiniGrenade", "MiniGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "MiniGrenade", "MiniGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_TL_F);
	};
    class B_MU_CTRG_lite_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_lite_F0";
		camouflage = 1.2;
		uniformClass = "U_B_CTRG_3";
		linkedItems[] = {"V_Chestrig_rgr", "H_Booniehat_khk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_rgr", "H_Booniehat_khk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_lite_F);
	};
    class B_MU_CTRG_GL_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		role = "Grenadier";
		cost = 200000;
		uniformClass = "U_B_CTRG_1";
		linkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_GL_Black_MRCO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_GL_Black_MRCO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "SmokeShell", "SmokeShellGreen", "MiniGrenade", "MiniGrenade", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "SmokeShell", "SmokeShellGreen", "MiniGrenade", "MiniGrenade", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_GL_F);
	};
    class B_MU_CTRG_AR_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		uniformClass = "U_B_CTRG_2";
		linkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_light_sand", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_light_sand", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_SW_Black_pointer_BI_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_SW_Black_pointer_BI_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_AR_F);
	};
    class B_MU_CTRG_M_Mk18_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_CTRG_M_mk18;
		role = "Marksman";
		cost = 250000;
		uniformClass = "U_B_CTRG_1";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_Bandanna_khk_hs", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_Bandanna_khk_hs", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_EBR_SOS_BI_MU_F", "hgun_P07_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"srifle_EBR_SOS_BI_MU_F", "hgun_P07_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_M_Mk18_F);
	};
    class B_MU_CTRG_M_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		uniformClass = "U_B_CTRG_3";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXM_Black_Hamr_pointer_BI_MU_F", "hgun_P07_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXM_Black_Hamr_pointer_BI_MU_F", "hgun_P07_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell","SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_M_F);
	};
    class B_MU_CTRG_LAT_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_LAT_F0";
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		uniformClass = "U_B_CTRG_2";
		backpack = "B_AssaultPack_rgr_LAT";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_grass", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_grass", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "launch_NLAW_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_LAT_F);
	};
    class B_MU_CTRG_medic_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		uniformClass = "U_B_CTRG_3";
		backpack = "B_AssaultPack_rgr_Medic";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_Watchcap_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_Watchcap_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_ACO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_ACO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_medic_F);
	};
    class B_MU_CTRG_officer_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_officer_F0";
		icon = "iconManOfficer";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.6;
		uniformClass = "U_B_CTRG_3";
		linkedItems[] = {"V_BandollierB_rgr", "H_Cap_khaki_specops_UK", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "H_Cap_khaki_specops_UK", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_F", "hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "hgun_Pistol_heavy_01_F", "Binocular", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_officer_F);
	};
    class B_MU_CTRG_A_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		role = "Rifleman";
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_1";
		backpack = "B_MU_Carryall_khk_CTRG_A";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_sand", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_sand", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_A_F);
	};
    class B_MU_CTRG_AAR_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_O_SOLDIERU_AAR_F0";
		role = "Assistant";
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_3";
		backpack = "B_MU_TacticalPack_blk_CTRG_AAR";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_grass", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_grass", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Rangefinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Rangefinder", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "B_IR_Grenade", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "B_IR_Grenade", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_AAR_F);
	};
    class B_MU_CTRG_repair_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_repair_F0";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		engineer = 1;
		detectSkill = 24;
		cost = 93000;
		camouflage = 1.6;
		uniformClass = "U_B_CTRG_3";
		backpack = "B_AssaultPack_rgr_Repair";
		linkedItems[] = {"V_Chestrig_rgr", "H_Booniehat_khk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_rgr", "H_Booniehat_khk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_Holo_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_Holo_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_repair_F);
	};
    class B_MU_CTRG_exp_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_exp_F0";
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		cost = 93000;
		camouflage = 1.6;
		canDeactivateMines = 1;
		detectSkill = 38;
		uniformClass = "U_B_CTRG_1";
		backpack = "B_Kitbag_rgr_Exp";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_Watchcap_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_Watchcap_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Holo_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_Holo_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_exp_F);
	};
    class B_MU_CTRG_AT_F : B_MU_CTRG_base_F
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
		uniformClass = "U_B_CTRG_2";
		backpack = "B_AssaultPack_mcamo_AT";
		linkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_light_sand", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG", "H_HelmetB_light_sand", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Holo_pointer_MU_F", "launch_B_Titan_short_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_Holo_pointer_MU_F", "launch_B_Titan_short_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_AT_F);
	};
    class B_MU_CTRG_AA_F : B_MU_CTRG_base_F
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
		uniformClass = "U_B_CTRG_2";
		backpack = "B_AssaultPack_mcamo_AA";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Holo_pointer_MU_F", "launch_B_Titan_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_Holo_pointer_MU_F", "launch_B_Titan_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_AA_F);
	};
    class B_MU_CTRG_engineer_F : B_MU_CTRG_base_F
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
		uniformClass = "U_B_CTRG_3";
		backpack = "B_MU_Kitbag_rgr_CTRG_ENG";
		linkedItems[] = {"V_PlateCarrierH_CTRG", "H_Cap_khaki_specops_UK", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG", "H_Cap_khaki_specops_UK", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_Holo_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_Holo_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_engineer_F);
	};
    class B_MU_CTRG_AAT_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AAT_F0";
		role = "Assistant";
		cost = 130000;
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_1";
		backpack = "B_MU_Carryall_khk_CTRG_AAT";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_desert", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_desert", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Rangefinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Rangefinder", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "B_IR_Grenade", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "B_IR_Grenade", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_AAT_F);
	};
    class B_MU_CTRG_AAA_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AAA_F0";
		role = "Assistant";
		cost = 220000;
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_1";
		backpack = "B_MU_Carryall_khk_CTRG_AAA";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Rangefinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Rangefinder", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "B_IR_Grenade", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "B_IR_Grenade", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_AAA_F);
	};
    class B_MU_CTRG_sniper_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_sniper_F0";
		role = "Marksman";
		cost = 250000;
		threat[] = {0.8,0.3,0.3};
		camouflage = 1.0;
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
		uniformClass = "U_B_CTRG_3";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_camo", "G_Bandanna_khk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_camo", "G_Bandanna_khk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_LRR_LRPS_MU_F", "RangeFinder", "hgun_P07_snds_F", "Throw", "Put"};
		respawnweapons[] = {"srifle_LRR_LRPS_MU_F", "RangeFinder", "hgun_P07_snds_F", "Throw", "Put"};
		magazines[] = {"7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_sniper_F);
	};
    class B_MU_CTRG_spotter_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_spotter_F0";
		role = "Marksman";
		cost = 250000;
		threat[] = {0.8,0.3,0.3};
		camouflage = 1.0;
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
		uniformClass = "U_B_CTRG_1";
		backpack = "B_MU_Kitbag_rgr_CTRG_spotter";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_camo", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_camo", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_RCO_pointer_MU_F", "Laserdesignator", "hgun_P07_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_RCO_pointer_MU_F", "Laserdesignator", "hgun_P07_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_spotter_F);
	};
	class B_MU_CTRG_UAVOP_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_B_SOLDIER_UAV_F0";
		role = "SpecialOperative";
		uavHacker = 1;
		uniformClass = "U_B_CTRG_3";
		backpack = "B_UAV_01_backpack_F";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "B_UavTerminal", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_snakeskin", "NVGoggles_OPFOR", "B_UavTerminal", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_ACO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_ACO_pointer_MU_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", "HandGrenade", "HandGrenade"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", "HandGrenade", "HandGrenade"};
		MU_PREVIEW(B_MU_CTRG_UAVOP_F);
	};
	class B_MU_CTRG_helipilot_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Helipilot_F0";
		role = "Crewman";
		camouflage = 2.0;
		cost = 93000;
		uniformClass = "U_B_HeliPilotCoveralls";
		linkedItems[] = {"V_TacVest_blk", "H_CrewHelmetHeli_B", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk", "H_CrewHelmetHeli_B", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_helipilot_F);
	};
	class B_MU_CTRG_MG_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgVehicles_B_HeavyGunner_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		uniformClass = "U_B_CTRG_2";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_desert", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_desert", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"MMG_02_black_RCO_BI_F", "hgun_P07_F", "Throw", "Put"};
		respawnweapons[] = {"MMG_02_black_RCO_BI_F", "hgun_P07_F", "Throw", "Put"};
		magazines[] = {"130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellGreen", "HandGrenade", "HandGrenade", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_MG_F);
	};
	class B_MU_CTRG_AMG_F : B_MU_CTRG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_CTRG_AMG;
		role = "Assistant";
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_3";
		backpack = "B_MU_TacticalPack_blk_AMG";
		linkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_grass", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG", "H_HelmetB_light_grass", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Rangefinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "hgun_P07_F", "Rangefinder", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "B_IR_Grenade", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "B_IR_Grenade", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		MU_PREVIEW(B_MU_CTRG_AMG_F);
	};