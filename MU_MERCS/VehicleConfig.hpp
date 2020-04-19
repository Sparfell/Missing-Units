	//boats
	class O_G_Boat_Transport_01_F;
	class I_MU_mercs_Boat_Transport_01_F: O_G_Boat_Transport_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		MU_PREVIEW(I_MU_mercs_Boat_Transport_01_F);
	};
	class O_MU_mercs_Boat_Transport_01_F: I_MU_mercs_Boat_Transport_01_F
	{
		scope = 0;
		scopeCurator = 0;
	};
	class Boat_Transport_02_base_F;
	class I_MU_mercs_rhib : Boat_Transport_02_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		textureList[] = {"Black",1};
		MU_PREVIEW(I_MU_mercs_rhib);
	};
	//Jeeps
	class I_C_Offroad_02_unarmed_F;
	class I_MU_mercs_Jeep : I_C_Offroad_02_unarmed_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		animationList[] = {"hideLeftDoor",0.5,"hideRightDoor",0.5,"hideRearDoor",0,"hideBullbar",0.3,"hideFenders",0.4,"hideHeadSupportFront",0.4,"hideHeadSupportRear",0.4,"hideRollcage",0.4,"hideSpareWheel",0.5};
		textureList[] = {};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};
		MU_PREVIEW(I_MU_mercs_Jeep);
	};
	class I_C_Offroad_02_LMG_F;
	class I_MU_mercs_Jeep_MG : I_C_Offroad_02_LMG_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		animationList[] = {"hideLeftDoor",0.7,"hideRightDoor",0.7,"hideRearDoor",0,"hideBullbar",0.3,"hideFenders",0.4,"hideHeadSupportFront",0.4,"hideSpareWheel",0.5};
		textureList[] = {};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};
		MU_PREVIEW(I_MU_mercs_Jeep_MG);
	};
	class I_C_Offroad_02_AT_F;
	class I_MU_mercs_Jeep_AT : I_C_Offroad_02_AT_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		animationList[] = {"hideLeftDoor",0.7,"hideRightDoor",0.7,"hideRearDoor",0,"hideBullbar",0.3,"hideFenders",0.4,"hideHeadSupportFront",0.4,"hideSpareWheel",0.5};
		textureList[] = {};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};
		//MU_PREVIEW(I_MU_mercs_Jeep_AT);
	};
	//Offroad
	class I_G_Offroad_01_F;
	class I_MU_mercs_Offroad_01_F : I_G_Offroad_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		class textureSources
		{
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_black",1};
		animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5,"HideConstruction",0.5,"HideBackpacks",0.5};
		MU_PREVIEW(I_MU_mercs_Offroad_01_F);
	};
	class I_G_Offroad_01_armed_F;
	class I_MU_mercs_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R2_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		class textureSources
		{
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_black",1};
		animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5,"HideConstruction",0.5,"HideBackpacks",0.5,"Hide_Shield",0.5,"Hide_Rail",0.66};
		MU_PREVIEW(I_MU_mercs_Offroad_01_armed_F);
	};
	class Offroad_01_repair_military_base_F;
	class I_MU_mercs_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_engineer_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		class textureSources
		{
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_black",1};
		animationList[] = {"HideServices",0,"HideDoor1",0,"HideDoor2",0,"HideDoor3",0.333333};
		MU_PREVIEW(I_MU_mercs_Offroad_01_repair_F);
	};
	class Offroad_01_military_covered_base_F;
	class I_MU_mercs_Offroad_01_covered: Offroad_01_military_covered_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
		class textureSources
		{
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_black",1};
		animationList[] = {"HideRoofRack",1,"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
		MU_PREVIEW(I_MU_mercs_Offroad_01_covered);
	};
	class Offroad_01_military_comms_base_F;
	class I_MU_mercs_Offroad_01_comms: Offroad_01_military_comms_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
		class textureSources
		{
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_black",1};
		animationList[] = {"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
		MU_PREVIEW(I_MU_mercs_Offroad_01_comms);
	};
	//QUAD
	class C_Quadbike_01_F;
	class I_MU_mercs_Quadbike_01_F: C_Quadbike_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		textureList[] = {"black",1};
		MU_PREVIEW(I_MU_mercs_Quadbike_01_F);
	};
	//Helicopters
	class B_Heli_Light_01_F;
	class I_MU_mercs_HummingBird: B_Heli_Light_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_helipilot_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
		MU_PREVIEW(I_MU_mercs_HummingBird);
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellYellow";
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
			class _xx_MU_arifle_TRG20_ACO
			{
				weapon = "MU_arifle_TRG20_ACO";
				count = 2;
			};
		};
	};
	class MU_MERC_HummingBird: I_MU_mercs_HummingBird
	{
		scope = 0;
		scopeCurator = 0;
	};
	class I_Heli_Transport_02_F;
	class I_MU_mercs_Mohawk: I_Heli_Transport_02_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_helipilot_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa", "a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa", "a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"};
		MU_PREVIEW(I_MU_mercs_Mohawk);
		class TransportWeapons
		{
			class _xx_arifle_TRG20_F
			{
				weapon = "arifle_TRG20_F";
				count = 2;
			};
		};
	};
	class MU_MERC_Mohawk: I_MU_mercs_Mohawk
	{
		scope = 0;
		scopeCurator = 0;
	};
	class C_Heli_Light_01_civil_F;
	class I_MU_mercs_MD500: C_Heli_Light_01_civil_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_helipilot_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
		textureList[] = {};
		MU_PREVIEW(I_MU_mercs_MD500);
	};
	class O_Heli_Light_02_unarmed_F;
	class I_MU_mercs_Orca: O_Heli_Light_02_unarmed_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_helipilot_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		MU_PREVIEW(I_MU_mercs_Orca);
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellYellow";
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
			class _xx_MU_arifle_TRG20_ACO
			{
				weapon = "MU_arifle_TRG20_ACO";
				count = 2;
			};
		};
	};
	
	//statics
	class I_G_Mortar_01_F;
	class I_MU_mercs_Mortar_01_F: I_G_Mortar_01_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		//MU_PREVIEW(I_MU_mercs_Mortar_01_F);
	};
	class O_MU_mercs_Mortar_01_F: I_MU_mercs_Mortar_01_F {};
	
	class I_G_HMG_02_high_F;
	class I_MU_mercs_HMG_02_high: I_G_HMG_02_high_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
	};
	class I_G_HMG_02_F;
	class I_MU_mercs_HMG_02: I_G_HMG_02_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
	};
	
	//planes
	class Plane_Civil_01_base_F;
	class I_MU_mercs_caesar : Plane_Civil_01_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_helipilot_F";
		typicalCargo[] = {"I_MU_mercs_R3_F"};
		textureList[] = {"RedLine_1",1,"RedLine_2",1};
		MU_PREVIEW(I_MU_mercs_caesar);
	};
	//Cars
	class C_SUV_01_F;
	class I_MU_mercs_SUV: C_SUV_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R3_F";
		typicalCargo[] = {"I_MU_mercs_R3_F"};
		textureList[] = {"black",1};
		MU_PREVIEW(I_MU_mercs_SUV);
	};
	class C_Van_01_transport_F;
	class I_MU_mercs_truck: C_Van_01_transport_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		textureList[] = {"black",1};
		MU_PREVIEW(I_MU_mercs_truck);
	};
	class C_Van_02_vehicle_F;
	class I_MU_mercs_van: C_Van_02_vehicle_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		textureList[] = {"black",1};
		MU_PREVIEW(I_MU_mercs_van);
	};
	class C_Van_02_transport_F;
	class I_MU_mercs_van_transport: C_Van_02_transport_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		textureList[] = {"black",1};
		MU_PREVIEW(I_MU_mercs_van_transport);
	};
		