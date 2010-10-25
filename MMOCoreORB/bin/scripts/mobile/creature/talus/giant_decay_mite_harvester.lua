giant_decay_mite_harvester = Creature:new {
	objectName = "@mob/creature_names:giant_decay_mite_harvester",
	socialGroup = "Decay Mite",
	pvpFaction = "",
	faction = "",
	level = 12,
	chanceHit = 0.290000,
	damageMin = 120,
	damageMax = 130,
	range = 0,
	baseXp = 514,
	baseHAM = 900,
	armor = 0,
	resists = {15,15,0,0,0,0,0,-1,-1},
	meatType = "meat_insect",
	meatAmount = 12,
	hideType = "hide_",
	hideAmount = 0,
	boneType = "bone_",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = PACK,
	diet = CARNIVORE,

	templates = {},
	lootgroups = {},
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(giant_decay_mite_harvester, "giant_decay_mite_harvester")
