#include "TSEvents.h"
#include "TSLua.h"

#define LUA_HANDLE(target, category,name) target.set_function(#name,&TSEvents::category::L##name)
#define LUA_MAPPED_HANDLE(target,category,name) target.set_function(#name,sol::overload(&TSEvents::category::Lid##name,&TSEvents::category::L##name))

void TSLua::load_events(sol::state& state)
{
    auto lua_events = state.new_usertype<TSEvents>("CTSEvents");

    auto world_events = state.new_usertype<TSEvents::WorldEvents>("WorldEvents");
    LUA_HANDLE(world_events, WorldEvents, OnOpenStateChange);
    LUA_HANDLE(world_events, WorldEvents, OnStartup);
    LUA_HANDLE(world_events, WorldEvents, OnShutdown);
    LUA_HANDLE(world_events, WorldEvents, OnShutdownCancel);
    LUA_HANDLE(world_events, WorldEvents, OnConfigLoad);
    LUA_HANDLE(world_events, WorldEvents, OnMotdChange);
    LUA_HANDLE(world_events, WorldEvents, OnShutdownInitiate);
    LUA_HANDLE(world_events, WorldEvents, OnUpdate);
    LUA_HANDLE(world_events, WorldEvents, OnCalcHonor);

    auto auction_events = state.new_usertype<TSEvents::AuctionEvents>("AuctionEvents");
    LUA_HANDLE(auction_events, AuctionEvents, OnAuctionAdd);
    LUA_HANDLE(auction_events, AuctionEvents, OnAuctionRemove);
    LUA_HANDLE(auction_events, AuctionEvents, OnAuctionSuccessful);
    LUA_HANDLE(auction_events, AuctionEvents, OnAuctionExpire);

    auto vehicle_events = state.new_usertype<TSEvents::VehicleEvents>("VehicleEvents");
    LUA_MAPPED_HANDLE(vehicle_events, VehicleEvents, OnInstall);
    LUA_MAPPED_HANDLE(vehicle_events, VehicleEvents, OnUninstall);
    LUA_MAPPED_HANDLE(vehicle_events, VehicleEvents, OnReset);
    LUA_MAPPED_HANDLE(vehicle_events, VehicleEvents, OnAddPassenger);
    LUA_MAPPED_HANDLE(vehicle_events, VehicleEvents, OnRemovePassenger);

    auto achievement_events = state.new_usertype<TSEvents::AchievementEvents>("AchievementEvents");
    LUA_HANDLE(achievement_events, AchievementEvents, OnComplete);
    LUA_HANDLE(achievement_events, AchievementEvents, OnUpdate);

    auto player_events = state.new_usertype<TSEvents::PlayerEvents>("PlayerEvents");
    LUA_HANDLE(player_events, PlayerEvents, OnPVPKill);
    LUA_HANDLE(player_events, PlayerEvents, OnCreatureKill);
    LUA_HANDLE(player_events, PlayerEvents, OnPlayerKilledByCreature);
    LUA_HANDLE(player_events, PlayerEvents, OnLevelChanged);
    LUA_HANDLE(player_events, PlayerEvents, OnFreeTalentPointsChanged);
    LUA_HANDLE(player_events, PlayerEvents, OnTalentsReset);
    LUA_HANDLE(player_events, PlayerEvents, OnMoneyChanged);
    LUA_HANDLE(player_events, PlayerEvents, OnMoneyLimit);
    LUA_HANDLE(player_events, PlayerEvents, OnGiveXP);
    LUA_HANDLE(player_events, PlayerEvents, OnReputationChange);
    LUA_HANDLE(player_events, PlayerEvents, OnDuelRequest);
    LUA_HANDLE(player_events, PlayerEvents, OnDuelStart);
    LUA_HANDLE(player_events, PlayerEvents, OnDuelEnd);
    LUA_HANDLE(player_events, PlayerEvents, OnSay);
    LUA_HANDLE(player_events, PlayerEvents, OnWhisper);
    LUA_HANDLE(player_events, PlayerEvents, OnChatGroup);
    LUA_HANDLE(player_events, PlayerEvents, OnChatGuild);
    LUA_HANDLE(player_events, PlayerEvents, OnChat);
    LUA_HANDLE(player_events, PlayerEvents, OnCommand);
    LUA_HANDLE(player_events, PlayerEvents, OnEmote);
    LUA_HANDLE(player_events, PlayerEvents, OnTextEmote);
    LUA_HANDLE(player_events, PlayerEvents, OnSpellCast);
    LUA_HANDLE(player_events, PlayerEvents, OnLogin);
    LUA_HANDLE(player_events, PlayerEvents, OnReload);
    LUA_HANDLE(player_events, PlayerEvents, OnLogout);
    LUA_HANDLE(player_events, PlayerEvents, OnCreate);
    LUA_HANDLE(player_events, PlayerEvents, OnCreateEarly);
    LUA_HANDLE(player_events, PlayerEvents, OnDelete);
    LUA_HANDLE(player_events, PlayerEvents, OnFailedDelete);
    LUA_HANDLE(player_events, PlayerEvents, OnSave);
    LUA_HANDLE(player_events, PlayerEvents, OnBindToInstance);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateZone);
    LUA_HANDLE(player_events, PlayerEvents, OnMapChanged);
    LUA_HANDLE(player_events, PlayerEvents, OnQuestObjectiveProgress);
    LUA_HANDLE(player_events, PlayerEvents, OnQuestStatusChange);
    LUA_HANDLE(player_events, PlayerEvents, OnMovieComplete);
    LUA_HANDLE(player_events, PlayerEvents, OnPlayerRepop);
    LUA_HANDLE(player_events, PlayerEvents, OnSendMail);
    LUA_HANDLE(player_events, PlayerEvents, OnGossipSelect);
    LUA_HANDLE(player_events, PlayerEvents, OnGossipSelectCode);
    LUA_HANDLE(player_events, PlayerEvents, OnGenerateItemLoot);
    LUA_HANDLE(player_events, PlayerEvents, OnLearnTalent);
    LUA_HANDLE(player_events, PlayerEvents, OnLootCorpse);
    //LUA_HANDLE(player_events, PlayerEvents, OnTradeComplete);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateDodgePercentage);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateBlockPercentage);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateParryPercentage);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateArmor);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateMaxHealth);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateMaxPower);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateManaRegen);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateMeleeHitChance);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateRuneRegen);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateExpertise);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateSpellCrit);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateArmorPenetration);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateMeleeHitChances);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateRangedHitChances);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateSpellHitChances);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateResistance);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateShieldBlock);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateCrit);
    LUA_HANDLE(player_events, PlayerEvents, OnCalcGreyLevel);
    LUA_HANDLE(player_events, PlayerEvents, OnCalcZeroDiff);
    LUA_HANDLE(player_events, PlayerEvents, OnCalcGroupGain);
    LUA_HANDLE(player_events, PlayerEvents, OnCalcIntellectManaBonus);
    LUA_HANDLE(player_events, PlayerEvents, OnCalcSkillGainChance);
    LUA_HANDLE(player_events, PlayerEvents, OnCalcTalentPoints);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateAttackPower);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateRangedAttackPower);
    LUA_HANDLE(player_events, PlayerEvents, OnGlyphInitForLevel);
    LUA_HANDLE(player_events, PlayerEvents, OnReputationPriceDiscount);
    LUA_HANDLE(player_events, PlayerEvents, OnSuccessfulInterrupt);
    LUA_HANDLE(player_events, PlayerEvents, OnCustomScriptedWeaponDamageMod);
    LUA_HANDLE(player_events, PlayerEvents, OnCustomScriptedDamageDoneMod); // After all custom mods in SpellDamagePctDone and Weapon Damage are calced by core
    LUA_HANDLE(player_events, PlayerEvents, OnCustomScriptedDamageTakenMod);
    LUA_HANDLE(player_events, PlayerEvents, OnCustomScriptedCritMod); // same as above but for crit chance
    LUA_HANDLE(player_events, PlayerEvents, OnCustomScriptedHealMod);
    LUA_HANDLE(player_events, PlayerEvents, OnPowerSpent);
    LUA_HANDLE(player_events, PlayerEvents, OnEnchantTriggered);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateSpellHealing);
    LUA_HANDLE(player_events, PlayerEvents, OnUpdateSpellDamage);
    LUA_HANDLE(player_events, PlayerEvents, OnRunesSpent);

    auto account_events = state.new_usertype<TSEvents::AccountEvents>("AccountEvents");
    LUA_HANDLE(account_events, AccountEvents, OnAccountLogin);
    LUA_HANDLE(account_events, AccountEvents, OnFailedAccountLogin);
    LUA_HANDLE(account_events, AccountEvents, OnEmailChange);
    LUA_HANDLE(account_events, AccountEvents, OnFailedEmailChange);
    LUA_HANDLE(account_events, AccountEvents, OnPasswordChange);
    LUA_HANDLE(account_events, AccountEvents, OnFailedPasswordChange);

    auto guild_events = state.new_usertype<TSEvents::GuildEvents>("GuildEvents");
    LUA_HANDLE(guild_events, GuildEvents, OnAddMember);
    LUA_HANDLE(guild_events, GuildEvents, OnRemoveMember);
    LUA_HANDLE(guild_events, GuildEvents, OnMOTDChanged);
    LUA_HANDLE(guild_events, GuildEvents, OnInfoChanged);
    LUA_HANDLE(guild_events, GuildEvents, OnCreate);
    LUA_HANDLE(guild_events, GuildEvents, OnDisband);
    LUA_HANDLE(guild_events, GuildEvents, OnMemberWitdrawMoney);
    LUA_HANDLE(guild_events, GuildEvents, OnMemberDepositMoney);
    LUA_HANDLE(guild_events, GuildEvents, OnEvent);
    LUA_HANDLE(guild_events, GuildEvents, OnBankEvent);

    auto group_events = state.new_usertype<TSEvents::GroupEvents>("GroupEvents");
    LUA_HANDLE(group_events, GroupEvents, OnAddMember);
    LUA_HANDLE(group_events, GroupEvents, OnInviteMember);
    LUA_HANDLE(group_events, GroupEvents, OnRemoveMember);
    LUA_HANDLE(group_events, GroupEvents, OnChangeLeader);
    LUA_HANDLE(group_events, GroupEvents, OnDisband);

    auto unit_events = state.new_usertype<TSEvents::UnitEvents>("UnitEvents");
    LUA_HANDLE(unit_events, UnitEvents, OnOutdoorsChanged);
    LUA_HANDLE(unit_events, UnitEvents, OnLiquidStatusChanged);
    LUA_HANDLE(unit_events, UnitEvents, OnCalcMissChance);
    LUA_HANDLE(unit_events, UnitEvents, OnCalcHeal);
    LUA_HANDLE(unit_events, UnitEvents, OnMeleeDamageEarly);
    LUA_HANDLE(unit_events, UnitEvents, OnMeleeDamageLate);
    LUA_HANDLE(unit_events, UnitEvents, OnCalcMeleeCrit);
    LUA_HANDLE(unit_events, UnitEvents, OnCalcMeleeOutcome);
    LUA_HANDLE(unit_events, UnitEvents, OnCalcThreatEarly);
    LUA_HANDLE(unit_events, UnitEvents, OnCalcThreatLate);
    LUA_HANDLE(unit_events, UnitEvents, OnCalcScaleThreat);
    LUA_HANDLE(unit_events, UnitEvents, OnDeathEarly);
    LUA_HANDLE(unit_events, UnitEvents, OnDeath);
    LUA_HANDLE(unit_events, UnitEvents, OnEnterCombat);
    LUA_HANDLE(unit_events, UnitEvents, OnExitCombat);
    LUA_HANDLE(unit_events, UnitEvents, OnExitCombat);
    LUA_HANDLE(unit_events, UnitEvents, OnEnterCombatWith);
    LUA_HANDLE(unit_events, UnitEvents, OnExitCombatWith);
    LUA_HANDLE(unit_events, UnitEvents, OnSetTarget);
    LUA_HANDLE(unit_events, UnitEvents, OnDamageDealt);
    LUA_HANDLE(unit_events, UnitEvents, OnDamageTaken);
    LUA_HANDLE(unit_events, UnitEvents, OnLossOfControl);
    LUA_HANDLE(unit_events, UnitEvents, OnRageGainedViaAttack);

    auto spell_events = state.new_usertype<TSEvents::SpellEvents>("SpellEvents");
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCast);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCheckCast);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnDispel);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffect);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectApplyGlyph);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnHit);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnTick);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnRemove);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnApply);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnDamageEarly);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnDamageLate);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnPeriodicDamage);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCalcMiss);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCalcCrit);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCalcAuraCrit);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCalcReflect);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCalcHit);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCalcResist);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCalcMeleeMiss);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCalcSpellPowerLevelPenalty);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnTrainerSend);

    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCheckAreaTarget);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCheckEffectProc);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnCheckProc);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectPeriodic);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectProc);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnPrepareProc);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnProc);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnAfterDispel);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnAfterEffectApply);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnAfterEffectProc);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnAfterEffectRemove);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnAfterProc);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnDispel);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectAbsorb);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectAfterAbsorb);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectAfterManaShield);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectCalcAmount);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectCalcPeriodic);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectCalcSpellMod);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectManaShield);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnEffectSplit);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnSetDuration);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnAfterCast);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnAfterHit);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnBeforeCast);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnBeforeHit);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnDestinationTargetSelect);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnObjectAreaTargetSelect);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnObjectTargetSelect);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnOnResistAbsorbCalculate);
    LUA_MAPPED_HANDLE(spell_events, SpellEvents, OnHeal);

    LUA_MAPPED_HANDLE(spell_events, SpellEvents, CanAuraBeBrokenBySpell);

    auto creature_events = state.new_usertype<TSEvents::CreatureEvents>("CreatureEvents");
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnMoveInLOS);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnJustEnteredCombat);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnJustEngagedWith);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnDeathEarly);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnDeath);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnKilledUnit);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnSummoned);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnDespawn);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnIsSummoned);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnSummonDespawn);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnSummonDies);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnHitBySpell);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnSpellHitTarget);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnSpellCastFinished);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnJustAppeared);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnCharmed);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnReachedHome);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnReceiveEmote);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnOwnerAttacked);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnOwnerAttacks);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnCorpseRemoved);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnWaypointStarted);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnWaypointReached);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnWaypointPathEnded);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnPassengerBoarded);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnSpellClick);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateAI);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnGenerateLoot);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnCreate);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnReload);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnRemove);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnCanGeneratePickPocketLoot);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnGeneratePickPocketLoot);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnGenerateSkinningLoot);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateLvlDepMaxHealth);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateLvlDepMaxMana);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateLvlDepBaseDamage);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateLvlDepArmor);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateLvlDepAttackPower);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnSendVendorItem);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnGossipHello);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnGossipSelect);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnGossipSelectCode);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnQuestAccept);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnQuestReward);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateResistance);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateArmor);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateMaxHealth);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateMaxPower);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateAttackPowerDamage);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnUpdateDamagePhysical);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnCalcColorCode);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnCalcGain);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnCalcBaseGain);
    LUA_MAPPED_HANDLE(creature_events, CreatureEvents, OnMovementInform);

    auto gameobject_events = state.new_usertype<TSEvents::GameObjectEvents>("GameObjectEvents");
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnUpdate);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnDialogStatus);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnDestroyed);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnDamaged);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnLootStateChanged);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnGOStateChanged);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnGossipHello);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnGossipSelect);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnGossipSelectCode);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnCreate);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnReload);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnRemove);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnUse);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnQuestAccept);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnQuestReward);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnGenerateLoot);
    LUA_MAPPED_HANDLE(gameobject_events, GameObjectEvents, OnGenerateFishLoot);

    auto map_events = state.new_usertype<TSEvents::MapEvents>("MapEvents");
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnCreate);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnReload);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnUpdate);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnPlayerEnter);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnPlayerLeave);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnCreatureCreate);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnCreatureRemove);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnGameObjectCreate);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnGameObjectRemove);
    LUA_MAPPED_HANDLE(map_events, MapEvents, OnCheckEncounter);

    auto battleground_events = state.new_usertype<TSEvents::BattlegroundEvents>("BattlegroundEvents");
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnCanCreate);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnReload);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnCreate);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnReset);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnOpenDoors);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnCloseDoors);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnDestroyGate);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnAchievementCriteria);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnAddPlayer);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnPlayerLogin);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnPlayerLogout);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnUpdateScore);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnEndEarly);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnEndLate);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnUpdateEarly);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnUpdateLate);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnRemovePlayer);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnKillPlayer);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnKillCreature);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnAddCreature);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnAddGameObject);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnAddSpiritGuide);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnAreaTrigger);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnGenericEvent);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnDropFlag);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnClickFlag);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnPlayerUnderMap);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnSendScore);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnWeight);
    LUA_MAPPED_HANDLE(battleground_events, BattlegroundEvents, OnSelect);

    auto instance_events = state.new_usertype<TSEvents::InstanceEvents>("InstanceEvents");
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnCreate);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnReload);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnLoad);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnSave);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnUpdate);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnPlayerEnter);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnPlayerLeave);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnBossStateChange);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnCanKillBoss);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnFillInitialWorldStates);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnSetBossNumber);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnLoadBossBoundaries);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnLoadMinionData);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnLoadDoorData);
    LUA_MAPPED_HANDLE(instance_events, InstanceEvents, OnLoadObjectData);

    auto item_events = state.new_usertype<TSEvents::ItemEvents>("ItemEvents");
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnUse);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnExpire);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnRemove);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnCastSpell);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnQuestAccept);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnGossipHello);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnGossipSelect);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnGossipSelectCode);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnCanChangeEquipState);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnUnequip);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnBank);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnCanEquip);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnEquip);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnCanUse);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnCanUseType);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnLFGRollEarly);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnDestroyEarly);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnTakenAsLoot);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnCalculateFeralAttackPower);
    LUA_MAPPED_HANDLE(item_events, ItemEvents, OnItemCrafted);

    auto quest_events = state.new_usertype<TSEvents::QuestEvents>("QuestEvents");
    LUA_MAPPED_HANDLE(quest_events, QuestEvents, OnAccept);
    LUA_MAPPED_HANDLE(quest_events, QuestEvents, OnReward);
    LUA_MAPPED_HANDLE(quest_events, QuestEvents, OnRewardXP);
    LUA_MAPPED_HANDLE(quest_events, QuestEvents, OnObjectiveProgress);
    LUA_MAPPED_HANDLE(quest_events, QuestEvents, OnStatusChanged);
    LUA_MAPPED_HANDLE(quest_events, QuestEvents, OnSpellFinish);
    LUA_MAPPED_HANDLE(quest_events, QuestEvents, OnQuestRewardItem);

#if TRINITY
    auto area_trigger_events = state.new_usertype<TSEvents::AreaTriggerEvents>("AreaTriggerEvents");
    LUA_MAPPED_HANDLE(area_trigger_events, AreaTriggerEvents, OnTrigger);
#endif
    auto gameevent_events = state.new_usertype<TSEvents::GameEventsEvents>("GameEventsEvents");
    LUA_MAPPED_HANDLE(gameevent_events, GameEventsEvents, OnStart);
    LUA_MAPPED_HANDLE(gameevent_events, GameEventsEvents, OnUpdateState);
    LUA_MAPPED_HANDLE(gameevent_events, GameEventsEvents, OnEnd);

    auto smartaction_events = state.new_usertype<TSEvents::SmartActionEvents>("SmartActionEvents");
    LUA_MAPPED_HANDLE(smartaction_events, SmartActionEvents, OnActivateEarly);
    LUA_MAPPED_HANDLE(smartaction_events, SmartActionEvents, OnActivateLate);

    auto condition_events = state.new_usertype<TSEvents::ConditionEvents>("ConditionEvents");
    LUA_MAPPED_HANDLE(condition_events, ConditionEvents, OnCheck);

    auto custompacket_events = state.new_usertype<TSEvents::CustomPacketEvents>("CustomPacketEvents");
    LUA_MAPPED_HANDLE(custompacket_events, CustomPacketEvents, OnReceive);

    auto worldpacket_events = state.new_usertype<TSEvents::WorldPacketEvents>("WorldPacketEvents");
    LUA_MAPPED_HANDLE(worldpacket_events, WorldPacketEvents, OnReceive);
    LUA_MAPPED_HANDLE(worldpacket_events, WorldPacketEvents, OnSend);

    lua_events["World"] = &TSEvents::World;
    lua_events["Unit"] = &TSEvents::Unit;
    lua_events["AuctionHouse"] = &TSEvents::AuctionHouse;
    lua_events["Vehicle"] = &TSEvents::Vehicle;
    lua_events["Player"] = &TSEvents::Player;
    lua_events["Account"] = &TSEvents::Account;
    lua_events["Guild"] = &TSEvents::Guild;
    lua_events["Group"] = &TSEvents::Group;
    lua_events["Spell"] = &TSEvents::Spell;
    lua_events["Creature"] = &TSEvents::Creature;
    lua_events["Battleground"] = &TSEvents::Battleground;
    lua_events["Item"] = &TSEvents::Item;
    lua_events["Quest"] = &TSEvents::Quest;
#if TRINITY
    lua_events["AreaTrigger"] = &TSEvents::AreaTrigger;
#endif
    lua_events["Map"] = &TSEvents::Map;
    lua_events["Instance"] = &TSEvents::Instance;
    lua_events["Achievement"] = &TSEvents::Achievement;
    lua_events["GameEvent"] = &TSEvents::GameEvent;
    lua_events["SmartAction"] = &TSEvents::SmartAction;
    lua_events["Condition"] = &TSEvents::Condition;
    lua_events["CustomPacket"] = &TSEvents::CustomPacket;
    lua_events["WorldPacket"] = &TSEvents::WorldPacket;
    lua_events["GameObject"] = &TSEvents::GameObject;
}