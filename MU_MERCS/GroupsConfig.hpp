
class CfgGroups
{
	class Indep
	{
		side = 2;
		class MU_MERCS_F
		{
			name = "$STR_MU_factionname_mercs";
			class Infantry
			{
				name = "$STR_A3_cfggroups_West_BLU_F_Infantry0";
				class MUMERCS_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_GL1_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class MUMERCS_InfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_chef_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_MU_mercs_A_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_MU_mercs_medic_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class MUMERCS_InfSquad_Weapons
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_AR_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "I_MU_mercs_A_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "I_MU_mercs_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class MUMERCS_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_GL1_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};    
				class MUMERCS_InfTeam_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_A_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MUMERCS_InfTeam_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_A_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MUMERCS_InfWepTeam
				{
					name = "$STR_MU_grp_mercs_InfWepTeam";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_AR_F";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class MUMERCS_InfSupTeam
				{
					name = "$STR_MU_grp_mercs_InfSupTeam";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_medic_F";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_M_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class MUMERCS_InfHQ
				{
					name = "$STR_MU_grp_mercs_InfHQ";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_chef_F";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_medic_F";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_engineer_F";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class MUMERCS_ReconSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class MUMERCS_Infsniper {
					name = "$STR_MU_grp_mercs_Infsniper";
					side = 2;
					faction = "MU_MERCS_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

					class Unit0 {
						side = 2;
						vehicle = "I_MU_mercs_sniper_F";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class MUMERCS_MotInf_Team
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.2;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_Offroad_01_F";
						rank = "SERGEANT";
						position[] = {0,-10,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_AT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_MU_mercs_medic_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
				class MUMERCS_Technicals
				{
					name = "$STR_MU_grp_mercs_Technicals";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.2;
					icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_Offroad_01_armed_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_Jeep_MG";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_Jeep_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
				};
			};
			class Support
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Support0";
				class MUMERCS_Support_CLS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.1;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MUMERCS_Support_ENG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.1;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_engineer_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MUMERCS_Support_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";
					side = 2;
					faction = "MU_MERCS_F";
					rarityGroup = 0.1;
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_MU_mercs_TL1_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MU_mercs_R1_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MU_mercs_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MU_mercs_engineer_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};