	class B_Soldier_F;
	class B_MU_SF_base_F : B_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = BLU_F;
		vehicleClass = "MU_spefor_B";
		editorSubcategory = "MU_EdSubcat_Personnel_SF";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 0.6;
	};
	class B_MU_SF_TL_F : B_MU_SF_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		cost = 250000;
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Chestrig_blk", "H_Cap_usblack", "G_Shades_Black", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk", "H_Cap_usblack", "G_Shades_Black", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"};
		weapons[] = {"arifle_MXC_Black_MRCO_pointer_snds_MU_F", "hgun_Pistol_heavy_01_MRD_snds_MU_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_MRCO_pointer_snds_MU_F", "hgun_Pistol_heavy_01_MRD_snds_MU_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green"};
		MU_PREVIEW(B_MU_SF_TL_F);
	};
	class B_MU_SF_JTAC_F : B_MU_SF_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_SF_JTAC;
		cost = 200000;
		role = "SpecialOperative";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		uniformClass = "U_BG_Guerilla2_1";
		backpack = "B_MU_AssaultPack_blk_SF_JTAC";
		linkedItems[] = {"V_Chestrig_blk", "H_Booniehat_khk_hs", "G_Tactical_Clear", "ItemMap", "NVGoggles_OPFOR", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_blk", "H_Booniehat_khk_hs", "G_Tactical_Clear", "ItemMap", "NVGoggles_OPFOR", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"};
		weapons[] = {"arifle_MXC_Black_Holo_pointer_snds_MU_F", "hgun_Pistol_heavy_01_snds_F", "Laserdesignator", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_Holo_pointer_snds_MU_F", "hgun_Pistol_heavy_01_snds_F", "Laserdesignator", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "Laserbatteries", "HandGrenade", "SmokeShell", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "Laserbatteries", "HandGrenade", "SmokeShell", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green"};
		MU_PREVIEW(B_MU_SF_JTAC_F);
	};
	class B_MU_SF_medic_F : B_MU_SF_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		uniformClass = "U_BG_Guerilla2_3";
		backpack = "B_MU_Kitbag_rgr_SF_medic";
		linkedItems[] = {"V_BandollierB_rgr", "H_Cap_oli", "G_Sport_Blackred", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_rgr", "H_Cap_oli", "G_Sport_Blackred", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_Holo_pointer_snds_MU_F", "hgun_Pistol_heavy_01_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_Holo_pointer_snds_MU_F", "hgun_Pistol_heavy_01_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellOrange", "SmokeShellOrange", "Chemlight_green"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellOrange", "SmokeShellOrange", "Chemlight_green"};
		MU_PREVIEW(B_MU_SF_medic_F);
	};
	class B_MU_SF_AR_F : B_MU_SF_base_F
	{ 
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_MU_PlateCarrier1_blk", "G_Aviator", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_MU_PlateCarrier1_blk", "G_Aviator", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_SW_Black_MRCO_pointer_snds_BI_MU_F", "hgun_Pistol_heavy_01_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_SW_Black_MRCO_pointer_snds_BI_MU_F", "hgun_Pistol_heavy_01_snds_F", "Throw", "Put"};
		magazines[] = {"100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShellBlue"};
		Respawnmagazines[] = {"100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "100Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShellBlue"};
		MU_PREVIEW(B_MU_SF_AR_F);
	};
	class B_MU_SF_M_F : B_MU_SF_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		uniformClass = "U_B_CTRG_2";
		linkedItems[] = {"V_Chestrig_rgr", "H_Bandanna_khk_hs", "G_Shades_Green", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_rgr", "H_Bandanna_khk_hs", "G_Shades_Green", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_EBR_DMS_pointer_snds_F", "hgun_Pistol_heavy_01_MRD_snds_MU_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"srifle_EBR_DMS_pointer_snds_F", "hgun_Pistol_heavy_01_MRD_snds_MU_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "Chemlight_green"};
		Respawnmagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "Chemlight_green"};
		MU_PREVIEW(B_MU_SF_M_F);
	};
	class B_MU_SF_engineer_F : B_MU_SF_base_F
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
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		uniformClass = "U_BG_Guerilla2_3";
		backpack = "B_MU_TacticalPack_oli_SF_ing";
		linkedItems[] = {"V_TacVest_camo", "H_Watchcap_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo", "H_Watchcap_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MXC_Black_Holo_pointer_snds_MU_F", "hgun_Pistol_heavy_01_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MXC_Black_Holo_pointer_snds_MU_F", "hgun_Pistol_heavy_01_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellBlue"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellBlue"};
		MU_PREVIEW(B_MU_SF_engineer_F);
	};
	class B_MU_SF_AT_F : B_MU_SF_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_SF_AT;
		role = "Grenadier";
		icon = "iconManAT";
		cost = 200000;
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		backpack = "B_MU_AssaultPack_rgr_SF_AT";
		linkedItems[] = {"V_TacVest_oli", "H_Cap_blk", "G_Tactical_Black", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli", "H_Cap_blk", "G_Tactical_Black", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_MX_GL_Black_MRCO_pointer_snds_MU_F", "launch_NLAW_F", "hgun_Pistol_heavy_01_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_MX_GL_Black_MRCO_pointer_snds_MU_F", "launch_NLAW_F", "hgun_Pistol_heavy_01_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "NLAW_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "HandGrenade", "SmokeShell"};
		Respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "NLAW_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "HandGrenade", "SmokeShell"};
		MU_PREVIEW(B_MU_SF_AT_F);
	};
	class B_MU_SF_sniper_F : B_MU_SF_base_F
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
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		linkedItems[] = {"V_Chestrig_khk", "H_Watchcap_khk", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk", "H_Watchcap_khk", "NVGoggles_OPFOR", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_DMR_02_LRPS_pointer_snds_BI_MU_F", "hgun_Pistol_heavy_01_MRD_snds_MU_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"srifle_DMR_02_LRPS_pointer_snds_BI_MU_F", "hgun_Pistol_heavy_01_MRD_snds_MU_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "Chemlight_green"};
		Respawnmagazines[] = {"10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShellBlue", "Chemlight_green"};
		MU_PREVIEW(B_MU_SF_sniper_F);
	};