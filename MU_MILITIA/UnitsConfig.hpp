	class O_Soldier_F;
	class O_MU_militia_base_F : O_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "MU_MILITIA_F";
		vehicleClass = "MU_MILITIA_Infantry_O";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.4;
		uniformClass = "U_OG_Guerrilla_6_1";
		identityTypes[] = {"LanguageGRE_F", "Head_Greek", "NoGlasses"};
	};
    class O_MU_militia_R_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		linkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_TRG21_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_R_F);
	};
	class O_MU_militia_Officer_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_officer_F0";
		icon = "iconManOfficer";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.6;
		linkedItems[] = {"V_TacVest_camo","H_Beret_blk","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio", "ItemGPS"};
		respawnLinkedItems[] = {"V_TacVest_camo","H_Beret_blk","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio", "ItemGPS"};
		weapons[] = {"SMG_02_ACO_F","hgun_Rook40_F", "Binocular", "Throw","Put"};
		respawnweapons[] = {"SMG_02_ACO_F","hgun_Rook40_F", "Binocular","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellOrange", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellOrange", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_Officer_F);
	};
	class O_MU_militia_SL_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		icon = "iconManLeader";
		role = "Rifleman";
		cost = 250000;
		camouflage = 1.4;
		linkedItems[] = {"V_TacVest_camo","H_Cap_oli_hs","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_TacVest_camo","H_Cap_oli_hs","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"arifle_TRG21_MRCO_F","hgun_Rook40_F", "RangeFinder", "Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_MRCO_F","hgun_Rook40_F", "RangeFinder", "Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_SL_F);
	};
	class O_MU_militia_TL_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		role = "Grenadier";
		cost = 250000;
		camouflage = 1.4;
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetB_grass","G_Bandanna_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetB_grass","G_Bandanna_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"arifle_TRG21_GL_MRCO_F","hgun_Rook40_F","RangeFinder","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F","hgun_Rook40_F","RangeFinder","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_TL_F);
	};
	class O_MU_militia_GL_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		role = "Grenadier";
		cost = 200000;
		backpack = "B_MU_Mil_FieldPack_cbr_GL";
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_TRG21_GL_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_GL_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_GL_F);
	};
	class O_MU_militia_crew_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_crew_F0";
		role = "Crewman";
		cost = 93000;
		camouflage = 1.6;
		linkedItems[] = {"V_TacVest_camo","H_Tank_black_F","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio", "ItemGPS"};
		respawnLinkedItems[] = {"V_TacVest_camo","H_Tank_black_F","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio", "ItemGPS"};
		weapons[] = {"SMG_02_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"SMG_02_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_crew_F);
	};
	class O_MU_militia_MG_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_militia_MG;
		icon = "iconManMG";
		role = "MachineGunner";
		linkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"LMG_Zafir_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"LMG_Zafir_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		Respawnmagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_MG_F);
	};
	class O_MU_militia_AR_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		backpack = "B_MU_Mil_AssaultPack_cbr_AR";
		linkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_CTARS_blk_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_CTARS_blk_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_Tracer_F","100Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		Respawnmagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_Tracer_F","100Rnd_580x42_Mag_Tracer_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_AR_F);
	};
	class O_MU_militia_medic_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		backpack = "B_MU_Mil_Kitbag_rgr_medic";
		linkedItems[] = {"V_BandollierB_oli","H_Booniehat_khk","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","H_Booniehat_khk","G_Shades_Black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_TRG21_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_medic_F);
	};
	class O_MU_militia_A_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		role = "Rifleman";
		camouflage = 1.5;
		backpack = "B_MU_Mil_Carryall_cbr_ammo";
		linkedItems[] = {"V_BandollierB_khk","H_HelmetB_grass","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_HelmetB_grass","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_TRG21_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_A_F);
	};
	class O_MU_militia_M_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		linkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"srifle_DMR_01_ARCO_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"srifle_DMR_01_ARCO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_M_F);
	};
	class O_MU_militia_AT_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_militia_AT;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.5;
		secondaryAmmoCoef = 0.5;
		backpack = "B_MU_Mil_AssaultPack_cbr_AT";
		linkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_TRG21_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_AT_F);
	};
	class O_MU_militia_AT2 : O_MU_militia_AT_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_militia_AT2;
		backpack = "B_MU_Mil_AssaultPack_cbr_AT2";
		weapons[] = {"arifle_TRG21_F","launch_MRAWS_olive_rail_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","launch_MRAWS_olive_rail_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_AT2);
	};
	class O_MU_militia_HAT : O_MU_militia_AT_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_militia_HAT;
		backpack = "B_MU_Mil_AssaultPack_cbr_HAT";
		weapons[] = {"arifle_TRG21_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Vorona_HEAT", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Vorona_HEAT", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_HAT);
	};
	class O_MU_militia_AA_F : O_MU_militia_base_F
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
		backpack = "B_MU_Mil_AssaultPack_cbr_AA";
		linkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_TRG21_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AA", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_AA_F);
	};
	class O_MU_militia_engineer_F : O_MU_militia_base_F
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
		backpack = "B_MU_Mil_TacticalPack_oli_engineer";
		linkedItems[] = {"V_TacVest_camo","H_HelmetB_grass","G_Shades_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","H_HelmetB_grass","G_Shades_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_TRG21_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_engineer_F);
	};
	class O_MU_militia_sniper_F : O_MU_militia_base_F
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
		backpack = "B_MU_Mil_FieldPack_khk_sniper";
		linkedItems[] = {"V_BandollierB_khk","","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_BandollierB_khk","","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"srifle_DMR_05_blk_KHS_BI_MU_F","hgun_Rook40_F", "RangeFinder","Throw","Put"};
		respawnweapons[] = {"srifle_DMR_05_blk_KHS_BI_MU_F","hgun_Rook40_F", "RangeFinder","Throw","Put"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_sniper_F);
	};
	class O_MU_militia_RL_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_lite_F0";
		linkedItems[] = {"V_TacVest_camo","","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"SMG_02_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"SMG_02_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_RL_F);
	};
	class O_MU_militia_helipilot_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Helipilot_F0";
		role = "Crewman";
		camouflage = 2.0;
		cost = 93000;
		linkedItems[] = {"V_TacVest_camo","H_PilotHelmetHeli_O","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_TacVest_camo","H_PilotHelmetHeli_O","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		weapons[] = {"SMG_02_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"SMG_02_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_helipilot_F);
	};
	class O_MU_militia_MG2_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_militia_MG2;
		icon = "iconManMG";
		role = "MachineGunner";
		linkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"MMG_01_tan_BI_MU_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"MMG_01_tan_BI_MU_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		Respawnmagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_MG2_F);
	};
	class O_MU_militia_AMG2_F : O_MU_militia_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_militia_AMG2;
		role = "Assistant";
		backpack = "B_MU_Mil_Carryall_cbr_AMG2";
		linkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetB_grass","G_Balaclava_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_TRG21_F","hgun_Rook40_F", "RangeFinder", "Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_F","hgun_Rook40_F", "RangeFinder","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellOrange", "Chemlight_red", "Chemlight_red"};
		MU_PREVIEW(O_MU_militia_AMG2_F);
	};