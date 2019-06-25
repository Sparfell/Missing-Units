
class CfgGroups
{
	class West
	{
		side = 1;
		class BLU_F
		{
			class MU_CTRG_Infantry
			{
				name = "$STR_MU_CTRG_grpcatname_Infantry";
				class MUCTRG_InfSquad
				{
					name = "$STR_MU_grp_CTRG_Infsquad";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_SL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_TL_F";
						rank = "SERGEANT";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_AR_F";
						rank = "CORPORAL";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_CTRG_AR_F";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_MU_CTRG_AAR_F";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_MU_CTRG_LAT_F";
						rank = "CORPORAL";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_MU_CTRG_medic_F";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_MU_CTRG_A_F";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};
				class MUCTRG_InfSquad_Weapons
				{
					name = "$STR_MU_grp_CTRG_Infsquad_Weapons";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_SL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_AR_F";
						rank = "SERGEANT";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_AAR_F";
						rank = "CORPORAL";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_CTRG_AT_F";
						rank = "SERGEANT";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_MU_CTRG_AAT_F";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_MU_CTRG_A_F";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_MU_CTRG_R_F";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_MU_CTRG_medic_F";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};
				class MUCTRG_InfTeam
				{
					name = "$STR_MU_grp_CTRG_InfTeam";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_TL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_AR_F";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_GL_F";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_CTRG_LAT_F";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
				class MUCTRG_InfTeam_AT
				{
					name = "$STR_MU_grp_CTRG_InfTeam_AT";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_TL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_AT_F";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_AT_F";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_CTRG_AAT_F";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
				class MUCTRG_InfTeam_AA
				{
					name = "$STR_MU_grp_CTRG_InfTeam_AA";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_TL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_AA_F";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_AA_F";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_CTRG_AAA_F";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
				class MUCTRG_InfSentry
				{
					name = "$STR_MU_grp_CTRG_InfSentry";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_GL_F";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_R_F";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};
				class MUCTRG_SniperTeam
				{
					name = "$STR_MU_grp_CTRG_SniperTeam";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_sniper_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_spotter_F";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
				};
			};
			class MU_CTRG_Support
			{
				name = "$STR_MU_CTRG_grpcatname_Support";
				class MUCTRG_Support_CLS
				{
					name = "$STR_MU_grp_CTRG_Support_CLS";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_TL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_AR_F";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_medic_F";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_CTRG_medic_F";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
				class MUCTRG_Support_EOD
				{
					name = "$STR_MU_grp_CTRG_Support_EOD";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_TL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_R_F";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_exp_F";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_CTRG_exp_F";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
				class MUCTRG_Support_ENG
				{
					name = "$STR_MU_grp_CTRG_Support_engineer";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_CTRG_TL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_CTRG_engineer_F";
						rank = "CORPORAL";
						position[] = {5, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_CTRG_engineer_F";
						rank = "PRIVATE";
						position[] = {-5, -2, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_CTRG_repair_F";
						rank = "PRIVATE";
						position[] = {10, -5, 0};
					};
				};
			};
		};
	};
};