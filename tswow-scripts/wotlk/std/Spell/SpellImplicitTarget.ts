/*
 * This file is part of tswow (https://github.com/tswow)
 *
 * Copyright (C) 2021 tswow <https://github.com/tswow/>
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

export enum SpellImplicitTarget {
    UNIT_CASTER                 = 1,
    UNIT_NEARBY_ENEMY           = 2,
    UNIT_NEARBY_ALLY            = 3,
    UNIT_NEARBY_PARTY           = 4,
    UNIT_PET                    = 5,
    UNIT_TARGET_ENEMY           = 6,
    UNIT_SRC_AREA_ENTRY         = 7,
    UNIT_DEST_AREA_ENTRY        = 8,
    DEST_HOME                   = 9,
    UNIT_SRC_AREA_UNK11         = 11,
    UNIT_SRC_AREA_ENEMY         = 15,
    UNIT_DEST_AREA_ENEMY        = 16,
    DEST_DB                     = 17,
    DEST_CASTER                 = 18,
    UNIT_CASTER_AREA_PARTY      = 20,
    UNIT_TARGET_ALLY            = 21,
    SRC_CASTER                  = 22,
    GAMEOBJECT_TARGET           = 23,
    UNIT_CONE_ENEMY24           = 24,
    UNIT_TARGET_ANY             = 25,
    GAMEOBJECT_ITEM_TARGET      = 26,
    UNIT_MASTER                 = 27,
    DEST_DYNOBJ_ENEMY           = 28,
    DEST_DYNOBJ_ALLY            = 29,
    UNIT_SRC_AREA_ALLY          = 30,
    UNIT_DEST_AREA_ALLY         = 31,
    DEST_CASTER_SUMMON          = 32,
    UNIT_SRC_AREA_PARTY         = 33,
    UNIT_DEST_AREA_PARTY        = 34,
    UNIT_TARGET_PARTY           = 35,
    DEST_CASTER_UNK36           = 36,
    UNIT_LASTTARGET_AREA_PARTY  = 37,
    UNIT_NEARBY_ENTRY           = 38,
    DEST_CASTER_FISHING         = 39,
    GAMEOBJECT_NEARBY_ENTRY     = 40,
    DEST_CASTER_FRONT_RIGHT     = 41,
    DEST_CASTER_BACK_RIGHT      = 42,
    DEST_CASTER_BACK_LEFT       = 43,
    DEST_CASTER_FRONT_LEFT      = 44,
    UNIT_TARGET_CHAINHEAL_ALLY  = 45,
    DEST_NEARBY_ENTRY           = 46,
    DEST_CASTER_FRONT           = 47,
    DEST_CASTER_BACK            = 48,
    DEST_CASTER_RIGHT           = 49,
    DEST_CASTER_LEFT            = 50,
    GAMEOBJECT_SRC_AREA         = 51,
    GAMEOBJECT_DEST_AREA        = 52,
    DEST_TARGET_ENEMY           = 53,
    UNIT_CONE_ENEMY54           = 54,
    DEST_CASTER_FRONT_LEAP      = 55,
    UNIT_CASTER_AREA_RAID       = 56,
    UNIT_TARGET_RAID            = 57,
    UNIT_NEARBY_RAID            = 58,
    UNIT_CONE_ALLY              = 59,
    UNIT_CONE_ENTRY             = 60,
    UNIT_TARGET_AREA_RAID_CLASS = 61,
    DEST_DYNOBJ_CASTER          = 62,
    DEST_TARGET_ANY             = 63,
    DEST_TARGET_FRONT           = 64,
    DEST_TARGET_BACK            = 65,
    DEST_TARGET_RIGHT           = 66,
    DEST_TARGET_LEFT            = 67,
    DEST_TARGET_FRONT_RIGHT     = 68,
    DEST_TARGET_BACK_RIGHT      = 69,
    DEST_TARGET_BACK_LEFT       = 70,
    DEST_TARGET_FRONT_LEFT      = 71,
    DEST_CASTER_RANDOM          = 72,
    DEST_CASTER_RADIUS          = 73,
    DEST_TARGET_RANDOM          = 74,
    DEST_TARGET_RADIUS          = 75,
    DEST_CHANNEL_TARGET         = 76,
    UNIT_CHANNEL_TARGET         = 77,
    DEST_DEST_FRONT             = 78,
    DEST_DEST_BACK              = 79,
    DEST_DEST_RIGHT             = 80,
    DEST_DEST_LEFT              = 81,
    DEST_DEST_FRONT_RIGHT       = 82,
    DEST_DEST_BACK_RIGHT        = 83,
    DEST_DEST_BACK_LEFT         = 84,
    DEST_DEST_FRONT_LEFT        = 85,
    DEST_DEST_RANDOM            = 86,
    DEST_DEST                   = 87,
    DEST_DYNOBJ_NONE            = 88,
    DEST_TRAJ                   = 89,
    UNIT_TARGET_MINIPET         = 90,
    DEST_DEST_RADIUS            = 91,
    UNIT_SUMMONER               = 92,
    CORPSE_SRC_AREA_ENEMY       = 93,
    UNIT_VEHICLE                = 94,
    UNIT_TARGET_PASSENGER       = 95,
    UNIT_PASSENGER0             = 96,
    UNIT_PASSENGER1             = 97,
    UNIT_PASSENGER2             = 98,
    UNIT_PASSENGER3             = 99,
    UNIT_PASSENGER4             = 100,
    UNIT_PASSENGER5             = 101,
    UNIT_PASSENGER6             = 102,
    UNIT_PASSENGER7             = 103,
    UNIT_CONE_ENEMY104          = 104,
    UNIT_UNK105                 = 105,
    DEST_CHANNEL_CASTER         = 106,
    UNK_DEST_AREA_UNK107        = 107,
    GAMEOBJECT_CONE             = 108,
    UNIT_CONE_ENTRY110          = 110,
}