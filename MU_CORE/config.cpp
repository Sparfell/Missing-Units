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
		weapons[] = {"arifle_MX_Black_ACO_pointer_MU_F", "arifle_MX_Black_Holo_pointer_MU_F", "arifle_MX_Black_MRCO_pointer_MU_F", "arifle_MX_Black_Hamr_MU_F", "arifle_MX_Black_MRCO_MU_F", "arifle_MX_GL_Black_MRCO_pointer_MU_F", "arifle_MX_GL_Black_MRCO_pointer_snds_MU_F", "arifle_MX_SW_Black_pointer_BI_MU_F", "arifle_MX_SW_Black_Holo_BI_MU_F", "arifle_MX_SW_Black_MRCO_pointer_snds_BI_MU_F", "arifle_MX_SW_Black_BI_MU_F", "arifle_MXM_Black_Hamr_pointer_BI_MU_F", "arifle_MXM_Black_Hamr_BI_MU_F", "arifle_MXC_Black_MRCO_pointer_MU_F", "arifle_MXC_Black_ACO_pointer_MU_F", "arifle_MXC_Black_Holo_pointer_MU_F", "arifle_MXC_Black_ACO_MU_F", "arifle_MXC_Black_MRCO_pointer_snds_MU_F", "arifle_MXC_Black_Holo_pointer_snds_MU_F", "srifle_LRR_LRPS_MU_F", "arifle_Mk20C_ACO_pointer_snds_MU_F", "arifle_Mk20C_MRCO_pointer_snds_MU_F", "arifle_Mk20C_Holo_pointer_MU_F", "arifle_Mk20C_Holo_pointer_snds_MU_F", "arifle_Mk20_TWS_pointer_snds_MU_F", "arifle_Mk20_GL_ACO_pointer_snds_MU_F", "srifle_EBR_Hamr_pointer_MU_F", "srifle_EBR_ARCO_MU_F", "srifle_EBR_SOS_BI_MU_F", "LMG_Mk200_Holo_pointer_snds_BI_MU_F", "arifle_Katiba_Hamr_MU_F", "arifle_Katiba_MRCO_MU_F", "arifle_Katiba_Nstalker_pointer_snds_MU_F", "LMG_Zafir_Holo_MU_F", "LMG_Zafir_Hamr_pointer_MU_F", "arifle_Mk20_plain_Holo_MU_F", "arifle_Mk20_plain_ARCO_MU_F", "srifle_GM6_LRPS_MU_F", "srifle_GM6_DMS_MU_F", "arifle_TRG21_ACO_MU_F", "arifle_TRG21_MRCO_MU_F", "arifle_TRG20_ACO_MU_F", "srifle_GM6_camo_SOS_MU_F", "arifle_Katiba_C_Hamr_pointer_snds_MU_F", "arifle_Katiba_C_ACO_pointer_snds_MU_F", "arifle_Katiba_GL_ACO_pointer_snds_MU_F", "SMG_02_Hamr_pointer_snds_MU_F", "hgun_Pistol_heavy_01_MRD_snds_MU_F", "srifle_DMR_06_olive_KHSold_BI_MU_F", "srifle_DMR_05_blk_KHS_BI_MU_F", "srifle_DMR_04_Nstalker_pointer_BI_MU_F", "srifle_DMR_03_woodland_Hamr_pointer_BI_F", "srifle_DMR_02_LRPS_pointer_snds_BI_MU_F", "MMG_01_tan_BI_MU_F"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F", "A3_Weapons_F"};
	};
};

class CfgWeapons
{
	#include "core_weapons_configs.hpp"
};

