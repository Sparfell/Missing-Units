	class B_AssaultPack_blk;
	class B_MU_AssaultPack_blk_SF_JTAC : B_AssaultPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_Laserbatteries
			{
				magazine = "Laserbatteries";
				count = 2;
			};
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 6;
			};
			class _xx_SmokeshellBlue
			{
				magazine = "SmokeshellBlue";
				count = 4;
			};
			class _xx_Handgrenade
			{
				magazine = "Handgrenade";
				count = 4;
			};
		};
	};
	class B_AssaultPack_rgr;
	class B_MU_AssaultPack_rgr_SF_AT : B_AssaultPack_rgr
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_Kitbag_rgr;
	class B_MU_Kitbag_rgr_SF_medic : B_Kitbag_rgr
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_TacticalPack_oli;
	class B_MU_TacticalPack_oli_SF_ing : B_TacticalPack_oli
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 4;
			};
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 6;
			};
		};
	};