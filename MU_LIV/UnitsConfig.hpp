	class SoldierWB;
	class B_Soldier_base_F: SoldierWB
	{
		class EventHandlers;
	};
	class O_MU_LIVP_soldier_base : B_Soldier_base_F
	{
		scope = 1;
		scopeArsenal = 0;
		author = "Sparfell";
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_LIVP_F";
		identityTypes[] = {"LanguagePOL_F","Head_Enoch","NoGlasses"};
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
		class Eventhandlers : Eventhandlers
		{
			class MU_LIVP_base
			{
				init="if (local (_this select 0)) then {[(_this select 0), [],[]] call BIS_fnc_unitHeadgear;};";
			};
		};
		headgearList[] =
		{
			"",1,
			"H_Booniehat_mgrn",1,
			"H_Booniehat_khk",1,
			"H_Booniehat_oli",1,
			"H_Booniehat_taiga",1,
			"H_Cap_blk",1,
			"H_Cap_grn",1,
			"H_Cap_oli",1,
			"H_HeadBandage_stained_F",0.3,
			"H_Bandanna_gry",1,
			"H_Bandanna_cbr",1,
			"H_Bandanna_khk",1,
			"H_Bandanna_sgg",1
		};
	};
	class O_MU_LIVP_soldier_r1: O_MU_LIVP_soldier_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		MU_PREVIEW(O_MU_LIVP_soldier_r1)
		uniformClass = "U_MU_O_GuerillaGarment8_brown";
		linkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_mgrn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","H_Booniehat_mgrn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_ar: O_MU_LIVP_soldier_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		MU_PREVIEW(O_MU_LIVP_soldier_ar)
		uniformClass = "U_MU_O_GuerillaGarment8_green";
		backpack = "B_MU_LIVP_FieldPack_green_AR";
		linkedItems[] = {"V_Pocketed_black_F","H_Bandanna_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_Pocketed_black_F","H_Bandanna_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_RPK12_F","Throw","Put"};
		respawnWeapons[] = {"arifle_RPK12_F","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Mag_F","HandGrenade","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","HandGrenade"};
		respawnMagazines[] = {"75rnd_762x39_AK12_Mag_F","HandGrenade","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","HandGrenade"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_medic: O_MU_LIVP_soldier_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		MU_PREVIEW(O_MU_LIVP_soldier_medic)
		uniformClass = "U_MU_O_GuerillaGarment8_tank";
		backpack = "B_MU_LIVP_Carryall_green_medic";
		linkedItems[] = {"V_TacVest_oli","H_Cap_grn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_Cap_grn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_tl: O_MU_LIVP_soldier_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		role = "Grenadier";
		cost = 250000;
		camouflage = 1.4;
		MU_PREVIEW(O_MU_LIVP_soldier_tl)
		uniformClass = "U_MU_O_GuerillaGarment8_olive";
		linkedItems[] = {"V_TacVest_camo","H_Cap_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_camo","H_Cap_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_AKS_F","hgun_Pistol_01_F","Binocular","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","hgun_Pistol_01_F","Binocular","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_Green_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","HandGrenade","HandGrenade"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_m: O_MU_LIVP_soldier_base
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
		MU_PREVIEW(O_MU_LIVP_soldier_m)
		uniformClass = "U_O_R_Gorka_01_F";
		linkedItems[] = {"V_TacVest_oli","G_Balaclava_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_oli","G_Balaclava_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"MU_srifle_DMR_06_hunter_KHS","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"MU_srifle_DMR_06_hunter_KHS","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_9x21_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_9x21_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		headgearList[] = {"",1};
	};
	class O_MU_LIVP_soldier_r2: O_MU_LIVP_soldier_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_MU_units_LIVP_R2";
		MU_PREVIEW(O_MU_LIVP_soldier_r2)
		uniformClass = "U_MU_O_GuerillaGarment7_olive";
		linkedItems[] = {"V_Pocketed_coyote_F","H_Booniehat_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_Pocketed_coyote_F","H_Booniehat_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
		respawnWeapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
		magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
		respawnMagazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_eng: O_MU_LIVP_soldier_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_engineer_F0";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		camouflage = 1.6;
		detectSkill = 31;
		engineer = 1;
		canDeactivateMines = 1;
		MU_PREVIEW(O_MU_LIVP_soldier_eng)
		uniformClass = "U_MU_O_GuerillaGarment3_tank_g";
		backpack = "B_MU_LIVP_Kitbag_rgr_ENG";
		linkedItems[] = {"V_MU_Chestrig_light_rgr","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_MU_Chestrig_light_rgr","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_a: O_MU_LIVP_soldier_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		role = "Rifleman";
		camouflage = 1.5;
		MU_PREVIEW(O_MU_LIVP_soldier_a)
		uniformClass = "U_MU_O_GuerillaGarment3_green";
		backpack = "B_MU_LIVP_Carryall_oli_A";
		linkedItems[] = {"V_MU_Chestrig_light_rgr","H_Bandanna_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_MU_Chestrig_light_rgr","H_Bandanna_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_AKS_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_Green_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_gl: O_MU_LIVP_soldier_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		role = "Grenadier";
		cost = 200000;
		MU_PREVIEW(O_MU_LIVP_soldier_gl)
		uniformClass = "U_MU_O_GuerillaGarment8_skull";
		backpack = "B_MU_LIVP_FieldPack_green_GL";
		linkedItems[] = {"V_TacChestrig_grn_F","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_AK12_GL_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12_GL_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_Green_F","1Rnd_HE_Grenade_shell","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_Green_F","1Rnd_HE_Grenade_shell","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_at: O_MU_LIVP_soldier_base
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
		MU_PREVIEW(O_MU_LIVP_soldier_at)
		uniformClass = "U_MU_O_GuerillaGarment7_green";
		backpack = "B_MU_LIVP_Carryall_green_AT";
		linkedItems[] = {"V_MU_Chestrig_light_blk","H_Booniehat_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_MU_Chestrig_light_blk","H_Booniehat_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_AKM_F","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","launch_RPG7_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_Green_F","RPG7_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_Green_F","RPG7_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class O_MU_LIVP_soldier_aa: O_MU_LIVP_soldier_base
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
		MU_PREVIEW(O_MU_LIVP_soldier_aa)
		uniformClass = "U_MU_O_GuerillaGarment3_olive";
		backpack = "B_MU_LIVP_Carryall_taiga_AA";
		linkedItems[] = {"V_TacChestrig_oli_F","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F","H_Bandanna_sgg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		weapons[] = {"arifle_AKS_F","launch_B_Titan_olive_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","launch_B_Titan_olive_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_Green_F","Titan_AA","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","Titan_AA","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
