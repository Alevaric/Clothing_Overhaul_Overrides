class CfgPatches
{
	class ALV_Better_Clothes_Overrides_Vests
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Headgear","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Characters_Pants","DZ_Characters_Belts","DZ_Characters_Backpacks","ALV_Better_Clothes_Vests"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class ALV_Vest_Base;
	class ALV_UAVest_Base;
// Colorbases
	class ALV_ChestPouch_Colorbase: ALV_Vest_Base
	{
		itemSize[] = {3,2}; // How much large the item is in your inventory
		itemsCargoSize[] = {4,3}; // How much storage the item has
		heatIsolation = 0.2; // Heat Insulation of item
	};
	class ALV_ModularVest_Colorbase: ALV_Vest_Base
	{
		itemSize[] = {3,3};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_JPCVest_Colorbase: ALV_Vest_Base
	{
		itemSize[] = {3,3};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_6B25Vest_Colorbase: ALV_Vest_Base
	{
		itemSize[] = {3,3};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.3;
	};
	class ALV_WW2Vest_Colorbase: ALV_Vest_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,3};
		heatIsolation = 0.7;
	};

	class ALV_BikerVest_Colorbase: ALV_UAVest_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {4,3};
		heatIsolation = 0.4;
	};
};