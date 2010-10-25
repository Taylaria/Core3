bark_mite_burrower_drone = Creature:new {
	objectName = "@mob/creature_names:bark_mite_burrower_drone",
	socialGroup = "Bark Mite",
	pvpFaction = "",
	faction = "",
	level = 29,
	chanceHit = 0.360000,
	damageMin = 290,
	damageMax = 300,
	range = 0,
	baseXp = 2914,
	baseHAM = 8000,
	armor = 0,
	resists = {35,20,-1,70,-1,60,70,0,-1},
	meatType = "meat_insect",
	meatAmount = 0,
	hideType = "hide_scale",
	hideAmount = 0,
	boneType = "bone_",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	diet = CARNIVORE,

	templates = {},
	lootgroups = {},
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(bark_mite_burrower_drone, "bark_mite_burrower_drone")
