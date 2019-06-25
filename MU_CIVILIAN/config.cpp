
class CfgPatches
{
	class MU_civilian
	{
		units[] =
		{
			"C_MU_man_police_officer_F",
			"MU_CIV_police_Offroad_01_F",
			"C_MU_man_random_civil_F",
			"C_MU_man_random_civil_euro_F",
			"C_MU_man_random_civil_asia_F",
			"C_MU_man_random_civil_afro_F",
			"C_MU_man_random_civil_persan_F",
			"C_MU_man_random_civil_tanoan_F",
			"C_MU_man_persan_F"
		};
		weapons[] = {"SMG_02_flash_MU_police_F"};
		requiredVersion = 0.100000;
		requiredAddons[] = {"MU_core","MU_asset","A3_Soft_F","A3_Characters_F","A3_Weapons_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = "\MU\MU_CIVILIAN\data\preview\##x##.jpg"

class CfgEditorSubcategories
{
	class MU_EdSubcat_Personnel_Persan
	{
		displayName = $STR_MU_units_Edensubcat_Persan;
	};
};

class CfgWeapons
{
	class SMG_02_F;
	class SMG_02_flash_MU_police_F : SMG_02_F
	{
		scope = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
};

class CfgVehicles
{
	class C_man_pilot_F;
	class C_MU_man_police_officer_F : C_man_pilot_F
	{
		scope = 2;
		scopeCurator = 2;
		cost = 300000;
		displayName = $STR_MU_units_vehicles_policeofficer;
		uniformClass = "U_C_Journalist";
		backpack = "";
		linkedItems[] = {"V_TacVest_blk_POLICE", "H_Cap_police", "G_Shades_Black", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk_POLICE", "H_Cap_police", "G_Shades_Black", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"SMG_02_flash_MU_police_F","hgun_P07_F","Binocular","Throw","Put"};
		respawnweapons[] = {"SMG_02_flash_MU_police_F","hgun_P07_F","Binocular","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","smokeshellblue","smokeshellblue","MiniGrenade","Chemlight_blue","Chemlight_blue"};
		Respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","smokeshellblue","smokeshellblue","MiniGrenade","Chemlight_blue","Chemlight_blue"};
		MU_PREVIEW(C_MU_man_police_officer_F);
	};
	class C_Offroad_01_F;
	class MU_CIV_police_Offroad_01_F: C_Offroad_01_F
	{
		scope = 2;
		scopeArsenal = 2;
		forceInGarage = 0;
		dlc = "Missing_Units";
		crew = "C_MU_man_police_officer_F";
		displayName = $STR_MU_vehicles_policeoffroad;
		side = 3;
		faction = "CIV_F";
		textureList[] = {"White",1,"Blue",1};
		animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideDoor3",0.4,"HideBumper1",1,"HideBumper2",0,"HideConstruction",0.2,"HideBackpacks",1,"HidePolice",0};
		MU_PREVIEW(MU_CIV_police_Offroad_01_F);
	};
	
	//The random and non-touristic civilian
	class Civilian_F;
	class C_man_1: Civilian_F
	{
		class EventHandlers;
	};
	class C_MU_man_random_civil_F : C_man_1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_civilian_random_civil;
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\MU\MU_CIVILIAN\scripts\random_civil.sqf"";";
		};
		MU_PREVIEW(C_MU_man_random_civil_F);
	};
	class C_MU_man_random_civil_euro_F : C_man_1
	{
		scope = 2;
		scopeCurator = 2;
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		displayName = $STR_MU_civilian_random_civil_euro;
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\MU\MU_CIVILIAN\scripts\random_civil.sqf"";";
		};
		MU_PREVIEW(C_MU_man_random_civil_euro_F);
	};
	class C_MU_man_random_civil_asia_F : C_man_1
	{
		scope = 2;
		scopeCurator = 2;
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		displayName = $STR_MU_civilian_random_civil_asia;
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\MU\MU_CIVILIAN\scripts\random_civil.sqf"";";
		};
		MU_PREVIEW(C_MU_man_random_civil_asia_F);
	};
	class C_MU_man_random_civil_afro_F : C_man_1
	{
		scope = 2;
		scopeCurator = 2;
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		displayName = $STR_MU_civilian_random_civil_afro;
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\MU\MU_CIVILIAN\scripts\random_civil.sqf"";";
		};
		MU_PREVIEW(C_MU_man_random_civil_afro_F);
	};
	class C_MU_man_random_civil_persan_F : C_man_1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_civilian_random_civil_persan;
		editorSubcategory = "MU_EdSubcat_Personnel_Persan";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_CIVIL_male"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\MU\MU_CIVILIAN\scripts\random_civil.sqf"";";
		};
		MU_PREVIEW(C_MU_man_random_civil_persan_F);
	};
	class C_MU_man_random_civil_tanoan_F : C_man_1
	{
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Tanoan";
		displayName = $STR_MU_civilian_random_civil_tanoan;
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_CIV_exp"};
		vehicleClass = "MenTanoan";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM ""\MU\MU_CIVILIAN\scripts\random_civil.sqf"";";
		};
		MU_PREVIEW(C_MU_man_random_civil_tanoan_F);
	};
	class C_MU_man_persan_F : C_man_1
	{
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "MU_EdSubcat_Personnel_Persan";
		identityTypes[] = {"LanguagePER_F", "Head_TK", "G_CIVIL_male"};
		MU_PREVIEW(C_MU_man_persan_F);
	};
};
