/*
EASY "KillENEMY" Mission script

nul = [] execVM "side.sqf";

*/

if (isServer) then {

//select Task Area
//_loc = selectRandom [test1, test2];
_loc = selectRandom [trg,trg_1,trg_2,trg_3,trg_4,trg_5,trg_6,trg_7,trg_8,trg_9,trg_10,trg_11,trg_12,trg_13,trg_14,trg_15,trg_16,trg_17,trg_18,trg_19,trg_20,trg_21,trg_22,trg_23,trg_24,trg_25,trg_26,trg_27,trg_28,trg_29,trg_30,trg_31,trg_32,trg_33,trg_34,trg_35,trg_36,trg_37,trg_38,trg_39,trg_40,trg_41,trg_42,trg_43,trg_44,trg_45,trg_46,trg_47,trg_48,trg_49,trg_50];


_rpos = [[[getPos _loc, 75]],[]] call BIS_fnc_randomPos;
_lpos = [_rpos, 1, 10, 7, 0, 20, 0] call BIS_fnc_findSafePos;


[str("You Text") , str(date select 1) + "." + str(date select 2) + "." + str(date select 0), str("You Text")] spawn BIS_fnc_infoText;

//creatmarker
_m = createmarker ["hvtmark",getPos _loc]; 
"hvtmark" setmarkershape "ELLIPSE"; 
"hvtmark" setmarkersize [100,100]; 
"hvtmark" setMarkerColor "ColorRed";
"hvtmark" setMarkerAlpha 0.5;

//Spawn HVT
_objT = "CUP_hromada_beden_dekorativniX" createVehicle _lpos;
_objT addEventHandler ["killed", {nul = [] execVM "Pain\TASK\COCe.sqf";}];


//Spawn Opfor
nul = [_loc,2,350,[true,false],[false,false,false],false,[10,0],[5,0],"default",nil,"[this] call HG_fnc_aiUnitSetup;",nil,false,true,["customClass1"]] execVM "LV\militarize.sqf";


//create Task
["Destroy_Ammo", ["Destroy the AmmoBox.", "Just another Task."], "ASSIGNED", getPos _loc] call ENGTASKS_CreateTask;
}