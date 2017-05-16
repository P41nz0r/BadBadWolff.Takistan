if (isServer) then {
//nul = [] execVM "sideende.sqf";


//END TASK
["KillEnemy_HVT", "SUCCEEDED"] call ENGTASKS_SetTaskState;

//Get Money
[5000,0] remoteExecCall ["HG_fnc_addOrSubCash",west,false];

//wait^^
sleep 5;

//DELETE TASK
["KillEnemy_HVT"] call ENGTASKS_DeleteTask;

//DELETE EVENTHANDLER
loon1 removeEventHandler ["killed", 0];

//DELETE MARKER

deleteMarker "hvtmark"
};
