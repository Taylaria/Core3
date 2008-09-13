/*
 *	server/zone/objects/player/Player.h generated by engine3 IDL compiler 0.55
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/service/proto/BaseMessage.h"

#include "engine/service/proto/StandaloneBaseMessage.h"

class ZoneClientSession;

class Zone;

class SceneObject;

class CreatureObject;

class Creature;

class TangibleObject;

class PlayerObject;

class Weapon;

class Armor;

class Attachment;

class Powerup;

class Datapad;

class SurveyTool;

class GroupObject;

class Guild;

class WaypointObject;

class ChatRoom;

class SuiBox;

class DraftSchematic;

class CraftingTool;

class ResourceContainer;

#include "../creature/CreatureObject.h"

class Player : public CreatureObject {
public:
	Player();

	Player(unsigned long long oid);

	void create(ZoneClientSession* client);

	void refuseCreate(ZoneClientSession* client);

	void load(ZoneClientSession* client);

	void reload(ZoneClientSession* client);

	void unload();

	void savePlayerState(bool doSchedule = false);

	void disconnect(bool closeClient = true, bool doLock = true);

	void logout(bool doLock = true);

	void userLogout(int msgCounter = 3);

	void clearLogoutEvent();

	void makeCharacterMask();

	unsigned int getCharacterMask();

	void insertToZone(Zone* zone);

	void reinsertToZone(Zone* zone);

	void updateZone(bool lightUpdate = false);

	void updateZoneWithParent(unsigned long long cell, bool lightUpdate = false);

	void switchMap(int planetid);

	void doWarp(float x, float y, float z = 0, float randomizeDistance = 0, unsigned long long parentID = 0);

	void bounceBack();

	void sendTo(Player* player);

	void sendToOwner();

	void notifySceneReady();

	void addDatapadItem(SceneObject* item);

	SceneObject* getDatapadItem(unsigned long long oid);

	void removeDatapadItem(unsigned long long oid);

	SceneObject* getPlayerItem(unsigned long long oid);

	unsigned int getTargetHealth();

	unsigned int getTargetStrength();

	unsigned int getTargetConstitution();

	unsigned int getTargetAction();

	unsigned int getTargetQuickness();

	unsigned int getTargetStamina();

	unsigned int getTargetMind();

	unsigned int getTargetFocus();

	unsigned int getTargetWillpower();

	void setTargetHealth(unsigned int health);

	void setTargetStrength(unsigned int strength);

	void setTargetConstitution(unsigned int constituition);

	void setTargetAction(unsigned int action);

	void setTargetQuickness(unsigned int quickness);

	void setTargetStamina(unsigned int stamina);

	void setTargetMind(unsigned int mind);

	void setTargetFocus(unsigned int focus);

	void setTargetWillpower(unsigned int willpower);

	unsigned int getMinHealth();

	unsigned int getMaxHealth();

	unsigned int getMinStrength();

	unsigned int getMaxStrength();

	unsigned int getMinConstitution();

	unsigned int getMaxConstitution();

	unsigned int getMinAction();

	unsigned int getMaxAction();

	unsigned int getMinQuickness();

	unsigned int getMaxQuickness();

	unsigned int getMinStamina();

	unsigned int getMaxStamina();

	unsigned int getMinMind();

	unsigned int getMaxMind();

	unsigned int getMinFocus();

	unsigned int getMaxFocus();

	unsigned int getMinWillpower();

	unsigned int getMaxWillpower();

	unsigned int getTotalAttribPoints();

	void queueFlourish(const string& modifier, unsigned long long target, unsigned int actionCntr);

	void clearQueueAction(unsigned int actioncntr, float timer = 0, unsigned int tab1 = 0, unsigned int tab2 = 0);

	void queueAction(Player* player, unsigned long long target, unsigned int actionCRC, unsigned int actionCntr, const string& actionModifier);

	void deleteQueueAction(unsigned int actioncntr);

	void changePosture(int post);

	void doCenterOfBeing();

	void removeCenterOfBeing();

	void doPowerboost();

	void doPeace();

	void kill();

	void deathblow(Player* player);

	void revive();

	void doClone();

	void activateClone();

	void doRecovery();

	void activateReviveCountdown();

	void clearReviveCountdown();

	void countdownRevive(int counter);

	bool hasConsent(string& charID);

	bool giveConsent(string& name);

	bool revokeConsent(string& name);

	int getConsentSize();

	string& getConsentEntry(int index);

	void sendConsentBox();

	bool isRevivable();

	void addBuff(unsigned int buffcrc, float time);

	void lootCorpse(bool lootAll = false);

	void lootObject(Creature* creature, SceneObject* object);

	void addTradeItem(TangibleObject* item);

	void clearTradeItems();

	int getTradeSize();

	TangibleObject* getTradeItem(int idx);

	void setAcceptedTrade(bool val);

	bool hasAcceptedTrade();

	void setVerifiedTrade(bool val);

	bool hasVerifiedTrade();

	void setMoneyToTrade(unsigned int value);

	unsigned int getMoneyToTrade();

	bool getMeditate();

	void changeCloth(unsigned long long itemid);

	void changeWeapon(unsigned long long itemid);

	void changeArmor(unsigned long long itemid, bool forced);

	void setWeaponSkillMods(Weapon* weapon);

	void setArmorSkillMods(Armor* armor);

	bool setArmorEncumbrance(Armor* armor, bool forced);

	void applyAttachment(unsigned long long attachmentID, unsigned long long targetID);

	void applyPowerup(unsigned long long powerupID, unsigned long long targetID);

	void createItems();

	void loadItems();

	void createBaseStats();

	void decayInventory();

	bool hasFullInventory();

	void addInventoryItem(TangibleObject* item);

	void addInventoryResource(ResourceContainer* item);

	void equipPlayerItem(TangibleObject* item);

	void saveProfessions();

	void loadProfessions();

	void trainStartingProfession();

	bool trainSkillBox(const string& name, bool updateClient = true);

	void surrenderSkillBox(const string& name);

	void resetSkillBoxesIterator();

	int getSkillBoxesSize();

	string& getNextSkillBox();

	bool hasNextSkillBox();

	bool hasSkillBox(string& skillBox);

	void addWaypoint(WaypointObject* wp);

	bool removeWaypoint(WaypointObject* wp);

	WaypointObject* getWaypoint(unsigned long long id);

	void updateWaypoint(WaypointObject* wp);

	void saveWaypoints(Player* player);

	WaypointObject* searchWaypoint(Player* play, const string& name, int mode);

	void queueHeal(TangibleObject* medpack, unsigned int actionCRC, const string& attribute);

	void addXp(string& xpType, int xp, bool updateClient);

	void removeXp(string& xpType, int xp, bool updateClient);

	void removeFromDuelList(Player* targetPlayer);

	void addToDuelList(Player* targetPlayer);

	bool isInDuelWith(Player* targetPlayer, bool doLock = true);

	Player* getDuelListObject(int index);

	bool requestedDuelTo(Player* targetPlayer);

	bool isDuelListEmpty();

	int getDuelListSize();

	bool setGuild(unsigned int gid);

	void setGuild(Guild* gild);

	bool updateGuild(unsigned int gid);

	void updateGuild(Guild* guild);

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

	void sendSystemMessage(const string& msg);

	void sendSystemMessage(unicode& msg);

	void sendSystemMessage(const string& file, const string& str, unsigned long long targetid = 0);

	void setConversatingCreature(CreatureObject* conversator);

	void setFirstName(const string& name);

	void setLastName(const string& name);

	void setFirstNameProper(const string& name);

	void setBiography(const string& bio);

	void setBiography(unicode& bio);

	bool changeForcePowerBar(int fp);

	void setForcePowerBar(int fp);

	void updateMaxForcePowerBar(bool updateClient = true);

	void setFoodFilling(int fill, bool updateClient = true);

	void setDrinkFilling(int fill, bool updateClient = true);

	void changeFoodFilling(int fill, bool updateClient = true);

	void changeDrinkFilling(int fill, bool updateClient = true);

	int getFoodFilling();

	int getDrinkFilling();

	void activateDigest();

	void activateQueueAction();

	void setCharacterID(unsigned long long id);

	void setStartingProfession(const string& prof);

	void setHairObject(const string& hair);

	void updateHair();

	void setPlayerObject(PlayerObject* obj);

	void setOnline();

	void clearDisconnectEvent();

	void setClient(ZoneClientSession* client);

	void setOvert();

	void setCovert();

	void newChangeFactionEvent(unsigned int faction);

	void setRaceFileName(string& name);

	void setRaceID(unsigned char id);

	void setStartingLocation(string& loc);

	void setFactionRank(string& fac);

	void setItemShift(unsigned int shift);

	void toggleCharacterBit(unsigned int bit);

	bool awardBadge(unsigned int badgeindex);

	void setLinkDead();

	void setLoggingIn();

	void setAdminLevel(int level);

	int getAdminLevel();

	void setLastTestPositionX(float pos);

	void setLastTestPositionY(float pos);

	void setTradeRequestedPlayer(unsigned long long ID);

	unsigned long long getTradeRequestedPlayer();

	void launchFirework(int anim);

	void sendMessage(BaseMessage* msg);

	void sendMessage(StandaloneBaseMessage* msg);

	bool isJedi();

	void mutePlayer();

	void toggleImmune();

	bool hasSuiBox(unsigned int boxID);

	bool hasSuiBoxType(unsigned int boxTypeID);

	void removeSuiBox(unsigned int boxID);

	SuiBox* getSuiBox(unsigned int boxID);

	void addSuiBox(SuiBox* sui);

	unsigned int getNewSuiBoxID(unsigned int type);

	bool isOnline();

	bool isOffline();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	PlayerObject* getPlayerObject();

	CreatureObject* getConversatingCreature();

	string& getFirstName();

	string& getLastName();

	string& getFirstNameProper();

	string& getRaceFileName();

	unsigned char getRaceID();

	unicode& getBiography();

	unsigned long long getCharacterID();

	string& getStartingProfession();

	int getZoneIndex();

	string& getHairObject();

	ZoneClientSession* getClient();

	GroupObject* getGroupObject();

	string& getFactionRank();

	unsigned int getRebelPoints();

	unsigned int getImperialPoints();

	int getPvpRating();

	void setPvpRating(int value);

	void increasePvpRating(int value);

	void decreasePvpRating(int value);

	void getPlayersNearYou();

	int getRegionID();

	int getCertificationListSize();

	string& getCertification(int idx);

	bool checkCertification(string& certification);

	int getSlicingAbility();

	bool isChatMuted();

	bool isImmune();

	unsigned int nextMisoRFC();

	int checkMisoBSB(int tcb);

	void setMisoBSB(int tms);

	void addToCurMisoKeys(string& tck);

	bool isOnCurMisoKey(string& tmk);

	void removeFromCurMisoKeys(string& tck);

	void addToFinMisoKeys(string& tmp);

	bool hasCompletedMisoKey(string& tmk);

	CraftingTool* getCurrentCraftingTool();

	CraftingTool* getCraftingTool(const int type, bool doLock = true);

	void setCurrentCraftingTool(CraftingTool* ct);

	void clearCurrentCraftingTool();

	void prepareCraftingSession(CraftingTool* ct, DraftSchematic* ds);

	void addIngredientToSlot(TangibleObject* tano, int slot, int counter);

	void removeResourceFromCraft(unsigned long long resID, int slot, int counter);

	void nextCraftingStage(string& test);

	void craftingCustomization(string& name, int condition);

	void createPrototype(string& count);

	void createSchematic(string& count);

	void handleExperimenting(int count, int numRowsAttempted, string& expstring);

	void sendDraftSchematics();

	void addDraftSchematicsFromGroupName(const string& schematicGroupName);

	void subtractDraftSchematicsFromGroupName(const string& schematicGroupName);

	void addDraftSchematic(DraftSchematic* ds);

	void subtractDraftSchematic(DraftSchematic* ds);

	unsigned int getDraftSchematicListSize();

	unsigned int getDraftSchematicUpdateCount(unsigned int count);

	DraftSchematic* getDraftSchematic(unsigned int schematicID);

	DraftSchematic* getDraftSchematic(int index);

	bool isChangingFaction();

	Datapad* getDatapad();

	unsigned long long getNewItemID();

	unsigned int getItemShift();

	float getLastTestPositionX();

	float getLastTestPositionY();

	unsigned int getForcePower();

	unsigned int getForcePowerMax();

	unsigned long long getCurrentStructureID();

	void setCurrentStructureID(unsigned long long oid);

	SurveyTool* getSurveyTool();

	SurveyTool* getSampleTool();

	void setSurveyTool(SurveyTool* sTool);

	void setSampleTool(SurveyTool* sTool);

	void setSurveyWaypoint(WaypointObject* id);

	WaypointObject* getSurveyWaypoint();

	bool getCanSurvey();

	bool getCanSample();

	void setCanSurvey();

	void setCanSample();

	void setSurveyEvent(string& resourcename);

	void setSampleEvent(string& resourcename, bool firstTime = false);

	void setCancelSample(bool val);

	bool getCancelSample();

	void sendSampleTimeRemaining();

	void setSurveyErrorMessage();

	void setSampleErrorMessage();

	bool getSurveyErrorMessage();

	bool getSampleErrorMessage();

	void sendMail(string& mailsender, unicode& subjectSender, unicode& bodySender, string& charNameSender);

	void setEntertainerEvent();

	void clearEntertainerEvent();

	void setLastNpcConvStr(const string& conv);

	void setLastNpcConvMessStr(const string& mess);

	string& getLastNpcConvStr();

	string& getLastNpcConvMessStr();

protected:
	Player(DummyConstructorParameter* param);

	virtual ~Player();

	string _return_getCertification;
	string _return_getConsentEntry;
	string _return_getFactionRank;
	string _return_getFirstName;
	string _return_getFirstNameProper;
	string _return_getHairObject;
	string _return_getLastName;
	string _return_getLastNpcConvMessStr;
	string _return_getLastNpcConvStr;
	string _return_getNextSkillBox;
	string _return_getRaceFileName;
	string _return_getStartingProfession;

	unicode _return_getBiography;

	friend class PlayerHelper;
};

class PlayerImplementation;

class PlayerAdapter : public CreatureObjectAdapter {
public:
	PlayerAdapter(PlayerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void create(ZoneClientSession* client);

	void refuseCreate(ZoneClientSession* client);

	void load(ZoneClientSession* client);

	void reload(ZoneClientSession* client);

	void unload();

	void savePlayerState(bool doSchedule);

	void disconnect(bool closeClient, bool doLock);

	void logout(bool doLock);

	void userLogout(int msgCounter);

	void clearLogoutEvent();

	void makeCharacterMask();

	unsigned int getCharacterMask();

	void insertToZone(Zone* zone);

	void reinsertToZone(Zone* zone);

	void updateZone(bool lightUpdate);

	void updateZoneWithParent(unsigned long long cell, bool lightUpdate);

	void switchMap(int planetid);

	void doWarp(float x, float y, float z, float randomizeDistance, unsigned long long parentID);

	void bounceBack();

	void sendTo(Player* player);

	void sendToOwner();

	void notifySceneReady();

	void addDatapadItem(SceneObject* item);

	SceneObject* getDatapadItem(unsigned long long oid);

	void removeDatapadItem(unsigned long long oid);

	SceneObject* getPlayerItem(unsigned long long oid);

	unsigned int getTargetHealth();

	unsigned int getTargetStrength();

	unsigned int getTargetConstitution();

	unsigned int getTargetAction();

	unsigned int getTargetQuickness();

	unsigned int getTargetStamina();

	unsigned int getTargetMind();

	unsigned int getTargetFocus();

	unsigned int getTargetWillpower();

	void setTargetHealth(unsigned int health);

	void setTargetStrength(unsigned int strength);

	void setTargetConstitution(unsigned int constituition);

	void setTargetAction(unsigned int action);

	void setTargetQuickness(unsigned int quickness);

	void setTargetStamina(unsigned int stamina);

	void setTargetMind(unsigned int mind);

	void setTargetFocus(unsigned int focus);

	void setTargetWillpower(unsigned int willpower);

	unsigned int getMinHealth();

	unsigned int getMaxHealth();

	unsigned int getMinStrength();

	unsigned int getMaxStrength();

	unsigned int getMinConstitution();

	unsigned int getMaxConstitution();

	unsigned int getMinAction();

	unsigned int getMaxAction();

	unsigned int getMinQuickness();

	unsigned int getMaxQuickness();

	unsigned int getMinStamina();

	unsigned int getMaxStamina();

	unsigned int getMinMind();

	unsigned int getMaxMind();

	unsigned int getMinFocus();

	unsigned int getMaxFocus();

	unsigned int getMinWillpower();

	unsigned int getMaxWillpower();

	unsigned int getTotalAttribPoints();

	void queueFlourish(const string& modifier, unsigned long long target, unsigned int actionCntr);

	void clearQueueAction(unsigned int actioncntr, float timer, unsigned int tab1, unsigned int tab2);

	void queueAction(Player* player, unsigned long long target, unsigned int actionCRC, unsigned int actionCntr, const string& actionModifier);

	void deleteQueueAction(unsigned int actioncntr);

	void changePosture(int post);

	void doCenterOfBeing();

	void removeCenterOfBeing();

	void doPowerboost();

	void doPeace();

	void kill();

	void deathblow(Player* player);

	void revive();

	void doClone();

	void activateClone();

	void doRecovery();

	void activateReviveCountdown();

	void clearReviveCountdown();

	void countdownRevive(int counter);

	bool hasConsent(string& charID);

	bool giveConsent(string& name);

	bool revokeConsent(string& name);

	int getConsentSize();

	string& getConsentEntry(int index);

	void sendConsentBox();

	bool isRevivable();

	void addBuff(unsigned int buffcrc, float time);

	void lootCorpse(bool lootAll);

	void lootObject(Creature* creature, SceneObject* object);

	void addTradeItem(TangibleObject* item);

	void clearTradeItems();

	int getTradeSize();

	TangibleObject* getTradeItem(int idx);

	void setAcceptedTrade(bool val);

	bool hasAcceptedTrade();

	void setVerifiedTrade(bool val);

	bool hasVerifiedTrade();

	void setMoneyToTrade(unsigned int value);

	unsigned int getMoneyToTrade();

	bool getMeditate();

	void changeCloth(unsigned long long itemid);

	void changeWeapon(unsigned long long itemid);

	void changeArmor(unsigned long long itemid, bool forced);

	void setWeaponSkillMods(Weapon* weapon);

	void setArmorSkillMods(Armor* armor);

	bool setArmorEncumbrance(Armor* armor, bool forced);

	void applyAttachment(unsigned long long attachmentID, unsigned long long targetID);

	void applyPowerup(unsigned long long powerupID, unsigned long long targetID);

	void createItems();

	void loadItems();

	void createBaseStats();

	void decayInventory();

	bool hasFullInventory();

	void addInventoryItem(TangibleObject* item);

	void addInventoryResource(ResourceContainer* item);

	void equipPlayerItem(TangibleObject* item);

	void saveProfessions();

	void loadProfessions();

	void trainStartingProfession();

	bool trainSkillBox(const string& name, bool updateClient);

	void surrenderSkillBox(const string& name);

	void resetSkillBoxesIterator();

	int getSkillBoxesSize();

	string& getNextSkillBox();

	bool hasNextSkillBox();

	bool hasSkillBox(string& skillBox);

	void addWaypoint(WaypointObject* wp);

	bool removeWaypoint(WaypointObject* wp);

	WaypointObject* getWaypoint(unsigned long long id);

	void updateWaypoint(WaypointObject* wp);

	void saveWaypoints(Player* player);

	WaypointObject* searchWaypoint(Player* play, const string& name, int mode);

	void queueHeal(TangibleObject* medpack, unsigned int actionCRC, const string& attribute);

	void addXp(string& xpType, int xp, bool updateClient);

	void removeXp(string& xpType, int xp, bool updateClient);

	void removeFromDuelList(Player* targetPlayer);

	void addToDuelList(Player* targetPlayer);

	bool isInDuelWith(Player* targetPlayer, bool doLock);

	Player* getDuelListObject(int index);

	bool requestedDuelTo(Player* targetPlayer);

	bool isDuelListEmpty();

	int getDuelListSize();

	bool setGuild(unsigned int gid);

	void setGuild(Guild* gild);

	bool updateGuild(unsigned int gid);

	void updateGuild(Guild* guild);

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

	void sendSystemMessage(const string& msg);

	void sendSystemMessage(unicode& msg);

	void sendSystemMessage(const string& file, const string& str, unsigned long long targetid);

	void setConversatingCreature(CreatureObject* conversator);

	void setFirstName(const string& name);

	void setLastName(const string& name);

	void setFirstNameProper(const string& name);

	void setBiography(const string& bio);

	void setBiography(unicode& bio);

	bool changeForcePowerBar(int fp);

	void setForcePowerBar(int fp);

	void updateMaxForcePowerBar(bool updateClient);

	void setFoodFilling(int fill, bool updateClient);

	void setDrinkFilling(int fill, bool updateClient);

	void changeFoodFilling(int fill, bool updateClient);

	void changeDrinkFilling(int fill, bool updateClient);

	int getFoodFilling();

	int getDrinkFilling();

	void activateDigest();

	void activateQueueAction();

	void setCharacterID(unsigned long long id);

	void setStartingProfession(const string& prof);

	void setHairObject(const string& hair);

	void updateHair();

	void setPlayerObject(PlayerObject* obj);

	void setOnline();

	void clearDisconnectEvent();

	void setClient(ZoneClientSession* client);

	void setOvert();

	void setCovert();

	void newChangeFactionEvent(unsigned int faction);

	void setRaceFileName(string& name);

	void setRaceID(unsigned char id);

	void setStartingLocation(string& loc);

	void setFactionRank(string& fac);

	void setItemShift(unsigned int shift);

	void toggleCharacterBit(unsigned int bit);

	bool awardBadge(unsigned int badgeindex);

	void setLinkDead();

	void setLoggingIn();

	void setAdminLevel(int level);

	int getAdminLevel();

	void setLastTestPositionX(float pos);

	void setLastTestPositionY(float pos);

	void setTradeRequestedPlayer(unsigned long long ID);

	unsigned long long getTradeRequestedPlayer();

	void launchFirework(int anim);

	void sendMessage(BaseMessage* msg);

	void sendMessage(StandaloneBaseMessage* msg);

	bool isJedi();

	void mutePlayer();

	void toggleImmune();

	bool hasSuiBox(unsigned int boxID);

	bool hasSuiBoxType(unsigned int boxTypeID);

	void removeSuiBox(unsigned int boxID);

	SuiBox* getSuiBox(unsigned int boxID);

	void addSuiBox(SuiBox* sui);

	unsigned int getNewSuiBoxID(unsigned int type);

	bool isOnline();

	bool isOffline();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	PlayerObject* getPlayerObject();

	CreatureObject* getConversatingCreature();

	string& getFirstName();

	string& getLastName();

	string& getFirstNameProper();

	string& getRaceFileName();

	unsigned char getRaceID();

	unicode& getBiography();

	unsigned long long getCharacterID();

	string& getStartingProfession();

	int getZoneIndex();

	string& getHairObject();

	ZoneClientSession* getClient();

	GroupObject* getGroupObject();

	string& getFactionRank();

	unsigned int getRebelPoints();

	unsigned int getImperialPoints();

	int getPvpRating();

	void setPvpRating(int value);

	void increasePvpRating(int value);

	void decreasePvpRating(int value);

	void getPlayersNearYou();

	int getRegionID();

	int getCertificationListSize();

	string& getCertification(int idx);

	bool checkCertification(string& certification);

	int getSlicingAbility();

	bool isChatMuted();

	bool isImmune();

	unsigned int nextMisoRFC();

	int checkMisoBSB(int tcb);

	void setMisoBSB(int tms);

	void addToCurMisoKeys(string& tck);

	bool isOnCurMisoKey(string& tmk);

	void removeFromCurMisoKeys(string& tck);

	void addToFinMisoKeys(string& tmp);

	bool hasCompletedMisoKey(string& tmk);

	CraftingTool* getCurrentCraftingTool();

	CraftingTool* getCraftingTool(const int type, bool doLock);

	void setCurrentCraftingTool(CraftingTool* ct);

	void clearCurrentCraftingTool();

	void prepareCraftingSession(CraftingTool* ct, DraftSchematic* ds);

	void addIngredientToSlot(TangibleObject* tano, int slot, int counter);

	void removeResourceFromCraft(unsigned long long resID, int slot, int counter);

	void nextCraftingStage(string& test);

	void craftingCustomization(string& name, int condition);

	void createPrototype(string& count);

	void createSchematic(string& count);

	void handleExperimenting(int count, int numRowsAttempted, string& expstring);

	void sendDraftSchematics();

	void addDraftSchematicsFromGroupName(const string& schematicGroupName);

	void subtractDraftSchematicsFromGroupName(const string& schematicGroupName);

	void addDraftSchematic(DraftSchematic* ds);

	void subtractDraftSchematic(DraftSchematic* ds);

	unsigned int getDraftSchematicListSize();

	unsigned int getDraftSchematicUpdateCount(unsigned int count);

	DraftSchematic* getDraftSchematic(unsigned int schematicID);

	DraftSchematic* getDraftSchematic(int index);

	bool isChangingFaction();

	Datapad* getDatapad();

	unsigned long long getNewItemID();

	unsigned int getItemShift();

	float getLastTestPositionX();

	float getLastTestPositionY();

	unsigned int getForcePower();

	unsigned int getForcePowerMax();

	unsigned long long getCurrentStructureID();

	void setCurrentStructureID(unsigned long long oid);

	SurveyTool* getSurveyTool();

	SurveyTool* getSampleTool();

	void setSurveyTool(SurveyTool* sTool);

	void setSampleTool(SurveyTool* sTool);

	void setSurveyWaypoint(WaypointObject* id);

	WaypointObject* getSurveyWaypoint();

	bool getCanSurvey();

	bool getCanSample();

	void setCanSurvey();

	void setCanSample();

	void setSurveyEvent(string& resourcename);

	void setSampleEvent(string& resourcename, bool firstTime);

	void setCancelSample(bool val);

	bool getCancelSample();

	void sendSampleTimeRemaining();

	void setSurveyErrorMessage();

	void setSampleErrorMessage();

	bool getSurveyErrorMessage();

	bool getSampleErrorMessage();

	void sendMail(string& mailsender, unicode& subjectSender, unicode& bodySender, string& charNameSender);

	void setEntertainerEvent();

	void clearEntertainerEvent();

	void setLastNpcConvStr(const string& conv);

	void setLastNpcConvMessStr(const string& mess);

	string& getLastNpcConvStr();

	string& getLastNpcConvMessStr();

protected:
	string _param0_queueFlourish__string_long_int_;
	string _param4_queueAction__Player_long_int_int_string_;
	string _param0_hasConsent__string_;
	string _param0_giveConsent__string_;
	string _param0_revokeConsent__string_;
	string _param0_trainSkillBox__string_bool_;
	string _param0_surrenderSkillBox__string_;
	string _param0_hasSkillBox__string_;
	string _param1_searchWaypoint__Player_string_int_;
	string _param2_queueHeal__TangibleObject_int_string_;
	string _param0_addXp__string_int_bool_;
	string _param0_removeXp__string_int_bool_;
	string _param0_sendSystemMessage__string_;
	unicode _param0_sendSystemMessage__unicode_;
	string _param0_sendSystemMessage__string_string_long_;
	string _param1_sendSystemMessage__string_string_long_;
	string _param0_setFirstName__string_;
	string _param0_setLastName__string_;
	string _param0_setFirstNameProper__string_;
	string _param0_setBiography__string_;
	unicode _param0_setBiography__unicode_;
	string _param0_setStartingProfession__string_;
	string _param0_setHairObject__string_;
	string _param0_setRaceFileName__string_;
	string _param0_setStartingLocation__string_;
	string _param0_setFactionRank__string_;
	string _param0_checkCertification__string_;
	string _param0_addToCurMisoKeys__string_;
	string _param0_isOnCurMisoKey__string_;
	string _param0_removeFromCurMisoKeys__string_;
	string _param0_addToFinMisoKeys__string_;
	string _param0_hasCompletedMisoKey__string_;
	string _param0_nextCraftingStage__string_;
	string _param0_craftingCustomization__string_int_;
	string _param0_createPrototype__string_;
	string _param0_createSchematic__string_;
	string _param2_handleExperimenting__int_int_string_;
	string _param0_addDraftSchematicsFromGroupName__string_;
	string _param0_subtractDraftSchematicsFromGroupName__string_;
	string _param0_setSurveyEvent__string_;
	string _param0_setSampleEvent__string_bool_;
	string _param0_sendMail__string_unicode_unicode_string_;
	unicode _param1_sendMail__string_unicode_unicode_string_;
	unicode _param2_sendMail__string_unicode_unicode_string_;
	string _param3_sendMail__string_unicode_unicode_string_;
	string _param0_setLastNpcConvStr__string_;
	string _param0_setLastNpcConvMessStr__string_;
};

class PlayerHelper : public DistributedObjectClassHelper, public Singleton<PlayerHelper> {
	static PlayerHelper* staticInitializer;

public:
	PlayerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<PlayerHelper>;
};

#include "../creature/CreatureObjectImplementation.h"

class PlayerServant : public CreatureObjectImplementation {
public:
	Player* _this;

public:
	PlayerServant(unsigned long long oid);
	virtual ~PlayerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*PLAYER_H_*/
