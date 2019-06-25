class CfgGroups
{
	class West
	{
		side = 1;
		class BLU_F
		{
			class Infantry
			{
				class BUS_MU_SF_SFSquad
				{
					name = "$STR_MU_grp_SF_Infsquad";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_MU_SF_TL_F";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_MU_SF_JTAC_F";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_MU_SF_AR_F";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_MU_SF_M_F";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_MU_SF_engineer_F";
						rank = "PRIVATE";
						position[] = {-10, -10, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_MU_SF_AT_F";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_MU_SF_medic_F";
						rank = "CORPORAL";
						position[] = {-15, -15, 0};
					};
				};
			};
		};
	};
};