	class B_soldier_F;
	class B_MU_soldier_sage_base : B_soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Soldier sage base";
		uniformClass = "U_MU_B_soldier_sage";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
	};
	class B_soldier_SL_F;
	class B_MU_soldier_sage_vest_base : B_soldier_SL_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Soldier sage vest base";
		uniformClass = "U_MU_B_soldier_sage_vest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
	};
	class B_soldier_AR_F;
	class B_MU_soldier_sage_tshirt_base : B_soldier_AR_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Soldier sage tshirt base";
		uniformClass = "U_MU_B_soldier_sage_tshirt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_sage_co.paa"};
	};
	class B_MU_soldier_wdl_base : B_soldier_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Soldier Woodland base";
		uniformClass = "U_MU_B_soldier_wdl";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_co.paa"};
	};
	class B_MU_soldier_wdl_vest_base : B_soldier_SL_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Soldier Woodland base";
		uniformClass = "U_MU_B_soldier_wdl_vest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_co.paa"};
	};
	class B_MU_soldier_wdl_tshirt_base : B_soldier_AR_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Soldier Woodland base";
		uniformClass = "U_MU_B_soldier_wdl_tshirt";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing_wdl_co.paa"};
	};
	class C_man_w_worker_F;
	class C_MU_coverall_dirty2_base : C_man_w_worker_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Civilian dirty2 coverall base";
		uniformClass = "U_MU_B_coverall_dirty2";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_bandit_co.paa"};
	};
	class C_MU_coverall_black_base : C_man_w_worker_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Civilian black coverall base";
		uniformClass = "U_MU_B_coverall_black";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_black_co.paa"};
	};
	class C_MU_coverall_urbancamo_base : C_man_w_worker_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Civilian urbancamo coverall base";
		uniformClass = "U_MU_B_coverall_urbancamo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_urbancamo_co.paa"};
	};
	class C_MU_coverall_grey_base : C_man_w_worker_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Civilian grey coverall base";
		uniformClass = "U_MU_B_coverall_grey";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_grey_co.paa"};
	};
	class I_diver_F;
	class O_MU_wetsuit_ru_base : I_diver_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Diver wetsuit ru base";
		uniformClass = "U_MU_B_wetsuit_ru";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\diver_suit_co.paa","\A3\Characters_F\Common\Data\diver_equip_co.paa"};
	};

	//GUERILLA

	class B_G_Soldier_F;
	
	
	#define MU_uniform_gue_unit(col,tex,uname,modelp,tex2) \
	class B_MU_GuerillaGarment##col : B_G_Soldier_F \
	{ \
		scope = 1; \
		scopeCurator = 0; \
		scopeArsenal = 1; \
		displayName = "Guerrila_garment##col"; \
		uniformClass = U_MU_B_GuerillaGarment##uname##; \
		model = ##modelp##; \
		hiddenSelections[] = {"camo1","camo2"}; \
		hiddenSelectionsTextures[] = {##tex##,##tex2##}; \
	}; \
	class O_MU_GuerillaGarment##col : B_MU_GuerillaGarment##col \
	{ \
		side = 0; \
		uniformClass = U_MU_O_GuerillaGarment##uname##; \
	}; \
	class I_MU_GuerillaGarment##col : B_MU_GuerillaGarment##col \
	{ \
		side = 2; \
		uniformClass = U_MU_I_GuerillaGarment##uname##; \
	}; \
	
	//camo AAF
	MU_uniform_gue_unit(_grey_base,"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa",_grey,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	MU_uniform_gue_unit(_redcamo_base,"\A3\Characters_F\Civil\Data\c_cloth1_bandit_co.paa",_redcamo,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	MU_uniform_gue_unit(_skull_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_black.paa",_skull,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	MU_uniform_gue_unit(_brown_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_brown.paa",_brown,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	MU_uniform_gue_unit(_orange_base,"A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa",_orange,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	MU_uniform_gue_unit(_yellow_base,"A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa",_yellow,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	MU_uniform_gue_unit(_blue_base,"A3\Characters_F\Civil\Data\c_cloth1_co.paa",_blue,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	MU_uniform_gue_unit(_dirty_base,"a3\Characters_F_Orange\Uniforms\Data\c_mechanic_01_camo1_co.paa",_dirty,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	

	// Bas brun	
	MU_uniform_gue_unit(2_base,"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",2,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_grey_base,"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa",2_grey,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_redcamo_base,"\A3\Characters_F\Civil\Data\c_cloth1_bandit_co.paa",2_redcamo,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_skull_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_black.paa",2_skull,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_brown_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_brown.paa",2_brown,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_orange_base,"A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa",2_orange,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_yellow_base,"A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa",2_yellow,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_blue_base,"A3\Characters_F\Civil\Data\c_cloth1_co.paa",2_blue,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_olive_base,"a3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",2_olive,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(2_dirty_base,"a3\Characters_F_Orange\Uniforms\Data\c_mechanic_01_camo1_co.paa",2_dirty,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	
	
	// Bas brun	2
	MU_uniform_gue_unit(3_base,"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",3,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_grey_base,"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa",3_grey,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_redcamo_base,"\A3\Characters_F\Civil\Data\c_cloth1_bandit_co.paa",3_redcamo,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_skull_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_black.paa",3_skull,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_brown_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_brown.paa",3_brown,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_orange_base,"A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa",3_orange,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_yellow_base,"A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa",3_yellow,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_blue_base,"A3\Characters_F\Civil\Data\c_cloth1_co.paa",3_blue,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_olive_base,"a3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",3_olive,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(3_dirty_base,"a3\Characters_F_Orange\Uniforms\Data\c_mechanic_01_camo1_co.paa",3_dirty,"\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	
	
	// Jean
	MU_uniform_gue_unit(4_base,"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",4,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_grey_base,"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa",4_grey,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_redcamo_base,"\A3\Characters_F\Civil\Data\c_cloth1_bandit_co.paa",4_redcamo,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_skull_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_black.paa",4_skull,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_brown_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_brown.paa",4_brown,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_orange_base,"A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa",4_orange,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_yellow_base,"A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa",4_yellow,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_blue_base,"A3\Characters_F\Civil\Data\c_cloth1_co.paa",4_blue,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_olive_base,"a3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",4_olive,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(4_dirty_base,"a3\Characters_F_Orange\Uniforms\Data\c_mechanic_01_camo1_co.paa",4_dirty,"\a3\Characters_F\Civil\I_C_Soldier_Bandit_3_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	
	
	// Jean 2
	MU_uniform_gue_unit(5_base,"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",5,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_grey_base,"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa",5_grey,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_redcamo_base,"\A3\Characters_F\Civil\Data\c_cloth1_bandit_co.paa",5_redcamo,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_skull_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_black.paa",5_skull,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_brown_base,"\a3\characters_f_gamma\Civil\Data\c_cloth1_brown.paa",5_brown,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_orange_base,"A3\Characters_F\Civil\Data\c_cloth1_v3_co.paa",5_orange,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_yellow_base,"A3\Characters_F\Civil\Data\c_cloth1_v2_co.paa",5_yellow,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_blue_base,"A3\Characters_F\Civil\Data\c_cloth1_co.paa",5_blue,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_olive_base,"a3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",5_olive,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	MU_uniform_gue_unit(5_dirty_base,"a3\Characters_F_Orange\Uniforms\Data\c_mechanic_01_camo1_co.paa",5_dirty,"a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d","\a3\Characters_F_Orange\Uniforms\Data\c_idap_man_JeansB_co.paa")
	
	
	// Tank top
	MU_uniform_gue_unit(_tank_base,"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa",_tank,"\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa")
	MU_uniform_gue_unit(2_tank_base,"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa",2_tank,"\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d","\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa")
	MU_uniform_gue_unit(3_tank_base,"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa",3_tank,"\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa")
	MU_uniform_gue_unit(6_tank_base,"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_co.paa",6_tank,"\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa")
	
	
	#undef MU_uniform_gue_unit
	
	class B_Protagonist_VR_F;
	class B_MU_Protagonist_VR_nolight_base : B_Protagonist_VR_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "VR suit nolight base";
		uniformClass = "U_MU_B_Protagonist_VR_nolight";
		hiddenSelections[] = {"camo_stripes"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
	};
	class B_Soldier_base_F;
	class B_MU_PoloshirtPants1_base: B_Soldier_base_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Civilian Clothes";
		uniformClass = "U_MU_PoloshirtPants1";
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[]={3,1};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\ig_poloshirt_1_co.paa"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat",
				"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class B_MU_PoloshirtPants2_base: B_Soldier_base_F
	{
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 1;
		displayName = "Civilian Clothes";
		uniformClass = "U_MU_PoloshirtPants2";
		model="\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[]={3,1};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\ig_poloshirt_2_co.paa"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat",
				"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
				"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};