	class B_TacticalPack_blk;
	class B_MU_RUSP_TacticalPack_blk_GL : B_TacticalPack_blk
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine = "UGL_FlareRed_F";
				count = 2;
			};
			class _xx_UGL_FlareCIR_F
			{
				magazine = "UGL_FlareCIR_F";
				count = 2;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 2;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 2;
			};
		};
	};
	class B_MU_RUSP_TacticalPack_blk_medic : B_TacticalPack_blk
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
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
	class B_MU_RUSP_TacticalPack_blk_eng : B_TacticalPack_blk
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
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
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 1;
			};
		};
	};
	class B_MU_Carryall_blk;
	class B_MU_RUSP_Carryall_blk_A : B_MU_Carryall_blk
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
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
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 2;
			};
			class _xx_30Rnd_762x39_AK12_Mag_Tracer_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_Tracer_F";
				count = 2;
			};
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 2;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 1;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 1;
			};
		};
	};
	class B_MU_RUSP_TacticalPack_blk_A: B_MU_RUSP_Carryall_blk_A {}; //legacy
	class B_AssaultPack_rgr;
	class B_MU_RUSP_AssaultPack_rgr_AT : B_AssaultPack_rgr //legacy
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT
			{
				magazine = "Vorona_HEAT";
				count = 1;
			};
		};
	};
	class B_MU_RUSP_TacticalPack_blk_AT : B_TacticalPack_blk
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 0;
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