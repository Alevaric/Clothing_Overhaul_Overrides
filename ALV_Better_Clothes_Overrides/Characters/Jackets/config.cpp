class CfgPatches
{
	class ALV_Better_Clothes_Overrides_Jackets
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Headgear","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Characters_Pants","DZ_Characters_Belts","DZ_Characters_Backpacks","ALV_Better_Clothes_Jackets"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class Clothing;
	class ALV_Coat_Base;
// Vanilla Additions
	class HikingJacket_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;
		inventorySlot[] = {"Coat"}; 
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class Raincoat_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class M65Jacket_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;	
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class TTsKOJacket_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;	
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class WoolCoat_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;	
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class FirefighterJacket_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;	
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class QuiltedJacket_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;	
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class BomberJacket_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;	
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class BushlatPoliceJacket_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;	
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
	class DownJacket_ColorBase: Clothing
	{
		IsCoatFullyClosed= 1;	
		inventorySlot[] = {"Coat"};
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
	};
// Colorbases
	class ALV_PlaidJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_Parka_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_WinterJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_NauticJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_MilitaryJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_SheriffJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_HuntingVest_Colorbase: Clothing
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_DenimJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_PCUL5Coat_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_PatrolJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_HuntingCoat_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_BomberJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_TweedJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_WW2Coat_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_PilotsJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};
	class ALV_HikingJacket_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};

	class ALV_LightweightJacket_Colorbase: Clothing
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {0,0};
		heatIsolation = 0.6;
	};

	class ALV_Duster_Colorbase: ALV_Coat_Base
	{
		itemSize[] = {3,2};
		itemsCargoSize[] = {6,6};
		heatIsolation = 0.6;
	};

};
