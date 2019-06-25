class arifle_Mk20_plain_F;
class MU_arifle_Mk20_camoO: arifle_Mk20_plain_F
{
	author = "Sparfell";
	dlc = "Missing_Units";
	scope = 1;
	displayName = "$STR_MU_weap_Mk20_camoO";
	//hiddenSelectionsTextures[] = {"\A3\Weapons_F_Beta\Rifles\MK20\Data\TEST_mk20_camoOPFOR_co.paa"}; // BI removed the texture
	baseWeapon = "MU_arifle_Mk20_camoO";
};
class arifle_Mk20C_plain_F;
class MU_arifle_Mk20C_camoO: arifle_Mk20C_plain_F
{
	author = "Sparfell";
	dlc = "Missing_Units";
	scope = 1;
	displayName = "$STR_MU_weap_Mk20C_camoO";
	//hiddenSelectionsTextures[] = {"\A3\Weapons_F_Beta\Rifles\MK20\Data\TEST_mk20_camoOPFOR_co.paa"}; // BI removed the texture
	baseWeapon = "MU_arifle_Mk20C_camoO";
};
class arifle_Mk20_GL_plain_F;
class MU_arifle_Mk20_GL_camoO: arifle_Mk20_GL_plain_F
{
	author = "Sparfell";
	dlc = "Missing_Units";
	scope = 1;
	displayName = "$STR_MU_weap_Mk20_GL_camoO";
	//hiddenSelectionsTextures[] = {"\A3\Weapons_F_Beta\Rifles\MK20\Data\TEST_mk20_camoOPFOR_co.paa","\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"}; // BI removed the texture
	baseWeapon = "MU_arifle_Mk20_GL_camoO";
};
class hgun_ACPC2_F;
class MU_hgun_ACPC2_black: hgun_ACPC2_F
{
	author = "Sparfell";
	dlc = "Missing_Units";
	scope = 1;
	//hiddenSelectionsTextures[] = {"\A3\Weapons_F_Beta\Pistols\acpc2\data\Acpc2_black_co"}; // BI removed the texture
	displayName = "$STR_MU_weap_ACPC2_black";
	baseWeapon = "MU_hgun_ACPC2_black";
};
class MU_hgun_ACPC2_black_snds: MU_hgun_ACPC2_black
{
	author = "Sparfell";
	dlc = "Missing_Units";
	scope = 1;
	displayName = "$STR_MU_weap_ACPC2_black";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item = "muzzle_snds_acp";
			slot = "MuzzleSlot";
		};
	};
};