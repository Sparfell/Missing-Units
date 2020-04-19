	class I_G_Offroad_01_armed_F;
	class O_MU_islam_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew= "O_MU_islam_R3_F";
		typicalCargo[] = {"O_MU_islam_R1_F"};
		textureList[] = {"guerilla_03",1,"guerilla_06",1,"guerilla_07",1,"guerilla_09",1,"guerilla_10",1,"guerilla_11",1,"guerilla_12",1};
		animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5,"HideConstruction",0.5,"HideBackpacks",0.5,"Hide_Shield",0.5,"HideConstruction",0.5};
		MU_PREVIEW(O_MU_islam_Offroad_01_armed_F);	
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
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine = "30Rnd_762x39_Mag_F";
				count = 10;
			};
			class _xx_RPG7_F
			{
				magazine = "RPG7_F";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_AKM_F
			{
				weapon = "arifle_AKM_F";
				count = 2;
			};
		};
	};
	class I_G_Offroad_01_F;
	class O_MU_islam_Offroad_01_F: I_G_Offroad_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R1_F";
		typicalCargo[] = {"O_MU_islam_R3_F"};
		textureList[] = {"guerilla_03",1,"guerilla_06",1,"guerilla_07",1,"guerilla_09",1,"guerilla_10",1,"guerilla_11",1,"guerilla_12",1};
		animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5,"HideConstruction",0.5,"HideBackpacks",0.5};
		MU_PREVIEW(O_MU_islam_Offroad_01_F);	
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
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine = "30Rnd_762x39_Mag_F";
				count = 10;
			};
			class _xx_RPG7_F
			{
				magazine = "RPG7_F";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_AKM_F
			{
				weapon = "arifle_AKM_F";
				count = 2;
			};
		};
	};
	class B_G_Offroad_01_repair_F;
	class O_MU_islam_Offroad_01_repair_F: B_G_Offroad_01_repair_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R2_F";
		typicalCargo[] = {"O_MU_islam_R3_F"};
		textureList[] = {"guerilla_03",1,"guerilla_06",1,"guerilla_07",1,"guerilla_09",1,"guerilla_10",1,"guerilla_11",1,"guerilla_12",1};
		animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0,"HideBumper1",0.5,"HideBumper2",0.5,"HideConstruction",0,"HideServices",0};
		MU_PREVIEW(O_MU_islam_Offroad_01_repair_F);	
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine = "30Rnd_762x39_Mag_F";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_AKM_F
			{
				weapon = "arifle_AKM_F";
				count = 1;
			};
		};
	};
	class C_Van_01_transport_F;
	class O_MU_islam_Van_01_F: C_Van_01_transport_F
	{
		author = "Sparfell";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		crew = "O_MU_islam_R1_F";
		typicalCargo[] = {"O_MU_islam_R2_F"};
		side = 0;
		faction = "MU_islam_F";
		textureList[] = {"white",1};
		MU_PREVIEW(O_MU_islam_Van_01_F);	
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
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine = "30Rnd_762x39_Mag_F";
				count = 10;
			};
			class _xx_RPG7_F
			{
				magazine = "RPG7_F";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_AKM_F
			{
				weapon = "arifle_AKM_F";
				count = 2;
			};
		};
	};
	class C_Quadbike_01_F;
	class O_MU_IS_Quadbike_01_F: C_Quadbike_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R1_F";
		typicalCargo[] = {"O_MU_islam_R2_F"};
		class textureSources
		{
			class MU_isas_quad_tex_blu
			{
				DisplayName = "$STR_A3_TEXTURESOURCES_BLU0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};
				factions[] = {"MU_islam_F"};
			};
			class MU_isas_quad_tex_black
			{
				DisplayName = "$STR_A3_TEXTURESOURCES_BLACK0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
				factions[] = {"MU_islam_F"};
			};
		};
		textureList[] = {"MU_isas_quad_tex_black",1,"MU_isas_quad_tex_blu",1};
		MU_PREVIEW(O_MU_IS_Quadbike_01_F);	
	};
	class O_G_Boat_Transport_01_F;
	class O_MU_IS_Boat_Transport_01_F: O_G_Boat_Transport_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R2_F";
		typicalCargo[] = {"O_MU_islam_R1_F"};
		MU_PREVIEW(O_MU_IS_Boat_Transport_01_F);	
	};
	class O_G_Mortar_01_F;
	class O_MU_IS_Mortar_01_F: O_G_Mortar_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R1_F";
		MU_PREVIEW(O_MU_IS_Mortar_01_F);	
	};
	class O_static_AT_F;
	class O_MU_IS_static_AT_F: O_static_AT_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R2_F";
		MU_PREVIEW(O_MU_IS_static_AT_F);	
	};
	class O_G_HMG_02_high_F;
	class O_MU_IS_HMG_02_high: O_G_HMG_02_high_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R2_F";
	};
	class O_G_HMG_02_F;
	class O_MU_IS_HMG_02: O_G_HMG_02_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R1_F";
	};
	class Offroad_02_unarmed_base_F;
	class O_MU_IS_Jeep : Offroad_02_unarmed_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R1_F";
		typicalCargo[] = {"O_MU_islam_R2_F"};
		animationList[] = {"hideLeftDoor",0.7,"hideRightDoor",0.7,"hideRearDoor",0.4,"hideBullbar",0.3,"hideFenders",0.7,"hideHeadSupportFront",0.5,"hideHeadSupportRear",0.7,"hideRollcage",0.7,"hideSpareWheel",0.8};
		textureList[] = {"Brown",1,"Olive",1,"White",1};
		MU_PREVIEW(O_MU_IS_Jeep);	
	};
	class Offroad_02_LMG_base_F;
	class O_MU_IS_Jeep_MG : Offroad_02_LMG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "MB 4WD (LMG)";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R2_F";
		typicalCargo[] = {"O_MU_islam_R1_F"};
		animationList[] = {"hideLeftDoor",0.7,"hideRightDoor",0.7,"hideRearDoor",0.4,"hideBullbar",0.3,"hideFenders",0.7,"hideHeadSupportFront",0.5,"hideHeadSupportRear",0.7,"hideRollcage",0.7,"hideSpareWheel",0.8,"hideSeatsRear",1};
		textureList[] = {"Brown",1,"Olive",1,"White",1};
		MU_PREVIEW(O_MU_IS_Jeep_MG);	
	};
	class Offroad_02_AT_base_F;
	class O_MU_IS_Jeep_AT : Offroad_02_AT_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "MB 4WD (AT)";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R1_F";
		typicalCargo[] = {"O_MU_islam_R2_F"};
		animationList[] = {"hideLeftDoor",0.7,"hideRightDoor",0.7,"hideRearDoor",0.4,"hideBullbar",0.3,"hideFenders",0.7,"hideHeadSupportFront",0.5,"hideHeadSupportRear",0.7,"hideRollcage",0.7,"hideSpareWheel",0.8,"hideSeatsRear",1};
		textureList[] = {"Brown",1,"Olive",1,"White",1};
		MU_PREVIEW(O_MU_IS_Jeep_AT);	
	};
	class Boat_Transport_02_base_F;
	class O_MU_IS_rhib : Boat_Transport_02_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_islam_F";
		crew = "O_MU_islam_R2_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		textureList[] = {"Black",1,"Civilian",1};
		MU_PREVIEW(O_MU_IS_rhib);	
	};