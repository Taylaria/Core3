visionary_of_lord_nyax = Creature:new {
	objectName = "@mob/creature_names:lord_nyax_visionary",
	randomNameType = NAME_GENERIC,
	randomNameTag = true,
	socialGroup = "followers_of_lord_nyax",
	faction = "followers_of_lord_nyax",
	level = 120,
	chanceHit = 1,
	damageMin = 280,
	damageMax = 500,
	baseXp = 10188,
	baseHAM = 45300,
	baseHAMmax = 48100,
	armor = 1,
	resists = {30,45,10,50,40,10,50,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = AIENABLED,
	diet = HERBIVORE,

	templates = {
		"object/mobile/dressed_patron_chiss_f_01.iff",
		"object/mobile/dressed_patron_chiss_f_01.iff"},
	lootGroups = {
		{
			groups = {
				{group = "junk", chance = 5000000},
				{group = "melee_two_handed", chance = 1500000},
				{group = "force_color_crystal", chance = 2000000},
				{group = "printer_parts", chance = 1500000}
			},
			lootChance = 10000000
		},
		{
			groups = {
				{group = "armor_attachments", chance = 5000000},
   		            	{group = "clothing_attachments", chance = 5000000}
			},
			lootChance = 4000000
		},
		{
			groups = {
				{group = "crystals_premium", chance = 5000000},
				{group = "nge_house_bespin", chance = 4000000},
				{group = "holocron_splinters", chance = 1000000}
			},
			lootChance = 1500000
		},
	
	},
	weapons = {"aakuan_pistol_weapons"},
	conversationTemplate = "",
	reactionStf = "@npc_reaction/fancy",
	attacks = merge(pistoleermaster)
}

CreatureTemplates:addCreatureTemplate(visionary_of_lord_nyax, "visionary_of_lord_nyax")
