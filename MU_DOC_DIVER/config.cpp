
class CfgPatches
{
	class MU_doc_diver
	{
		units[] =
		{
			"B_MU_DD_diver_medic_F",
			"O_MU_DD_diver_medic_F",
			"I_MU_DD_diver_medic_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MU_core", "A3_Characters_F"};
	};
};
#define MU_PREVIEW(x) 	editorPreview = \MU\MU_DOC_DIVER\data\preview\##x##.jpg

class CfgVehicles
{
	class B_FieldPack_oli;
	class B_MU_DD_FieldPack_oli_medic : B_FieldPack_oli
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_FieldPack_blk;
	class B_MU_DD_FieldPack_blk_medic : B_FieldPack_blk
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_FieldPack_green_F;
	class B_MU_DD_FieldPack_green_medic : B_FieldPack_green_F
	{
		scope = 1;
		scopeCurator = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class B_diver_F;
    class B_MU_DD_diver_medic_F : B_diver_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_Diver_medic;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		backpack = "B_MU_DD_FieldPack_blk_medic";
		MU_PREVIEW(B_MU_DD_diver_medic_F);
	};
	class O_diver_F;
    class O_MU_DD_diver_medic_F : O_diver_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_Diver_medic;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		backpack = "B_MU_DD_FieldPack_green_medic";
		MU_PREVIEW(O_MU_DD_diver_medic_F);
	};
	class I_diver_F;
    class I_MU_DD_diver_medic_F : I_diver_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = $STR_MU_units_Diver_medic;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		attendant = 1;
		camouflage = 1.6;
		backpack = "B_MU_DD_FieldPack_blk_medic";
		MU_PREVIEW(I_MU_DD_diver_medic_F);
	};
};