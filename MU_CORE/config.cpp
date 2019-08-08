class CfgMods
{
	class Mod_Base;
	class Missing_Units : Mod_Base
	{
		picture = "\MU\MU_CORE\data\MU_icon.paa";
		logo = "\MU\MU_CORE\data\MU_icon.paa";
		logoOver = "\MU\MU_CORE\data\MU_icon.paa";
		logoSmall = "\MU\MU_CORE\data\MU_icon.paa";
		tooltip = "MU";
		tooltipOwned = "Missing Units";
		action = "http://forums.bistudio.com/showthread.php?180534-Missing-Units-By-Sparfell-ArmA-3&p=2731672&viewfull=1#post2731672";
		dlcColor[] = {0.23,0.39,0.30,1};
		overview = "This addon provides various new units created with vanilla weapons, equipements and textures. New units and vehicles can be found in the editor as far as new groups corresponding to.";
		hideName = 1;
		hidePicture = 0;
		name = "Missing Units";
		dir = "Missing Units";
	};
};

class CfgPatches
{
	class MU_core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Weapons_F","A3_Weapons_F_Enoch","A3_Weapons_F_Mark"};
	};
};

class CfgWeapons
{
	#include "core_weapons_configs.hpp"
};

