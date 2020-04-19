
class CfgVehicles {
	class C_man_pilot_F;
	class C_MU_man_helipilot_F : C_man_pilot_F
	{
		_generalMacro = "C_MU_man_helipilot_F";
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_vehicles_helipilot;
		faction = "CIV_F";
		vehicleClass = "Men";
		uniformClass = "U_Marshal";
		linkedItems[] = {"H_Cap_marshal", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_marshal", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		MU_PREVIEW(C_MU_man_helipilot_F);
	};
	
	class B_Heli_Light_01_F;

	class MU_AAF_HummingBird: B_Heli_Light_01_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "MH-9 Hummingbird";
		side = 2;
		faction = "IND_F";
		crew = "I_helipilot_F";
		typicalCargo[] = {"I_Soldier_lite_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"};
		MU_PREVIEW(MU_AAF_HummingBird);
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
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_F {
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
	};

	class B_Heli_Light_01_armed_F;
	class MU_AAF_pawnee: B_Heli_Light_01_armed_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "AH-9 Pawnee";
		side = 2;
		faction = "IND_F";
		crew = "I_helipilot_F";
		typicalCargo[] = {"I_Soldier_lite_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"};
		MU_PREVIEW(MU_AAF_pawnee);
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
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
	};

#include "civ_hummingbird_config.hpp"

	class I_Heli_Transport_02_F;
	class MU_CIV_Mohawk: I_Heli_Transport_02_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "CH-49 Mohawk";
		side = 3;
		faction = "CIV_F";
		crew = "C_MU_man_helipilot_F";
		typicalCargo[] = {"C_man_1"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa", "a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa", "a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"};
		MU_PREVIEW(MU_CIV_Mohawk);
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
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 2;
			};
		};
		class TransportWeapons {};
	};

	class O_Heli_Light_02_unarmed_F;
	class MU_CIV_Orca: O_Heli_Light_02_unarmed_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "PO-30 Orca";
		side = 3;
		faction = "CIV_F";
		crew = "C_MU_man_helipilot_F";
		typicalCargo[] = {"C_man_1"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"};
		MU_PREVIEW(MU_CIV_Orca);
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 8;
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
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 4;
			};
		};
		class TransportWeapons {};
	};

	class MU_AAF_Orca_unarmed: O_Heli_Light_02_unarmed_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "$STR_MU_vehicles_OrcaUnarmed";
		side = 2;
		faction = "IND_F";
		crew = "I_helipilot_F";
		typicalCargo[] = {"I_Soldier_lite_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"};
		MU_PREVIEW(MU_AAF_Orca_unarmed);
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 8;
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
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
	};

	class O_Heli_Light_02_F;
	class MU_AAF_Orca: O_Heli_Light_02_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "PO-30 Orca";
		side = 2;
		faction = "IND_F";
		crew = "I_helipilot_F";
		typicalCargo[] = {"I_Soldier_lite_F"};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"};
		MU_PREVIEW(MU_AAF_Orca);
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 8;
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
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
	};

	class C_Truck_02_covered_F;
	class MU_CIV_Zamak_transport_covered: C_Truck_02_covered_F
	{
		scope = 1;
		scopeCurator = 0;
		forceInGarage = 0;
		dlc = "Missing_Units";
	};
	class C_Truck_02_fuel_F;
	class MU_CIV_Zamak_fuel: C_Truck_02_fuel_F
	{
		scope = 1;
		scopeCurator = 0;
		forceInGarage = 0;
		dlc = "Missing_Units";
	};
	class C_Truck_02_box_F;
	class MU_CIV_Zamak_repair: C_Truck_02_box_F
	{
		scope = 1;
		scopeCurator = 0;
		forceInGarage = 0;
		dlc = "Missing_Units";
	};
	
#include "nato_strider_config.hpp"
	
	class I_APC_Wheeled_03_cannon_F;
	class MU_NATO_Gorgon: I_APC_Wheeled_03_cannon_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		displayName = "$STR_A3_CFGVEHICLES_APC_WHEELED_03_WAPC0";
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_Soldier_F"};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
			"A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
		};
		MU_PREVIEW(MU_NATO_Gorgon);
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
	};
	class MU_NATO_T_Gorgon: MU_NATO_Gorgon
	{
		scope = 1;
		scopeCurator = 0;
		forceInGarage = 0;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons
		{
			class _xx_arifle_MX_khk_F
			{
				weapon="arifle_MX_khk_F";
				count=2;
			};
		};
		MU_PREVIEW(MU_NATO_T_Gorgon);
	};

// Marid unarmed (legacy)
	class O_APC_Wheeled_02_rcws_v2_F;
	class MU_CSAT_Marid_unarmed: O_APC_Wheeled_02_rcws_v2_F
	{
		scope = 1;
		scopeCurator = 0;
		forceInGarage = 0;
		faction = "OPF_F";
		displayName = "MSE-3 Marid (Unarmed)";
		crew = "O_Crew_F";
		typicalCargo[] = {"O_Soldier_F"};
	};
	class MU_CSAT_T_Marid_unarmed: MU_CSAT_Marid_unarmed
	{
		scope = 1;
		scopeCurator = 0;
		forceInGarage = 0;
		faction="OPF_T_F";
		crew="O_T_crew_F";
		typicalCargo[] = {"O_T_Soldier_F"};
		textureList[] = {"GreenHex",1};
		hiddenSelectionsTextures[]=
		{
			"a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa",
			"a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa",
			"a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_APC_Wheeled_02_rcws_ghex_F.jpg";
		class TransportWeapons
		{
			class _xx_arifle_CTAR_blk_F
			{
				weapon="arifle_CTAR_blk_F";
				count=2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine="30Rnd_580x42_Mag_F";
				count=12;
			};
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine="100Rnd_580x42_Mag_F";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=8;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=5;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
	};

// Panther unarmed
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class CommanderOptics: CommanderOptics {};
		};
		class AnimationSources: AnimationSources {};
	};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F{};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F{};
	class MU_NATO_Panther_unarmed: B_APC_Tracked_01_rcws_F
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		faction = "BLU_F";
		displayName = "IFV-6c Panther (Unarmed)";
		crew = "B_crew_F";
		typicalCargo[] = {"B_Soldier_F"};
		MU_PREVIEW(MU_NATO_Panther_unarmed);
		class Turrets: Turrets
		{
			delete MainTurret;
			class CommanderOptics: CommanderOptics {};
		};
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.001;
			};
		};
	};
	class MU_NATO_T_Panther_unarmed: MU_NATO_Panther_unarmed
	{
		scope = 1;
		scopeCurator = 0;
		forceInGarage = 0;
		faction="BLU_T_F";
		crew="B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		MU_PREVIEW(MU_NATO_T_Panther_unarmed);
		class TransportWeapons
		{
			class _xx_arifle_MX_khk_F
			{
				weapon="arifle_MX_khk_F";
				count=2;
			};
			class _xx_arifle_MX_SW_khk_F
			{
				weapon="arifle_MX_SW_khk_F";
				count=1;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=1;
			};
		};
	};
};