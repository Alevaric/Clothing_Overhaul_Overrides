class CfgPatches
{
	class ALV_Better_Clothes_Overrides_Backpacks
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Headgear","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Characters_Pants","DZ_Characters_Belts","DZ_Characters_Backpacks","ALV_Better_Clothes_Backpacks"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class Clothing;

// Colorbases
	class ALV_WW2GasBag_Colorbase: Clothing
	{
		itemSize[] = {3,3};
		itemsCargoSize[]={4,5};
		heatIsolation = 1;
	};
	class ALV_DuffleBag_Colorbase: Clothing
	{
		itemSize[] = {3,3};
		itemsCargoSize[]={4,5};
		heatIsolation = 1;
	};
	class ALV_HipsterBag_Colorbase: Clothing
	{
		itemSize[] = {3,3};
		itemsCargoSize[]={4,5};
		heatIsolation = 1;
	};
	class ALV_MilitaryBag_Colorbase: Clothing
	{
		itemSize[] = {3,3};
		itemsCargoSize[]={4,5};
		heatIsolation = 1;
	};
	class ALV_LargeTrailBag_Colorbase: Clothing
	{
		itemSize[] = {3,3};
		itemsCargoSize[]={4,5};
		heatIsolation = 1;
	};
	class ALV_SmallBackpack_Colorbase: Clothing
	{
		itemSize[] = {3,3};
		itemsCargoSize[]={4,5};
		heatIsolation = 1;
	};
};