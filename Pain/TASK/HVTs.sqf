/*
EASY "KillENEMY" Mission script

nul = [] execVM "side.sqf";

*/

if (isServer) then {

//select Task Area
_loc = selectRandom [trg,trg_1,trg_2,trg_3,trg_4,trg_5,trg_6,trg_7,trg_8,trg_9,trg_10,trg_11,trg_12,trg_13,trg_14,trg_15,trg_16,trg_17,trg_18,trg_19,trg_20,trg_21,trg_22,trg_23,trg_24,trg_25,trg_26,trg_27,trg_28,trg_29,trg_30,trg_31,trg_32,trg_33,trg_34,trg_35,trg_36,trg_37,trg_38,trg_39,trg_40,trg_41,trg_42,trg_43,trg_44,trg_45,trg_46,trg_47,trg_48,trg_49,trg_50];


//creatmarker
_m = createmarker ["hvtmark",getpos _loc]; 
"hvtmark" setmarkershape "ELLIPSE"; 
"hvtmark" setmarkersize [150,150]; 
"hvtmark" setMarkerColor "ColorRed";
"hvtmark" setMarkerAlpha 0.5;

//Spawn HVT
"rhsgref_ins_commander" createUnit [getPos _loc, HVT, "loon1 = this; this addEventHandler ['killed', {nul = [] execVM 'Pain\TASK\HVTe.sqf'}];"];
nul = [loon1,getPos _loc,100,true] execVM "LV\patrol-vD.sqf";
[loon1] call HG_fnc_aiUnitSetup;

//Spawn Opfor
nul = [_loc,2,350,[true,false],[false,false,false],false,[10,0],[3,0],"default",nil,"[this] call HG_fnc_aiUnitSetup;",nil,false,true,["customClass1"]] execVM "LV\militarize.sqf";


//create Task
["KillEnemy_HVT", ["Kill enemy high value target.", "Just another Task."], "ASSIGNED", getPos _loc] call ENGTASKS_CreateTask;
}