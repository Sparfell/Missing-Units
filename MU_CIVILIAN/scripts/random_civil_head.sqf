/*
	File: randomize_civ1.sqf
	Author: pettka

	Description:
	Randomizes a headgear form _headgear array and puts it to civilian's headgear slot upon startup of mission.
	_rnd1 is used to have some civilians without any headgear
	_rnd2 is used to determine particular headgear from array
	

	Parameter(s):
	None

	Returns:
	Nothing
*/
if (isServer) then {
	params ["_unit"];
	if !(_unit getVariable ["BIS_enableRandomization",true]) exitWith {}; // If the parameter is not true, the script won't run. This enables a possibility to disable randomization for mission characters.

	private _headgear = [
		"H_Cap_tan",0.4,
		"H_Cap_blk",0.4,
		"H_Cap_red",0.4,
		"H_Cap_grn",0.4,
		"H_Cap_oli",0.4,
		"H_Cap_blu",0.4,
		"H_Cap_grn_BI",0.4,
		"H_Hat_grey",0.4,
		"H_Hat_tan",0.4,
		"H_StrawHat_dark",0.4,
		"H_Hat_brown",0.4,
		"H_Beret_blk",0.4,
		"",0.5
	];

	removeHeadgear _unit;
	_unit addHeadgear (selectRandomWeighted _headgear);
};