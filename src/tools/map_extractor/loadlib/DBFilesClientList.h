/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DBFilesClientList_h__
#define DBFilesClientList_h__

struct DB2FileInfo
{
    uint32 FileDataId;
    char const* Name;
};

DB2FileInfo const DBFilesClientList[] =
{
    { 1260179, "Achievement.db2" },
    { 1324299, "Achievement_Category.db2" },
    { 1115949, "AdventureJournal.db2" },
    { 1267070, "AdventureMapPOI.db2" },
    { 1710672, "AlliedRace.db2" },
    { 1304323, "AnimKit.db2" },
    { 1375433, "AnimKitBoneSet.db2" },
    { 1266937, "AnimKitBoneSetAlias.db2" },
    { 1300872, "AnimKitConfig.db2" },
    { 1300873, "AnimKitConfigBoneSet.db2" },
    { 1266540, "AnimKitPriority.db2" },
    { 1559807, "AnimKitReplacement.db2" },
    { 1304324, "AnimKitSegment.db2" },
    { 1301100, "AnimReplacement.db2" },
    { 1284817, "AnimReplacementSet.db2" },
    { 3286805, "AnimaCable.db2" },
    { 3286804, "AnimaCylinder.db2" },
    { 3153990, "AnimaMaterial.db2" },
    { 1375431, "AnimationData.db2" },
    { 2123730, "AreaConditionalData.db2" },
    { 1537162, "AreaFarClipOverride.db2" },
    { 1093406, "AreaGroupMember.db2" },
    { 1000630, "AreaPOI.db2" },
    { 1000631, "AreaPOIState.db2" },
    { 1353545, "AreaTable.db2" },
    { 1354401, "AreaTrigger.db2" },
    { 1352378, "AreaTriggerActionSet.db2" },
    { 4266572, "AreaTriggerBoundedPlane.db2" },
    { 1332554, "AreaTriggerBox.db2" },
    { 1937227, "AreaTriggerCreateProperties.db2" },
    { 1121943, "AreaTriggerCylinder.db2" },
    { 4223661, "AreaTriggerDisk.db2" },
    { 1315630, "AreaTriggerSphere.db2" },
    { 3849793, "ArenaCcItem.db2" },
    { 1284818, "ArmorLocation.db2" },
    { 1007934, "Artifact.db2" },
    { 1116407, "ArtifactAppearance.db2" },
    { 1116408, "ArtifactAppearanceSet.db2" },
    { 1376210, "ArtifactCategory.db2" },
    { 2029780, "ArtifactItemToTransmog.db2" },
    { 1007937, "ArtifactPower.db2" },
    { 1133731, "ArtifactPowerLink.db2" },
    { 1597467, "ArtifactPowerPicker.db2" },
    { 1261405, "ArtifactPowerRank.db2" },
    { 1036203, "ArtifactQuestXP.db2" },
    { 1600114, "ArtifactTier.db2" },
    { 1094540, "ArtifactUnlock.db2" },
    { 1237439, "AuctionHouse.db2" },
    { 4366440, "AuctionHouseCategory.db2" },
    { 1846046, "AzeriteEmpoweredItem.db2" },
    { 2829665, "AzeriteEssence.db2" },
    { 2829666, "AzeriteEssencePower.db2" },
    { 1846048, "AzeriteItem.db2" },
    { 1915395, "AzeriteItemMilestonePower.db2" },
    { 3148050, "AzeriteKnowledgeMultiplier.db2" },
    { 3147968, "AzeriteLevelInfo.db2" },
    { 1846044, "AzeritePower.db2" },
    { 1846040, "AzeritePowerSetMember.db2" },
    { 1846043, "AzeriteTierUnlock.db2" },
    { 2446322, "AzeriteTierUnlockSet.db2" },
    { 2564314, "AzeriteUnlockMapping.db2" },
    { 1284819, "BankBagSlotPrices.db2" },
    { 1373459, "BannedAddons.db2" },
    { 1237437, "BarberShopStyle.db2" },
    { 2499852, "BarrageEffect.db2" },
    { 841610, "BattlePetAbility.db2" },
    { 801575, "BattlePetAbilityEffect.db2" },
    { 801576, "BattlePetAbilityState.db2" },
    { 801577, "BattlePetAbilityTurn.db2" },
    { 801578, "BattlePetBreedQuality.db2" },
    { 801579, "BattlePetBreedState.db2" },
    { 1802988, "BattlePetDisplayOverride.db2" },
    { 801580, "BattlePetEffectProperties.db2" },
    { 841648, "BattlePetNPCTeamMember.db2" },
    { 841622, "BattlePetSpecies.db2" },
    { 801581, "BattlePetSpeciesState.db2" },
    { 801582, "BattlePetSpeciesXAbility.db2" },
    { 3669304, "BattlePetSpeciesXCovenant.db2" },
    { 801583, "BattlePetState.db2" },
    { 801584, "BattlePetVisual.db2" },
    { 1360265, "BattlemasterList.db2" },
    { 1525607, "BeamEffect.db2" },
    { 1467254, "BoneWindModifierModel.db2" },
    { 1416756, "BoneWindModifiers.db2" },
    { 1983274, "BonusRoll.db2" },
    { 1367866, "Bounty.db2" },
    { 1367865, "BountySet.db2" },
    { 841604, "BroadcastText.db2" },
    { 2166900, "BroadcastTextDuration.db2" },
    { 1117695, "CameraEffect.db2" },
    { 1117696, "CameraEffectEntry.db2" },
    { 1343308, "CameraMode.db2" },
    { 2031607, "Campaign.db2" },
    { 2031611, "CampaignXCondition.db2" },
    { 2036722, "CampaignXQuestLine.db2" },
    { 1283018, "CastableRaidBuffs.db2" },
    { 1592470, "CelestialBody.db2" },
    { 1068162, "Cfg_Categories.db2" },
    { 1080949, "Cfg_Configs.db2" },
    { 1082876, "Cfg_Regions.db2" },
    { 2965645, "ChallengeModeItemBonusOverride.db2" },
    { 1343386, "CharBaseInfo.db2" },
    { 1375798, "CharBaseSection.db2" },
    { 1360262, "CharComponentTextureLayouts.db2" },
    { 1360263, "CharComponentTextureSections.db2" },
    { 1256914, "CharHairGeosets.db2" },
    { 2388725, "CharSectionCondition.db2" },
    { 972425, "CharShipment.db2" },
    { 972405, "CharShipmentContainer.db2" },
    { 3055696, "CharStartKit.db2" },
    { 1349054, "CharTitles.db2" },
    { 1369752, "CharacterFacialHairStyles.db2" },
    { 1344281, "CharacterLoadout.db2" },
    { 1302846, "CharacterLoadoutItem.db2" },
    { 3724843, "CharacterLoadoutPet.db2" },
    { 1815417, "CharacterServiceInfo.db2" },
    { 1345278, "ChatChannels.db2" },
    { 1117084, "ChatProfanity.db2" },
    { 1306188, "ChrClassRaceSex.db2" },
    { 1267497, "ChrClassTitle.db2" },
    { 3754770, "ChrClassUIChrModelInfo.db2" },
    { 1316515, "ChrClassUIDisplay.db2" },
    { 1267498, "ChrClassVillain.db2" },
    { 1361031, "ChrClasses.db2" },
    { 1121420, "ChrClassesXPowerTypes.db2" },
    { 3671168, "ChrCreateClassAnimTarget.db2" },
    { 3671169, "ChrCreateClassAnimTargetInfo.db2" },
    { 3590348, "ChrCustClientChoiceConversion.db2" },
    { 3952714, "ChrCustItemGeoModify.db2" },
    { 1611874, "ChrCustomization.db2" },
    { 3460181, "ChrCustomizationBoneSet.db2" },
    { 3526439, "ChrCustomizationCategory.db2" },
    { 3450554, "ChrCustomizationChoice.db2" },
    { 3460182, "ChrCustomizationCondModel.db2" },
    { 3463337, "ChrCustomizationConversion.db2" },
    { 3593032, "ChrCustomizationDisplayInfo.db2" },
    { 3512765, "ChrCustomizationElement.db2" },
    { 3456171, "ChrCustomizationGeoset.db2" },
    { 3459652, "ChrCustomizationMaterial.db2" },
    { 3384247, "ChrCustomizationOption.db2" },
    { 3450453, "ChrCustomizationReq.db2" },
    { 3580359, "ChrCustomizationReqChoice.db2" },
    { 3460183, "ChrCustomizationSkinnedModel.db2" },
    { 4724136, "ChrCustomizationVisReq.db2" },
    { 4672833, "ChrCustomizationVoice.db2" },
    { 3384313, "ChrModel.db2" },
    { 3566562, "ChrModelMaterial.db2" },
    { 3548976, "ChrModelTextureLayer.db2" },
    { 3507821, "ChrRaceRacialAbility.db2" },
    { 3490304, "ChrRaceXChrModel.db2" },
    { 1305311, "ChrRaces.db2" },
    { 4566929, "ChrRacesCreateScreenIcon.db2" },
    { 4195187, "ChrSelectBackgroundCDI.db2" },
    { 1343390, "ChrSpecialization.db2" },
    { 984529, "ChrUpgradeBucket.db2" },
    { 984528, "ChrUpgradeBucketSpell.db2" },
    { 984530, "ChrUpgradeTier.db2" },
    { 1294214, "CinematicCamera.db2" },
    { 1134583, "CinematicSequences.db2" },
    { 1939843, "ClientSceneEffect.db2" },
    { 1465903, "CloakDampening.db2" },
    { 2175218, "CloneEffect.db2" },
    { 1120958, "CombatCondition.db2" },
    { 3067644, "CommentatorIndirectSpell.db2" },
    { 1664251, "CommentatorStartLocation.db2" },
    { 1661584, "CommentatorTrackedCooldown.db2" },
    { 2098645, "CommunityIcon.db2" },
    { 1349053, "ComponentModelFileData.db2" },
    { 1278239, "ComponentTextureFileData.db2" },
    { 3501965, "ConditionalContentTuning.db2" },
    { 1709409, "ConfigurationWarning.db2" },
    { 4668112, "ContentRestrictionRule.db2" },
    { 4281307, "ContentRestrictionRuleSet.db2" },
    { 1962930, "ContentTuning.db2" },
    { 2976765, "ContentTuningXExpected.db2" },
    { 4659576, "ContentTuningXLabel.db2" },
    { 1587153, "Contribution.db2" },
    { 2143633, "ContributionStyle.db2" },
    { 2143634, "ContributionStyleContainer.db2" },
    { 1260801, "ConversationLine.db2" },
    { 3220711, "CorruptionEffects.db2" },
    { 3384973, "Covenant.db2" },
    { 4545611, "CraftingData.db2" },
    { 4659601, "CraftingDataEnchantQuality.db2" },
    { 4545612, "CraftingDataItemQuality.db2" },
    { 4373536, "CraftingDifficulty.db2" },
    { 4373537, "CraftingDifficultyQuality.db2" },
    { 4529122, "CraftingOrder.db2" },
    { 4688652, "CraftingOrderHouse.db2" },
    { 4373538, "CraftingQuality.db2" },
    { 4541803, "CraftingReagentEffect.db2" },
    { 4382197, "CraftingReagentQuality.db2" },
    { 841631, "Creature.db2" },
    { 879282, "CreatureDifficulty.db2" },
    { 4044373, "CreatureDifficultyTreasure.db2" },
    { 1146692, "CreatureDispXUiCamera.db2" },
    { 1108759, "CreatureDisplayInfo.db2" },
    { 1332686, "CreatureDisplayInfoCond.db2" },
    { 3670439, "CreatureDisplayInfoCondXChoice.db2" },
    { 1586882, "CreatureDisplayInfoEvt.db2" },
    { 1264997, "CreatureDisplayInfoExtra.db2" },
    { 1720141, "CreatureDisplayInfoGeosetData.db2" },
    { 3692043, "CreatureDisplayInfoOption.db2" },
    { 1146698, "CreatureDisplayInfoTrn.db2" },
    { 1351351, "CreatureFamily.db2" },
    { 1131322, "CreatureImmunities.db2" },
    { 3055733, "CreatureLabel.db2" },
    { 1365368, "CreatureModelData.db2" },
    { 1125666, "CreatureMovementInfo.db2" },
    { 1344466, "CreatureSoundData.db2" },
    { 4178576, "CreatureSoundFidget.db2" },
    { 1131315, "CreatureType.db2" },
    { 1587158, "CreatureXContribution.db2" },
    { 1864302, "CreatureXDisplayInfo.db2" },
    { 3055738, "CreatureXUiWidgetSet.db2" },
    { 1263817, "Criteria.db2" },
    { 1263818, "CriteriaTree.db2" },
    { 1345969, "CriteriaTreeXEffect.db2" },
    { 1125667, "CurrencyCategory.db2" },
    { 1934603, "CurrencyContainer.db2" },
    { 1095531, "CurrencyTypes.db2" },
    { 892585, "Curve.db2" },
    { 892586, "CurvePoint.db2" },
    { 1279415, "DeathThudLookups.db2" },
    { 1278176, "DecalProperties.db2" },
    { 1279100, "DeclinedWord.db2" },
    { 1279099, "DeclinedWordCases.db2" },
    { 1122116, "DestructibleModelData.db2" },
    { 922722, "DeviceBlacklist.db2" },
    { 1352127, "Difficulty.db2" },
    { 4279827, "DisplaySeason.db2" },
    { 1304325, "DissolveEffect.db2" },
    { 922720, "DriverBlacklist.db2" },
    { 1347279, "DungeonEncounter.db2" },
    { 1283019, "DurabilityCosts.db2" },
    { 1130268, "DurabilityQuality.db2" },
    { 1387381, "EdgeGlowEffect.db2" },
    { 1343602, "Emotes.db2" },
    { 1347273, "EmotesText.db2" },
    { 1283024, "EmotesTextData.db2" },
    { 1286524, "EmotesTextSound.db2" },
    { 1278398, "EnvironmentalDamage.db2" },
    { 1343313, "Exhaustion.db2" },
    { 1937326, "ExpectedStat.db2" },
    { 1969773, "ExpectedStatMod.db2" },
    { 3527889, "ExtraAbilityInfo.db2" },
    { 1361972, "Faction.db2" },
    { 1343595, "FactionGroup.db2" },
    { 1361579, "FactionTemplate.db2" },
    { 4501047, "FlightCapability.db2" },
    { 4644249, "FlightCapabilityXGlideEvent.db2" },
    { 1308056, "FootprintTextures.db2" },
    { 1267647, "FootstepTerrainLookup.db2" },
    { 1237638, "FriendshipRepReaction.db2" },
    { 1237639, "FriendshipReputation.db2" },
    { 1348282, "FullScreenEffect.db2" },
    { 1283025, "GMSurveyAnswers.db2" },
    { 1278177, "GMSurveyCurrentSurvey.db2" },
    { 1278178, "GMSurveyQuestions.db2" },
    { 1283020, "GMSurveySurveys.db2" },
    { 2922072, "GameClockDebug.db2" },
    { 3565753, "GameObjectAnimGroupMember.db2" },
    { 1266737, "GameObjectArtKit.db2" },
    { 1302847, "GameObjectDiffAnimMap.db2" },
    { 1266277, "GameObjectDisplayInfo.db2" },
    { 1345272, "GameObjectDisplayInfoXSoundKit.db2" },
    { 4621877, "GameObjectLabel.db2" },
    { 841620, "GameObjects.db2" },
    { 3405438, "GameParameter.db2" },
    { 1368021, "GameTips.db2" },
    { 966238, "GarrAbility.db2" },
    { 1020248, "GarrAbilityCategory.db2" },
    { 966241, "GarrAbilityEffect.db2" },
    { 3305399, "GarrAutoCombatant.db2" },
    { 3305400, "GarrAutoSpell.db2" },
    { 3307335, "GarrAutoSpellEffect.db2" },
    { 929747, "GarrBuilding.db2" },
    { 943937, "GarrBuildingDoodadSet.db2" },
    { 983298, "GarrBuildingPlotInst.db2" },
    { 981570, "GarrClassSpec.db2" },
    { 1380674, "GarrClassSpecPlayerCond.db2" },
    { 975304, "GarrEncounter.db2" },
    { 1354772, "GarrEncounterSetXEncounter.db2" },
    { 967961, "GarrEncounterXMechanic.db2" },
    { 981569, "GarrFollItemSetMember.db2" },
    { 1345970, "GarrFollSupportSpell.db2" },
    { 949906, "GarrFollower.db2" },
    { 970979, "GarrFollowerLevelXP.db2" },
    { 1027793, "GarrFollowerQuality.db2" },
    { 1361029, "GarrFollowerSetXFollower.db2" },
    { 1118784, "GarrFollowerType.db2" },
    { 1412636, "GarrFollowerUICreature.db2" },
    { 968468, "GarrFollowerXAbility.db2" },
    { 1572314, "GarrItemLevelUpgradeData.db2" },
    { 967963, "GarrMechanic.db2" },
    { 1391531, "GarrMechanicSetXMechanic.db2" },
    { 967964, "GarrMechanicType.db2" },
    { 967962, "GarrMission.db2" },
    { 3055759, "GarrMissionSet.db2" },
    { 1125220, "GarrMissionTexture.db2" },
    { 984174, "GarrMissionType.db2" },
    { 967960, "GarrMissionXEncounter.db2" },
    { 1359096, "GarrMissionXFollower.db2" },
    { 1138458, "GarrMssnBonusAbility.db2" },
    { 937634, "GarrPlot.db2" },
    { 929743, "GarrPlotBuilding.db2" },
    { 929742, "GarrPlotInstance.db2" },
    { 937635, "GarrPlotUICategory.db2" },
    { 939295, "GarrSiteLevel.db2" },
    { 940404, "GarrSiteLevelPlotInst.db2" },
    { 937647, "GarrSpecialization.db2" },
    { 1416758, "GarrString.db2" },
    { 3195601, "GarrTalTreeXGarrTalResearch.db2" },
    { 1361032, "GarrTalent.db2" },
    { 3514438, "GarrTalentCost.db2" },
    { 3534056, "GarrTalentMapPOI.db2" },
    { 3069763, "GarrTalentRank.db2" },
    { 4382239, "GarrTalentRankGroupEntry.db2" },
    { 4389481, "GarrTalentRankGroupResearchMod.db2" },
    { 3195518, "GarrTalentResearch.db2" },
    { 3612617, "GarrTalentSocketProperties.db2" },
    { 1361030, "GarrTalentTree.db2" },
    { 1333161, "GarrType.db2" },
    { 976037, "GarrUiAnimClassInfo.db2" },
    { 976035, "GarrUiAnimRaceInfo.db2" },
    { 1343604, "GemProperties.db2" },
    { 4644012, "GlideEvent.db2" },
    { 4682325, "GlideEventBlendTimes.db2" },
    { 4328468, "GlobalColor.db2" },
    { 3752002, "GlobalCurve.db2" },
    { 3756368, "GlobalGameContentTuning.db2" },
    { 4082838, "GlobalPlayerCondition.db2" },
    { 4082839, "GlobalPlayerConditionSet.db2" },
    { 1394440, "GlobalStrings.db2" },
    { 1270147, "GlyphBindableSpell.db2" },
    { 948546, "GlyphExclusiveCategory.db2" },
    { 1345274, "GlyphProperties.db2" },
    { 948496, "GlyphRequiredSpec.db2" },
    { 4278503, "GossipNPCOption.db2" },
    { 4335720, "GossipNPCOptionDisplayInfo.db2" },
    { 4407361, "GossipXGarrTalentTrees.db2" },
    { 3622253, "GossipXUIDisplayInfo.db2" },
    { 2433582, "GradientEffect.db2" },
    { 1308057, "GroundEffectDoodad.db2" },
    { 1308499, "GroundEffectTexture.db2" },
    { 974813, "GroupFinderActivity.db2" },
    { 974814, "GroupFinderActivityGrp.db2" },
    { 4206623, "GroupFinderActivityXPvpBracket.db2" },
    { 974812, "GroupFinderCategory.db2" },
    { 1286526, "GuildColorBackground.db2" },
    { 1286527, "GuildColorBorder.db2" },
    { 1286525, "GuildColorEmblem.db2" },
    { 2734754, "GuildEmblem.db2" },
    { 1135238, "GuildPerkSpells.db2" },
    { 2921008, "GuildShirtBackground.db2" },
    { 2921475, "GuildShirtBorder.db2" },
    { 2909769, "GuildTabardBackground.db2" },
    { 2920485, "GuildTabardBorder.db2" },
    { 2910470, "GuildTabardEmblem.db2" },
    { 1097696, "Heirloom.db2" },
    { 1348283, "HelmetAnimScaling.db2" },
    { 2821752, "HelmetGeosetData.db2" },
    { 996358, "HighlightColor.db2" },
    { 996360, "HolidayDescriptions.db2" },
    { 996359, "HolidayNames.db2" },
    { 996357, "Holidays.db2" },
    { 1995523, "Hotfixes.db2" },
    { 1121229, "ImportPriceArmor.db2" },
    { 1121228, "ImportPriceQuality.db2" },
    { 1121227, "ImportPriceShield.db2" },
    { 1121230, "ImportPriceWeapon.db2" },
    { 1336651, "InvasionClientData.db2" },
    { 841626, "Item.db2" },
    { 982462, "ItemAppearance.db2" },
    { 1248126, "ItemAppearanceXUiCamera.db2" },
    { 1283021, "ItemArmorQuality.db2" },
    { 1277741, "ItemArmorShield.db2" },
    { 1283022, "ItemArmorTotal.db2" },
    { 1278179, "ItemBagFamily.db2" },
    { 959070, "ItemBonus.db2" },
    { 1805807, "ItemBonusList.db2" },
    { 3755382, "ItemBonusListGroup.db2" },
    { 3025306, "ItemBonusListGroupEntry.db2" },
    { 1320358, "ItemBonusListLevelDelta.db2" },
    { 2924997, "ItemBonusListWarforgeLevelDelta.db2" },
    { 3026822, "ItemBonusSequenceSpell.db2" },
    { 3055768, "ItemBonusTree.db2" },
    { 4407505, "ItemBonusTreeGroupEntry.db2" },
    { 987134, "ItemBonusTreeNode.db2" },
    { 1247926, "ItemChildEquipment.db2" },
    { 1140189, "ItemClass.db2" },
    { 1405665, "ItemContextPickerEntry.db2" },
    { 4337196, "ItemConversion.db2" },
    { 4337197, "ItemConversionEntry.db2" },
    { 801670, "ItemCurrencyCost.db2" },
    { 3755770, "ItemCurrencyValue.db2" },
    { 1277740, "ItemDamageAmmo.db2" },
    { 1277743, "ItemDamageOneHand.db2" },
    { 1277739, "ItemDamageOneHandCaster.db2" },
    { 1277738, "ItemDamageTwoHand.db2" },
    { 1277742, "ItemDamageTwoHandCaster.db2" },
    { 1134087, "ItemDisenchantLoot.db2" },
    { 1266429, "ItemDisplayInfo.db2" },
    { 1280614, "ItemDisplayInfoMaterialRes.db2" },
    { 4050937, "ItemDisplayInfoModelMatRes.db2" },
    { 969941, "ItemEffect.db2" },
    { 801681, "ItemExtendedCost.db2" },
    { 2358574, "ItemFallbackVisual.db2" },
    { 1283023, "ItemGroupSounds.db2" },
    { 1588911, "ItemLevelSelector.db2" },
    { 1624937, "ItemLevelSelectorQuality.db2" },
    { 1624933, "ItemLevelSelectorQualitySet.db2" },
    { 1237440, "ItemLimitCategory.db2" },
    { 1378590, "ItemLimitCategoryCondition.db2" },
    { 4677533, "ItemLogicalCost.db2" },
    { 4677534, "ItemLogicalCostGroup.db2" },
    { 982457, "ItemModifiedAppearance.db2" },
    { 1278399, "ItemModifiedAppearanceExtra.db2" },
    { 1332559, "ItemNameDescription.db2" },
    { 3723474, "ItemNameSlotOverride.db2" },
    { 1302240, "ItemPetFood.db2" },
    { 1121231, "ItemPriceBase.db2" },
    { 1270315, "ItemRangedDisplayInfo.db2" },
    { 4548446, "ItemSalvage.db2" },
    { 4549058, "ItemSalvageLoot.db2" },
    { 1273408, "ItemSearchName.db2" },
    { 1343609, "ItemSet.db2" },
    { 1314689, "ItemSetSpell.db2" },
    { 1572924, "ItemSparse.db2" },
    { 1135120, "ItemSpec.db2" },
    { 1134576, "ItemSpecOverride.db2" },
    { 1261604, "ItemSubClass.db2" },
    { 1302852, "ItemSubClassMask.db2" },
    { 1343605, "ItemVisuals.db2" },
    { 3043873, "ItemVisualsXEffect.db2" },
    { 987133, "ItemXBonusTree.db2" },
    { 3177687, "ItemXItemEffect.db2" },
    { 1240336, "JournalEncounter.db2" },
    { 1301155, "JournalEncounterCreature.db2" },
    { 1344467, "JournalEncounterItem.db2" },
    { 1134413, "JournalEncounterSection.db2" },
    { 1121901, "JournalEncounterXDifficulty.db2" },
    { 1722928, "JournalEncounterXMapLoc.db2" },
    { 1237438, "JournalInstance.db2" },
    { 1277744, "JournalItemXDifficulty.db2" },
    { 1121900, "JournalSectionXDifficulty.db2" },
    { 1349056, "JournalTier.db2" },
    { 1285009, "JournalTierXInstance.db2" },
    { 801693, "Keychain.db2" },
    { 1344761, "KeystoneAffix.db2" },
    { 1135058, "LFGDungeonGroup.db2" },
    { 1361033, "LFGDungeons.db2" },
    { 982805, "LFGRoleRequirement.db2" },
    { 4281309, "LabelXContentRestrictRuleSet.db2" },
    { 984702, "LanguageWords.db2" },
    { 1135325, "Languages.db2" },
    { 1339818, "LfgDungeonsGroupingMap.db2" },
    { 1375579, "Light.db2" },
    { 1375580, "LightData.db2" },
    { 1334669, "LightParams.db2" },
    { 1308501, "LightSkybox.db2" },
    { 4680119, "LightWorldShadow.db2" },
    { 2003383, "Lightning.db2" },
    { 1132538, "LiquidMaterial.db2" },
    { 1308058, "LiquidObject.db2" },
    { 1371380, "LiquidType.db2" },
    { 2261065, "LiquidTypeXTexture.db2" },
    { 4276965, "LivingWorldObjectTemplate.db2" },
    { 2478235, "LoadingScreenSkin.db2" },
    { 1302239, "LoadingScreenTaxiSplines.db2" },
    { 1266541, "LoadingScreens.db2" },
    { 801706, "Locale.db2" },
    { 801707, "Location.db2" },
    { 1343608, "Lock.db2" },
    { 1284823, "LockType.db2" },
    { 1098785, "LookAtController.db2" },
    { 3311370, "LoreText.db2" },
    { 3479846, "LoreTextPublic.db2" },
    { 3390955, "MCRSlotXMCRCategory.db2" },
    { 1240344, "MailTemplate.db2" },
    { 1587159, "ManagedWorldState.db2" },
    { 1587155, "ManagedWorldStateBuff.db2" },
    { 1587151, "ManagedWorldStateInput.db2" },
    { 1375803, "ManifestInterfaceActionIcon.db2" },
    { 1375801, "ManifestInterfaceData.db2" },
    { 1375804, "ManifestInterfaceItemIcon.db2" },
    { 1267335, "ManifestInterfaceTOCData.db2" },
    { 1349477, "Map.db2" },
    { 1597466, "MapCelestialBody.db2" },
    { 801709, "MapChallengeMode.db2" },
    { 1367868, "MapDifficulty.db2" },
    { 1375435, "MapDifficultyXCondition.db2" },
    { 1719707, "MapLoadingScreen.db2" },
    { 4633656, "MapRenderScale.db2" },
    { 801710, "MarketingPromotionsXLocale.db2" },
    { 1294217, "Material.db2" },
    { 2991315, "MawPower.db2" },
    { 2997952, "MawPowerRarity.db2" },
    { 1347274, "MinorTalent.db2" },
    { 1710117, "MissileTargeting.db2" },
    { 1465904, "ModelAnimCloakDampening.db2" },
    { 1337833, "ModelFileData.db2" },
    { 1399953, "ModelRibbonQuality.db2" },
    { 3386486, "ModifiedCraftingCategory.db2" },
    { 4530643, "ModifiedCraftingItem.db2" },
    { 3386487, "ModifiedCraftingReagentItem.db2" },
    { 3386488, "ModifiedCraftingReagentSlot.db2" },
    { 3390956, "ModifiedCraftingSpellSlot.db2" },
    { 1267645, "ModifierTree.db2" },
    { 921760, "Mount.db2" },
    { 1114709, "MountCapability.db2" },
    { 2923510, "MountEquipment.db2" },
    { 1114674, "MountType.db2" },
    { 1114715, "MountTypeXCapability.db2" },
    { 1576117, "MountXDisplay.db2" },
    { 3989477, "MountXSpellVisualKitPicker.db2" },
    { 1332556, "Movie.db2" },
    { 1301154, "MovieFileData.db2" },
    { 1339819, "MovieVariation.db2" },
    { 1965592, "MultiStateProperties.db2" },
    { 1965589, "MultiTransitionProperties.db2" },
    { 2400282, "MythicPlusSeason.db2" },
    { 2123783, "MythicPlusSeasonRewardLevels.db2" },
    { 4067473, "MythicPlusSeasonTrackedAffix.db2" },
    { 4521365, "MythicPlusSeasonTrackedMap.db2" },
    { 1340661, "NPCModelItemSlotDisplayInfo.db2" },
    { 1282621, "NPCSounds.db2" },
    { 1122117, "NameGen.db2" },
    { 1117086, "NamesProfanity.db2" },
    { 1117085, "NamesReserved.db2" },
    { 1117087, "NamesReservedLocale.db2" },
    { 1953326, "NumTalentsAtLevel.db2" },
    { 1090577, "ObjectEffect.db2" },
    { 1090575, "ObjectEffectModifier.db2" },
    { 1090578, "ObjectEffectPackageElem.db2" },
    { 2066958, "Occluder.db2" },
    { 3850529, "OccluderCurtain.db2" },
    { 2115224, "OccluderLocation.db2" },
    { 2066959, "OccluderNode.db2" },
    { 1279739, "OutlineEffect.db2" },
    { 1002186, "OverrideSpellData.db2" },
    { 1394275, "PVPBracketTypes.db2" },
    { 1339820, "PVPDifficulty.db2" },
    { 972287, "PVPItem.db2" },
    { 2992916, "PVPScoreboardCellInfo.db2" },
    { 2992917, "PVPScoreboardColumnHeader.db2" },
    { 2992918, "PVPScoreboardLayout.db2" },
    { 2992919, "PVPStat.db2" },
    { 1271600, "PageTextMaterial.db2" },
    { 1252503, "PaperDollItemFrame.db2" },
    { 1581183, "ParagonReputation.db2" },
    { 1284820, "ParticleColor.db2" },
    { 3396285, "Particulate.db2" },
    { 2053913, "ParticulateSound.db2" },
    { 801732, "Path.db2" },
    { 2428705, "PathEdge.db2" },
    { 801733, "PathNode.db2" },
    { 801734, "PathNodeProperty.db2" },
    { 801735, "PathProperty.db2" },
    { 4519766, "PerksActivity.db2" },
    { 4694317, "PerksActivityTag.db2" },
    { 4519767, "PerksActivityThreshold.db2" },
    { 4519768, "PerksActivityThresholdGroup.db2" },
    { 4519781, "PerksActivityXInterval.db2" },
    { 4694318, "PerksActivityXTag.db2" },
    { 4281310, "PerksVendorCategory.db2" },
    { 4281311, "PerksVendorItem.db2" },
    { 4281312, "PerksVendorItemUIInfo.db2" },
    { 4872513, "PerksVendorItemXInterval.db2" },
    { 1348558, "Phase.db2" },
    { 1267336, "PhaseShiftZoneSounds.db2" },
    { 987581, "PhaseXPhaseGroup.db2" },
    { 1045411, "PlayerCondition.db2" },
    { 1251523, "Positioner.db2" },
    { 1251506, "PositionerState.db2" },
    { 1251533, "PositionerStateEntry.db2" },
    { 1332557, "PowerDisplay.db2" },
    { 1266022, "PowerType.db2" },
    { 1275869, "PrestigeLevelInfo.db2" },
    { 4542069, "ProfTraitPathNode.db2" },
    { 4542084, "ProfTraitPerkNode.db2" },
    { 4542085, "ProfTraitTree.db2" },
    { 4999865, "ProfTraitTreeHighlight.db2" },
    { 4508544, "Profession.db2" },
    { 4505297, "ProfessionEffect.db2" },
    { 4556715, "ProfessionEffectType.db2" },
    { 4452078, "ProfessionPropPoints.db2" },
    { 4623413, "ProfessionRating.db2" },
    { 4505298, "ProfessionTrait.db2" },
    { 4505494, "ProfessionTraitXEffect.db2" },
    { 4505299, "ProfessionTraitXLabel.db2" },
    { 4868299, "ProfessionXRating.db2" },
    { 1585723, "PvpBrawl.db2" },
    { 4699082, "PvpRating.db2" },
    { 1591100, "PvpScalingEffect.db2" },
    { 1591098, "PvpScalingEffectType.db2" },
    { 2966426, "PvpSeason.db2" },
    { 2470695, "PvpSeasonRewardLevels.db2" },
    { 1302853, "PvpTalent.db2" },
    { 1891534, "PvpTalentCategory.db2" },
    { 1950197, "PvpTalentSlotUnlock.db2" },
    { 2066871, "PvpTier.db2" },
    { 1282622, "QuestFactionReward.db2" },
    { 1343388, "QuestFeedbackEffect.db2" },
    { 1120960, "QuestInfo.db2" },
    { 973430, "QuestLine.db2" },
    { 973441, "QuestLineXQuest.db2" },
    { 1139047, "QuestMoneyReward.db2" },
    { 1251960, "QuestObjective.db2" },
    { 1251882, "QuestPOIBlob.db2" },
    { 1251883, "QuestPOIPoint.db2" },
    { 801743, "QuestPackageItem.db2" },
    { 1134585, "QuestSort.db2" },
    { 1139443, "QuestV2.db2" },
    { 1028735, "QuestV2CliTask.db2" },
    { 1573634, "QuestXGroupActivity.db2" },
    { 1139378, "QuestXP.db2" },
    { 3448517, "QuestXUIQuestDetailsTheme.db2" },
    { 3923421, "QuestXUiWidgetSet.db2" },
    { 3405439, "RTPC.db2" },
    { 3405440, "RTPCData.db2" },
    { 3081207, "RafActivity.db2" },
    { 1310245, "RandPropPoints.db2" },
    { 3671785, "RecipeProgressionGroupEntry.db2" },
    { 1716803, "RelicSlotTierRequirement.db2" },
    { 1671256, "RelicTalent.db2" },
    { 3743117, "RenownRewards.db2" },
    { 1133729, "ResearchBranch.db2" },
    { 1133711, "ResearchField.db2" },
    { 1134090, "ResearchProject.db2" },
    { 1134091, "ResearchSite.db2" },
    { 1135072, "Resistances.db2" },
    { 1307156, "RewardPack.db2" },
    { 1307153, "RewardPackXCurrencyType.db2" },
    { 1307155, "RewardPackXItem.db2" },
    { 1398908, "RibbonQuality.db2" },
    { 3256786, "RopeEffect.db2" },
    { 3500241, "RuneforgeLegendaryAbility.db2" },
    { 1712172, "SDReplacementModel.db2" },
    { 2056369, "SSAOSettings.db2" },
    { 1139062, "Scenario.db2" },
    { 1141065, "ScenarioEventEntry.db2" },
    { 1132761, "ScenarioStep.db2" },
    { 801754, "SceneScript.db2" },
    { 1758036, "SceneScriptGlobalText.db2" },
    { 801755, "SceneScriptPackage.db2" },
    { 801756, "SceneScriptPackageMember.db2" },
    { 1758037, "SceneScriptText.db2" },
    { 1327082, "ScheduledInterval.db2" },
    { 1302849, "ScreenEffect.db2" },
    { 3063174, "ScreenEffectType.db2" },
    { 1279416, "ScreenLocation.db2" },
    { 1328719, "SeamlessSite.db2" },
    { 1301141, "ServerMessages.db2" },
    { 1239844, "ShadowyEffect.db2" },
    { 4620073, "SharedString.db2" },
    { 1954391, "SiegeableProperties.db2" },
    { 1240935, "SkillLine.db2" },
    { 1266278, "SkillLineAbility.db2" },
    { 4505477, "SkillLineXTraitTree.db2" },
    { 1240406, "SkillRaceClassInfo.db2" },
    { 3581893, "SkySceneXPlayerCondition.db2" },
    { 3488583, "Soulbind.db2" },
    { 3594380, "SoulbindConduit.db2" },
    { 4069554, "SoulbindConduitEnhancedSocket.db2" },
    { 3604984, "SoulbindConduitItem.db2" },
    { 3620681, "SoulbindConduitRank.db2" },
    { 3858895, "SoulbindConduitRankProperties.db2" },
    { 3490472, "SoulbindUIDisplayInfo.db2" },
    { 1310628, "SoundAmbience.db2" },
    { 1267065, "SoundAmbienceFlavor.db2" },
    { 1310246, "SoundBus.db2" },
    { 1598732, "SoundBusOverride.db2" },
    { 1092317, "SoundEmitterPillPoints.db2" },
    { 1092316, "SoundEmitters.db2" },
    { 1693131, "SoundEnvelope.db2" },
    { 1271601, "SoundFilter.db2" },
    { 1267066, "SoundFilterElem.db2" },
    { 1237434, "SoundKit.db2" },
    { 1237436, "SoundKitAdvanced.db2" },
    { 1307289, "SoundKitChild.db2" },
    { 1237435, "SoundKitEntry.db2" },
    { 1307288, "SoundKitFallback.db2" },
    { 4618887, "SoundMixGroup.db2" },
    { 1266542, "SoundOverride.db2" },
    { 3405441, "SoundParameter.db2" },
    { 1279417, "SoundProviderPreferences.db2" },
    { 4756178, "SoundWaterfallEmitter.db2" },
    { 1313612, "SourceInfo.db2" },
    { 1117088, "SpamMessages.db2" },
    { 2057624, "SpecSetMember.db2" },
    { 1240335, "SpecializationSpells.db2" },
    { 2067238, "SpecializationSpellsDisplay.db2" },
    { 1140089, "Spell.db2" },
    { 1019373, "SpellActionBarPref.db2" },
    { 1261603, "SpellActivationOverlay.db2" },
    { 1139952, "SpellAuraOptions.db2" },
    { 981566, "SpellAuraRestrictions.db2" },
    { 1280615, "SpellAuraVisXChrSpec.db2" },
    { 1280616, "SpellAuraVisibility.db2" },
    { 1134089, "SpellCastTimes.db2" },
    { 1002166, "SpellCastingRequirements.db2" },
    { 1139939, "SpellCategories.db2" },
    { 1280619, "SpellCategory.db2" },
    { 1343310, "SpellChainEffects.db2" },
    { 979663, "SpellClassOptions.db2" },
    { 2428696, "SpellClutterAreaEffectCounts.db2" },
    { 2428707, "SpellClutterFrameRates.db2" },
    { 2428708, "SpellClutterImpactModelCounts.db2" },
    { 2428697, "SpellClutterKitDistances.db2" },
    { 2428733, "SpellClutterMissileDist.db2" },
    { 2428698, "SpellClutterWeaponTrailDist.db2" },
    { 1139924, "SpellCooldowns.db2" },
    { 1140004, "SpellDescriptionVariables.db2" },
    { 1137829, "SpellDispelType.db2" },
    { 1137828, "SpellDuration.db2" },
    { 1140088, "SpellEffect.db2" },
    { 1888495, "SpellEffectAutoDescription.db2" },
    { 1310248, "SpellEffectEmission.db2" },
    { 4507381, "SpellEmpower.db2" },
    { 4871072, "SpellEmpowerStage.db2" },
    { 1140011, "SpellEquippedItems.db2" },
    { 1146819, "SpellFlyout.db2" },
    { 1134085, "SpellFlyoutItem.db2" },
    { 1280620, "SpellFocusObject.db2" },
    { 1139906, "SpellInterrupts.db2" },
    { 1362771, "SpellItemEnchantment.db2" },
    { 1121834, "SpellItemEnchantmentCondition.db2" },
    { 1127327, "SpellKeyboundOverride.db2" },
    { 1347275, "SpellLabel.db2" },
    { 1001907, "SpellLearnSpell.db2" },
    { 1140079, "SpellLevels.db2" },
    { 1014438, "SpellMechanic.db2" },
    { 1003144, "SpellMisc.db2" },
    { 897956, "SpellMissile.db2" },
    { 897955, "SpellMissileMotion.db2" },
    { 1990283, "SpellName.db2" },
    { 2618823, "SpellOverrideName.db2" },
    { 982806, "SpellPower.db2" },
    { 982804, "SpellPowerDifficulty.db2" },
    { 1140477, "SpellProceduralEffect.db2" },
    { 1133526, "SpellProcsPerMinute.db2" },
    { 1133525, "SpellProcsPerMinuteMod.db2" },
    { 1134584, "SpellRadius.db2" },
    { 1146820, "SpellRange.db2" },
    { 841946, "SpellReagents.db2" },
    { 1135239, "SpellReagentsCurrency.db2" },
    { 4674394, "SpellReplacement.db2" },
    { 1139940, "SpellScaling.db2" },
    { 3055899, "SpellScript.db2" },
    { 3055901, "SpellScriptText.db2" },
    { 1139929, "SpellShapeshift.db2" },
    { 1280618, "SpellShapeshiftForm.db2" },
    { 1268903, "SpellSpecialUnitEffect.db2" },
    { 1139993, "SpellTargetRestrictions.db2" },
    { 1002162, "SpellTotems.db2" },
    { 897952, "SpellVisual.db2" },
    { 1140479, "SpellVisualAnim.db2" },
    { 1094006, "SpellVisualColorEffect.db2" },
    { 897948, "SpellVisualEffectName.db2" },
    { 1685317, "SpellVisualEvent.db2" },
    { 897949, "SpellVisualKit.db2" },
    { 897951, "SpellVisualKitAreaModel.db2" },
    { 1140480, "SpellVisualKitEffect.db2" },
    { 897953, "SpellVisualKitModelAttach.db2" },
    { 3989478, "SpellVisualKitPicker.db2" },
    { 3989479, "SpellVisualKitPickerEntry.db2" },
    { 897954, "SpellVisualMissile.db2" },
    { 3607312, "SpellVisualScreenEffect.db2" },
    { 1724949, "SpellXDescriptionVariables.db2" },
    { 1101657, "SpellXSpellVisual.db2" },
    { 1604265, "StartupFiles.db2" },
    { 1375805, "Startup_Strings.db2" },
    { 1140758, "Stationery.db2" },
    { 1345276, "SummonProperties.db2" },
    { 1302850, "TactKey.db2" },
    { 1302851, "TactKeyLookup.db2" },
    { 1369062, "Talent.db2" },
    { 1068100, "TaxiNodes.db2" },
    { 1067802, "TaxiPath.db2" },
    { 1000437, "TaxiPathNode.db2" },
    { 3501705, "TerrainColorGradingRamp.db2" },
    { 1307290, "TerrainMaterial.db2" },
    { 1310249, "TerrainType.db2" },
    { 1284822, "TerrainTypeSounds.db2" },
    { 1328721, "TextureBlendSet.db2" },
    { 982459, "TextureFileData.db2" },
    { 3076928, "TierTransition.db2" },
    { 1134586, "TotemCategory.db2" },
    { 988200, "Toy.db2" },
    { 1301101, "TradeSkillCategory.db2" },
    { 1329070, "TradeSkillItem.db2" },
    { 4543085, "TraitCond.db2" },
    { 4420295, "TraitCost.db2" },
    { 4524216, "TraitCurrency.db2" },
    { 4539393, "TraitCurrencySource.db2" },
    { 4420327, "TraitDefinition.db2" },
    { 4536895, "TraitDefinitionEffectPoints.db2" },
    { 4420308, "TraitEdge.db2" },
    { 4420297, "TraitNode.db2" },
    { 4420298, "TraitNodeEntry.db2" },
    { 4543088, "TraitNodeEntryXTraitCond.db2" },
    { 4420299, "TraitNodeEntryXTraitCost.db2" },
    { 4420300, "TraitNodeGroup.db2" },
    { 4543090, "TraitNodeGroupXTraitCond.db2" },
    { 4420301, "TraitNodeGroupXTraitCost.db2" },
    { 4420302, "TraitNodeGroupXTraitNode.db2" },
    { 4543092, "TraitNodeXTraitCond.db2" },
    { 4420303, "TraitNodeXTraitCost.db2" },
    { 4420304, "TraitNodeXTraitNodeEntry.db2" },
    { 4635649, "TraitSystem.db2" },
    { 4420305, "TraitTree.db2" },
    { 4669507, "TraitTreeLoadout.db2" },
    { 4669509, "TraitTreeLoadoutEntry.db2" },
    { 4420306, "TraitTreeXTraitCost.db2" },
    { 4524218, "TraitTreeXTraitCurrency.db2" },
    { 1338702, "TransformMatrix.db2" },
    { 2399695, "TransmogDefaultLevel.db2" },
    { 1589454, "TransmogHoliday.db2" },
    { 3580450, "TransmogIllusion.db2" },
    { 1376213, "TransmogSet.db2" },
    { 1576116, "TransmogSetGroup.db2" },
    { 1376212, "TransmogSetItem.db2" },
    { 1140686, "TransportAnimation.db2" },
    { 1121973, "TransportPhysics.db2" },
    { 1140687, "TransportRotation.db2" },
    { 975024, "Trophy.db2" },
    { 3488582, "UIChromieTimeExpansionInfo.db2" },
    { 3502042, "UICovenantAbility.db2" },
    { 3502043, "UICovenantPreview.db2" },
    { 4579858, "UIDeadlyDebuff.db2" },
    { 4065278, "UIDungeonScoreRarity.db2" },
    { 3946498, "UIEventToast.db2" },
    { 1729547, "UIExpansionDisplayInfo.db2" },
    { 1729546, "UIExpansionDisplayInfoIcon.db2" },
    { 4861207, "UIGenericWidgetDisplay.db2" },
    { 4530951, "UIModifiedInstance.db2" },
    { 3556601, "UIScriptedAnimationEffect.db2" },
    { 2960122, "UISplashScreen.db2" },
    { 1261406, "UiCamFbackTransmogChrRace.db2" },
    { 1261407, "UiCamFbackTransmogWeapon.db2" },
    { 1120287, "UiCamera.db2" },
    { 1120288, "UiCameraType.db2" },
    { 1989363, "UiCanvas.db2" },
    { 3509132, "UiCovenantDisplayInfo.db2" },
    { 3182424, "UiItemInteraction.db2" },
    { 1957206, "UiMap.db2" },
    { 1957202, "UiMapArt.db2" },
    { 1957208, "UiMapArtStyleLayer.db2" },
    { 1957210, "UiMapArtTile.db2" },
    { 1957219, "UiMapAssignment.db2" },
    { 2006972, "UiMapFogOfWar.db2" },
    { 2006973, "UiMapFogOfWarVisualization.db2" },
    { 1957204, "UiMapGroupMember.db2" },
    { 2030690, "UiMapLink.db2" },
    { 1957217, "UiMapXMapArt.db2" },
    { 1548215, "UiModelScene.db2" },
    { 1548214, "UiModelSceneActor.db2" },
    { 1548216, "UiModelSceneActorDisplay.db2" },
    { 1548213, "UiModelSceneCamera.db2" },
    { 1993323, "UiPartyPose.db2" },
    { 3448518, "UiQuestDetailsTheme.db2" },
    { 897470, "UiTextureAtlas.db2" },
    { 1989276, "UiTextureAtlasElement.db2" },
    { 897532, "UiTextureAtlasMember.db2" },
    { 939159, "UiTextureKit.db2" },
    { 4737221, "UiWeeklyReward.db2" },
    { 1983278, "UiWidget.db2" },
    { 1983639, "UiWidgetConstantSource.db2" },
    { 1983640, "UiWidgetDataSource.db2" },
    { 2322531, "UiWidgetMap.db2" },
    { 3055925, "UiWidgetSet.db2" },
    { 1983641, "UiWidgetStringSource.db2" },
    { 2740907, "UiWidgetVisTypeDataReq.db2" },
    { 1983276, "UiWidgetVisualization.db2" },
    { 3386363, "UiWidgetXWidgetSet.db2" },
    { 1284821, "UnitBlood.db2" },
    { 1268904, "UnitBloodLevels.db2" },
    { 1120959, "UnitCondition.db2" },
    { 1237753, "UnitPowerBar.db2" },
    { 1368621, "Vehicle.db2" },
    { 3311405, "VehiclePOIType.db2" },
    { 1345447, "VehicleSeat.db2" },
    { 1279741, "VehicleUIIndSeat.db2" },
    { 1279740, "VehicleUIIndicator.db2" },
    { 892861, "Vignette.db2" },
    { 1634482, "VirtualAttachment.db2" },
    { 1634480, "VirtualAttachmentCustomization.db2" },
    { 1267067, "VocalUISounds.db2" },
    { 4211372, "VoiceOverPriority.db2" },
    { 3587230, "VolumeFogCondition.db2" },
    { 1355528, "WMOAreaTable.db2" },
    { 1323241, "WMOMinimapTexture.db2" },
    { 2565222, "WaterfallData.db2" },
    { 2565258, "WaypointEdge.db2" },
    { 2565265, "WaypointNode.db2" },
    { 2820850, "WaypointSafeLocs.db2" },
    { 879634, "WbAccessControlList.db2" },
    { 1267648, "WeaponImpactSounds.db2" },
    { 1267068, "WeaponSwingSounds2.db2" },
    { 982461, "WeaponTrail.db2" },
    { 1239843, "WeaponTrailModelDef.db2" },
    { 1239842, "WeaponTrailParam.db2" },
    { 1343311, "Weather.db2" },
    { 1965591, "WeatherXParticulate.db2" },
    { 3580962, "WeeklyRewardChestThreshold.db2" },
    { 943871, "WindSettings.db2" },
    { 975279, "WorldBossLockout.db2" },
    { 1267069, "WorldChunkSounds.db2" },
    { 1343312, "WorldEffect.db2" },
    { 1135240, "WorldElapsedTimer.db2" },
    { 1134579, "WorldMapOverlay.db2" },
    { 1957212, "WorldMapOverlayTile.db2" },
    { 4680120, "WorldShadow.db2" },
    { 1332558, "WorldStateExpression.db2" },
    { 1266941, "WorldStateZoneSounds.db2" },
    { 1310255, "World_PVP_Area.db2" },
    { 1310251, "ZoneIntroMusicTable.db2" },
    { 1310253, "ZoneLight.db2" },
    { 1310256, "ZoneLightPoint.db2" },
    { 1310254, "ZoneMusic.db2" },
    { 1797864, "ZoneStory.db2" },
};

#endif // DBFilesClientList_h__
