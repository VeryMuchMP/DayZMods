class CfgPatches
{
	class SkinningMod_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class SkinningMod
	{
		dir="SkinningMod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SkinningMod";
		credits="karse2";
		author="karse2";
		authorID="0";
		version="1.0";
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
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SkinningMod/scripts/4_World"
				};
			};
		};
	};
};
