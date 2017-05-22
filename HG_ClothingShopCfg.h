/*
    Author - HoverGuy
    © All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available clothing shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL or mixed
		
		class ShopCategory - Shop category, can only be Glasses/Headgear/Uniform/Vest/Backpack
		{
			content - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
		};
	};
*/

class HG_DefaultShop // Default shop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	whitelistRanks[] = {};
	
	class Glasses
	{
		content[] =
		{
			{"G_Balaclava_blk",50},
			{"G_Bandanna_shades",50}
		};
	};
		
	class Headgear
	{
		content[] =
		{
			{"rhsusf_ach_bare_semi_ess",1500},
			{"rhsusf_ach_bare_wood",1500},
			{"rhsusf_ach_helmet_camo_ocp",1500}
	    };
	};
	
	class Vest
	{
		content[] =
		{
		    {"rhsusf_spc_squadleader",1500},
			{"rhsusf_spc_rifleman",1500},
			{"rhsusf_spc_marksman",1500},
			{"rhsusf_spc_mg",1500}
		};
	};
	
    class Uniform
	{
		content[] =
		{
		    {"U_I_G_resistanceLeader_F",1500},
			{"rhs_uniform_g3_rgr",1500},
			{"U_BG_Guerrilla_6_1",1500},
			{"U_BG_Guerilla1_1",1500},
			{"U_I_G_Story_Protagonist_F",1500},
			{"rhs_uniform_g3_rgr",1500}
		};
	};
	
	class Backpack
	{
		content[] =
		{
			{"B_rhsusf_B_BACKPACK",800}
		};
	};
};
