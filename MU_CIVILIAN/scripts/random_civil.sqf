/*
	File: random_civil.sqf
	Author: Sparfell

	Description:
	Randomizes civlian clothes
	
	Parameter(s):
	0 - OJECT - unit to randomize

	Returns:
	Nothing
*/
if (isServer) then {
	params ["_unit"];
	if !(_unit getVariable ["BIS_enableRandomization",true]) exitWith {}; // If the parameter is not true, the script won't run. This enables a possibility to disable randomization for mission characters.

	private _uniform = [
		"U_IG_Guerilla2_1",
		"U_IG_Guerilla2_2",
		"U_IG_Guerilla2_3",
		"U_IG_Guerilla3_1",
		"U_I_G_resistanceLeader_F",
		"U_C_HunterBody_grn",
		"U_Marshal",
		"U_C_Poor_1",
		"U_MU_PoloshirtPants1",
		"U_MU_PoloshirtPants2",
		"U_I_C_Soldier_Bandit_2_F",
		"U_I_C_Soldier_Bandit_5_F",
		"U_I_C_Soldier_Bandit_3_F",
		"U_C_Man_casual_2_F",
		"U_C_Man_casual_3_F",
		"U_C_Man_casual_1_F",
		"U_MU_PoloshirtPants2",
		"U_MU_PoloshirtPants1",
		"U_MU_B_GuerillaGarment3_tank",
		"U_MU_B_GuerillaGarment5",
		"U_MU_B_GuerillaGarment5_blue",
		"U_MU_B_GuerillaGarment5_brown",
		"U_MU_B_GuerillaGarment5_olive",
		"U_MU_B_GuerillaGarment5_orange",
		"U_MU_B_GuerillaGarment5_yellow"
	];
	private _headgear = [
		"H_Cap_tan",0.3,
		"H_Cap_blk",0.3,
		"H_Cap_red",0.3,
		"H_Cap_grn",0.3,
		"H_Cap_oli",0.3,
		"H_Cap_blu",0.3,
		"H_Cap_grn_BI",0.3,
		"H_Hat_grey",0.3,
		"H_Hat_tan",0.3,
		"H_StrawHat_dark",0.3,
		"H_Hat_brown",0.3,
		"H_Beret_blk",0.3,
		"",0.7
	];

	removeUniform _unit;
	_unit forceAddUniform (selectrandom _uniform);

	removeHeadgear _unit;
	_unit addHeadgear (selectRandomWeighted _headgear);
};