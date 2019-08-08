class CfgGroups
{
	class East
	{
		class MU_LIVP_F
		{
			name = "$STR_MU_factionname_LIVP";
			class Infantry
			{
				name = "$STR_A3_cfggroups_West_BLU_F_Infantry0";
				class MU_LIVP_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 0;
					faction = "MU_LIVP_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0	{side = 0; vehicle = "O_MU_LIVP_soldier_gl"; rank = "CORPORAL"; position[] = {0,0,0};};
					class Unit1	{side = 0; vehicle = "O_MU_LIVP_soldier_r1"; rank = "PRIVATE"; position[] = {5,-5,0};};
				};
				class MU_LIVP_InfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 0;
					faction = "MU_LIVP_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0	{side = 0; vehicle = "O_MU_LIVP_soldier_tl"; rank = "SERGEANT"; position[] = {0,0,0};};
					class Unit1	{side = 0; vehicle = "O_MU_LIVP_soldier_gl"; rank = "CORPORAL"; position[] = {5,-5,0};};
					class Unit2	{side = 0; vehicle = "O_MU_LIVP_soldier_m"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit3	{side = 0; vehicle = "O_MU_LIVP_soldier_r1"; rank = "PRIVATE"; position[] = {10,-10,0};};
					class Unit4	{side = 0; vehicle = "O_MU_LIVP_soldier_at"; rank = "PRIVATE"; position[] = {-10,-10,0};};
					class Unit5	{side = 0; vehicle = "O_MU_LIVP_soldier_medic"; rank = "PRIVATE"; position[] = {15,-15,0};};
					class Unit6	{side = 0; vehicle = "O_MU_LIVP_soldier_ar"; rank = "PRIVATE"; position[] = {-15,-15,0};};
					class Unit7	{side = 0; vehicle = "O_MU_LIVP_soldier_a"; rank = "PRIVATE"; position[] = {20,-20,0};};
				};
				class MU_LIVP_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 0;
					faction = "MU_LIVP_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0	{side = 0; vehicle = "O_MU_LIVP_soldier_tl"; rank = "CORPORAL"; position[] = {0,0,0};};
					class Unit1	{side = 0; vehicle = "O_MU_LIVP_soldier_r1"; rank = "PRIVATE"; position[] = {5,-5,0};};
					class Unit2	{side = 0; vehicle = "O_MU_LIVP_soldier_ar"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit3	{side = 0; vehicle = "O_MU_LIVP_soldier_at"; rank = "PRIVATE"; position[] = {10,-10,0};};
				};
				class MU_LIVP_InfTeam_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
					side = 0;
					faction = "MU_LIVP_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0	{side = 0; vehicle = "O_MU_LIVP_soldier_tl"; rank = "CORPORAL"; position[] = {0,0,0};};
					class Unit1	{side = 0; vehicle = "O_MU_LIVP_soldier_ar"; rank = "PRIVATE"; position[] = {5,-5,0};};
					class Unit2	{side = 0; vehicle = "O_MU_LIVP_soldier_aa"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit3	{side = 0; vehicle = "O_MU_LIVP_soldier_a"; rank = "PRIVATE"; position[] = {10,-10,0};};
				};
				class MU_LIVP_InfTeam_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side = 0;
					faction = "MU_LIVP_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0	{side = 0; vehicle = "O_MU_LIVP_soldier_tl"; rank = "CORPORAL"; position[] = {0,0,0};};
					class Unit1	{side = 0; vehicle = "O_MU_LIVP_soldier_at"; rank = "PRIVATE"; position[] = {5,-5,0};};
					class Unit2	{side = 0; vehicle = "O_MU_LIVP_soldier_at"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit3	{side = 0; vehicle = "O_MU_LIVP_soldier_eng"; rank = "PRIVATE"; position[] = {10,-10,0};};
				};
				class MU_LIVP_ReconSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0";
					side = 0;
					faction = "MU_LIVP_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0	{side = 0; vehicle = "O_MU_LIVP_soldier_m"; rank = "CORPORAL"; position[] = {0,0,0};};
					class Unit1	{side = 0; vehicle = "O_MU_LIVP_soldier_r1"; rank = "PRIVATE"; position[] = {5,-5,0};};
				};
			};
			class Motorized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class MU_LIVP_MotInf_Team
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
					side = 0;
					faction = "MU_LIVP_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0	{side = 0; vehicle = "O_MU_LIVP_offroad"; rank = "PRIVATE"; position[] = {0,0,0};};
					class Unit1	{side = 0; vehicle = "O_MU_LIVP_soldier_tl"; rank = "SERGEANT"; position[] = {5,-5,0};};
					class Unit2	{side = 0; vehicle = "O_MU_LIVP_soldier_ar"; rank = "PRIVATE"; position[] = {-5,-5,0};};
					class Unit3	{side = 0; vehicle = "O_MU_LIVP_soldier_at"; rank = "PRIVATE"; position[] = {10,-10,0};};
					class Unit4	{side = 0; vehicle = "O_MU_LIVP_soldier_medic"; rank = "PRIVATE"; position[] = {-10,-10,0};};
					class Unit5	{side = 0; vehicle = "O_MU_LIVP_soldier_r1"; rank = "PRIVATE"; position[] = {15,-15,0};};
				};
				class MU_LIVP_Technicals
				{
					name = "$STR_A3_cfggroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0";
					side = 0;
					faction = "MU_LIVP_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0	{side = 0; vehicle = "O_MU_LIVP_offroad_armed"; rank = "SERGEANT"; position[] = {0,0,0};};
					class Unit1	{side = 0; vehicle = "O_MU_LIVP_offroad_AT"; rank = "CORPORAL"; position[] = {10,-10,0};};
					class Unit2	{side = 0; vehicle = "O_MU_LIVP_offroad_armed"; rank = "CORPORAL"; position[] = {-10,-10,0};};
				};
			};
		};
	};
};