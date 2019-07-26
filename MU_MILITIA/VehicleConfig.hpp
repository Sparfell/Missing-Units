	class O_APC_Wheeled_02_rcws_v2_F;
	class O_MU_MIL_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_rcws_v2_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_crew_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		MU_PREVIEW(O_MU_MIL_APC_Wheeled_02_rcws_F);
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 8;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 5;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 5;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_F
			{
				weapon = "arifle_TRG21_F";
				count = 2;
			};
		};
	};
	class MU_CSAT_Marid_unarmed;
	class MU_MIL_Marid_unarmed: MU_CSAT_Marid_unarmed
	{
		scope = 1;
		scopeCurator = 0;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_crew_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 8;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 5;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 5;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_F
			{
				weapon = "arifle_TRG21_F";
				count = 2;
			};
		};
	};
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class AnimationSources;
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F {};
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F {};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F {};
	class O_MU_MIL_APC_Wheeled_03_cannon: I_APC_Wheeled_03_cannon_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_crew_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		hiddenSelectionsTextures[] = {"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_02_CO.paa","A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_02_CO.paa","A3\Data_F_Tacops\data\RCWS30_IG_02_CO.paa","A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_02_CO.paa","A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa","A3\armor_f\data\cage_sand_co.paa"};
		animationList[] = {"showCamonetHull",1,"showBags",0,"showBags2",0,"showTools",0,"showSLATHull",1};
		//textureList[] = {"Guerilla_02",1};
		MU_PREVIEW(O_MU_MIL_APC_Wheeled_03_cannon);
		class AnimationSources: AnimationSources
		{
			class showCamonetHull
			{
				animPeriod = 0.001;
				author = "Bohemia Interactive";
				displayName = "Show Camo Net (Hull)";
				initPhase = 1;
				mass = -50;
				source = "user";
			};
			class showSLATHull
			{
				animPeriod = 0.001;
				author = "Bohemia Interactive";
				displayName = "Show Slat Cage (Hull)";
				initPhase = 1;
				mass = -50;
				source = "user";
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 8;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 5;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 5;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_F
			{
				weapon = "arifle_TRG21_F";
				count = 2;
			};
		};
	};
	class Van_02_vehicle_base_F;
	class O_MU_MIL_Van_02_vehicle: Van_02_vehicle_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		animationList[] = {"rearsteps_hide",0.5,"front_protective_frame_hide",0.5,"roof_rack_hide",0.5,"side_protective_frame_hide",0.5};
		textureList[] = {"Syndikat",1,"Black",1};
		MU_PREVIEW(O_MU_MIL_Van_02_vehicle);
	};
	class Van_02_transport_base_F;
	class O_MU_MIL_Van_02_transport: Van_02_transport_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		animationList[] = {"rearsteps_hide",0.5,"front_protective_frame_hide",0.5,"roof_rack_hide",0.5,"side_protective_frame_hide",0.5};
		textureList[] = {"Syndikat",1,"Black",1};
		MU_PREVIEW(O_MU_MIL_Van_02_transport);
	};
	class O_Truck_02_covered_F;
	class O_MU_MIL_Truck_02_covered_F: O_Truck_02_covered_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		MU_PREVIEW(O_MU_MIL_Truck_02_covered_F);
	};
	class O_Truck_02_transport_F;
	class O_MU_MIL_Truck_02_transport_F: O_Truck_02_transport_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		MU_PREVIEW(O_MU_MIL_Truck_02_transport_F);
	};
	class O_Truck_02_box_F;
	class O_MU_MIL_Truck_02_box_F: O_Truck_02_box_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		MU_PREVIEW(O_MU_MIL_Truck_02_box_F);
	};
	class O_Truck_02_medical_F;
	class O_MU_MIL_Truck_02_medical_F: O_Truck_02_medical_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		MU_PREVIEW(O_MU_MIL_Truck_02_medical_F);
	};
	class O_Truck_02_Ammo_F;
	class O_MU_MIL_Truck_02_Ammo_F: O_Truck_02_Ammo_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		MU_PREVIEW(O_MU_MIL_Truck_02_Ammo_F);
	};
	class O_Truck_02_fuel_F;
	class O_MU_MIL_Truck_02_fuel_F: O_Truck_02_fuel_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		MU_PREVIEW(O_MU_MIL_Truck_02_fuel_F);
	};
	class O_Heli_Light_02_unarmed_F;
	class O_MU_MIL_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_helipilot_F";
		MU_PREVIEW(O_MU_MIL_Heli_Light_02_unarmed_F);
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 8;
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
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_TRG21_F
			{
				weapon = "arifle_TRG21_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 8;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 1;
			};
		};
	};
	class C_Quadbike_01_F;
	class O_MU_MIL_Quadbike_01_F: C_Quadbike_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_R_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		MU_PREVIEW(O_MU_MIL_Quadbike_01_F);
		class textureSources
		{
			class MU_mil_quad_tex_blu
			{
				DisplayName = "$STR_A3_TEXTURESOURCES_BLU0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};
				factions[] = {"MU_MILITIA_F"};
			};
			class MU_mil_quad_tex_black
			{
				DisplayName = "$STR_A3_TEXTURESOURCES_BLACK0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
				factions[] = {"MU_MILITIA_F"};
			};
		};
		textureList[] = {"MU_mil_quad_tex_black",1,"MU_mil_quad_tex_blu",0.5};
	};
	class O_G_Boat_Transport_01_F;
	class O_MU_MIL_Boat_Transport_01_F: O_G_Boat_Transport_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_R_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		MU_PREVIEW(O_MU_MIL_Boat_Transport_01_F);
	};
	class O_G_Mortar_01_F;
	class O_MU_MIL_Mortar_01_F: O_G_Mortar_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_R_F";
		MU_PREVIEW(O_MU_MIL_Mortar_01_F);
	};
	class O_HMG_01_F;
	class O_MU_MIL_HMG_01_F: O_HMG_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_R_F";
		MU_PREVIEW(O_MU_MIL_HMG_01_F);
	};
	class O_HMG_01_high_F;
	class O_MU_MIL_HMG_01_high_F: O_HMG_01_high_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_R_F";
		MU_PREVIEW(O_MU_MIL_HMG_01_high_F);
	};
	class Offroad_02_unarmed_base_F;
	class O_MU_MIL_Jeep : Offroad_02_unarmed_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_R_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		animationList[] = {"hideLeftDoor",0,"hideRightDoor",0,"hideRearDoor",0,"hideBullbar",1,"hideFenders",1,"hideHeadSupportFront",0.5,"hideHeadSupportRear",0.5,"hideRollcage",0.5,"hideSpareWheel",0.5};
		textureList[] = {"Brown",1};
		MU_PREVIEW(O_MU_MIL_Jeep);
	};
	class Offroad_02_LMG_base_F;
	class O_MU_MIL_Jeep_MG : Offroad_02_LMG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "MB 4WD (LMG)";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_R_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		animationList[] = {"hideLeftDoor",0,"hideRightDoor",0,"hideRearDoor",0,"hideBullbar",1,"hideFenders",1,"hideHeadSupportFront",0.5,"hideHeadSupportRear",0.5,"hideRollcage",0.5,"hideSpareWheel",0.5,"hideSeatsRear",1};
		textureList[] = {"Brown",1};
		MU_PREVIEW(O_MU_MIL_Jeep_MG);
	};
	class Boat_Transport_02_base_F;
	class O_MU_MIL_rhib : Boat_Transport_02_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		textureList[] = {"Black",1};
		MU_PREVIEW(O_MU_MIL_rhib);
	};
	class I_G_Offroad_01_F;
	class O_MU_MIL_offroad : I_G_Offroad_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		class textureSources
		{
			class MU_MIL_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MILITIA_F"};
			};
		};
		textureList[] = {"MU_MIL_offroad_tex_black",1};
		animationList[] = {"HideDoor1",0.1,"HideDoor2",0.1,"HideDoor3",0.1,"HideBumper1",1,"HideBumper2",0.5};
		MU_PREVIEW(O_MU_MIL_offroad);
	};
	class Offroad_01_military_covered_base_F;
	class O_MU_MIL_offroad_covered : Offroad_01_military_covered_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		class textureSources
		{
			class MU_MIL_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
				faction[] = {"MU_MILITIA_F"};
			};
		};
		textureList[] = {"MU_MIL_offroad_tex_black",1};
		animationList[] = {"HideRoofRack",1,"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
		MU_PREVIEW(O_MU_MIL_offroad_covered);
	};
	class Offroad_01_military_comms_base_F;
	class O_MU_MIL_offroad_comms : Offroad_01_military_comms_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		class textureSources
		{
			class MU_MIL_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
				faction[] = {"MU_MILITIA_F"};
			};
		};
		textureList[] = {"MU_MIL_offroad_tex_black",1};
		animationList[] = {"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
		MU_PREVIEW(O_MU_MIL_offroad_comms);
	};
	class Offroad_01_repair_military_base_F;
	class O_MU_MIL_offroad_repair : Offroad_01_repair_military_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_RL_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		class textureSources
		{
			class MU_MIL_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MILITIA_F"};
			};
		};
		textureList[] = {"MU_MIL_offroad_tex_black",1};
		MU_PREVIEW(O_MU_MIL_offroad_repair);
	};
	class I_G_Offroad_01_armed_F;
	class O_MU_MIL_offroad_armed : I_G_Offroad_01_armed_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 0;
		faction = "MU_MILITIA_F";
		crew = "O_MU_militia_R_F";
		typicalCargo[] = {"O_MU_militia_R_F"};
		class textureSources
		{
			class MU_MIL_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MILITIA_F"};
			};
		};
		textureList[] = {"MU_MIL_offroad_tex_black",1};
		animationList[] = {"HideDoor1",0.1,"HideDoor2",0.1,"HideDoor3",0.1,"HideBumper1",1,"HideBumper2",0.5};
		MU_PREVIEW(O_MU_MIL_offroad_armed);
	};
		