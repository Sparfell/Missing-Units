

	class VestItem;
	class ItemCore;
	class Vest_NoCamo_Base;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	
	//LEGACY black vest :
	class V_PlateCarrier1_blk;
	class V_MU_PlateCarrier1_blk: V_PlateCarrier1_blk
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	
	//Carrier vest 1
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_MU_PlateCarrier1_cbr: V_PlateCarrier1_rgr
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier1_cbr";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	class V_MU_PlateCarrier1_khk: V_PlateCarrier1_rgr
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier1_khk";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	
	// Carrier vest 2
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class V_MU_PlateCarrier2_cbr: V_PlateCarrier2_rgr
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_cbr";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	class V_MU_PlateCarrier2_khk: V_PlateCarrier2_rgr
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_khk";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	
	// Carrier vest kerry
	class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class V_MU_PlateCarrier_green: V_PlateCarrier_Kerry
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_PlateCarrier_green";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_rgr_noflag_F_co.paa"};
		class ItemInfo:ItemInfo
		{
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_rgr_noflag_F_co.paa"};
		};
	};
	class V_MU_PlateCarrier_tropic: V_PlateCarrier_Kerry
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_PlateCarrier_tropic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_tna_F_co.paa"};
		class ItemInfo:ItemInfo
		{
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_tna_F_co.paa"};
		};
	};
	
	//Vests without holster
	class V_MU_PlateCarrier2_2_rgr : V_PlateCarrier2_rgr
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_2_rgr";
		model = "\A3\Characters_F\Common\equip_placeholder.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Vests\Data\V_PlateCarrier1_rgr_noflag_F_co.paa"};
		class ItemInfo : ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply120";
		};
	};
	class V_PlateCarrier2_blk: V_PlateCarrier2_rgr
	{
		class ItemInfo;
	};
	class V_MU_PlateCarrier2_2_blk : V_PlateCarrier2_blk
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_2_blk";
		model = "\A3\Characters_F\Common\equip_placeholder.p3d";
		class ItemInfo : ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
			containerClass = "Supply120";
		};
	};
	class V_MU_PlateCarrier2_2_cbr : V_MU_PlateCarrier2_cbr
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_2_cbr";
		model = "\A3\Characters_F\Common\equip_placeholder.p3d";
		class ItemInfo : ItemInfo
		{
			
			uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
			containerClass = "Supply120";
		};
	};
	class V_MU_PlateCarrier2_2_khk : V_MU_PlateCarrier2_khk
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_2_khk";
		model = "\A3\Characters_F\Common\equip_placeholder.p3d";
		class ItemInfo : ItemInfo
		{
			
			uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
			containerClass = "Supply120";
		};
	};
	class V_PlateCarrier2_tna_F: V_PlateCarrier2_blk
	{
		class ItemInfo;
	};
	class V_MU_PlateCarrier2_2_tna : V_PlateCarrier2_tna_F
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_2_tna";
		model = "\A3\Characters_F\Common\equip_placeholder.p3d";
		class ItemInfo : ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
			containerClass = "Supply120";
		};
	};
	class V_PlateCarrier2_wdl: V_PlateCarrier2_blk
	{
		class ItemInfo;
	};
	class V_MU_PlateCarrier2_2_wdl : V_PlateCarrier2_wdl
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_2_wdl";
		model = "\A3\Characters_F\Common\equip_placeholder.p3d";
		class ItemInfo : ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
			containerClass = "Supply120";
		};
	};
	
	//EOD
	class V_EOD_base_F;
	class V_MU_EOD_AAF: V_EOD_base_F
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_eod_aaf";
		picture = "\A3\Characters_F_Orange\Vests\Data\UI\icon_V_EOD_olive_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Vests\Data\V_EOD_vest_olive_CO.paa","\A3\Characters_F_Mark\INDEP\Data\ga_carrier_gl_rig_digi_co.paa"};
	};
	
	//DIVER
	class V_RebreatherB: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class V_MU_Rebreather_rus: V_RebreatherB
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_Rebreather_rus";
		picture = "\A3\characters_f\Data\UI\icon_V_RebreatherRU_CA.paa";
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_co.paa","\A3\characters_f\common\data\diver_equip_co.paa","\A3\characters_f\data\visors_ca.paa"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenUnderwaterSelections[] = {"hide"};
			shownUnderwaterSelections[] = {"unhide", "unhide2"};
		};
	};
	
	//Chestrigs without camel back
	class V_MU_Chestrig_light_khk: Vest_Camo_Base
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_chestrig_light_khk";
		picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_khk_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig_light.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_khk_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_chestrig_light.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo1"};
		};
	};
	class V_MU_Chestrig_light_rgr: V_MU_Chestrig_light_khk
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_chestrig_light_rgr";
		picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_rgr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_rgr_co.paa"};
	};
	class V_MU_Chestrig_light_blk: V_MU_Chestrig_light_khk
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_chestrig_light_blk";
		picture = "\A3\characters_F\data\ui\icon_V_FChestrig_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_blk_co.paa"};
	};
	class V_MU_Chestrig_light_oli: V_MU_Chestrig_light_khk
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_chestrig_light_oli";
		picture = "\A3\Characters_F\data\ui\icon_V_FChestrig_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_oli_co.paa"};
	};
	
	
	//CSAT harness in black
	class V_HarnessO_brn: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_MU_HarnessO_blk: V_HarnessO_brn
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_HarnessO_blk";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_rus_co.paa", "\A3\Characters_F\OPFOR\Data\tech_rus_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1", "Camo2"};
		};
	};