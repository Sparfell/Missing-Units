	class VestItem;
	class Vest_Camo_Base;
	class V_MU_PlateCarrier1_cbr: Vest_Camo_Base
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier1_cbr";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class V_PlateCarrier1_blk;
	class V_MU_PlateCarrier1_blk: V_PlateCarrier1_blk
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class V_MU_PlateCarrier1_khk: Vest_Camo_Base
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier1_khk";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	
	class V_MU_PlateCarrier2_cbr: Vest_Camo_Base
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_cbr";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 100;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class V_MU_PlateCarrier2_khk: Vest_Camo_Base
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 2;
		displayName = "$STR_MU_vest_platecarrier2_khk";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 100;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class V_MU_Rebreather_rus: Vest_Camo_Base
	{
		author = "Sparfell";
		dlc = "Missing_Units";
		scope = 1;
		displayName = "$STR_MU_vest_Rebreather_rus";
		picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
		model = "\A3\Characters_F\Common\equip_rebreather";
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_co.paa","\A3\characters_f\common\data\diver_equip_co.paa","\A3\characters_f\data\visors_ca.paa"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			containerClass = "Supply0";
			mass = 80;
			vestType = "Rebreather";
			hiddenUnderwaterSelections[] = {"hide"};
			shownUnderwaterSelections[] = {"unhide","unhide2"};
			hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_co.paa","\A3\characters_f\common\data\diver_equip_co.paa","\A3\characters_f\data\visors_ca.paa"};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class V_PlateCarrier1_rgr;
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