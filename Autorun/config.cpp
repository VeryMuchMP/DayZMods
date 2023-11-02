class CfgPatches
{
	class Autorun
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class AutoRunJog
	{
		dir="Autorun";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="";
		credits="";
		author="";
		authorID="0";
		version="1.0";
		inputs="Autorun/scripts/Inputs.xml";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Autorun/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Autorun/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Autorun/scripts/5_Mission"
				};
			};
		};
	};
};
