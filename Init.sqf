enableSaving [false, false];
//DACinit
//This is a TEST
DAC_Basic_Value = 0;execVM "DAC\DAC_Config_Creator.sqf";

//CHHQ Init

CHHQ_showMarkers = true;


//Enigma Civilians init
call compile preprocessFileLineNumbers "Engima\Traffic\Init.sqf";
call compile preprocessFileLineNumbers "Engima\Civilians\Init.sqf";

//Enigma Simple Task
call compile preprocessFileLineNumbers "Engima\SimpleTasks\Init.sqf";

if (isServer) then {
	
							HVT = createGroup [east, false];
							DVT = createGroup [east, false];
							
							[[PMCchef, ["Headhunter Mission","'Pain\TASK\exsHVT.sqf' call BIS_fnc_execVM"]],"addAction",true,true] call BIS_fnc_MP;
							[[PMCchef, ["Destroy Ammo","'Pain\TASK\exsCOC.sqf' call BIS_fnc_execVM"]],"addAction",true,true] call BIS_fnc_MP;
							}