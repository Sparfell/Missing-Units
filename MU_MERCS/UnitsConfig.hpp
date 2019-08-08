
	class I_Soldier_F;
	class I_MU_mercs_base_F : I_Soldier_F
	{
		scope = 1;
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
		identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};
		uniformClass = "U_MU_I_Gorka_01_brown";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Khaki_Brown_CO.paa"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class I_MU_mercs_base_2_F : I_MU_mercs_base_F
	{
		vehicleClass = "MenRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		uniformClass = "U_MU_I_Marshal";
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_poloshirtpants_2_co.paa"};
	};
	class I_MU_mercs_R1_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		MU_PREVIEW(I_MU_mercs_R1_F);
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG21_Holo_flash","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG21_Holo_flash","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow"};
	};
	class I_MU_mercs_TL1_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		role = "Grenadier";
		cost = 250000;
		camouflage = 1.4;
		MU_PREVIEW(I_MU_mercs_TL1_F);
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetB_light","G_Balaclava_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetB_light","G_Balaclava_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG21_MRCO_flash","hgun_Rook40_F","Binocular","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG21_MRCO_flash","hgun_Rook40_F","Binocular","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","SmokeShellGreen"};
	};
	class I_MU_mercs_GL1_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		role = "Grenadier";
		cost = 200000;
		MU_PREVIEW(I_MU_mercs_GL1_F);
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG21_GL_MRCO_flash","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG21_GL_MRCO_flash","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","Chemlight_yellow","UGL_FlareRed_F","UGL_FlareRed_F","UGL_FlareRed_F","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareRed_F"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","Chemlight_yellow","UGL_FlareRed_F","UGL_FlareRed_F","UGL_FlareRed_F","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","UGL_FlareRed_F"};
	};
	class I_MU_mercs_M_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		MU_PREVIEW(I_MU_mercs_M_F);
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_srifle_DMR_05_blk_SOS_bipod","hgun_Rook40_F","Rangefinder","Throw","Put"};
		respawnWeapons[] = {"MU_srifle_DMR_05_blk_SOS_bipod","hgun_Rook40_F","Rangefinder","Throw","Put"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","Chemlight_yellow","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","Chemlight_yellow","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag"};
	};
	class I_MU_mercs_AR_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		MU_PREVIEW(I_MU_mercs_AR_F);
		backpack = "B_MU_M_AssaultPack_rgr_AR";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_LMG_Mk200_black_Holo_flash","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MU_LMG_Mk200_black_Holo_flash","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","200Rnd_65x39_cased_Box"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","200Rnd_65x39_cased_Box"};
	};
	class I_MU_mercs_medic_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		MU_PREVIEW(I_MU_mercs_medic_F);
		backpack = "B_MU_M_Kitbag_rgr_medic";
		linkedItems[] = {"V_TacVest_oli","H_Cap_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_Cap_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG20_ACO_flash","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG20_ACO_flash","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class I_MU_mercs_AT_F: I_MU_mercs_base_F
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
		MU_PREVIEW(I_MU_mercs_AT_F);
		backpack = "B_MU_M_Carryall_green_AT";
		linkedItems[] = {"V_TacVest_oli","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG20_ACO_flash","launch_MRAWS_green_rail_F","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG20_ACO_flash","launch_MRAWS_green_rail_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","MRAWS_HEAT_F","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","MRAWS_HEAT_F","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class I_MU_mercs_AA_F: I_MU_mercs_base_F
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
		MU_PREVIEW(I_MU_mercs_AA_F);
		backpack = "B_MU_M_Carryall_green_AA";
		linkedItems[] = {"V_TacVest_oli","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG20_ACO_flash","launch_B_Titan_olive_F","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG20_ACO_flash","launch_B_Titan_olive_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","Titan_AA","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","Titan_AA","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class I_MU_mercs_sniper_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_sniper_F0";
		role = "Marksman";
		cost = 250000;
		threat[] = {0.8,0.3,0.3};
		camouflage = 0.6;
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
		MU_PREVIEW(I_MU_mercs_sniper_F);
		backpack = "B_MU_M_AssaultPack_rgr_sniper";
		linkedItems[] = {"V_TacVest_oli","H_Watchcap_khk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_Watchcap_khk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_F","Rangefinder","Throw","Put"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_F","Rangefinder","Throw","Put"};
		magazines[] = {"5Rnd_127x108_Mag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag"};
	};
	class I_MU_mercs_A_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		role = "Rifleman";
		camouflage = 1.5;
		MU_PREVIEW(I_MU_mercs_A_F);
		backpack = "B_MU_M_TacticalPack_blk_A";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2","G_Balaclava_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG21_Holo_flash","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG21_Holo_flash","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow"};
	};
	class I_MU_mercs_engineer_F: I_MU_mercs_base_F
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
		MU_PREVIEW(I_MU_mercs_engineer_F);
		backpack = "B_MU_M_TacticalPack_blk_ENG";
		linkedItems[] = {"V_TacVest_oli","H_Watchcap_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_Watchcap_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG20_ACO_flash","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG20_ACO_flash","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class I_MU_mercs_chef_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_officer_F0";
		icon = "iconManOfficer";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.6;
		MU_PREVIEW(I_MU_mercs_chef_F);
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MilCap_grn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MilCap_grn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG20_ACO","hgun_Rook40_F","Binocular","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG20_ACO","hgun_Rook40_F","Binocular","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow"};
	};
	class I_MU_mercs_helipilot_F: I_MU_mercs_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Helipilot_F0";
		role = "Crewman";
		camouflage = 2.0;
		cost = 93000;
		MU_PREVIEW(I_MU_mercs_helipilot_F);
		uniformClass = "U_IG_Guerrilla_6_1";
		linkedItems[] = {"V_TacVest_oli","H_Cap_headphones","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_Cap_headphones","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG20_ACO","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG20_ACO","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","Chemlight_yellow","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","Chemlight_yellow","HandGrenade","SmokeShell","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	
	//SF
	class I_MU_mercs_R2_F: I_MU_mercs_base_2_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_MU_units_mercs_R2";
		role = "Rifleman";
		camouflage = 0.6;
		detectSkill = 18;
		MU_PREVIEW(I_MU_mercs_R2_F);
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_TRG20_Holo_flash_snds","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_TRG20_Holo_flash_snds","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class I_MU_mercs_R3_F: I_MU_mercs_base_2_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_MU_units_mercs_R3";
		role = "Rifleman";
		camouflage = 0.6;
		detectSkill = 18;
		MU_PREVIEW(I_MU_mercs_R3_F);
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_SPAR_01_blk_Holo_flash_snds","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_SPAR_01_blk_Holo_flash_snds","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class I_MU_mercs_R4_F: I_MU_mercs_base_2_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_MU_units_mercs_R4";
		role = "Rifleman";
		camouflage = 0.6;
		detectSkill = 18;
		MU_PREVIEW(I_MU_mercs_R4_F);
		backpack = "B_MU_M_Kitbag_rgr_A";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_SMG_03C_khaki_snds","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MU_SMG_03C_khaki_snds","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
	};
	class I_MU_mercs_TL2_F: I_MU_mercs_base_2_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		role = "Rifleman";
		cost = 250000;
		camouflage = 0.6;
		detectSkill = 18;
		MU_PREVIEW(I_MU_mercs_TL2_F);
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_MilCap_blk","G_Shades_Red","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_MilCap_blk","G_Shades_Red","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_SPAR_01_blk_MRCO_flash_snds","hgun_Rook40_F","Rangefinder","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_SPAR_01_blk_MRCO_flash_snds","hgun_Rook40_F","Rangefinder","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class I_MU_mercs_GL2_F: I_MU_mercs_base_2_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		role = "Grenadier";
		cost = 200000;
		camouflage = 0.6;
		detectSkill = 18;
		MU_PREVIEW(I_MU_mercs_GL2_F);
		backpack = "B_MU_M_AssaultPack_rgr_GL";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_MU_HelmetB_light2_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_arifle_SPAR_01_GL_blk_Holo_flash_snds","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MU_arifle_SPAR_01_GL_blk_Holo_flash_snds","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","Chemlight_yellow","HandGrenade","HandGrenade","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","SmokeShellYellow","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
