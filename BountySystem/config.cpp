class CfgPatches
{
	class MPM_Bounty
	{
		units[] = {"MPM_Bounty"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","DZ_Data","DZ_Characters","DZ_Characters_Masks","DZ_gear_food","DZ_Characters_Vests","DZ_Gear_Consumables","DZ_Characters_Tops"};
	};
};
class CfgMods
{
	class MPM_Bounty
	{
		dir = "MPM_Bounty";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "MPM_Bounty";
		credits = "MP";
		author = "MP";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World","Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"BountySystem/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"BountySystem/4_world"};
			};
		};
	};
};
class CfgVehicles
{
	class DZ_LightAI;
	class DayZInfected: DZ_LightAI{};
	class ZombieBase: DayZInfected
	{
		class Skinning
		{
			class clothing
			{
				item = "MPM_Bounty";
				count = 1;
			};
			class Guts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class Bones
			{
				item = "Bone";
				count = 1;
				quantityMinMaxCoef[] = {0.75,1};
			};
		};
	};
	class Bear_ColorBase;
	class MPM_Bounty: Bear_ColorBase
	{
		scope = 2;
		displayName = "Chipped Neck";
		descriptionShort = "Neck from a Zombie, this has a chip that might be useful to some people, I should really keep it. - Made by MP";
		model = "\dz\gear\food\human_meat.p3d";
		rotationFlags=34;
		weight=42;
		itemSize[]={2,2};
		itemsCargoSize[]={0,0};
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=500;
	};
};
