	class I_Soldier_F;
	class I_MU_GrDa_base_F : I_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		side = 2;
		Faction = "IND_F";
		vehicleClass = "MU_GrDa_I";
		editorSubcategory = "MU_EdSubcat_Personnel_GrDa";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		icon = "iconMan";
		role = "Rifleman";
		cost = 100000;
		threat[] = {0.8,0.1,0.1};
		accuracy = 1.6;
		camouflage = 1.4;
	};
	class I_MU_GrDa_R_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl", "H_HelmetSpecB", "G_Combat", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl", "H_HelmetSpecB", "G_Combat", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20C_ACO_pointer_snds_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_snds_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_R_F);
	};
	class I_MU_GrDa_R_ADR_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_GrDa_R_ADR;
		uniformClass = "U_I_CombatUniform";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl", "H_HelmetB_light_black", "G_Lowprofile", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl", "H_HelmetB_light_black", "G_Lowprofile", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"MU_SMG_03C_camo_snds", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"MU_SMG_03C_camo_snds", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_R_F);
	};
	class I_MU_GrDa_Rtws_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_GrDa_R_tws;
		uniformClass = "U_I_CombatUniform";
		backpack = "B_MU_GrDa_AssaultPack_dgtl_Rtws";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_MU_HelmetB_light2", "G_Bandanna_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_MU_HelmetB_light2", "G_Bandanna_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20_TWS_pointer_snds_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20_TWS_pointer_snds_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "SmokeShellGreen", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "SmokeShellGreen", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_Rtws_F);
	};
	class I_MU_GrDa_TL_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		icon = "iconManLeader";
		cost = 250000;
		camouflage = 1.4;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_MilCap_dgtl", "G_Tactical_Clear", "NVGoggles_INDEP", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_MilCap_dgtl", "G_Tactical_Clear", "NVGoggles_INDEP", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20C_MRCO_pointer_snds_MU_F", "RangeFinder", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20C_MRCO_pointer_snds_MU_F", "RangeFinder", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "SmokeShellRed", "SmokeShellGreen", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "SmokeShellRed", "SmokeShellGreen", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_TL_F);
	};
	class I_MU_GrDa_GL_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		role = "Grenadier";
		cost = 200000;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "B_MU_GrDa_AssaultPack_dgtl_GL";
		linkedItems[] = {"V_PlateCarrierIAGL_dgtl", "H_HelmetB_light_black", "G_Bandanna_beast", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIAGL_dgtl", "H_HelmetB_light_black", "G_Bandanna_beast", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20_GL_ACO_pointer_snds_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20_GL_ACO_pointer_snds_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "UGL_FlareGreen_F", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "UGL_FlareGreen_F", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_GL_F);
	};
	class I_MU_GrDa_M_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_M_F0";
		role = "Marksman";
		cost = 250000;
		uniformClass = "U_I_CombatUniform";
		linkedItems[] = {"V_I_G_resistanceLeader_F", "H_Booniehat_dgtl", "G_Balaclava_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_I_G_resistanceLeader_F", "H_Booniehat_dgtl", "G_Balaclava_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_DMR_03_woodland_Hamr_pointer_BI_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"srifle_DMR_03_woodland_Hamr_pointer_BI_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_M_F);
	};
	class I_MU_GrDa_medic_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		backpack = "B_MU_GrDa_Kitbag_rgr_medic";
		uniformClass = "U_I_CombatUniform";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Bandanna_khk_hs", "G_Shades_Green", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Bandanna_khk_hs", "G_Shades_Green", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20_ACO_pointer_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20_ACO_pointer_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "SmokeShell", "SmokeShell", "SmokeShellYellow", "SmokeShellGreen", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "SmokeShell", "SmokeShell", "SmokeShellYellow", "SmokeShellGreen", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_medic_F);
	};
	class I_MU_GrDa_A_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		role = "Rifleman";
		camouflage = 1.5;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "B_MU_GrDa_Carryall_oli_A";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_HelmetB_light", "G_Balaclava_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_HelmetB_light", "G_Balaclava_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20_ACO_pointer_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20_ACO_pointer_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_A_F);
	};
	class I_MU_GrDa_AR_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_soldier_AR_F0";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 220000;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl", "H_Watchcap_khk", "G_Bandanna_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl", "H_Watchcap_khk", "G_Bandanna_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"LMG_Mk200_Holo_pointer_snds_BI_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"LMG_Mk200_Holo_pointer_snds_BI_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box_Tracer", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box_Tracer", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_AR_F);
	};
	class I_MU_GrDa_LAT_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_GrDa_LAT;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "B_MU_GrDa_AssaultPack_dgtl_LAT";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_HelmetB", "G_Balaclava_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_HelmetB", "G_Balaclava_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20C_Holo_pointer_snds_MU_F", "launch_NLAW_F", "hgun_ACPC2_snds_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20C_Holo_pointer_snds_MU_F", "launch_NLAW_F", "hgun_ACPC2_snds_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "NLAW_F", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "NLAW_F", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_LAT_F);
	};
	class I_MU_GrDa_AT : I_MU_GrDa_LAT_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_GrDa_AT;
		icon = "iconManAT";
		role = "MissileSpecialist";
		cost = 130000;
		threat[] = {0.8,0.8,0.3};
		camouflage = 1.5;
		secondaryAmmoCoef = 0.5;
		backpack = "B_MU_GrDa_AssaultPack_dgtl_AT";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_MU_HelmetB_light2_black", "G_Balaclava_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_MU_HelmetB_light2_black", "G_Balaclava_oli", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20C_Holo_pointer_snds_MU_F", "launch_MRAWS_green_F", "hgun_ACPC2_snds_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20C_Holo_pointer_snds_MU_F", "launch_MRAWS_green_F", "hgun_ACPC2_snds_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "MRAWS_HEAT_F", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "MRAWS_HEAT_F", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_AT);
	};
	class I_MU_GrDa_engineer_F : I_MU_GrDa_base_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "$STR_B_engineer_F0";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		camouflage = 1.6;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 31;
		uniformClass = "U_I_CombatUniform";
		backpack = "B_MU_GrDa_TacticalPack_blk_engineer";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Cap_headphones", "G_Sport_Blackred", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Cap_headphones", "G_Sport_Blackred", "NVGoggles_INDEP", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"arifle_Mk20C_Holo_pointer_snds_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		respawnweapons[] = {"arifle_Mk20C_Holo_pointer_snds_MU_F", "hgun_ACPC2_snds_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_engineer_F);
	};
	class I_MU_GrDa_sniper_F : I_MU_GrDa_base_F
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
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "B_MU_GrDa_AssaultPack_dgtl_sniper";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Watchcap_camo", "G_Shades_Red", "NVGoggles_INDEP", "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Watchcap_camo", "G_Shades_Red", "NVGoggles_INDEP", "ItemMap", "ItemGPS", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"srifle_GM6_SOS_F", "hgun_ACPC2_snds_F", "RangeFinder", "Throw", "Put"};
		respawnweapons[] = {"srifle_GM6_SOS_F", "hgun_ACPC2_snds_F", "RangeFinder", "Throw", "Put"};
		magazines[] = {"5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		Respawnmagazines[] = {"5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "HandGrenade", "SmokeShell", "SmokeShellYellow", "Chemlight_yellow", "Chemlight_yellow"};
		MU_PREVIEW(I_MU_GrDa_sniper_F);
	};