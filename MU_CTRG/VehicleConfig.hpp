	class B_Heli_Light_01_F;
	class MU_CTRG_HummingBird: B_Heli_Light_01_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "MH-9 Hummingbird CTRG";
		side = 1;
		faction = "BLU_F";
		crew = "B_MU_CTRG_helipilot_F";
		typicalCargo[] = {"B_MU_CTRG_lite_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
		MU_PREVIEW(MU_CTRG_HummingBird);
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
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
	};
	class B_Heli_Light_01_armed_F;
	class MU_CTRG_pawnee: B_Heli_Light_01_armed_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "AH-9 Pawnee CTRG";
		side = 1;
		faction = "BLU_F";
		crew = "B_MU_CTRG_helipilot_F";
		typicalCargo[] = {"B_MU_CTRG_lite_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
		MU_PREVIEW(MU_CTRG_pawnee);
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
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
	};
	class B_Boat_Armed_01_minigun_F;
	class MU_CTRG_speedboat: B_Boat_Armed_01_minigun_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 1;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "Speedboat CTRG";		
		crew = "B_MU_CTRG_R_F";
		typicalCargo[] = {"B_MU_CTRG_R_F"};
		MU_PREVIEW(MU_CTRG_speedboat);
	};