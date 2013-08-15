class CfgPatches
{
	class task_force_radio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};
		author[] = {"[TF]Nkey"};
		authorUrl = "https://github.com/michail-nikolaev/task-force-arma-3-radio";
	};
};

class Extended_PostInit_EventHandlers
{
	task_force_radio_Post_Init = "if !(isDedicated) then { call compile preProcessFileLineNumbers '\task_force_radio\init.sqf' }";
};

#include "\userconfig\task_force_radio\radio_keys.hpp"
#include "\task_force_radio\description.h"