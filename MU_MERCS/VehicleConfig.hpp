	class I_G_Offroad_01_F;
	class I_MU_mercs_Offroad_01_F: I_G_Offroad_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R3_F";
		typicalCargo[] = {"I_MU_mercs_R4_F"};
		class textureSources
		{
			class MU_mercs_offroad_tex_camo
			{
				displayName = "Camo texture";
				textures[] = {"\A3\Soft_F_Gamma\Offroad_01\Data\offroad_01_ext_ig01_co.paa","\A3\Soft_F_Gamma\Offroad_01\Data\offroad_01_ext_ig01_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_sand
			{
				displayName = "Sand texture";
				textures[] = {"\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE01_CO.paa","\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE01_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_green
			{
				displayName = "Green texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_camo",1,"MU_mercs_offroad_tex_sand",1,"MU_mercs_offroad_tex_black",1,"MU_mercs_offroad_tex_green",1};
		animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5,"HideConstruction",0.5,"HideBackpacks",0.5};
		MU_PREVIEW(I_MU_mercs_Offroad_01_F);
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
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_762x51_Box
			{
				magazine = "150Rnd_762x51_Box";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
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
			class MU_mercs_offroad_tex_camo
			{
				displayName = "Camo texture";
				textures[] = {"\A3\Soft_F_Gamma\Offroad_01\Data\offroad_01_ext_ig01_co.paa","\A3\Soft_F_Gamma\Offroad_01\Data\offroad_01_ext_ig01_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_sand
			{
				displayName = "Sand texture";
				textures[] = {"\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE01_CO.paa","\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE01_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_green
			{
				displayName = "Green texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_camo",1,"MU_mercs_offroad_tex_sand",1,"MU_mercs_offroad_tex_black",1,"MU_mercs_offroad_tex_green",1};
		animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5,"HideConstruction",0.5,"HideBackpacks",0.5};
		MU_PREVIEW(I_MU_mercs_Offroad_01_armed_F);
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
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_762x51_Box
			{
				magazine = "150Rnd_762x51_Box";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
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
		crew = "I_MU_mercs_R4_F";
		typicalCargo[] = {"I_MU_mercs_R3_F"};
		class textureSources
		{
			class MU_mercs_offroad_tex_camo
			{
				displayName = "Camo texture";
				textures[] = {"\A3\Soft_F_Gamma\Offroad_01\Data\offroad_01_ext_ig01_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_sand
			{
				displayName = "Sand texture";
				textures[] = {"\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE01_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_green
			{
				displayName = "Green texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_camo",1,"MU_mercs_offroad_tex_sand",1,"MU_mercs_offroad_tex_black",1,"MU_mercs_offroad_tex_green",1};
		MU_PREVIEW(I_MU_mercs_Offroad_01_repair_F);
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
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
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
			class _xx_arifle_TRG20_F
			{
				weapon = "arifle_TRG20_F";
				count = 1;
			};
		};
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
		typicalCargo[] = {"I_MU_mercs_R2_F"};
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
		class textureSources
		{
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_green
			{
				displayName = "Green texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_black",1,"MU_mercs_offroad_tex_green",1};
		animationList[] = {"HideRoofRack",1,"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
		MU_PREVIEW(I_MU_mercs_Offroad_01_covered);
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
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_762x51_Box
			{
				magazine = "150Rnd_762x51_Box";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
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
		typicalCargo[] = {"I_MU_mercs_R2_F"};
		hiddenSelectionsTextures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
		class textureSources
		{
			class MU_mercs_offroad_tex_black
			{
				displayName = "Black texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_blk_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_blk_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_offroad_tex_green
			{
				displayName = "Green texture";
				textures[] = {"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa","a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_cover_grn_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_offroad_tex_black",1,"MU_mercs_offroad_tex_green",1};
		animationList[] = {"HideCover",0,"HideDoor3",0,"HideBumper1",1,"HideBumper2",0};
		MU_PREVIEW(I_MU_mercs_Offroad_01_comms);
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
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_762x51_Box
			{
				magazine = "150Rnd_762x51_Box";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
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
		typicalCargo[] = {"I_MU_mercs_R2_F"};
		class textureSources
		{
			class MU_mercs_quad_tex_camo
			{
				displayName = "Camo texture";
				author = "Sparfell";
				textures[] = {"\A3\soft_F_Gamma\Quadbike_01\Data\quadbike_01_ig_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};
				faction[] = {"MU_MERCS_F"};
			};
			class MU_mercs_quad_tex_blu
			{
				DisplayName = "$STR_A3_TEXTURESOURCES_BLU0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};
				factions[] = {"MU_MERCS_F"};
			};
			class MU_mercs_quad_tex_black
			{
				DisplayName = "$STR_A3_TEXTURESOURCES_BLACK0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
				factions[] = {"MU_MERCS_F"};
			};
		};
		textureList[] = {"MU_mercs_quad_tex_camo",0.5,"MU_mercs_quad_tex_blu",1,"MU_mercs_quad_tex_black",1};
		MU_PREVIEW(I_MU_mercs_Quadbike_01_F);
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
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
		};
	};
	class B_Heli_Light_01_F;
	class MU_MERC_HummingBird: B_Heli_Light_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "MH-9 Hummingbird";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_helipilot_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
		MU_PREVIEW(MU_MERC_HummingBird);
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 1;
			};
		};
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
			class _xx_arifle_TRG20_F
			{
				weapon = "arifle_TRG20_F";
				count = 2;
			};
		};
	};
	class I_Heli_Transport_02_F;
	class MU_MERC_Mohawk: I_Heli_Transport_02_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "CH-49 Mohawk";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_helipilot_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa", "a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa", "a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"};
		//MU_PREVIEW(MU_MERC_Mohawk);
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 16;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 1;
			};
		};
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
			class _xx_arifle_TRG20_F
			{
				weapon = "arifle_TRG20_F";
				count = 2;
			};
		};
	};
	class O_G_Boat_Transport_01_F;
	class O_MU_mercs_Boat_Transport_01_F: O_G_Boat_Transport_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R4_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		//MU_PREVIEW(O_MU_mercs_Boat_Transport_01_F);
	};
	class O_G_Mortar_01_F;
	class O_MU_mercs_Mortar_01_F: O_G_Mortar_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R2_F";
		//MU_PREVIEW(O_MU_mercs_Mortar_01_F);
	};
	class Offroad_02_unarmed_base_F;
	class I_MU_mercs_Jeep : Offroad_02_unarmed_base_F
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
		animationList[] = {"hideLeftDoor",0.7,"hideRightDoor",0.7,"hideRearDoor",0.4,"hideBullbar",0.3,"hideFenders",0.7,"hideHeadSupportFront",0.5,"hideHeadSupportRear",0.7,"hideRollcage",0.7,"hideSpareWheel",0.8};
		textureList[] = {"Brown",1,"Olive",1,"Black",1,"Green",1,"White",1};
		MU_PREVIEW(I_MU_mercs_Jeep);
	};
	class Offroad_02_LMG_base_F;
	class I_MU_mercs_Jeep_MG : Offroad_02_LMG_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "MB 4WD (LMG)";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R1_F";
		typicalCargo[] = {"I_MU_mercs_R3_F"};
		animationList[] = {"hideLeftDoor",0.7,"hideRightDoor",0.7,"hideRearDoor",0.4,"hideBullbar",0.3,"hideFenders",0.7,"hideHeadSupportFront",0.5,"hideHeadSupportRear",0.7,"hideRollcage",0.7,"hideSpareWheel",0.8,"hideSeatsRear",1};
		textureList[] = {"Brown",1,"Olive",1,"Black",1,"Green",1,"White",1};
		MU_PREVIEW(I_MU_mercs_Jeep_MG);
	};
	class Offroad_02_AT_base_F;
	class I_MU_mercs_Jeep_AT : Offroad_02_AT_base_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "MB 4WD (AT)";
		side = 2;
		faction = "MU_MERCS_F";
		crew = "I_MU_mercs_R4_F";
		typicalCargo[] = {"I_MU_mercs_R2_F"};
		animationList[] = {"hideLeftDoor",0.7,"hideRightDoor",0.7,"hideRearDoor",0.4,"hideBullbar",0.3,"hideFenders",0.7,"hideHeadSupportFront",0.5,"hideHeadSupportRear",0.7,"hideRollcage",0.7,"hideSpareWheel",0.8,"hideSeatsRear",1};
		textureList[] = {"Brown",1,"Olive",1,"Black",1,"Green",1,"White",1};
		MU_PREVIEW(I_MU_mercs_Jeep_AT);
	};
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
		typicalCargo[] = {"I_MU_mercs_R2_F"};
		textureList[] = {"Racer_1",1,"Racer_2",1,"RedLine_1",1,"RedLine_2",1,"Wave_1",1,"Wave_2",1};
		MU_PREVIEW(I_MU_mercs_caesar);
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
		crew = "I_MU_mercs_R4_F";
		typicalCargo[] = {"I_MU_mercs_R1_F"};
		textureList[] = {"Black",1,"Civilian",1};
		MU_PREVIEW(I_MU_mercs_rhib);
	};