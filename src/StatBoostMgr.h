/*
* Copyright (c) 2025 SylCore
* This software is licensed under the MIT License. See LICENSE file for details.
*
* This module has been updated to work on SylCore by Sylian.
* The original module was created by AnchyDev [https://github.com/AnchyDev] and is used with respect to its original MIT license.
*
* SylCore -> https://github.com/SylCore
* SylCore Discord -> https://discord.gg/BQBD5MqspY
* Sylian -> https://github.com/Sylian1337
*/

#ifndef MODULE_STAT_BOOST_MGR
#define MODULE_STAT_BOOST_MGR

#include "StatBoostCommon.h"

class StatBoostMgr
{
public:
    static bool BoostItem(Player* player, Item* item, uint32 chance);
    static bool IsBoosted(Item* item);
    static void MakeSoulbound(Item* item, Player* player);

private:
    enum StatType
    {
        STAT_TYPE_NONE = 0,
        STAT_TYPE_TANK = 1,
        STAT_TYPE_PHYS = 2,
        STAT_TYPE_HYBRID = 4,
        STAT_TYPE_SPELL = 8
    };

    static constexpr uint32 ENCHANT_DUMMY = 2814; // Scaling stat, used due to enchanting weirdness.

    struct ScoreData
    {
        StatType StatType;
        uint32 Score;
    };

    static StatType GetStatTypeFromSubClass(Item* item);
    static EnchantmentSlot GetFreeSocketSlotForItem(Item* item);
    static bool EnchantItem(Player* player, Item* item, EnchantmentSlot slot, uint32 enchantId, bool overwrite = false);
    static StatType ScoreItem(Item* item, bool hasAdditionalSpells = false);
    static StatType AnalyzeItem(Item* item);
    static bool IsEquipment(Item* item);
};

#endif
