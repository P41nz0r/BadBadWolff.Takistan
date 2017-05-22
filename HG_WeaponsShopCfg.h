/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com

    Defines available weapon shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL or mixed
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			items - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
		};
	};
*/

class HG_DefaultShop // Default shop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	whitelistRanks[] = {};
	
    class Weapons
	{
	    displayName = "$STR_HG_SHOP_WEAPONS";
		items[] =
		{
		    {"rhs_weap_ak103_zenitco01_b33",5000},
            {"arifle_AK12_GL_F",5000},
            {"rhs_weap_g36kv_ag36",5000},
			{"rhs_weap_hk416d145_m320",7500},
			{"rhs_weap_m21a_pr_pbg40",5000},
			{"rhs_weap_m24sws_ghillie",15000},
			{"rhs_weap_m27iar",7500},
			{"rhs_weap_m40a5_d",15000},
			{"rhs_weap_m4a1_carryhandle_m203S",5000},
			{"rhs_weap_m4a1_blockII_M203_d",7500},
			{"srifle_DMR_03_khaki_F",15000},
			{"rhs_weap_sr25_ec_d",15000},
			{"srifle_DMR_06_camo_F",15000},
			{"rhs_weap_svdp_wd_npz",25000},
			{"rhs_weap_m240G",17500},
			{"rhsusf_weap_glock17g4",1500},
			{"rhs_weap_pp2000_folded",1500},
			{"rhs_weap_M320",5000},
			{"launch_RPG7_F",5000}
		};
	};
	
	class Items
	{
	    displayName = "$STR_HG_SHOP_ITEMS";
		items[] =
		{
		    {"ItemWatch",50},
			{"ItemCompass",50},
			{"ItemGPS",50},
			{"ItemRadio",50},
			{"ItemMap",50}
		};
	};
	
	class Magazines
	{
	    displayName = "$STR_HG_SHOP_MAGAZINES";
		items[] =
		{
		    {"rhs_30Rnd_545x39_AK",150},
            {"30Rnd_762x39_Mag_F",150},
	        {"rhssaf_30rnd_556x45_EPR_G36",150},
			{"rhs_mag_30Rnd_556x45_Mk262_Stanag",150},
			{"1Rnd_HE_Grenade_shell",50},
			{"rhsgref_30rnd_556x45_m21",150},
			{"rhs_VOG25",50},
			{"rhsusf_5Rnd_762x51_m118_special_Mag",100},
			{"rhsusf_10Rnd_762x51_m118_special_Mag",100},
			{"20Rnd_762x51_Mag",250},
			{"rhsusf_20Rnd_762x51_m993_Mag",250},
			{"rhsusf_20Rnd_762x51_m118_special_Mag",300},
			{"rhs_10Rnd_762x54mmR_7N1",250},
			{"rhsusf_50Rnd_762x51",200},
			{"rhs_mag_M441_HE",10},
			{"rhs_mag_9x19mm_7n21_20",50},
			{"rhsusf_mag_17Rnd_9x19_JHP",50},
			{"RPG7_F",500}
		};
	};
	
	class Scopes
	{
	    displayName = "$STR_HG_SHOP_SCOPES";
		items[] =
		{
		    {"optic_Arco",1000},
			{"optic_Hamr",1000},
			{"optic_AMS_khk",1500},
			{"optic_KHS_tan",1500},
			{"optic_LRPS",2500},
			{"rhsusf_acc_M8541",1500},
			{"optic_Nightstalker",10000},
			{"optic_Holosight",500},
			{"optic_ACO_grn",500}
		};
	};
};
