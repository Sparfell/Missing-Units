	class MRAP_03_base_F;
	class MU_NATO_Strider: MRAP_03_base_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "Strider";
		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
		MU_PREVIEW(MU_NATO_Strider);
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 14;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_NLAW_F
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
	};
	class MU_NATO_T_Strider: MU_NATO_Strider
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		MU_PREVIEW(MU_NATO_T_Strider);
	};
	class MRAP_03_hmg_base_F;
	class MU_NATO_Strider_HMG: MRAP_03_hmg_base_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "Strider HMG";
		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
		MU_PREVIEW(MU_NATO_Strider_HMG);
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 14;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_NLAW_F
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
	};
	class MU_NATO_T_Strider_HMG: MU_NATO_Strider_HMG
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		MU_PREVIEW(MU_NATO_T_Strider_HMG);
	};
	class MRAP_03_gmg_base_F;
	class MU_NATO_Strider_GMG: MRAP_03_gmg_base_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "Strider GMG";
		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_F";
		typicalCargo[] = {"B_Soldier_lite_F"};
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa"};
		MU_PREVIEW(MU_NATO_Strider_GMG);
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 14;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_launch_NLAW_F
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
		};
	};
	class MU_NATO_T_Strider_GMG: MU_NATO_Strider_GMG
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		faction = "BLU_T_F";
		crew = "B_T_Soldier_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		MU_PREVIEW(MU_NATO_T_Strider_GMG);
	};