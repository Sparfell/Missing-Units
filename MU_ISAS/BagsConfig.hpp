	class B_AssaultPack_rgr;
	class B_MU_IS_AssaultPack_rgr_medic : B_AssaultPack_rgr
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
	class B_MU_IS_AssaultPack_rgr_AT : B_AssaultPack_rgr
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_RPG7_F
			{
				magazine = "RPG7_F";
				count = 3;
			};
		};
	};
	class B_Carryall_khk;
	class B_MU_IS_Carryall_khk_HAT : B_Carryall_khk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT
			{
				magazine = "Vorona_HEAT";
				count = 1;
			};
			class _xx_Vorona_HE
			{
				magazine = "Vorona_HE";
				count = 1;
			};
		};
	};
	class B_AssaultPack_dgtl;
	class B_MU_IS_AssaultPack_dgtl_AA : B_AssaultPack_dgtl
	{
		scope = 1;
		scopeCurator = 1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 1;
			};
		};
	};
	class B_Carryall_cbr;
	class B_MU_IS_Carryall_cbr_A : B_Carryall_cbr
	{
		scope = 1;
		scopeCurator = 1;
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
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine = "30Rnd_762x39_Mag_F";
				count = 10;
			};
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 2;
			};
			class _xx_handgrenade
			{
				magazine = "handgrenade";
				count = 4;
			};
			class _xx_Smokeshell
			{
				magazine = "Smokeshell";
				count = 4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
		};
	};
	class B_TacticalPack_blk;
	class B_MU_IS_TacticalPack_blk_engineer : B_TacticalPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
		};
	};