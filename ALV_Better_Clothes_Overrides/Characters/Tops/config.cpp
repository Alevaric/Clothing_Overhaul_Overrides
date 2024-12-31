class CfgPatches
{
	class ALV_Better_Clothes_Overrides_Tops
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Headgear","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Characters_Pants","DZ_Characters_Belts","DZ_Characters_Backpacks","ALV_Better_Clothes_Tops"};
		units[] = {};
	};
};
class CfgVehicles
{	

	class Clothing;
	class ALV_Top_Base;
	class ALV_Outfit_Base;
// Colorbases
	class ALV_CottonTop_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation=0.4;
	};

	class ALV_RaglanTshirt_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation=0.4;
	};

	class ALV_TacticalHoodie_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.7;
	};

	class ALV_FlannelShirt_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation=0.5;
	};

	class ALV_SheriffShirt_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation=0.4;
	};

	class ALV_Tshirt_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation=0.3;
	};

	class ALV_FleeceTop_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.8;
	};

	class ALV_MechanicTop_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation=0.4;
	};

	class ALV_ScrubsTop_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation=0.3;
	};

	class ALV_PulloverHoodie_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.7;
	};

	class ALV_DressShirt_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.4;
	};

	class ALV_LongSleeve_Tshirt_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation=0.4;
	};
	class ALV_VestShirt_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.4;
	};

	class ALV_Sweater_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.7;
	};

	class ALV_WorkersShirt_Colorbase: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.7;
	};

	class ALV_G3Shirt_Colorbase_Rolled: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.4;
	};
	class ALV_G3Shirt_Colorbase_Long: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.6;
	};

	class ALV_G3Shirt_Colorbase_Cut: ALV_Top_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 0.4;
	};

	class ALV_ScavangerTop_Colorbase: Clothing
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.8;
	};
// Outfits Colorbase

	class ALV_HazMat_Colorbase: ALV_Outfit_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 1;
	};
	class ALV_Frag_Colorbase: ALV_Outfit_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {5,5};
		heatIsolation = 1;
	};
};