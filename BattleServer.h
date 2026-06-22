// BattleServer.h
// Recovered layout header generated from BattleServer.map, BattleServer.exe, BattleServer.pdb, and the VC6 companion vc60.pdb.
// BattleServer.pdb contains public/source symbol data; member layouts are recovered from vc60.pdb type records.
// Offsets and sizes are PDB-derived. STL/CRT/container internals are emitted as opaque byte ranges when needed.

#ifndef BATTLESERVER_RECOVERED_H
#define BATTLESERVER_RECOVERED_H

#include <stdint.h>

#ifndef HRESULT
typedef long HRESULT;
#endif

#if defined(__cplusplus) && __cplusplus >= 201103L
#define BS_STATIC_ASSERT_SIZE(type_name, expected_size) static_assert(sizeof(type_name) == (expected_size), "size mismatch: " #type_name)
#else
#define BS_STATIC_ASSERT_SIZE(type_name, expected_size)
#endif

#pragma pack(push, 1)

// enum PC_BATTLE_LOC; size: 0x4
enum PC_BATTLE_LOC {
    PC_IN_VOID = 0,
    PC_IN_LOBBY = 1,
    PC_IN_WROOM = 2,
    PC_IN_BFIELD = 3,
};

// enum _ENUM_PC_STAT; size: 0x4
enum _ENUM_PC_STAT {
    PC_STANDBY = 0,
    PC_TIMEOUT = 1,
    PC_DIED = 2,
    PC_STANDING = 3,
    PC_MOVEOK = 4,
    PC_MOVING = 5,
    PC_OUTSIDE = 6,
    PC_WARPWAIT = 7,
    PC_LOGOUT = 8,
};

// enum GAME_RESULT_FLAG; size: 0x4
enum GAME_RESULT_FLAG {
    GAME_VOID = 0,
    GAME_WIN = 1,
    GAME_LOSE = 2,
    GAME_DRAW = 3,
};

struct CLoopThread;
struct _ITEM_ID_;
union _ITEM_INFO_;
struct _ITEM_;
struct _PET_ID_;
struct _LASTINGSKILL_INFO_;
struct _SKILL_LEVEL_DATA_;
struct SKILL_STAT_CHANGE;
struct _PC_QUEST_INFO____PC_QUEST_DATA_;
struct _SAVE_QUEST_INFO____SAVE_QUEST_DATA_;
struct _SKILL_;
struct _SOCIALINFO_;
union _ITEM_IN_WEAR_;
union _ITEM_IN_INVEN_;
struct _PET_INFO_;
struct _SAVE_QUEST_INFO_;
struct _PC_2STAT_;
struct _ACCOUNT_ITEM_;
struct _CHARACTER_INFO_;
struct _ROOM_OPT_;
struct _CLAN_MEMBER_;
struct CBaseServer;
struct MSG_S2G_HEADER;
struct MSG_S2C_HEADER;
struct MSG_C2S_OP_CMD;
struct MSG_S2C_ERROR;
struct MSG_C2S_UNKNOWN_CHAR;
struct _ITEM_APPEAR_;
struct _PET_APPEAR_;
struct _SKILL_CAST_;
struct MSG_S2C_PC_APPEAR;
struct MSG_S2C_PC_DISAPPEAR;
struct MSG_S2C_CHAR_LIST;
struct MSG_S2C_CHAR_LOGIN_OK;
struct _PC_INFO_;
struct _PC_STAT_UPDATE_;
struct MSG_S2C_WORLD_LOGIN;
struct MSG_S2C_ANS_MOVE;
struct MSG_S2C_SEE_MOVE;
struct MSG_S2C_FIX_MOVE;
struct MSG_S2C_SEE_STOP;
struct _PET_STAT_;
struct MSG_S2C_STAT_AUTOUPDATE;
struct MSG_S2C_PET_LEVELUP;
struct MSG_S2C_PET_BUY;
struct MSG_C2S_USE_ITEM;
struct MSG_S2C_BUY_ITEM;
struct MSG_S2C_NPC_APPEAR;
struct MSG_S2C_NPC_DISAPPEAR;
struct MSG_S2C_NPC_MOVE;
struct MSG_S2C_NPC_STATE;
struct MSG_S2C_NPC_ATTACK;
struct MSG_S2C_SEE_NPC_ATTACK;
struct _NPC_SKILL_DAMAGEINFO_;
struct MSG_S2C_SEE_NPC_SKILLATTACK;
struct MSG_S2C_ANS_ATTACK;
struct MSG_S2C_SEE_ATTACK;
struct MSG_S2C_UPDATE_PKCOUNT;
struct MSG_S2C_UPDATE_PCEXP;
struct MSG_S2C_SKILL_DELAY_INFO;
struct MSG_S2C_LEARN_SKILL;
struct MSG_S2C_ERR_SKILL;
struct _SKILL_DAMAGEINFO_;
struct MSG_S2C_DONE_SKILL;
struct MSG_S2C_GET_SKILL;
struct MSG_S2C_SEE_SKILL;
struct MSG_S2C_CAST_SKILL;
struct MSG_S2C_LASTING_SKILL;
struct MSG_S2C_SEE_LASTING_SKILL;
struct MSG_S2C_PC_LEVELUP;
struct MSG_S2C_SEE_LEVELUP;
struct MSG_S2C_ALLOT_POINT;
struct MSG_S2C_ITEM_APPEAR;
struct MSG_S2C_ITEM_DISAPPEAR;
struct MSG_S2C_PICKUP_ITEM;
struct MSG_S2C_DROP_ITEM;
struct MSG_S2C_MOVE_ITEM;
struct MSG_S2C_SEE_WEAR;
struct MSG_S2C_WEAR_ITEM;
struct MSG_S2C_SEE_STRIP;
struct MSG_S2C_STRIP_ITEM;
struct MSG_S2C_SELL_ITEM;
struct MSG_S2C_GIVE_ITEM;
struct MSG_S2C_GIVEN_ITEM;
struct MSG_S2C_USE_POTION;
struct MSG_S2C_ASK_DEAL;
struct MSG_S2C_ANS_DEAL;
struct MSG_S2C_PUTIN_ITEM;
struct MSG_S2C_PUTOUT_ITEM;
struct MSG_S2C_DECIDE_DEAL;
struct MSG_S2C_SUCCESS_DEAL;
struct MSG_S2C_FAIL_DEAL;
struct MSG_S2C_PEAR_DECIDE;
struct MSG_S2C_PUTIN_PET;
struct MSG_S2C_PUTOUT_PET;
struct MSG_S2C_SUCCESS_DEAL_PET;
struct MSG_S2C_CONFIRM_ITEM;
struct MSG_S2C_REMODEL_ITEM;
struct MSG_S2C_SET_PC2STAT;
struct MSG_C2S_SAY;
struct MSG_S2C_SAY;
struct MSG_C2S_QUEST_INFO;
struct MSG_S2C_QUEST_INFO;
struct MSG_C2S_QUEST_START;
struct MSG_S2C_QUEST_START;
struct MSG_S2C_QUEST_CONTINUE;
struct MSG_C2S_QUEST_CANCEL;
struct MSG_S2C_QUEST_CANCEL;
struct MSG_S2C_QUEST_STATE;
struct MSG_S2C_QUEST_OK;
struct MSG_S2C_ANS_HEAL;
struct MSG_S2C_ASK_PARTY;
struct MSG_S2C_ANS_PARTY;
struct _PARTY_MEMBER_;
struct MSG_S2C_PARTY_IN;
struct MSG_S2C_PARTY_LIST;
struct MSG_S2C_PARTY_OUT;
struct MSG_S2C_PARTY_WHERE;
struct MSG_S2C_PARTY_HP;
struct MSG_S2C_PC_ATTACK;
struct MSG_S2C_ACTIVE_PET;
struct MSG_S2C_INACTIVE_PET;
struct MSG_S2C_SEE_PET;
struct MSG_S2C_PET_DIE;
struct MSG_S2C_PET_SELL;
struct MSG_S2C_FEED_PET;
struct MSG_S2C_USESCROLL;
struct MSG_S2C_UPDATE_MONEY;
struct MSG_S2C_REVIVE_PET;
struct MSG_S2C_SVR_TIME;
struct MSG_S2C_GESTURE;
struct _GAME_OPTION_;
struct MSG_S2C_OPTION;
struct MSG_S2C_SUBMAP_INFO;
struct MSG_S2C_ENTER;
struct MSG_S2C_OTHER_UPDATE;
struct MSG_S2S_HEADER;
struct MSG_S2M_SVR_LOGIN;
struct MSG_S2M_CHAR_LOGIN;
struct MSG_S2M_WORLD_LOGIN;
struct _PCDATA_;
struct MSG_S2M_CHAR_LOGOUT;
struct MSG_S2M_DATA_UPDATE;
struct MSG_M2S_PASS2GATE;
struct MSG_S2M_SAY;
struct MSG_S2M_PARTY_CREATE;
struct MSG_S2M_PARTY_JOIN;
struct MSG_S2M_PARTY_OUT;
struct MSG_M2S_PARTY_OUT;
struct MSG_M2S_ADMIN;
struct MSG_S2G_DISCONNECT;
struct MSG_S2G_SWITCH_ZONE;
struct MSG_S2G_BROADCAST;
struct _ITEM_IN_STORAGE_;
struct MSG_S2C_ANS_OPEN_STORAGE;
struct MSG_S2C_ANS_INVEN2STORAGE;
struct MSG_S2C_ANS_STORAGE2INVEN;
struct MSG_S2C_ANS_DEPOSITE_MONEY;
struct MSG_S2C_ANS_WITHDRAW_MONEY;
struct MSG_S2C_ANS_MOVE_ITEMINSTORAGE;
struct MSG_S2M_LOAD_STORAGE;
struct MSG_M2S_LOAD_STORAGE;
struct MSG_S2M_SAVE_STORAGE;
struct MSG_S2M_OP_CMD;
struct MSG_M2S_OP_CMD;
struct MSG_S2C_WARP_READY;
struct MSG_C2S_WARP;
struct MSG_S2C_WARP;
struct MSG_C2B_ASK_WARP_Z2B;
struct MSG_B2M_ASK_WARP_Z2B;
struct _CLAN_DATA_;
struct _BATTLE_WARP_DATA_;
struct MSG_M2B_ANS_WARP_Z2B;
struct MSG_B2C_ANS_WARP_Z2B;
struct MSG_C2B_ASK_WARP_B2Z;
struct MSG_B2M_ASK_WARP_B2Z;
struct MSG_M2B_ANS_WARP_B2Z;
struct MSG_B2C_ANS_WARP_B2Z;
struct _ROOM_MAKE_DATA_;
struct MSG_C2B_ASK_CREATE_ROOM;
struct MSG_B2C_ANS_CREATE_ROOM;
struct MSG_C2B_ASK_ENTER_ROOM;
struct MSG_B2C_ANS_ENTER_ROOM;
struct MSG_B2C_SEE_ENTER_ROOM;
struct MSG_C2B_ASK_LOBBY_INFO;
struct _ROOM_VIEW_DATA_;
struct MSG_B2C_SEE_LOBBY_INFO;
struct _WROOM_PC_DATA_;
struct MSG_B2C_SEE_WROOM_INFO;
struct MSG_C2B_ASK_CHANGE_TEAM;
struct MSG_B2C_ANS_CHANGE_TEAM;
struct MSG_B2C_SEE_CHANGE_TEAM;
struct MSG_C2B_READYOK_BATTLE;
struct MSG_B2C_SEE_READYOK_BATTLE;
struct MSG_C2B_ASK_START_BATTLE;
struct MSG_B2C_ANS_START_BATTLE;
struct MSG_B2C_START_BATTLE;
struct MSG_C2B_MAPLOAD_OK;
struct MSG_B2C_YOURCELL_IS_THIS;
struct MSG_B2C_ALL_ENTERED;
struct MSG_B2C_CHANGE_BOSS;
struct MSG_C2B_ASK_COMEOUT_WROOM;
struct MSG_B2C_ANS_COMEOUT_WROOM;
struct MSG_B2C_SEE_COMEOUT_WROOM;
struct MSG_C2B_ASK_EXIT_MEMBER;
struct MSG_B2C_ANS_EXIT_MEMBER;
struct MSG_B2C_SEE_EXIT_MEMBER;
struct MSG_B2C_WROOM_DATA;
struct MSG_B2C_GOTO_LOBBY;
struct MSG_B2C_ASK_END_BATTLE;
struct MSG_C2B_ANS_END_BATTLE;
struct MSG_B2C_SVR_BATTLE_TIME;
struct MSG_C2B_ASK_CHANGE_WATCHER;
struct MSG_B2C_ANS_CHANGE_WATCHER;
struct MSG_C2B_ASK_COMEOUT_BFIELD;
struct MSG_B2C_ANS_COMEOUT_BFIELD;
struct MSG_B2C_SEE_HP_CHANGE;
struct MSG_B2M_TM_RESULT;
struct MSG_B2M_ASK_PREWEEK_MASTERS;
struct MSG_M2B_ANS_PREWEEK_MASTERS;
struct MSG_B2M_ASK_TMMSG_BROADCAST;
struct _KNIGHT_INFO_;
struct MSG_M2S_CLAN_INFO;
struct MSG_M2S_KNIGHT_INFO;
struct MSG_S2C_FORTIFIER;
struct CShareObject;
struct CSyncSection;
struct CLinkedList;
struct __ListNODE_;
struct _ITEM_LEVEL_;
struct _ITEM_TABLE0_DATA;
struct _ITEM_TABLE1_DATA_;
struct _ITEM_TABLE2_DATA_;
struct _ITEM_TABLE3_DATA_;
struct _ITEM_COUNTER;
struct _ITEM_COMBINATION_TABLE_;
struct CItemManage;
struct EXCEL_LEVEL_DATA;
struct CSkill;
struct _OBJECT_;
struct CSimpleSyncSection;
struct CPC__CPCStatChange;
struct _LASTINGSKILL_MANAGEARRARY_;
struct CCheckHACK;
struct CPC___REMEMBER_ENEMY_;
struct CPC__PCINFO4BATTLE;
struct CPC;
struct CNPC;
struct CPCManage;
struct CClan___CLANMEMBER_;
struct CClan;
struct _CLAN_MSG_;
struct _CLAN_MS_MSG_;
struct CClanManage;
struct _MATCH_INFO_;
struct CTMNode;
struct CTMTree;
struct _CELL_;
struct _DROP_ITEM_;
struct CCell;
struct CTeam;
struct _WARP_;
struct _START_POS_;
struct CRoom__CMM_OPT;
struct CRoom__NRM_OPT;
struct CRoom;
struct CMapFile;
struct CRoomManage;
struct CGameLog;
struct CTimeFunc;
struct _PET_TABLE_DATA_;
struct CPetManage;
struct CUDPSock;
struct CSimpleCrypt;
struct MSG_HEADER;
struct MSG_V2S_CMM_KILL;
struct MSG_S2V_CMM_KILL;
struct MSG_V2S_MAIN_SHOUT;
struct MSG_V2S_MAIN_WHISPER;
struct MSG_S2V_CMM_ALIVE;
struct MSG_S2V_MAIN_SHOUT;
struct _MAP_INFO_;
struct MSG_S2V_ZONE_INFO;
struct MSG_S2V_WARNNING;
struct _TMRESULT_;
struct CAStar;
struct CAStar____NODE;
struct CAStar____STACK;
struct _PC_QUEST_INFO_;
struct _WARP_WAIT_PC_;
struct _LOG_DATA_;
struct _RPC_ASYNC_STATE____unnamed____unnamed;
union _RPC_ASYNC_STATE____unnamed;
union _MIDL_STUB_DESC____unnamed;
struct _FULL_PTR_XLAT_TABLES____unnamed;
struct CLoopSleepMgr;
struct CMainServer;
struct CTickManage;
struct CMsgCrypt;
struct CLargeRand;
struct CListenServer;
struct CSystemMgr;
struct CSvrManage;
struct CLobby;
struct CTMManage;
struct _SKILL_DATA_TABLE_;
struct _PC_DATA_TABLE_;
struct CGateServer;
struct CStandbyServer;
struct MSG_DFLT_HEADER;
struct MSG_G2S_NEW_CLIENT;
struct MSG_G2S_DISCONNECT;
struct MSG_C2S_ASK_MOVE;
struct MSG_C2S_PC_MOVE;
struct MSG_C2S_CHAR_LOGOUT;
struct MSG_C2S_ASK_ATTACK;
struct MSG_C2S_ASK_SKILL;
struct MSG_C2S_USE_POTION;
struct MSG_C2S_PICKUP_ITEM;
struct MSG_C2S_DROP_ITEM;
struct MSG_C2S_SELL_ITEM;
struct MSG_C2S_GIVE_ITEM;
struct MSG_C2S_ASK_DEAL;
struct MSG_C2S_ANS_DEAL;
struct MSG_C2S_PUTIN_ITEM;
struct MSG_C2S_PUTOUT_ITEM;
struct MSG_C2S_DECIDE_DEAL;
struct MSG_C2S_CONFIRM_DEAL;
struct MSG_C2S_ALLOT_POINT;
struct MSG_C2S_CONFIRM_ITEM;
struct MSG_C2S_REMODEL_ITEM;
struct MSG_C2S_PUTIN_PET;
struct MSG_C2S_PUTOUT_PET;
struct MSG_C2S_MOVE_ITEM;
struct MSG_C2S_WEAR_ITEM;
struct MSG_C2S_STRIP_ITEM;
struct MSG_C2S_REVIVE_PET;
struct MSG_C2S_USESCROLL;
struct MSG_C2S_BUY_ITEM;
struct MSG_C2S_ASK_HEAL;
struct MSG_C2S_RETURN2HERE;
struct MSG_C2S_ACTIVE_PET;
struct MSG_C2S_INACTIVE_PET;
struct MSG_C2S_GESTURE;
struct MSG_C2S_OPTION;
struct MSG_C2S_SUBMAP_INFO;
struct MSG_C2S_ENTER;
struct EXCEL_ITEM_DATA0;
struct EXCEL_ITEM_DATA1;
struct EXCEL_ITEM_DATA2;
struct EXCEL_ITEM_DATA3;
struct EXCEL_ITEM_COMBINATION_TABLE;
struct _ITEM_COUNTER_HEADER;
union _ITEM_SERIALKEY_;
struct MSG_M2S_ERROR;
struct EXCEL_PET_DATA;
struct _CHK_HACK_;
struct MSG_C2S_LEARN_SKILL;
struct MSG_G2S_SVR_LOGIN;
struct _MAPHEADER_;

// class CLoopThread; size: 0x10
struct CLoopThread {
    uint8_t _pad_0000[0x4];
    /* 0x0004 */ int32_t m_bRunThread;
    /* 0x0008 */ void* m_hThread;
    /* 0x000C */ unsigned long m_dwThreadID;
};
BS_STATIC_ASSERT_SIZE(CLoopThread, 0x10);

// struct _ITEM_ID_; size: 0x8
struct _ITEM_ID_ {
    /* 0x0000 */ unsigned long id;
    /* 0x0004 */ union {
        unsigned long bBless;
        unsigned long bCheckFlag;
        unsigned long bDefault;
        unsigned long bItemFlag;
        unsigned long code;
        unsigned long downOption;
        unsigned long reserved;
    };
};
BS_STATIC_ASSERT_SIZE(_ITEM_ID_, 0x8);

// union _ITEM_INFO_; size: 0x4
union _ITEM_INFO_ {
    /* 0x0000 */ unsigned long info;
    /* 0x0000 */ uint16_t money;
    /* 0x0000 */ uint16_t quantity;
    /* 0x0000 */ unsigned long iLottoIndex;
    /* 0x0000 */ unsigned long iChosenNum1;
    /* 0x0000 */ unsigned long iChosenNum2;
    /* 0x0000 */ unsigned long iChosenNum3;
    /* 0x0000 */ unsigned long iChosenNum4;
    /* 0x0000 */ unsigned long iChosenNum5;
    /* 0x0000 */ unsigned long level;
    /* 0x0000 */ unsigned long option;
    /* 0x0000 */ unsigned long confirm;
    /* 0x0000 */ unsigned long subtype;
    /* 0x0000 */ unsigned long wearIdx;
    /* 0x0000 */ unsigned long iceAttr;
    /* 0x0000 */ unsigned long fireAttr;
    /* 0x0000 */ unsigned long lightAttr;
};
BS_STATIC_ASSERT_SIZE(_ITEM_INFO_, 0x4);

// struct _ITEM_; size: 0x10
struct _ITEM_ {
    /* 0x0000 */ _ITEM_ID_ ItemID;
    /* 0x0008 */ _ITEM_INFO_ ItemInfo;
    /* 0x000C */ unsigned long ItemKey;
};
BS_STATIC_ASSERT_SIZE(_ITEM_, 0x10);

// struct _PET_ID_; size: 0x8
struct _PET_ID_ {
    /* 0x0000 */ unsigned long id;
    /* 0x0004 */ union {
        unsigned long code;
        unsigned long subcode;
    };
};
BS_STATIC_ASSERT_SIZE(_PET_ID_, 0x8);

// struct _LASTINGSKILL_INFO_; size: 0xC
struct _LASTINGSKILL_INFO_ {
    /* 0x0000 */ uint8_t byClassIndex;
    /* 0x0001 */ uint8_t bySkillIndex;
    /* 0x0002 */ uint8_t bySkillLevel;
    uint8_t _pad_0000[0x1];
    /* 0x0004 */ unsigned long dwCastingTime;
    /* 0x0008 */ unsigned long dwRemainTime;
};
BS_STATIC_ASSERT_SIZE(_LASTINGSKILL_INFO_, 0xC);

// struct _SKILL_LEVEL_DATA_; size: 0x1B
struct _SKILL_LEVEL_DATA_ {
    /* 0x0000 */ uint8_t HPConsume;
    /* 0x0001 */ uint8_t MPConsume;
    /* 0x0002 */ uint8_t Delay;
    /* 0x0003 */ uint8_t Range;
    /* 0x0004 */ uint8_t Scope;
    /* 0x0005 */ uint8_t LastingTime;
    /* 0x0006 */ uint16_t AddDamage;
    /* 0x0008 */ uint16_t AddIceDam;
    /* 0x000A */ uint16_t AddFireDam;
    /* 0x000C */ uint16_t AddLightDam;
    /* 0x000E */ uint8_t CommonVal1;
    /* 0x000F */ uint8_t CommonVal2;
    /* 0x0010 */ uint8_t AttkRate;
    /* 0x0011 */ uint8_t MagRate;
    /* 0x0012 */ uint8_t DefRate;
    /* 0x0013 */ uint8_t IceAttkRate;
    /* 0x0014 */ uint8_t FireAttkRate;
    /* 0x0015 */ uint8_t LightAttkRate;
    /* 0x0016 */ uint8_t IceDefRate;
    /* 0x0017 */ uint8_t FireDefRate;
    /* 0x0018 */ uint8_t LightDefRate;
    /* 0x0019 */ uint8_t MaxHPRate;
    /* 0x001A */ uint8_t MaxMPRate;
};
BS_STATIC_ASSERT_SIZE(_SKILL_LEVEL_DATA_, 0x1B);

// class SKILL_STAT_CHANGE; size: 0xB
struct SKILL_STAT_CHANGE {
    /* 0x0000 */ uint8_t AttkRate;
    /* 0x0001 */ uint8_t MagRate;
    /* 0x0002 */ uint8_t DefRate;
    /* 0x0003 */ uint8_t FireAttkRate;
    /* 0x0004 */ uint8_t FireDefRate;
    /* 0x0005 */ uint8_t IceAttkRate;
    /* 0x0006 */ uint8_t IceDefRate;
    /* 0x0007 */ uint8_t LightAttkRate;
    /* 0x0008 */ uint8_t LightDefRate;
    /* 0x0009 */ uint8_t MaxHPRate;
    /* 0x000A */ uint8_t MaxMPRate;
};
BS_STATIC_ASSERT_SIZE(SKILL_STAT_CHANGE, 0xB);

// struct _PC_QUEST_INFO_::_PC_QUEST_DATA_; recovered name sanitized as _PC_QUEST_INFO____PC_QUEST_DATA_; size: 0x3
struct _PC_QUEST_INFO____PC_QUEST_DATA_ {
    /* 0x0000 */ uint8_t QuestType;
    /* 0x0001 */ uint8_t QuestOK;
    /* 0x0002 */ uint8_t QuestVar;
};
BS_STATIC_ASSERT_SIZE(_PC_QUEST_INFO____PC_QUEST_DATA_, 0x3);

// struct _SAVE_QUEST_INFO_::_SAVE_QUEST_DATA_; recovered name sanitized as _SAVE_QUEST_INFO____SAVE_QUEST_DATA_; size: 0x1
struct _SAVE_QUEST_INFO____SAVE_QUEST_DATA_ {
    /* 0x0000 */ union {
        uint8_t QuestOK;
        uint8_t QuestVar;
    };
};
BS_STATIC_ASSERT_SIZE(_SAVE_QUEST_INFO____SAVE_QUEST_DATA_, 0x1);

// struct _SKILL_; size: 0xC
struct _SKILL_ {
    /* 0x0000 */ unsigned long skill_0;
    /* 0x0004 */ unsigned long skill_1;
    /* 0x0008 */ unsigned long skill_2;
};
BS_STATIC_ASSERT_SIZE(_SKILL_, 0xC);

// struct _SOCIALINFO_; size: 0x4
struct _SOCIALINFO_ {
    /* 0x0000 */ union {
        unsigned long knight_index;
        unsigned long nation;
        unsigned long rank;
    };
};
BS_STATIC_ASSERT_SIZE(_SOCIALINFO_, 0x4);

// union _ITEM_IN_WEAR_; size: 0x14
union _ITEM_IN_WEAR_ {
    /* 0x0000 */ _ITEM_ item;
    /* 0x0000 */ _ITEM_ID_ ItemID;
    /* 0x0008 */ _ITEM_INFO_ ItemInfo;
    /* 0x000C */ unsigned long ItemKey;
    /* 0x0010 */ uint8_t byWearIndex;
    uint8_t _force_size[0x14];
};
BS_STATIC_ASSERT_SIZE(_ITEM_IN_WEAR_, 0x14);

// union _ITEM_IN_INVEN_; size: 0x14
union _ITEM_IN_INVEN_ {
    /* 0x0000 */ _ITEM_ item;
    /* 0x0000 */ _ITEM_ID_ ItemID;
    /* 0x0008 */ _ITEM_INFO_ ItemInfo;
    /* 0x000C */ unsigned long ItemKey;
    /* 0x0010 */ uint8_t byInvenIndex;
    uint8_t _force_size[0x14];
};
BS_STATIC_ASSERT_SIZE(_ITEM_IN_INVEN_, 0x14);

// struct _PET_INFO_; size: 0x14
struct _PET_INFO_ {
    /* 0x0000 */ _PET_ID_ PetID;
    /* 0x0008 */ unsigned long serialKey;
    /* 0x000C */ union {
        unsigned long Exp;
        unsigned long FireAttk;
        unsigned long FireDef;
        unsigned long HP;
        unsigned long IceAttk;
        unsigned long IceDef;
        unsigned long Level;
    };
    /* 0x0010 */ union {
        unsigned long AttkRate;
        unsigned long Confirm;
        unsigned long DefRate;
        unsigned long DownDropRate;
        unsigned long Food;
        unsigned long LightAttk;
        unsigned long LightDef;
        unsigned long MagicAttkRate;
        unsigned long UpExp;
        unsigned long bAlive;
        unsigned long bCritiRateInc;
        unsigned long petIndex;
    };
};
BS_STATIC_ASSERT_SIZE(_PET_INFO_, 0x14);

// struct _SAVE_QUEST_INFO_; size: 0xC
struct _SAVE_QUEST_INFO_ {
    /* 0x0000 */ int32_t QuestIndex;
    /* 0x0004 */ _SAVE_QUEST_INFO____SAVE_QUEST_DATA_ QuestData[7];
    uint8_t _pad_tail[0x1];
};
BS_STATIC_ASSERT_SIZE(_SAVE_QUEST_INFO_, 0xC);

// struct _PC_2STAT_; size: 0x18
struct _PC_2STAT_ {
    /* 0x0000 */ uint16_t wHitAttack;
    /* 0x0002 */ uint16_t wMagicAttack;
    /* 0x0004 */ uint16_t wDefense;
    /* 0x0006 */ uint16_t wFireAttack;
    /* 0x0008 */ uint16_t wFireDefence;
    /* 0x000A */ uint16_t wIceAttack;
    /* 0x000C */ uint16_t wIceDefense;
    /* 0x000E */ uint16_t wLightAttack;
    /* 0x0010 */ uint16_t wLightDefense;
    /* 0x0012 */ uint16_t wMaxHp;
    /* 0x0014 */ uint16_t wMaxMp;
    /* 0x0016 */ uint8_t byHitAddition;
    /* 0x0017 */ uint8_t byMagAddition;
};
BS_STATIC_ASSERT_SIZE(_PC_2STAT_, 0x18);

// struct _ACCOUNT_ITEM_; size: 0x10
struct _ACCOUNT_ITEM_ {
    /* 0x0000 */ _ITEM_ID_ ItemID;
    /* 0x0008 */ _ITEM_INFO_ ItemInfo;
    /* 0x000C */ uint8_t byWearIndex;
    uint8_t _pad_tail[0x3];
};
BS_STATIC_ASSERT_SIZE(_ACCOUNT_ITEM_, 0x10);

// struct _CHARACTER_INFO_; size: 0xB0
struct _CHARACTER_INFO_ {
    /* 0x0000 */ char szPCName[13];
    /* 0x000D */ uint8_t byType;
    /* 0x000E */ uint16_t wLevel;
    /* 0x0010 */ _ACCOUNT_ITEM_ WearList[10];
};
BS_STATIC_ASSERT_SIZE(_CHARACTER_INFO_, 0xB0);

// struct _ROOM_OPT_; size: 0x4
struct _ROOM_OPT_ {
    /* 0x0000 */ union {
        unsigned long allowed_pc_cnt;
        unsigned long battle_type;
        unsigned long is_private;
        unsigned long level_restrict;
        unsigned long reserved;
        unsigned long team_count;
        unsigned long team_distribute;
        unsigned long time_out;
        unsigned long watch_allowed;
    };
};
BS_STATIC_ASSERT_SIZE(_ROOM_OPT_, 0x4);

// struct _CLAN_MEMBER_; size: 0x16
struct _CLAN_MEMBER_ {
    /* 0x0000 */ char szPCName[13];
    /* 0x000D */ unsigned long dwPCID;
    /* 0x0011 */ uint16_t wLevel;
    /* 0x0013 */ uint8_t rankInClan;
    /* 0x0014 */ uint8_t status;
    /* 0x0015 */ uint8_t byPCType;
};
BS_STATIC_ASSERT_SIZE(_CLAN_MEMBER_, 0x16);

// class CBaseServer; size: 0x800078
struct CBaseServer {
    /* 0x0000 */ CLoopThread base_CLoopThread;
    /* 0x0010 */ int32_t m_bConnect;
    /* 0x0014 */ uint32_t m_sSocket;
    /* 0x0018 */ void* m_wsaEvent;
    /* 0x001C */ uint8_t m_netEvent[0x2C]; /* original type: _WSANETWORKEVENTS */
    /* 0x0048 */ char m_RecvMsgQBuf[4194304];
    /* 0x400048 */ int32_t m_nRecvStartPos;
    /* 0x40004C */ int32_t m_nRecvEndPos;
    /* 0x400050 */ char m_SendMsgQBuf[4194304];
    /* 0x800050 */ int32_t m_nSendStartPos;
    /* 0x800054 */ int32_t m_nSendEndPos;
    /* 0x800058 */ int32_t m_iSentCount;
    /* 0x80005C */ int32_t m_iSentSize;
    /* 0x800060 */ uint8_t m_csSend[0x18]; /* original type: _RTL_CRITICAL_SECTION */
};
BS_STATIC_ASSERT_SIZE(CBaseServer, 0x800078);

// class MSG_S2G_HEADER; size: 0xA
struct MSG_S2G_HEADER {
    /* 0x0000 */ unsigned long dwSize;
    /* 0x0004 */ unsigned long dwPCID;
    /* 0x0008 */ uint8_t byCtrl;
    /* 0x0009 */ uint8_t byCmd;
};
BS_STATIC_ASSERT_SIZE(MSG_S2G_HEADER, 0xA);

// class MSG_S2C_HEADER; size: 0xC
struct MSG_S2C_HEADER {
    /* 0x0000 */ unsigned long dwSize;
    /* 0x0004 */ unsigned long dwPCID;
    /* 0x0008 */ uint8_t byCtrl;
    /* 0x0009 */ uint8_t byCmd;
    /* 0x000A */ uint16_t wProtocol;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_HEADER, 0xC);

// class MSG_C2S_OP_CMD; size: 0x4E
struct MSG_C2S_OP_CMD {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wOpCmd;
    /* 0x000E */ char szParam[64];
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_OP_CMD, 0x4E);

// class MSG_S2C_ERROR; size: 0x4E
struct MSG_S2C_ERROR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wErrCode;
    /* 0x000E */ char szErrStr[64];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ERROR, 0x4E);

// class MSG_C2S_UNKNOWN_CHAR; size: 0x13
struct MSG_C2S_UNKNOWN_CHAR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byType;
    /* 0x000D */ unsigned long dwID;
    /* 0x0011 */ uint16_t wRetProtocol;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_UNKNOWN_CHAR, 0x13);

// struct _ITEM_APPEAR_; size: 0x4
struct _ITEM_APPEAR_ {
    /* 0x0000 */ union {
        unsigned long ItemCode;
        unsigned long bFireAttr;
        unsigned long bIceAttr;
        unsigned long bLightAttr;
        unsigned long level;
        unsigned long reserved;
        unsigned long wearIndex;
    };
};
BS_STATIC_ASSERT_SIZE(_ITEM_APPEAR_, 0x4);

// struct _PET_APPEAR_; size: 0x4
struct _PET_APPEAR_ {
    /* 0x0000 */ uint16_t code;
    /* 0x0002 */ uint16_t level;
};
BS_STATIC_ASSERT_SIZE(_PET_APPEAR_, 0x4);

// struct _SKILL_CAST_; size: 0x3
struct _SKILL_CAST_ {
    /* 0x0000 */ uint8_t byClassIndex;
    /* 0x0001 */ uint8_t bySkillIndex;
    /* 0x0002 */ uint8_t bySkillLevel;
};
BS_STATIC_ASSERT_SIZE(_SKILL_CAST_, 0x3);

// class MSG_S2C_PC_APPEAR; size: 0x79
struct MSG_S2C_PC_APPEAR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPCID;
    /* 0x0010 */ char szPCName[13];
    /* 0x001D */ uint8_t byPCType;
    /* 0x001E */ uint8_t byCaoLevel;
    /* 0x001F */ union {
        uint8_t action;
        uint8_t direction;
    };
    /* 0x0020 */ unsigned long dwAppearCell;
    /* 0x0024 */ _SOCIALINFO_ SInfo;
    /* 0x0028 */ _ITEM_APPEAR_ HeadItem;
    /* 0x002C */ _ITEM_APPEAR_ UpperItem;
    /* 0x0030 */ _ITEM_APPEAR_ LowerItem;
    /* 0x0034 */ _ITEM_APPEAR_ HandItem;
    /* 0x0038 */ _ITEM_APPEAR_ FootItem;
    /* 0x003C */ _ITEM_APPEAR_ LeftItem;
    /* 0x0040 */ _ITEM_APPEAR_ RightItem;
    /* 0x0044 */ _PET_APPEAR_ ActivePet;
    /* 0x0048 */ _SKILL_CAST_ CastSkillList[4];
    /* 0x0054 */ char szClanName[32];
    /* 0x0074 */ unsigned long dwMarkID;
    /* 0x0078 */ uint8_t byWearFlag;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PC_APPEAR, 0x79);

// class MSG_S2C_PC_DISAPPEAR; size: 0x10
struct MSG_S2C_PC_DISAPPEAR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PC_DISAPPEAR, 0x10);

// class MSG_S2C_CHAR_LIST; size: 0x37C
struct MSG_S2C_CHAR_LIST {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _CHARACTER_INFO_ CharInfo[5];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_CHAR_LIST, 0x37C);

// class MSG_S2C_CHAR_LOGIN_OK; size: 0x1D
struct MSG_S2C_CHAR_LOGIN_OK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ char szPCName[13];
    /* 0x0019 */ unsigned long dwPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_CHAR_LOGIN_OK, 0x1D);

// struct _PC_INFO_; size: 0x3C
struct _PC_INFO_ {
    /* 0x0000 */ char szPCName[13];
    /* 0x000D */ uint8_t byType;
    /* 0x000E */ uint16_t wLevel;
    /* 0x0010 */ unsigned long dwExp;
    /* 0x0014 */ uint16_t wMapIndex;
    uint8_t _pad_0000[0x2];
    /* 0x0018 */ unsigned long dwCellIndex;
    /* 0x001C */ _SKILL_ SkillList;
    /* 0x0028 */ uint8_t byPKCount;
    uint8_t _pad_0001[0x1];
    /* 0x002A */ uint16_t wRTime;
    /* 0x002C */ _SOCIALINFO_ SInfo;
    /* 0x0030 */ unsigned long dwMoney;
    /* 0x0034 */ uint16_t wStoredHp;
    /* 0x0036 */ uint16_t wStoredMp;
    /* 0x0038 */ unsigned long dwLore;
};
BS_STATIC_ASSERT_SIZE(_PC_INFO_, 0x3C);

// struct _PC_STAT_UPDATE_; size: 0x2C
struct _PC_STAT_UPDATE_ {
    /* 0x0000 */ uint16_t wPoint;
    /* 0x0002 */ uint16_t wStr;
    /* 0x0004 */ uint16_t wMagic;
    /* 0x0006 */ uint16_t wDex;
    /* 0x0008 */ uint16_t wVit;
    /* 0x000A */ uint16_t wMana;
    /* 0x000C */ uint16_t wHPCapacity;
    /* 0x000E */ uint16_t wMPCapacity;
    /* 0x0010 */ uint16_t wHP;
    /* 0x0012 */ uint16_t wMP;
    /* 0x0014 */ _PC_2STAT_ PC2ndStat;
};
BS_STATIC_ASSERT_SIZE(_PC_STAT_UPDATE_, 0x2C);

// class MSG_S2C_WORLD_LOGIN; size: 0x40C
struct MSG_S2C_WORLD_LOGIN {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _PC_INFO_ PCInfo;
    /* 0x0048 */ _PC_STAT_UPDATE_ PCStatUpdate;
    /* 0x0074 */ _ITEM_IN_WEAR_ WearList[10];
    /* 0x013C */ _ITEM_IN_INVEN_ HaveList[30];
    /* 0x0394 */ _PET_INFO_ PetActive;
    /* 0x03A8 */ _PET_INFO_ PetInven[5];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_WORLD_LOGIN, 0x40C);

// class MSG_S2C_ANS_MOVE; size: 0x12
struct MSG_S2C_ANS_MOVE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bAns;
    /* 0x000D */ unsigned long dwDestCell;
    /* 0x0011 */ uint8_t byMoveSpeed;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_MOVE, 0x12);

// class MSG_S2C_SEE_MOVE; size: 0x19
struct MSG_S2C_SEE_MOVE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMovePCID;
    /* 0x0010 */ unsigned long dwStartCell;
    /* 0x0014 */ unsigned long dwDestCell;
    /* 0x0018 */ uint8_t byMoveSpeed;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_MOVE, 0x19);

// class MSG_S2C_FIX_MOVE; size: 0x10
struct MSG_S2C_FIX_MOVE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwFixCell;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_FIX_MOVE, 0x10);

// class MSG_S2C_SEE_STOP; size: 0x14
struct MSG_S2C_SEE_STOP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwStopPCID;
    /* 0x0010 */ unsigned long dwFixCell;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_STOP, 0x14);

// struct _PET_STAT_; size: 0x10
struct _PET_STAT_ {
    /* 0x0000 */ _PET_ID_ PetID;
    /* 0x0008 */ uint8_t Level;
    uint8_t _pad_0000[0x1];
    /* 0x000A */ uint16_t Exp;
    /* 0x000C */ uint16_t Food;
    uint8_t _pad_tail[0x2];
};
BS_STATIC_ASSERT_SIZE(_PET_STAT_, 0x10);

// class MSG_S2C_STAT_AUTOUPDATE; size: 0x6E
struct MSG_S2C_STAT_AUTOUPDATE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wRTime;
    /* 0x000E */ _PET_STAT_ PetActive;
    /* 0x001E */ _PET_STAT_ PetInven[5];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_STAT_AUTOUPDATE, 0x6E);

// class MSG_S2C_PET_LEVELUP; size: 0x11
struct MSG_S2C_PET_LEVELUP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwOPCID;
    /* 0x0010 */ uint8_t byLevel;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PET_LEVELUP, 0x11);

// class MSG_S2C_PET_BUY; size: 0x25
struct MSG_S2C_PET_BUY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t petIndex;
    /* 0x000D */ _PET_INFO_ NewPet;
    /* 0x0021 */ unsigned long dwMoney;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PET_BUY, 0x25);

// class MSG_C2S_USE_ITEM; size: 0x10
struct MSG_C2S_USE_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_USE_ITEM, 0x10);

// class MSG_S2C_BUY_ITEM; size: 0x21
struct MSG_S2C_BUY_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t invenIndex;
    /* 0x000D */ _ITEM_ Item;
    /* 0x001D */ unsigned long dwMoney;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_BUY_ITEM, 0x21);

// class MSG_S2C_NPC_APPEAR; size: 0x34
struct MSG_S2C_NPC_APPEAR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wNPCType;
    /* 0x000E */ unsigned long dwNPCID;
    /* 0x0012 */ unsigned long dwNPCHp;
    /* 0x0016 */ unsigned long dwNPCMp;
    /* 0x001A */ unsigned long dwCellIndex;
    /* 0x001E */ int32_t iDirection;
    /* 0x0022 */ uint16_t wNPCLevel;
    /* 0x0024 */ _SKILL_CAST_ CastSkillList[4];
    /* 0x0030 */ int32_t bIsRegen;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_NPC_APPEAR, 0x34);

// class MSG_S2C_NPC_DISAPPEAR; size: 0x10
struct MSG_S2C_NPC_DISAPPEAR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_NPC_DISAPPEAR, 0x10);

// class MSG_S2C_NPC_MOVE; size: 0x34
struct MSG_S2C_NPC_MOVE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ unsigned long dwStartCell;
    /* 0x0014 */ unsigned long dwMoveCell[8];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_NPC_MOVE, 0x34);

// class MSG_S2C_NPC_STATE; size: 0x13
struct MSG_S2C_NPC_STATE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ uint8_t byNPCState;
    /* 0x0011 */ uint16_t wReserved;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_NPC_STATE, 0x13);

// class MSG_S2C_NPC_ATTACK; size: 0x26
struct MSG_S2C_NPC_ATTACK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ unsigned long dwNPCCell;
    /* 0x0014 */ unsigned long dwTargetPCID;
    /* 0x0018 */ unsigned long dwTargetPCCell;
    /* 0x001C */ unsigned long dwPCHp;
    /* 0x0020 */ uint16_t wAttackType;
    /* 0x0022 */ int32_t bPCDie;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_NPC_ATTACK, 0x26);

// class MSG_S2C_SEE_NPC_ATTACK; size: 0x22
struct MSG_S2C_SEE_NPC_ATTACK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ unsigned long dwNPCCell;
    /* 0x0014 */ unsigned long dwPCID;
    /* 0x0018 */ unsigned long dwPCCell;
    /* 0x001C */ uint16_t wAttackType;
    /* 0x001E */ int32_t bPCDie;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_NPC_ATTACK, 0x22);

// struct _NPC_SKILL_DAMAGEINFO_; size: 0x9
struct _NPC_SKILL_DAMAGEINFO_ {
    /* 0x0000 */ unsigned long dwTargetID;
    /* 0x0004 */ unsigned long dwCellIndex;
    /* 0x0008 */ uint8_t bDie;
};
BS_STATIC_ASSERT_SIZE(_NPC_SKILL_DAMAGEINFO_, 0x9);

// class MSG_S2C_SEE_NPC_SKILLATTACK; size: 0xFB
struct MSG_S2C_SEE_NPC_SKILLATTACK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ unsigned long dwNPCCell;
    /* 0x0014 */ unsigned long dwBaseCell;
    /* 0x0018 */ uint8_t byAttackType;
    /* 0x0019 */ uint8_t targetCnt;
    /* 0x001A */ _NPC_SKILL_DAMAGEINFO_ targetInfo[25];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_NPC_SKILLATTACK, 0xFB);

// class MSG_S2C_ANS_ATTACK; size: 0x22
struct MSG_S2C_ANS_ATTACK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
    /* 0x000D */ unsigned long dwPCCell;
    /* 0x0011 */ uint8_t byTargetType;
    /* 0x0012 */ unsigned long dwTargetID;
    /* 0x0016 */ unsigned long dwTargetCell;
    /* 0x001A */ uint8_t byCurrentStep;
    /* 0x001B */ uint16_t wDamage;
    /* 0x001D */ uint8_t bFinish;
    /* 0x001E */ uint16_t wHP;
    /* 0x0020 */ uint16_t wMP;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_ATTACK, 0x22);

// class MSG_S2C_SEE_ATTACK; size: 0x20
struct MSG_S2C_SEE_ATTACK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPCID;
    /* 0x0010 */ unsigned long dwPCCell;
    /* 0x0014 */ uint8_t byTargetType;
    /* 0x0015 */ unsigned long dwTargetID;
    /* 0x0019 */ unsigned long dwTargetCell;
    /* 0x001D */ uint8_t byCurrentStep;
    /* 0x001E */ uint8_t byTargetStatus;
    /* 0x001F */ uint8_t bFinish;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_ATTACK, 0x20);

// class MSG_S2C_UPDATE_PKCOUNT; size: 0xF
struct MSG_S2C_UPDATE_PKCOUNT {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wRTime;
    /* 0x000E */ uint8_t byPKCount;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_UPDATE_PKCOUNT, 0xF);

// class MSG_S2C_UPDATE_PCEXP; size: 0x10
struct MSG_S2C_UPDATE_PCEXP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwExp;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_UPDATE_PCEXP, 0x10);

// class MSG_S2C_SKILL_DELAY_INFO; size: 0x2C
struct MSG_S2C_SKILL_DELAY_INFO {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byDelay[32];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SKILL_DELAY_INFO, 0x2C);

// class MSG_S2C_LEARN_SKILL; size: 0x17
struct MSG_S2C_LEARN_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t invenIdx;
    /* 0x000D */ _ITEM_ID_ ScrollID;
    /* 0x0015 */ uint8_t skillCode;
    /* 0x0016 */ uint8_t skillLevel;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_LEARN_SKILL, 0x17);

// class MSG_S2C_ERR_SKILL; size: 0xE
struct MSG_S2C_ERR_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySkillIndex;
    /* 0x000D */ uint8_t byErrCode;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ERR_SKILL, 0xE);

// struct _SKILL_DAMAGEINFO_; size: 0xA
struct _SKILL_DAMAGEINFO_ {
    /* 0x0000 */ unsigned long dwTargetID;
    /* 0x0004 */ uint16_t wDamage;
    /* 0x0006 */ unsigned long dwCellIndex;
};
BS_STATIC_ASSERT_SIZE(_SKILL_DAMAGEINFO_, 0xA);

// class MSG_S2C_DONE_SKILL; size: 0x116
struct MSG_S2C_DONE_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySkillIndex;
    /* 0x000D */ uint8_t bySkillLevel;
    /* 0x000E */ uint8_t byTargetType;
    /* 0x000F */ unsigned long dwCurCell;
    /* 0x0013 */ unsigned long dwBaseCell;
    /* 0x0017 */ uint16_t wHP;
    /* 0x0019 */ uint16_t wMP;
    /* 0x001B */ uint8_t targetCnt;
    /* 0x001C */ _SKILL_DAMAGEINFO_ targetInfo[25];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_DONE_SKILL, 0x116);

// class MSG_S2C_GET_SKILL; size: 0x1C
struct MSG_S2C_GET_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySkillIndex;
    /* 0x000D */ uint8_t bySkillLevel;
    /* 0x000E */ unsigned long dwOPCID;
    /* 0x0012 */ unsigned long dwBaseCell;
    /* 0x0016 */ uint16_t wHP;
    /* 0x0018 */ uint16_t wMP;
    /* 0x001A */ uint8_t bDie;
    /* 0x001B */ uint8_t byPetHP;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_GET_SKILL, 0x1C);

// class MSG_S2C_SEE_SKILL; size: 0x112
struct MSG_S2C_SEE_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySkillIndex;
    /* 0x000D */ uint8_t bySkillLevel;
    /* 0x000E */ unsigned long dwOPCID;
    /* 0x0012 */ unsigned long dwBaseCell;
    /* 0x0016 */ uint8_t byTargetType;
    /* 0x0017 */ uint8_t targetCnt;
    /* 0x0018 */ _SKILL_DAMAGEINFO_ targetInfo[25];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_SKILL, 0x112);

// class MSG_S2C_CAST_SKILL; size: 0x16
struct MSG_S2C_CAST_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySkillIndex;
    /* 0x000D */ uint8_t bySkillLevel;
    /* 0x000E */ uint16_t wHP;
    /* 0x0010 */ uint16_t wMP;
    /* 0x0012 */ unsigned long dwCurCell;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_CAST_SKILL, 0x16);

// class MSG_S2C_LASTING_SKILL; size: 0x1F
struct MSG_S2C_LASTING_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySkillClass;
    /* 0x000D */ uint8_t bySkillIndex;
    /* 0x000E */ uint8_t bySkillLevel;
    /* 0x000F */ unsigned long dwOPCID;
    /* 0x0013 */ uint8_t bOnOff;
    /* 0x0014 */ SKILL_STAT_CHANGE statChange;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_LASTING_SKILL, 0x1F);

// class MSG_S2C_SEE_LASTING_SKILL; size: 0x1C
struct MSG_S2C_SEE_LASTING_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySkillClass;
    /* 0x000D */ uint8_t bySkillIndex;
    /* 0x000E */ uint8_t bySkillLevel;
    /* 0x000F */ uint8_t byTargetType;
    /* 0x0010 */ unsigned long dwCastPCID;
    /* 0x0014 */ unsigned long dwTargetID;
    /* 0x0018 */ int32_t bOnOff;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_LASTING_SKILL, 0x1C);

// class MSG_S2C_PC_LEVELUP; size: 0x3A
struct MSG_S2C_PC_LEVELUP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wLevel;
    /* 0x000E */ _PC_STAT_UPDATE_ PCStatUpdate;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PC_LEVELUP, 0x3A);

// class MSG_S2C_SEE_LEVELUP; size: 0x10
struct MSG_S2C_SEE_LEVELUP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long wLevelUpPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_LEVELUP, 0x10);

// class MSG_S2C_ALLOT_POINT; size: 0x38
struct MSG_S2C_ALLOT_POINT {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _PC_STAT_UPDATE_ PCStatUpdate;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ALLOT_POINT, 0x38);

// class MSG_S2C_ITEM_APPEAR; size: 0x21
struct MSG_S2C_ITEM_APPEAR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ _ITEM_INFO_ ItemInfo;
    /* 0x0018 */ uint8_t objType;
    /* 0x0019 */ unsigned long dwObjID;
    /* 0x001D */ unsigned long dwCellIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ITEM_APPEAR, 0x21);

// class MSG_S2C_ITEM_DISAPPEAR; size: 0x18
struct MSG_S2C_ITEM_DISAPPEAR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ unsigned long dwCellIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ITEM_DISAPPEAR, 0x18);

// class MSG_S2C_PICKUP_ITEM; size: 0x1D
struct MSG_S2C_PICKUP_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ Item;
    /* 0x001C */ uint8_t byInvenIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PICKUP_ITEM, 0x1D);

// class MSG_S2C_DROP_ITEM; size: 0x19
struct MSG_S2C_DROP_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t result;
    /* 0x0015 */ unsigned long dwDropCell;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_DROP_ITEM, 0x19);

// class MSG_S2C_MOVE_ITEM; size: 0x1E
struct MSG_S2C_MOVE_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t index1;
    /* 0x000D */ _ITEM_ID_ ItemID1;
    /* 0x0015 */ uint8_t index2;
    /* 0x0016 */ _ITEM_ID_ ItemID2;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_MOVE_ITEM, 0x1E);

// class MSG_S2C_SEE_WEAR; size: 0x14
struct MSG_S2C_SEE_WEAR {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwOPCID;
    /* 0x0010 */ _ITEM_APPEAR_ ItemAppear;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_WEAR, 0x14);

// class MSG_S2C_WEAR_ITEM; size: 0x36
struct MSG_S2C_WEAR_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t wearIndex;
    /* 0x000D */ _ITEM_ID_ OnItemID;
    /* 0x0015 */ uint8_t invenIndex;
    /* 0x0016 */ _ITEM_ID_ OffItemID;
    /* 0x001E */ _PC_2STAT_ PC2ndStat;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_WEAR_ITEM, 0x36);

// class MSG_S2C_SEE_STRIP; size: 0x13
struct MSG_S2C_SEE_STRIP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwOPCID;
    /* 0x0010 */ uint16_t wItemCode;
    /* 0x0012 */ uint8_t wearIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_STRIP, 0x13);

// class MSG_S2C_STRIP_ITEM; size: 0x2D
struct MSG_S2C_STRIP_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t invenIndex;
    /* 0x0015 */ _PC_2STAT_ PC2ndStat;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_STRIP_ITEM, 0x2D);

// class MSG_S2C_SELL_ITEM; size: 0x19
struct MSG_S2C_SELL_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t errCode;
    /* 0x000D */ unsigned long dwMoney;
    /* 0x0011 */ _ITEM_ID_ ItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SELL_ITEM, 0x19);

// class MSG_S2C_GIVE_ITEM; size: 0x15
struct MSG_S2C_GIVE_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_GIVE_ITEM, 0x15);

// class MSG_S2C_GIVEN_ITEM; size: 0x2A
struct MSG_S2C_GIVEN_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ char szPCName[13];
    /* 0x0019 */ uint8_t invenIndex;
    /* 0x001A */ _ITEM_ Item;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_GIVEN_ITEM, 0x2A);

// class MSG_S2C_USE_POTION; size: 0x11
struct MSG_S2C_USE_POTION {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
    /* 0x000D */ uint16_t dwRecovery;
    /* 0x000F */ uint16_t dwStored;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_USE_POTION, 0x11);

// class MSG_S2C_ASK_DEAL; size: 0x10
struct MSG_S2C_ASK_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwAskPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ASK_DEAL, 0x10);

// class MSG_S2C_ANS_DEAL; size: 0x11
struct MSG_S2C_ANS_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwOPCID;
    /* 0x0010 */ uint8_t errCode;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_DEAL, 0x11);

// class MSG_S2C_PUTIN_ITEM; size: 0x24
struct MSG_S2C_PUTIN_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMoney;
    /* 0x0010 */ uint16_t wHPotion;
    /* 0x0012 */ uint16_t wMPotion;
    /* 0x0014 */ _ITEM_ Item;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PUTIN_ITEM, 0x24);

// class MSG_S2C_PUTOUT_ITEM; size: 0x1C
struct MSG_S2C_PUTOUT_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMoney;
    /* 0x0010 */ uint16_t wHPotion;
    /* 0x0012 */ uint16_t wMPotion;
    /* 0x0014 */ _ITEM_ID_ ItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PUTOUT_ITEM, 0x1C);

// class MSG_S2C_DECIDE_DEAL; size: 0xC
struct MSG_S2C_DECIDE_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_DECIDE_DEAL, 0xC);

// class MSG_S2C_SUCCESS_DEAL; size: 0x1A4
struct MSG_S2C_SUCCESS_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMoney;
    /* 0x0010 */ uint16_t wHPotion;
    /* 0x0012 */ uint16_t wMPotion;
    /* 0x0014 */ _ITEM_IN_INVEN_ takeItemList[20];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SUCCESS_DEAL, 0x1A4);

// class MSG_S2C_FAIL_DEAL; size: 0xD
struct MSG_S2C_FAIL_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t errCode;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_FAIL_DEAL, 0xD);

// class MSG_S2C_PEAR_DECIDE; size: 0xC
struct MSG_S2C_PEAR_DECIDE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PEAR_DECIDE, 0xC);

// class MSG_S2C_PUTIN_PET; size: 0x20
struct MSG_S2C_PUTIN_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _PET_INFO_ Pet;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PUTIN_PET, 0x20);

// class MSG_S2C_PUTOUT_PET; size: 0x10
struct MSG_S2C_PUTOUT_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPetID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PUTOUT_PET, 0x10);

// class MSG_S2C_SUCCESS_DEAL_PET; size: 0x34
struct MSG_S2C_SUCCESS_DEAL_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _PET_INFO_ takePetList[2];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SUCCESS_DEAL_PET, 0x34);

// class MSG_S2C_CONFIRM_ITEM; size: 0x21
struct MSG_S2C_CONFIRM_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ Item;
    /* 0x001C */ uint8_t byIndex;
    /* 0x001D */ unsigned long dwMoney;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_CONFIRM_ITEM, 0x21);

// class MSG_S2C_REMODEL_ITEM; size: 0x1E
struct MSG_S2C_REMODEL_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byStoneIndex;
    /* 0x000D */ _ITEM_ Item;
    /* 0x001D */ uint8_t byItemIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_REMODEL_ITEM, 0x1E);

// class MSG_S2C_SET_PC2STAT; size: 0x25
struct MSG_S2C_SET_PC2STAT {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _PC_2STAT_ PC2ndStat;
    /* 0x0024 */ uint8_t byStatCode;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SET_PC2STAT, 0x25);

// class MSG_C2S_SAY; size: 0x5A
struct MSG_C2S_SAY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySayType;
    /* 0x000D */ char szListenPC[13];
    /* 0x001A */ char szWords[64];
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_SAY, 0x5A);

// class MSG_S2C_SAY; size: 0x5E
struct MSG_S2C_SAY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySayType;
    /* 0x000D */ unsigned long dwSayPCID;
    /* 0x0011 */ char szSayPC[13];
    /* 0x001E */ char szWords[64];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SAY, 0x5E);

// class MSG_C2S_QUEST_INFO; size: 0x15
struct MSG_C2S_QUEST_INFO {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t invenIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_QUEST_INFO, 0x15);

// class MSG_S2C_QUEST_INFO; size: 0x1CC
struct MSG_S2C_QUEST_INFO {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ char Title[64];
    /* 0x004C */ char Desc[384];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_QUEST_INFO, 0x1CC);

// class MSG_C2S_QUEST_START; size: 0x15
struct MSG_C2S_QUEST_START {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t invenIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_QUEST_START, 0x15);

// class MSG_S2C_QUEST_START; size: 0x15
struct MSG_S2C_QUEST_START {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t errCode;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_QUEST_START, 0x15);

// class MSG_S2C_QUEST_CONTINUE; size: 0x1CC
struct MSG_S2C_QUEST_CONTINUE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ char Title[64];
    /* 0x004C */ char Desc[384];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_QUEST_CONTINUE, 0x1CC);

// class MSG_C2S_QUEST_CANCEL; size: 0xC
struct MSG_C2S_QUEST_CANCEL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_QUEST_CANCEL, 0xC);

// class MSG_S2C_QUEST_CANCEL; size: 0xD
struct MSG_S2C_QUEST_CANCEL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t errCode;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_QUEST_CANCEL, 0xD);

// class MSG_S2C_QUEST_STATE; size: 0xCC
struct MSG_S2C_QUEST_STATE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ char szState[192];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_QUEST_STATE, 0xCC);

// class MSG_S2C_QUEST_OK; size: 0x10
struct MSG_S2C_QUEST_OK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ int32_t Lore;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_QUEST_OK, 0x10);

// class MSG_S2C_ANS_HEAL; size: 0x10
struct MSG_S2C_ANS_HEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wHP;
    /* 0x000E */ uint16_t wMP;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_HEAL, 0x10);

// class MSG_S2C_ASK_PARTY; size: 0x10
struct MSG_S2C_ASK_PARTY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwAskPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ASK_PARTY, 0x10);

// class MSG_S2C_ANS_PARTY; size: 0xD
struct MSG_S2C_ANS_PARTY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t result;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_PARTY, 0xD);

// struct _PARTY_MEMBER_; size: 0x1C
struct _PARTY_MEMBER_ {
    /* 0x0000 */ unsigned long dwMemberID;
    /* 0x0004 */ char szName[13];
    uint8_t _pad_0000[0x3];
    /* 0x0014 */ unsigned long dwCurCell;
    /* 0x0018 */ uint16_t wCurMap;
    /* 0x001A */ uint16_t wHPRatio;
};
BS_STATIC_ASSERT_SIZE(_PARTY_MEMBER_, 0x1C);

// class MSG_S2C_PARTY_IN; size: 0x28
struct MSG_S2C_PARTY_IN {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _PARTY_MEMBER_ Member;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PARTY_IN, 0x28);

// class MSG_S2C_PARTY_LIST; size: 0x7C
struct MSG_S2C_PARTY_LIST {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _PARTY_MEMBER_ Member[4];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PARTY_LIST, 0x7C);

// class MSG_S2C_PARTY_OUT; size: 0x10
struct MSG_S2C_PARTY_OUT {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMemberID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PARTY_OUT, 0x10);

// class MSG_S2C_PARTY_WHERE; size: 0x16
struct MSG_S2C_PARTY_WHERE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMemberID;
    /* 0x0010 */ uint16_t wMapIndex;
    /* 0x0012 */ unsigned long dwCellIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PARTY_WHERE, 0x16);

// class MSG_S2C_PARTY_HP; size: 0x12
struct MSG_S2C_PARTY_HP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMemberID;
    /* 0x0010 */ uint16_t wHP;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PARTY_HP, 0x12);

// class MSG_S2C_PC_ATTACK; size: 0x1B
struct MSG_S2C_PC_ATTACK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwAttackPCID;
    /* 0x0010 */ unsigned long dwAttackPCCell;
    /* 0x0014 */ uint16_t wPCHP;
    /* 0x0016 */ uint16_t wPCMP;
    /* 0x0018 */ uint8_t byCurStep;
    /* 0x0019 */ uint8_t bDie;
    /* 0x001A */ uint8_t byPetHP;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PC_ATTACK, 0x1B);

// class MSG_S2C_ACTIVE_PET; size: 0x2D
struct MSG_S2C_ACTIVE_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwActivePetID;
    /* 0x0010 */ unsigned long dwInactPetID;
    /* 0x0014 */ uint8_t petIndex;
    /* 0x0015 */ _PC_2STAT_ PC2ndStat;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ACTIVE_PET, 0x2D);

// class MSG_S2C_INACTIVE_PET; size: 0x29
struct MSG_S2C_INACTIVE_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwInactPetID;
    /* 0x0010 */ uint8_t petIndex;
    /* 0x0011 */ _PC_2STAT_ PC2ndStat;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_INACTIVE_PET, 0x29);

// class MSG_S2C_SEE_PET; size: 0x15
struct MSG_S2C_SEE_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwOPCID;
    /* 0x0010 */ _PET_APPEAR_ PetAppear;
    /* 0x0014 */ uint8_t petStat;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SEE_PET, 0x15);

// class MSG_S2C_PET_DIE; size: 0x28
struct MSG_S2C_PET_DIE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPetID;
    /* 0x0010 */ _PC_2STAT_ PC2ndStat;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PET_DIE, 0x28);

// class MSG_S2C_PET_SELL; size: 0x15
struct MSG_S2C_PET_SELL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t petIndex;
    /* 0x000D */ unsigned long PetID;
    /* 0x0011 */ unsigned long dwMoney;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_PET_SELL, 0x15);

// class MSG_S2C_FEED_PET; size: 0x1C
struct MSG_S2C_FEED_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t result;
    /* 0x0015 */ unsigned long PetID;
    /* 0x0019 */ uint8_t petIndex;
    /* 0x001A */ uint16_t wQuantity;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_FEED_PET, 0x1C);

// class MSG_S2C_USESCROLL; size: 0x12
struct MSG_S2C_USESCROLL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byInvenIndex;
    /* 0x000D */ unsigned long dwItemID;
    /* 0x0011 */ uint8_t amount;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_USESCROLL, 0x12);

// class MSG_S2C_UPDATE_MONEY; size: 0x11
struct MSG_S2C_UPDATE_MONEY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ int32_t iAddMoney;
    /* 0x0010 */ uint8_t code;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_UPDATE_MONEY, 0x11);

// class MSG_S2C_REVIVE_PET; size: 0x20
struct MSG_S2C_REVIVE_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwItemID;
    /* 0x0010 */ _PET_STAT_ PetUpdate;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_REVIVE_PET, 0x20);

// class MSG_S2C_SVR_TIME; size: 0xE
struct MSG_S2C_SVR_TIME {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t hour;
    /* 0x000D */ uint8_t min;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SVR_TIME, 0xE);

// class MSG_S2C_GESTURE; size: 0x11
struct MSG_S2C_GESTURE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwGesturePCID;
    /* 0x0010 */ uint8_t byGestureType;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_GESTURE, 0x11);

// struct _GAME_OPTION_; size: 0x1
struct _GAME_OPTION_ {
    /* 0x0000 */ union {
        uint8_t bDeal;
        uint8_t bGiven;
        uint8_t bParty;
        uint8_t bPrivateSay;
        uint8_t bReserved;
    };
};
BS_STATIC_ASSERT_SIZE(_GAME_OPTION_, 0x1);

// class MSG_S2C_OPTION; size: 0xD
struct MSG_S2C_OPTION {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _GAME_OPTION_ option;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_OPTION, 0xD);

// class MSG_S2C_SUBMAP_INFO; size: 0x25
struct MSG_S2C_SUBMAP_INFO {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ char szSubmapName[20];
    /* 0x0020 */ uint16_t wSubmapIndex;
    /* 0x0022 */ union {
        uint8_t Reserved;
        uint8_t bKeyword;
        uint8_t bOpen;
        uint8_t bPublic;
    };
    /* 0x0023 */ uint8_t Condition_Level;
    /* 0x0024 */ uint8_t Condition_Type;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_SUBMAP_INFO, 0x25);

// class MSG_S2C_ENTER; size: 0x13
struct MSG_S2C_ENTER {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byErrorCode;
    /* 0x000D */ uint16_t wSubmapIndex;
    /* 0x000F */ unsigned long dwCellIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ENTER, 0x13);

// class MSG_S2C_OTHER_UPDATE; size: 0x12
struct MSG_S2C_OTHER_UPDATE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwOPCID;
    /* 0x0010 */ uint8_t byCaoLevel;
    /* 0x0011 */ uint8_t byPose;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_OTHER_UPDATE, 0x12);

// class MSG_S2S_HEADER; size: 0x2
struct MSG_S2S_HEADER {
    /* 0x0000 */ uint16_t wProtocol;
};
BS_STATIC_ASSERT_SIZE(MSG_S2S_HEADER, 0x2);

// class MSG_S2M_SVR_LOGIN; size: 0x3
struct MSG_S2M_SVR_LOGIN {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t byThisServerID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_SVR_LOGIN, 0x3);

// class MSG_S2M_CHAR_LOGIN; size: 0x29
struct MSG_S2M_CHAR_LOGIN {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ char szPCName[13];
    /* 0x000F */ char szAccountName[21];
    /* 0x0024 */ unsigned long dwPCID;
    /* 0x0028 */ uint8_t byGateSvrID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_CHAR_LOGIN, 0x29);

// class MSG_S2M_WORLD_LOGIN; size: 0x13
struct MSG_S2M_WORLD_LOGIN {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ char szPCName[13];
    /* 0x000F */ unsigned long dwPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_WORLD_LOGIN, 0x13);

// struct _PCDATA_; size: 0x414
struct _PCDATA_ {
    /* 0x0000 */ char szPCName[13];
    /* 0x000D */ char szAccountName[21];
    /* 0x0022 */ uint8_t byType;
    uint8_t _pad_0000[0x1];
    /* 0x0024 */ uint16_t wLevel;
    uint8_t _pad_0001[0x2];
    /* 0x0028 */ unsigned long dwExp;
    /* 0x002C */ uint16_t wStr;
    /* 0x002E */ uint16_t wMagic;
    /* 0x0030 */ uint16_t wDex;
    /* 0x0032 */ uint16_t wVit;
    /* 0x0034 */ uint16_t wMana;
    /* 0x0036 */ uint16_t wPoint;
    /* 0x0038 */ uint16_t wHp;
    /* 0x003A */ uint16_t wMp;
    /* 0x003C */ uint16_t wStoredHp;
    /* 0x003E */ uint16_t wStoredMp;
    /* 0x0040 */ uint16_t wMapIndex;
    uint8_t _pad_0002[0x2];
    /* 0x0044 */ unsigned long dwCellIndex;
    /* 0x0048 */ _SKILL_ SkillList;
    /* 0x0054 */ uint8_t byPKCount;
    uint8_t _pad_0003[0x1];
    /* 0x0056 */ uint16_t wRTime;
    /* 0x0058 */ _SOCIALINFO_ SInfo;
    /* 0x005C */ unsigned long dwMoney;
    /* 0x0060 */ unsigned long dwLore;
    /* 0x0064 */ uint16_t wLastQuest;
    uint8_t _pad_0004[0x2];
    /* 0x0068 */ unsigned long dwLastRTime;
    /* 0x006C */ unsigned long dwFatigue;
    /* 0x0070 */ _ITEM_IN_WEAR_ WearList[10];
    /* 0x0138 */ _ITEM_IN_INVEN_ HaveList[30];
    /* 0x0390 */ _PET_INFO_ PetActive;
    /* 0x03A4 */ _PET_INFO_ PetInven[5];
    /* 0x0408 */ _SAVE_QUEST_INFO_ SaveQuestInfo;
};
BS_STATIC_ASSERT_SIZE(_PCDATA_, 0x414);

// class MSG_S2M_CHAR_LOGOUT; size: 0x41A
struct MSG_S2M_CHAR_LOGOUT {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ unsigned long dwPCID;
    /* 0x0006 */ _PCDATA_ PCData;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_CHAR_LOGOUT, 0x41A);

// class MSG_S2M_DATA_UPDATE; size: 0x41A
struct MSG_S2M_DATA_UPDATE {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ unsigned long dwPCID;
    /* 0x0006 */ _PCDATA_ PCData;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_DATA_UPDATE, 0x41A);

// class MSG_M2S_PASS2GATE; size: 0x107
struct MSG_M2S_PASS2GATE {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t byGateSvrID;
    /* 0x0003 */ int32_t nSize;
    /* 0x0007 */ char Msg[256];
};
BS_STATIC_ASSERT_SIZE(MSG_M2S_PASS2GATE, 0x107);

// class MSG_S2M_SAY; size: 0x62
struct MSG_S2M_SAY {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t bySayType;
    /* 0x0003 */ unsigned long dwSayPCID;
    /* 0x0007 */ uint8_t bySayPCGateID;
    /* 0x0008 */ char szSayPC[13];
    /* 0x0015 */ char szListenPC[13];
    /* 0x0022 */ char szWords[64];
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_SAY, 0x62);

// class MSG_S2M_PARTY_CREATE; size: 0x13
struct MSG_S2M_PARTY_CREATE {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ char szPCName[13];
    /* 0x000F */ unsigned long dwPartyID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_PARTY_CREATE, 0x13);

// class MSG_S2M_PARTY_JOIN; size: 0x13
struct MSG_S2M_PARTY_JOIN {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ char szPCName[13];
    /* 0x000F */ unsigned long dwPartyID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_PARTY_JOIN, 0x13);

// class MSG_S2M_PARTY_OUT; size: 0xA
struct MSG_S2M_PARTY_OUT {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ unsigned long dwPartyID;
    /* 0x0006 */ unsigned long dwPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_PARTY_OUT, 0xA);

// class MSG_M2S_PARTY_OUT; size: 0xE
struct MSG_M2S_PARTY_OUT {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ unsigned long byGateSvrID;
    /* 0x0006 */ unsigned long dwPCID;
    /* 0x000A */ unsigned long dwOutPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_M2S_PARTY_OUT, 0xE);

// class MSG_M2S_ADMIN; size: 0x4B
struct MSG_M2S_ADMIN {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t Cmd;
    /* 0x0003 */ unsigned long dwVal1;
    /* 0x0007 */ unsigned long dwVal2;
    /* 0x000B */ char szVal[64];
};
BS_STATIC_ASSERT_SIZE(MSG_M2S_ADMIN, 0x4B);

// class MSG_S2G_DISCONNECT; size: 0xA
struct MSG_S2G_DISCONNECT {
    /* 0x0000 */ MSG_S2G_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_S2G_DISCONNECT, 0xA);

// class MSG_S2G_SWITCH_ZONE; size: 0xB
struct MSG_S2G_SWITCH_ZONE {
    /* 0x0000 */ MSG_S2G_HEADER MsgHeader;
    /* 0x000A */ uint8_t byNewServerID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2G_SWITCH_ZONE, 0xB);

// class MSG_S2G_BROADCAST; size: 0xA
struct MSG_S2G_BROADCAST {
    /* 0x0000 */ MSG_S2G_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_S2G_BROADCAST, 0xA);

// struct _ITEM_IN_STORAGE_; size: 0x14
struct _ITEM_IN_STORAGE_ {
    /* 0x0000 */ _ITEM_ID_ ItemID;
    /* 0x0008 */ _ITEM_INFO_ ItemInfo;
    /* 0x000C */ unsigned long ItemKey;
    /* 0x0010 */ uint8_t byStorageIndex;
    uint8_t _pad_tail[0x3];
};
BS_STATIC_ASSERT_SIZE(_ITEM_IN_STORAGE_, 0x14);

// class MSG_S2C_ANS_OPEN_STORAGE; size: 0x652
struct MSG_S2C_ANS_OPEN_STORAGE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byErrCode;
    /* 0x000D */ unsigned long dwMoney;
    /* 0x0011 */ uint8_t byNumItem;
    /* 0x0012 */ _ITEM_IN_STORAGE_ Storage[80];
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_OPEN_STORAGE, 0x652);

// class MSG_S2C_ANS_INVEN2STORAGE; size: 0x1B
struct MSG_S2C_ANS_INVEN2STORAGE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byErrCode;
    /* 0x000D */ _ITEM_ID_ itemID;
    /* 0x0015 */ uint8_t byInvenIndex;
    /* 0x0016 */ uint8_t byStorageIndex;
    /* 0x0017 */ unsigned long dwMoney;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_INVEN2STORAGE, 0x1B);

// class MSG_S2C_ANS_STORAGE2INVEN; size: 0x17
struct MSG_S2C_ANS_STORAGE2INVEN {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byErrCode;
    /* 0x000D */ _ITEM_ID_ itemID;
    /* 0x0015 */ uint8_t byStorageIndex;
    /* 0x0016 */ uint8_t byInvenIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_STORAGE2INVEN, 0x17);

// class MSG_S2C_ANS_DEPOSITE_MONEY; size: 0x15
struct MSG_S2C_ANS_DEPOSITE_MONEY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byErrCode;
    /* 0x000D */ unsigned long dwStorageMoney;
    /* 0x0011 */ unsigned long dwPCMoney;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_DEPOSITE_MONEY, 0x15);

// class MSG_S2C_ANS_WITHDRAW_MONEY; size: 0x15
struct MSG_S2C_ANS_WITHDRAW_MONEY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byErrCode;
    /* 0x000D */ unsigned long dwStorageMoney;
    /* 0x0011 */ unsigned long dwPCMoney;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_WITHDRAW_MONEY, 0x15);

// class MSG_S2C_ANS_MOVE_ITEMINSTORAGE; size: 0x1F
struct MSG_S2C_ANS_MOVE_ITEMINSTORAGE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byErrCode;
    /* 0x000D */ _ITEM_ID_ itemID;
    /* 0x0015 */ uint8_t bySrcIndex;
    /* 0x0016 */ uint8_t byTargetIndex;
    /* 0x0017 */ _ITEM_ID_ SwapitemID;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_ANS_MOVE_ITEMINSTORAGE, 0x1F);

// class MSG_S2M_LOAD_STORAGE; size: 0xF
struct MSG_S2M_LOAD_STORAGE {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ char szCharacterName[13];
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_LOAD_STORAGE, 0xF);

// class MSG_M2S_LOAD_STORAGE; size: 0x64B
struct MSG_M2S_LOAD_STORAGE {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ unsigned long dwPCID;
    /* 0x0006 */ uint8_t byGateSvrID;
    /* 0x0007 */ unsigned long dwStorageMoney;
    /* 0x000B */ _ITEM_IN_STORAGE_ StorageItemList[80];
};
BS_STATIC_ASSERT_SIZE(MSG_M2S_LOAD_STORAGE, 0x64B);

// class MSG_S2M_SAVE_STORAGE; size: 0x653
struct MSG_S2M_SAVE_STORAGE {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ char szCharacterName[13];
    /* 0x000F */ unsigned long dwStorageMoney;
    /* 0x0013 */ _ITEM_IN_STORAGE_ StorageItemList[80];
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_SAVE_STORAGE, 0x653);

// class MSG_S2M_OP_CMD; size: 0x55
struct MSG_S2M_OP_CMD {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ char szOPCharacter[13];
    /* 0x000F */ uint16_t wOpCmd;
    /* 0x0011 */ char szParam[64];
    /* 0x0051 */ int32_t bFlag;
};
BS_STATIC_ASSERT_SIZE(MSG_S2M_OP_CMD, 0x55);

// class MSG_M2S_OP_CMD; size: 0x51
struct MSG_M2S_OP_CMD {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ char szOPCharacter[13];
    /* 0x000F */ uint16_t wOpCmd;
    /* 0x0011 */ char szParam[64];
};
BS_STATIC_ASSERT_SIZE(MSG_M2S_OP_CMD, 0x51);

// class MSG_S2C_WARP_READY; size: 0xE
struct MSG_S2C_WARP_READY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wNewMapIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_WARP_READY, 0xE);

// class MSG_C2S_WARP; size: 0xE
struct MSG_C2S_WARP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wNewMapIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_WARP, 0xE);

// class MSG_S2C_WARP; size: 0x10
struct MSG_S2C_WARP {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNewCell;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_WARP, 0x10);

// class MSG_C2B_ASK_WARP_Z2B; size: 0xC
struct MSG_C2B_ASK_WARP_Z2B {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_WARP_Z2B, 0xC);

// class MSG_B2M_ASK_WARP_Z2B; size: 0x7
struct MSG_B2M_ASK_WARP_Z2B {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t byGateSvrID;
    /* 0x0003 */ unsigned long dwPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_B2M_ASK_WARP_Z2B, 0x7);

// struct _CLAN_DATA_; size: 0x16C
struct _CLAN_DATA_ {
    /* 0x0000 */ unsigned long dwClanID;
    /* 0x0004 */ unsigned long dwMarkID;
    /* 0x0008 */ unsigned long dwCDate;
    /* 0x000C */ unsigned long dwDDate;
    /* 0x0010 */ char szClanName[32];
    /* 0x0030 */ char szClanPasswd[16];
    /* 0x0040 */ uint8_t nation;
    /* 0x0041 */ uint8_t clanRank;
    /* 0x0042 */ uint8_t clanStat;
    /* 0x0043 */ uint8_t byReserved;
    /* 0x0044 */ uint16_t wStorageIndex;
    /* 0x0046 */ uint16_t wAgitID;
    /* 0x0048 */ uint16_t wWinCnt;
    /* 0x004A */ uint16_t wLooseCnt;
    /* 0x004C */ uint16_t wReserved;
    /* 0x004E */ _CLAN_MEMBER_ Member[13];
};
BS_STATIC_ASSERT_SIZE(_CLAN_DATA_, 0x16C);

// struct _BATTLE_WARP_DATA_; size: 0x8
struct _BATTLE_WARP_DATA_ {
    /* 0x0000 */ uint8_t byWarpType;
    uint8_t _pad_0000[0x3];
    /* 0x0004 */ unsigned long dwOPCID;
};
BS_STATIC_ASSERT_SIZE(_BATTLE_WARP_DATA_, 0x8);

// class MSG_M2B_ANS_WARP_Z2B; size: 0x59F
struct MSG_M2B_ANS_WARP_Z2B {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t byGateSvrID;
    /* 0x0003 */ unsigned long dwPCID;
    /* 0x0007 */ char szIP[16];
    /* 0x0017 */ _PCDATA_ PCData;
    /* 0x042B */ _CLAN_DATA_ ClanData;
    /* 0x0597 */ _BATTLE_WARP_DATA_ BtWarpData;
};
BS_STATIC_ASSERT_SIZE(MSG_M2B_ANS_WARP_Z2B, 0x59F);

// class MSG_B2C_ANS_WARP_Z2B; size: 0x3AD
struct MSG_B2C_ANS_WARP_Z2B {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
    /* 0x000D */ _BATTLE_WARP_DATA_ BtWarpData;
    /* 0x0015 */ _ITEM_IN_WEAR_ WearList[10];
    /* 0x00DD */ _ITEM_IN_INVEN_ HaveList[30];
    /* 0x0335 */ _PET_INFO_ PetActive;
    /* 0x0349 */ _PET_INFO_ PetInven[5];
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_WARP_Z2B, 0x3AD);

// class MSG_C2B_ASK_WARP_B2Z; size: 0xC
struct MSG_C2B_ASK_WARP_B2Z {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_WARP_B2Z, 0xC);

// class MSG_B2M_ASK_WARP_B2Z; size: 0x41B
struct MSG_B2M_ASK_WARP_B2Z {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t byGateSvrID;
    /* 0x0003 */ unsigned long dwPCID;
    /* 0x0007 */ _PCDATA_ PCData;
};
BS_STATIC_ASSERT_SIZE(MSG_B2M_ASK_WARP_B2Z, 0x41B);

// class MSG_M2B_ANS_WARP_B2Z; size: 0x8
struct MSG_M2B_ANS_WARP_B2Z {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t byGateSvrID;
    /* 0x0003 */ unsigned long dwPCID;
    /* 0x0007 */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_M2B_ANS_WARP_B2Z, 0x8);

// class MSG_B2C_ANS_WARP_B2Z; size: 0xF
struct MSG_B2C_ANS_WARP_B2Z {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint16_t wPreMapIndex;
    /* 0x000E */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_WARP_B2Z, 0xF);

// struct _ROOM_MAKE_DATA_; size: 0x4D
struct _ROOM_MAKE_DATA_ {
    /* 0x0000 */ char szTitle[64];
    /* 0x0040 */ char szPassWord[8];
    /* 0x0048 */ uint8_t byMapIndex;
    /* 0x0049 */ _ROOM_OPT_ Opt;
};
BS_STATIC_ASSERT_SIZE(_ROOM_MAKE_DATA_, 0x4D);

// class MSG_C2B_ASK_CREATE_ROOM; size: 0x59
struct MSG_C2B_ASK_CREATE_ROOM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ROOM_MAKE_DATA_ RoomMakeData;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_CREATE_ROOM, 0x59);

// class MSG_B2C_ANS_CREATE_ROOM; size: 0x11
struct MSG_B2C_ANS_CREATE_ROOM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
    /* 0x000D */ unsigned long dwRoomID;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_CREATE_ROOM, 0x11);

// class MSG_C2B_ASK_ENTER_ROOM; size: 0x59
struct MSG_C2B_ASK_ENTER_ROOM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwRoomID;
    /* 0x0010 */ char szRoomName[64];
    /* 0x0050 */ char szPassWord[8];
    /* 0x0058 */ uint8_t byEnterType;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_ENTER_ROOM, 0x59);

// class MSG_B2C_ANS_ENTER_ROOM; size: 0xD
struct MSG_B2C_ANS_ENTER_ROOM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_ENTER_ROOM, 0xD);

// class MSG_B2C_SEE_ENTER_ROOM; size: 0x41
struct MSG_B2C_SEE_ENTER_ROOM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPCID;
    /* 0x0010 */ char szName[13];
    /* 0x001D */ char szClanName[32];
    /* 0x003D */ int32_t iTeam;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SEE_ENTER_ROOM, 0x41);

// class MSG_C2B_ASK_LOBBY_INFO; size: 0x15
struct MSG_C2B_ASK_LOBBY_INFO {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwSearchStartRoomID;
    /* 0x0010 */ int32_t iSearchStartIndex;
    /* 0x0014 */ uint8_t byFilter;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_LOBBY_INFO, 0x15);

// struct _ROOM_VIEW_DATA_; size: 0x56
struct _ROOM_VIEW_DATA_ {
    /* 0x0000 */ unsigned long dwRoomID;
    /* 0x0004 */ char szTitle[64];
    /* 0x0044 */ char szOwner[13];
    /* 0x0051 */ uint8_t byMapIndex;
    /* 0x0052 */ _ROOM_OPT_ Opt;
};
BS_STATIC_ASSERT_SIZE(_ROOM_VIEW_DATA_, 0x56);

// class MSG_B2C_SEE_LOBBY_INFO; size: 0x368
struct MSG_B2C_SEE_LOBBY_INFO {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ROOM_VIEW_DATA_ RoomViewData[10];
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SEE_LOBBY_INFO, 0x368);

// struct _WROOM_PC_DATA_; size: 0x36
struct _WROOM_PC_DATA_ {
    /* 0x0000 */ int32_t iTeam;
    /* 0x0004 */ unsigned long dwPCID;
    /* 0x0008 */ char szName[13];
    /* 0x0015 */ char szCLNName[32];
    /* 0x0035 */ uint8_t byStatus;
};
BS_STATIC_ASSERT_SIZE(_WROOM_PC_DATA_, 0x36);

// class MSG_B2C_SEE_WROOM_INFO; size: 0x588
struct MSG_B2C_SEE_WROOM_INFO {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _WROOM_PC_DATA_ WRoomPC[26];
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SEE_WROOM_INFO, 0x588);

// class MSG_C2B_ASK_CHANGE_TEAM; size: 0x11
struct MSG_C2B_ASK_CHANGE_TEAM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwRoomID;
    /* 0x0010 */ uint8_t byExpectTeamNum;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_CHANGE_TEAM, 0x11);

// class MSG_B2C_ANS_CHANGE_TEAM; size: 0xE
struct MSG_B2C_ANS_CHANGE_TEAM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
    /* 0x000D */ uint8_t byChangedTeam;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_CHANGE_TEAM, 0xE);

// class MSG_B2C_SEE_CHANGE_TEAM; size: 0x18
struct MSG_B2C_SEE_CHANGE_TEAM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwChangePCID;
    /* 0x0010 */ int32_t iFromTeamIndex;
    /* 0x0014 */ int32_t iToTeamIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SEE_CHANGE_TEAM, 0x18);

// class MSG_C2B_READYOK_BATTLE; size: 0xD
struct MSG_C2B_READYOK_BATTLE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byReadyFlag;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_READYOK_BATTLE, 0xD);

// class MSG_B2C_SEE_READYOK_BATTLE; size: 0x11
struct MSG_B2C_SEE_READYOK_BATTLE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwReadyPCID;
    /* 0x0010 */ uint8_t byReadyFlag;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SEE_READYOK_BATTLE, 0x11);

// class MSG_C2B_ASK_START_BATTLE; size: 0xC
struct MSG_C2B_ASK_START_BATTLE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_START_BATTLE, 0xC);

// class MSG_B2C_ANS_START_BATTLE; size: 0xD
struct MSG_B2C_ANS_START_BATTLE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_START_BATTLE, 0xD);

// class MSG_B2C_START_BATTLE; size: 0xD
struct MSG_B2C_START_BATTLE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byMapIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_START_BATTLE, 0xD);

// class MSG_C2B_MAPLOAD_OK; size: 0xC
struct MSG_C2B_MAPLOAD_OK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_MAPLOAD_OK, 0xC);

// class MSG_B2C_YOURCELL_IS_THIS; size: 0x10
struct MSG_B2C_YOURCELL_IS_THIS {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwCellIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_YOURCELL_IS_THIS, 0x10);

// class MSG_B2C_ALL_ENTERED; size: 0xC
struct MSG_B2C_ALL_ENTERED {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ALL_ENTERED, 0xC);

// class MSG_B2C_CHANGE_BOSS; size: 0x10
struct MSG_B2C_CHANGE_BOSS {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNewBossID;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_CHANGE_BOSS, 0x10);

// class MSG_C2B_ASK_COMEOUT_WROOM; size: 0xC
struct MSG_C2B_ASK_COMEOUT_WROOM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_COMEOUT_WROOM, 0xC);

// class MSG_B2C_ANS_COMEOUT_WROOM; size: 0xD
struct MSG_B2C_ANS_COMEOUT_WROOM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_COMEOUT_WROOM, 0xD);

// class MSG_B2C_SEE_COMEOUT_WROOM; size: 0x10
struct MSG_B2C_SEE_COMEOUT_WROOM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwComeoutPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SEE_COMEOUT_WROOM, 0x10);

// class MSG_C2B_ASK_EXIT_MEMBER; size: 0x10
struct MSG_C2B_ASK_EXIT_MEMBER {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwExitMemberID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_EXIT_MEMBER, 0x10);

// class MSG_B2C_ANS_EXIT_MEMBER; size: 0xD
struct MSG_B2C_ANS_EXIT_MEMBER {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_EXIT_MEMBER, 0xD);

// class MSG_B2C_SEE_EXIT_MEMBER; size: 0x10
struct MSG_B2C_SEE_EXIT_MEMBER {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwExitMemberID;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SEE_EXIT_MEMBER, 0x10);

// class MSG_B2C_WROOM_DATA; size: 0x62
struct MSG_B2C_WROOM_DATA {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ROOM_VIEW_DATA_ RoomViewData;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_WROOM_DATA, 0x62);

// class MSG_B2C_GOTO_LOBBY; size: 0xC
struct MSG_B2C_GOTO_LOBBY {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_GOTO_LOBBY, 0xC);

// class MSG_B2C_ASK_END_BATTLE; size: 0x11
struct MSG_B2C_ASK_END_BATTLE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ int32_t iWinTeamIndex;
    /* 0x0010 */ uint8_t byEndMethod;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ASK_END_BATTLE, 0x11);

// class MSG_C2B_ANS_END_BATTLE; size: 0xC
struct MSG_C2B_ANS_END_BATTLE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ANS_END_BATTLE, 0xC);

// class MSG_B2C_SVR_BATTLE_TIME; size: 0xC
struct MSG_B2C_SVR_BATTLE_TIME {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SVR_BATTLE_TIME, 0xC);

// class MSG_C2B_ASK_CHANGE_WATCHER; size: 0xC
struct MSG_C2B_ASK_CHANGE_WATCHER {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_CHANGE_WATCHER, 0xC);

// class MSG_B2C_ANS_CHANGE_WATCHER; size: 0xD
struct MSG_B2C_ANS_CHANGE_WATCHER {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_CHANGE_WATCHER, 0xD);

// class MSG_C2B_ASK_COMEOUT_BFIELD; size: 0xC
struct MSG_C2B_ASK_COMEOUT_BFIELD {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2B_ASK_COMEOUT_BFIELD, 0xC);

// class MSG_B2C_ANS_COMEOUT_BFIELD; size: 0xD
struct MSG_B2C_ANS_COMEOUT_BFIELD {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byResult;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_ANS_COMEOUT_BFIELD, 0xD);

// class MSG_B2C_SEE_HP_CHANGE; size: 0x16
struct MSG_B2C_SEE_HP_CHANGE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ int32_t iTeam;
    /* 0x0010 */ unsigned long dwPCID;
    /* 0x0014 */ uint16_t wHP;
};
BS_STATIC_ASSERT_SIZE(MSG_B2C_SEE_HP_CHANGE, 0x16);

// class MSG_B2M_TM_RESULT; size: 0x2E
struct MSG_B2M_TM_RESULT {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ int32_t iTh;
    /* 0x0006 */ unsigned long arrErrt[4][2];
    /* 0x0026 */ unsigned long arrToll[2];
};
BS_STATIC_ASSERT_SIZE(MSG_B2M_TM_RESULT, 0x2E);

// class MSG_B2M_ASK_PREWEEK_MASTERS; size: 0x6
struct MSG_B2M_ASK_PREWEEK_MASTERS {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ int32_t iPreWeekTh;
};
BS_STATIC_ASSERT_SIZE(MSG_B2M_ASK_PREWEEK_MASTERS, 0x6);

// class MSG_M2B_ANS_PREWEEK_MASTERS; size: 0x2B
struct MSG_M2B_ANS_PREWEEK_MASTERS {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t byAns;
    /* 0x0003 */ unsigned long arrErrt[4][2];
    /* 0x0023 */ unsigned long arrToll[2];
};
BS_STATIC_ASSERT_SIZE(MSG_M2B_ANS_PREWEEK_MASTERS, 0x2B);

// class MSG_B2M_ASK_TMMSG_BROADCAST; size: 0x17
struct MSG_B2M_ASK_TMMSG_BROADCAST {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ uint8_t byMsgNo;
    /* 0x0003 */ unsigned long dwClanID[2];
    /* 0x000B */ unsigned long dwExtra[3];
};
BS_STATIC_ASSERT_SIZE(MSG_B2M_ASK_TMMSG_BROADCAST, 0x17);

// struct _KNIGHT_INFO_; size: 0x1C
struct _KNIGHT_INFO_ {
    /* 0x0000 */ char szPCName[13];
    uint8_t _pad_0000[0x3];
    /* 0x0010 */ unsigned long dwPCID;
    /* 0x0014 */ uint16_t wLevel;
    /* 0x0016 */ uint8_t rankInClan;
    /* 0x0017 */ uint8_t status;
    /* 0x0018 */ uint8_t byPCType;
    uint8_t _pad_tail[0x3];
};
BS_STATIC_ASSERT_SIZE(_KNIGHT_INFO_, 0x1C);

// class MSG_M2S_CLAN_INFO; size: 0x1A2
struct MSG_M2S_CLAN_INFO {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ unsigned long dwPCID;
    /* 0x0006 */ uint8_t byGateSvrID;
    /* 0x0007 */ char szClanName[32];
    /* 0x0027 */ unsigned long dwClanID;
    /* 0x002B */ unsigned long dwMarkID;
    /* 0x002F */ unsigned long dwStorageID;
    /* 0x0033 */ uint8_t Clan_Rank;
    /* 0x0034 */ uint16_t wAgit_ID;
    /* 0x0036 */ _KNIGHT_INFO_ arrKnightInfo[13];
};
BS_STATIC_ASSERT_SIZE(MSG_M2S_CLAN_INFO, 0x1A2);

// class MSG_M2S_KNIGHT_INFO; size: 0x24
struct MSG_M2S_KNIGHT_INFO {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ unsigned long dwPCID;
    /* 0x0006 */ uint8_t byGateSvrID;
    /* 0x0007 */ uint8_t byCode;
    /* 0x0008 */ _KNIGHT_INFO_ KnightInfo;
};
BS_STATIC_ASSERT_SIZE(MSG_M2S_KNIGHT_INFO, 0x24);

// class MSG_S2C_FORTIFIER; size: 0x11
struct MSG_S2C_FORTIFIER {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byGreen;
    /* 0x000D */ uint8_t byBlue;
    /* 0x000E */ uint8_t byRed;
    /* 0x000F */ uint8_t byYellow;
    /* 0x0010 */ uint8_t byBlack;
};
BS_STATIC_ASSERT_SIZE(MSG_S2C_FORTIFIER, 0x11);

// class CShareObject; size: 0x8
struct CShareObject {
    /* 0x0000 */ long m_lockFlag;
    /* 0x0004 */ long m_refCnt;
};
BS_STATIC_ASSERT_SIZE(CShareObject, 0x8);

// class CSyncSection; size: 0x1C
struct CSyncSection {
    /* 0x0000 */ uint8_t m_cs[0x18]; /* original type: _RTL_CRITICAL_SECTION */
    /* 0x0018 */ uint8_t m_bLocked;
    uint8_t _pad_tail[0x3];
};
BS_STATIC_ASSERT_SIZE(CSyncSection, 0x1C);

// class CLinkedList; size: 0x8
struct CLinkedList {
    /* 0x0000 */ __ListNODE_* m_pHead;
    /* 0x0004 */ __ListNODE_* m_pTail;
};
BS_STATIC_ASSERT_SIZE(CLinkedList, 0x8);

// struct __ListNODE_; size: 0xC
struct __ListNODE_ {
    /* 0x0000 */ void* pObj;
    /* 0x0004 */ __ListNODE_* pPrev;
    /* 0x0008 */ __ListNODE_* pNext;
};
BS_STATIC_ASSERT_SIZE(__ListNODE_, 0xC);

// struct _ITEM_LEVEL_; size: 0x10
struct _ITEM_LEVEL_ {
    /* 0x0000 */ uint16_t wNeedStr;
    /* 0x0002 */ uint16_t wNeedDex;
    /* 0x0004 */ uint16_t wNeedMagic;
    /* 0x0006 */ uint8_t byRuneOption;
    uint8_t _pad_0000[0x1];
    /* 0x0008 */ uint16_t wBaseAbility;
    /* 0x000A */ uint16_t wPlusAbility;
    /* 0x000C */ uint8_t byMaxIceAttr;
    /* 0x000D */ uint8_t byMaxFireAttr;
    /* 0x000E */ uint8_t byMaxLightAttr;
    uint8_t _pad_tail[0x1];
};
BS_STATIC_ASSERT_SIZE(_ITEM_LEVEL_, 0x10);

// struct _ITEM_TABLE0_DATA; size: 0xD0
struct _ITEM_TABLE0_DATA {
    /* 0x0000 */ char itemName[32];
    /* 0x0020 */ unsigned long dwStdPrice;
    /* 0x0024 */ uint8_t category;
    /* 0x0025 */ uint8_t kind;
    /* 0x0026 */ uint8_t byAuth;
    /* 0x0027 */ uint8_t byAttackRange;
    /* 0x0028 */ uint8_t byMaxRepeatHit;
    /* 0x0029 */ uint8_t bySoftSkin;
    /* 0x002A */ uint8_t byHardSkin;
    /* 0x002B */ uint8_t bySmall;
    /* 0x002C */ uint8_t byMiddle;
    /* 0x002D */ uint8_t byLarge;
    /* 0x002E */ uint8_t byXLarge;
    uint8_t _pad_0000[0x1];
    /* 0x0030 */ _ITEM_LEVEL_ arrLevelData[10];
};
BS_STATIC_ASSERT_SIZE(_ITEM_TABLE0_DATA, 0xD0);

// struct _ITEM_TABLE1_DATA_; size: 0x2C
struct _ITEM_TABLE1_DATA_ {
    /* 0x0000 */ char itemName[32];
    /* 0x0020 */ unsigned long dwStdPrice;
    /* 0x0024 */ uint8_t byAuth;
    /* 0x0025 */ uint8_t byLimit;
    /* 0x0026 */ uint8_t byAbility;
    /* 0x0027 */ uint8_t byMaxIceAttr;
    /* 0x0028 */ uint8_t byMaxFireAttr;
    /* 0x0029 */ uint8_t byMaxLightAttr;
    uint8_t _pad_tail[0x2];
};
BS_STATIC_ASSERT_SIZE(_ITEM_TABLE1_DATA_, 0x2C);

// struct _ITEM_TABLE2_DATA_; size: 0x28
struct _ITEM_TABLE2_DATA_ {
    /* 0x0000 */ char itemName[32];
    /* 0x0020 */ unsigned long dwStdPrice;
    /* 0x0024 */ uint8_t byAuth;
    /* 0x0025 */ uint8_t byLimit;
    /* 0x0026 */ uint8_t byValue1;
    /* 0x0027 */ uint8_t byValue2;
};
BS_STATIC_ASSERT_SIZE(_ITEM_TABLE2_DATA_, 0x28);

// struct _ITEM_TABLE3_DATA_; size: 0x28
struct _ITEM_TABLE3_DATA_ {
    /* 0x0000 */ char itemName[32];
    /* 0x0020 */ unsigned long dwStdPrice;
    /* 0x0024 */ uint8_t byAuth;
    /* 0x0025 */ uint8_t byLimit;
    /* 0x0026 */ uint8_t byValue1;
    /* 0x0027 */ uint8_t byValue2;
};
BS_STATIC_ASSERT_SIZE(_ITEM_TABLE3_DATA_, 0x28);

// struct _ITEM_COUNTER; size: 0x8
struct _ITEM_COUNTER {
    /* 0x0000 */ unsigned long newCnt;
    /* 0x0004 */ unsigned long delCnt;
};
BS_STATIC_ASSERT_SIZE(_ITEM_COUNTER, 0x8);

// struct _ITEM_COMBINATION_TABLE_; size: 0x20
struct _ITEM_COMBINATION_TABLE_ {
    /* 0x0000 */ uint16_t wBaseRune1;
    /* 0x0002 */ uint16_t wBaseRune2;
    /* 0x0004 */ uint16_t wBaseRune3;
    /* 0x0006 */ uint16_t wRune1;
    /* 0x0008 */ uint16_t wRune2;
    /* 0x000A */ uint16_t wRune3;
    /* 0x000C */ uint16_t wItem1;
    /* 0x000E */ uint16_t wItem2;
    /* 0x0010 */ uint16_t wItem3;
    /* 0x0012 */ uint16_t wObjectItem;
    /* 0x0014 */ uint16_t wSuccessRatio;
    /* 0x0016 */ uint16_t wSuccessItem;
    /* 0x0018 */ uint16_t wOptionType;
    /* 0x001A */ uint16_t wFailure;
    /* 0x001C */ uint16_t wReserved1;
    /* 0x001E */ uint16_t wReserved2;
};
BS_STATIC_ASSERT_SIZE(_ITEM_COMBINATION_TABLE_, 0x20);

// class CItemManage; size: 0x87E04
struct CItemManage {
    /* 0x0000 */ _ITEM_TABLE0_DATA m_ItemTable0[1024];
    /* 0x34000 */ _ITEM_TABLE1_DATA_ m_ItemTable1[1024];
    /* 0x3F000 */ _ITEM_TABLE2_DATA_ m_ItemTable2[1024];
    /* 0x49000 */ _ITEM_TABLE3_DATA_ m_ItemTable3[1024];
    /* 0x53000 */ _ITEM_COUNTER m_ItemCountTable[1024][3];
    /* 0x59000 */ _ITEM_COMBINATION_TABLE_ m_ItemCombination[6000];
    /* 0x87E00 */ int32_t m_nTotalItemTable;
};
BS_STATIC_ASSERT_SIZE(CItemManage, 0x87E04);

// struct EXCEL_LEVEL_DATA; size: 0x12
struct EXCEL_LEVEL_DATA {
    /* 0x0000 */ uint16_t LevelOpt;
    /* 0x0002 */ uint16_t NeedStr;
    /* 0x0004 */ uint16_t NeedDex;
    /* 0x0006 */ uint16_t NeedMag;
    /* 0x0008 */ uint16_t BaseAbility;
    /* 0x000A */ uint16_t PlusAbility;
    /* 0x000C */ uint16_t MaxIceAttr;
    /* 0x000E */ uint16_t MaxFireAttr;
    /* 0x0010 */ uint16_t MaxLightAttr;
};
BS_STATIC_ASSERT_SIZE(EXCEL_LEVEL_DATA, 0x12);

// class CSkill; size: 0xC
struct CSkill {
    /* 0x0000 */ int32_t m_Skills[3];
};
BS_STATIC_ASSERT_SIZE(CSkill, 0xC);

// struct _OBJECT_; size: 0x1
struct _OBJECT_ {
    /* 0x0000 */ uint8_t objType;
};
BS_STATIC_ASSERT_SIZE(_OBJECT_, 0x1);

// class CSimpleSyncSection; size: 0x8
struct CSimpleSyncSection {
    uint8_t _pad_0000[0x4];
    /* 0x0004 */ long m_lockFlag;
};
BS_STATIC_ASSERT_SIZE(CSimpleSyncSection, 0x8);

// class CPC::CPCStatChange; recovered name sanitized as CPC__CPCStatChange; size: 0x14
struct CPC__CPCStatChange {
    /* 0x0000 */ SKILL_STAT_CHANGE base_SKILL_STAT_CHANGE;
    /* 0x000B */ uint8_t HPConsumRate;
    /* 0x000C */ uint8_t MPConsumRate;
    /* 0x000D */ uint8_t HPStealRate;
    /* 0x000E */ uint8_t MPStealRate;
    uint8_t _pad_0000[0x1];
    /* 0x0010 */ int32_t iBindFoot;
};
BS_STATIC_ASSERT_SIZE(CPC__CPCStatChange, 0x14);

// struct _LASTINGSKILL_MANAGEARRARY_; size: 0x30
struct _LASTINGSKILL_MANAGEARRARY_ {
    /* 0x0000 */ _LASTINGSKILL_INFO_ LastingSkillInfo[4];
};
BS_STATIC_ASSERT_SIZE(_LASTINGSKILL_MANAGEARRARY_, 0x30);

// class CCheckHACK; size: 0x24
struct CCheckHACK {
    /* 0x0000 */ CLinkedList m_HackLog[3];
    /* 0x0018 */ int32_t m_iTotalCounter[3];
};
BS_STATIC_ASSERT_SIZE(CCheckHACK, 0x24);

// struct CPC::_REMEMBER_ENEMY_; recovered name sanitized as CPC___REMEMBER_ENEMY_; size: 0x18
struct CPC___REMEMBER_ENEMY_ {
    /* 0x0000 */ unsigned long dwPCID;
    /* 0x0004 */ unsigned long dwFirstAtkTime;
    /* 0x0008 */ char szPCName[13];
    /* 0x0015 */ uint8_t byGate;
    uint8_t _pad_tail[0x2];
};
BS_STATIC_ASSERT_SIZE(CPC___REMEMBER_ENEMY_, 0x18);

// struct CPC::PCINFO4BATTLE; recovered name sanitized as CPC__PCINFO4BATTLE; size: 0x20
struct CPC__PCINFO4BATTLE {
    /* 0x0000 */ unsigned long dwRoomID;
    /* 0x0004 */ int32_t iTeam;
    /* 0x0008 */ int32_t bReadyOK;
    /* 0x000C */ int32_t bMapReserved;
    /* 0x0010 */ unsigned long dwPvpPCID;
    /* 0x0014 */ PC_BATTLE_LOC emPCLoc;
    /* 0x0018 */ uint16_t wPreMapIndex;
    uint8_t _pad_0000[0x2];
    /* 0x001C */ unsigned long dwPreCellIndex;
};
BS_STATIC_ASSERT_SIZE(CPC__PCINFO4BATTLE, 0x20);

// class CPC; size: 0x3EC
struct CPC {
    /* 0x0000 */ _OBJECT_ base__OBJECT_;
    uint8_t _pad_0000[0x3];
    /* 0x0004 */ _ENUM_PC_STAT m_PCstat;
    /* 0x0008 */ CSimpleSyncSection m_syncObj;
    /* 0x0010 */ char m_szIP[16];
    /* 0x0020 */ char m_szPCName[13];
    uint8_t _pad_0001[0x3];
    /* 0x0030 */ unsigned long m_dwPCID;
    /* 0x0034 */ unsigned long m_dwCurCell;
    /* 0x0038 */ unsigned long m_dwDestCell;
    /* 0x003C */ unsigned long m_dwExp;
    /* 0x0040 */ unsigned long m_dwMoney;
    /* 0x0044 */ int32_t m_iDir;
    /* 0x0048 */ uint16_t m_wCurMap;
    /* 0x004A */ uint16_t m_wLevel;
    /* 0x004C */ uint16_t m_wPoint;
    /* 0x004E */ uint16_t m_wRTime;
    /* 0x0050 */ uint8_t m_byPKCount;
    /* 0x0051 */ uint8_t m_byGateSvrID;
    /* 0x0052 */ uint8_t m_byPCType;
    /* 0x0053 */ uint8_t m_byMoveSpeed;
    /* 0x0054 */ uint8_t m_byAction;
    uint8_t _pad_0002[0x3];
    /* 0x0058 */ long m_lLogoutTick;
    /* 0x005C */ CSkill m_PCSkill;
    /* 0x0068 */ _SOCIALINFO_ m_SInfo;
    /* 0x006C */ long m_lLastSaveTick;
    /* 0x0070 */ long m_iHp;
    /* 0x0074 */ long m_iMp;
    /* 0x0078 */ uint16_t m_wStoredHp;
    /* 0x007A */ uint16_t m_wStoredMp;
    /* 0x007C */ uint16_t m_wStr;
    /* 0x007E */ uint16_t m_wMagic;
    /* 0x0080 */ uint16_t m_wDex;
    /* 0x0082 */ uint16_t m_wVit;
    /* 0x0084 */ uint16_t m_wMana;
    /* 0x0086 */ uint16_t m_wHitAttack;
    /* 0x0088 */ uint16_t m_wMagicAttack;
    /* 0x008A */ uint16_t m_wDefense;
    /* 0x008C */ uint16_t m_wFireAttack;
    /* 0x008E */ uint16_t m_wFireDefense;
    /* 0x0090 */ uint16_t m_wIceAttack;
    /* 0x0092 */ uint16_t m_wIceDefense;
    /* 0x0094 */ uint16_t m_wLightAttack;
    /* 0x0096 */ uint16_t m_wLightDefense;
    /* 0x0098 */ uint16_t m_wMaxHp;
    /* 0x009A */ uint16_t m_wMaxMp;
    /* 0x009C */ uint16_t m_wHitAddition;
    /* 0x009E */ uint16_t m_wMagAddition;
    /* 0x00A0 */ uint8_t m_byAttackRange;
    /* 0x00A1 */ uint8_t m_byWeaponStep;
    /* 0x00A2 */ uint8_t m_byHitRate;
    /* 0x00A3 */ uint8_t m_byDodge;
    /* 0x00A4 */ uint8_t m_bySkillDodge;
    /* 0x00A5 */ uint8_t m_byCriticalHit;
    /* 0x00A6 */ uint8_t m_byCriticalDodge;
    /* 0x00A7 */ uint8_t m_byGreen;
    /* 0x00A8 */ uint8_t m_byBlue;
    /* 0x00A9 */ uint8_t m_byRed;
    /* 0x00AA */ uint8_t m_byYellow;
    /* 0x00AB */ uint8_t m_byBlack;
    /* 0x00AC */ unsigned long m_dwGreenTime;
    /* 0x00B0 */ unsigned long m_dwBlueTime;
    /* 0x00B4 */ unsigned long m_dwRedTime;
    /* 0x00B8 */ unsigned long m_dwYellowTime;
    /* 0x00BC */ unsigned long m_dwBlackTime;
    /* 0x00C0 */ _PET_INFO_* m_PetActive;
    /* 0x00C4 */ _PET_INFO_* m_PetInven[5];
    /* 0x00D8 */ _ITEM_* m_ItemInWear[10];
    /* 0x0100 */ _ITEM_* m_ItemInInven[30];
    /* 0x0178 */ uint8_t m_DealItemMap[0x10]; /* original type: std::map<unsigned char,_ITEM_ *,std::less<unsigned char>,std::allocator<_ITEM_ *> > */
    /* 0x0188 */ _PET_INFO_* m_arrDealPet[2];
    /* 0x0190 */ unsigned long m_dwDealMoney;
    /* 0x0194 */ unsigned long m_dwDealPC;
    /* 0x0198 */ uint16_t m_wDealHP;
    /* 0x019A */ uint16_t m_wDealMP;
    /* 0x019C */ uint8_t m_bDealOK;
    /* 0x019D */ uint8_t m_bDealConfirm;
    /* 0x019E */ _GAME_OPTION_ m_option;
    uint8_t _pad_0003[0x1];
    /* 0x01A0 */ unsigned long m_dwStepTime;
    /* 0x01A4 */ unsigned long m_dwPreNPCID;
    /* 0x01A8 */ unsigned long m_dwPrePCID;
    /* 0x01AC */ uint8_t m_byCurrentStep;
    uint8_t _pad_0004[0x3];
    /* 0x01B0 */ CPC__CPCStatChange m_PCStatChange;
    /* 0x01C4 */ _LASTINGSKILL_MANAGEARRARY_ m_PCSkillCasted;
    /* 0x01F4 */ char m_szAccountName[21];
    uint8_t _pad_0005[0x3];
    /* 0x020C */ unsigned long m_dwLore;
    /* 0x0210 */ uint16_t m_wLastQuest;
    uint8_t _pad_0006[0x2];
    /* 0x0214 */ unsigned long m_dwLastRTime;
    /* 0x0218 */ unsigned long m_byFatiguePt;
    /* 0x021C */ _PC_QUEST_INFO_* m_pQuestInfo;
    /* 0x0220 */ CCheckHACK m_CheckHack;
    /* 0x0244 */ CPC___REMEMBER_ENEMY_ m_arrEnemy[16];
    /* 0x03C4 */ CPC__PCINFO4BATTLE m_BI;
    /* 0x03E4 */ unsigned long m_dwClanID;
    /* 0x03E8 */ unsigned long m_dwMarkID;
};
BS_STATIC_ASSERT_SIZE(CPC, 0x3EC);

// class CNPC; size: 0x0
struct CNPC {
    /* zero-sized UDT */
};
BS_STATIC_ASSERT_SIZE(CNPC, 0x0);

// class CPCManage; size: 0x3070
struct CPCManage {
    /* 0x0000 */ int32_t m_iPCCnt;
    /* 0x0004 */ uint8_t m_PCTable[0x140]; /* original type: std::map<unsigned long,CPC *,std::less<unsigned long>,std::allocator<CPC *> >[5][4] */
    /* 0x0144 */ uint8_t m_NameTable[0x2EE0]; /* original type: std::list<CPC *,std::allocator<CPC *> >[1000] */
    /* 0x3024 */ uint8_t m_PCFreeList[0xC]; /* original type: std::list<CPC *,std::allocator<CPC *> > */
    /* 0x3030 */ uint8_t m_standbyPCList[0xC]; /* original type: std::list<CPC *,std::allocator<CPC *> > */
    /* 0x303C */ CLinkedList m_WarpWaitPCList[2];
    /* 0x304C */ uint8_t m_LogoutPCList[0xC]; /* original type: std::list<CPC *,std::allocator<CPC *> > */
    /* 0x3058 */ uint8_t m_cs[0x18]; /* original type: _RTL_CRITICAL_SECTION */
};
BS_STATIC_ASSERT_SIZE(CPCManage, 0x3070);

// struct CClan::_CLANMEMBER_; recovered name sanitized as CClan___CLANMEMBER_; size: 0x14
struct CClan___CLANMEMBER_ {
    /* 0x0000 */ char szName[13];
    uint8_t _pad_0000[0x1];
    /* 0x000E */ uint16_t wLevel;
    /* 0x0010 */ uint8_t byRankInClan;
    /* 0x0011 */ uint8_t byWorldLogin;
    /* 0x0012 */ uint8_t byPCType;
    uint8_t _pad_tail[0x1];
};
BS_STATIC_ASSERT_SIZE(CClan___CLANMEMBER_, 0x14);

// class CClan; size: 0x154
struct CClan {
    /* 0x0000 */ unsigned long m_dwClanID;
    /* 0x0004 */ unsigned long m_dwMarkID;
    /* 0x0008 */ unsigned long m_dwCDate;
    /* 0x000C */ unsigned long m_dwDDate;
    /* 0x0010 */ char m_szName[32];
    /* 0x0030 */ char m_szPass[16];
    /* 0x0040 */ uint8_t m_byNation;
    /* 0x0041 */ uint8_t m_byClanRank;
    /* 0x0042 */ uint8_t m_byClanStat;
    uint8_t _pad_0000[0x1];
    /* 0x0044 */ uint16_t m_wStorageIndex;
    /* 0x0046 */ uint16_t m_wAgitID;
    /* 0x0048 */ uint16_t m_wWinCnt;
    /* 0x004A */ uint16_t m_wLooseCnt;
    /* 0x004C */ int32_t m_iTeam;
    /* 0x0050 */ CClan___CLANMEMBER_ m_Member[13];
};
BS_STATIC_ASSERT_SIZE(CClan, 0x154);

// struct _CLAN_MSG_; size: 0x28
struct _CLAN_MSG_ {
    /* 0x0000 */ unsigned long dwClanID;
    /* 0x0004 */ uint8_t byMsgNo;
    uint8_t _pad_0000[0x3];
    /* 0x0008 */ long lRegisterTick;
    /* 0x000C */ long lAfterTick;
    /* 0x0010 */ long lInterval;
    /* 0x0014 */ int32_t iRefCnt;
    /* 0x0018 */ unsigned long dwExtra0;
    /* 0x001C */ unsigned long dwExtra1;
    /* 0x0020 */ unsigned long dwExtra2;
    /* 0x0024 */ unsigned long dwExtra3;
};
BS_STATIC_ASSERT_SIZE(_CLAN_MSG_, 0x28);

// struct _CLAN_MS_MSG_; size: 0x18
struct _CLAN_MS_MSG_ {
    /* 0x0000 */ uint8_t byMsgNo;
    uint8_t _pad_0000[0x3];
    /* 0x0004 */ unsigned long dwClanID0;
    /* 0x0008 */ unsigned long dwClanID1;
    /* 0x000C */ unsigned long dwExtra0;
    /* 0x0010 */ unsigned long dwExtra1;
    /* 0x0014 */ unsigned long dwExtra2;
};
BS_STATIC_ASSERT_SIZE(_CLAN_MS_MSG_, 0x18);

// class CClanManage; size: 0x24
struct CClanManage {
    /* 0x0000 */ uint8_t m_ClanList[0xC]; /* original type: std::list<CClan *,std::allocator<CClan *> > */
    /* 0x000C */ uint8_t m_MsgList[0xC]; /* original type: std::list<_CLAN_MSG_,std::allocator<_CLAN_MSG_> > */
    /* 0x0018 */ uint8_t m_MSMsgList[0xC]; /* original type: std::list<_CLAN_MS_MSG_,std::allocator<_CLAN_MS_MSG_> > */
};
BS_STATIC_ASSERT_SIZE(CClanManage, 0x24);

// struct _MATCH_INFO_; size: 0x14
struct _MATCH_INFO_ {
    /* 0x0000 */ unsigned long dwClanID[2];
    /* 0x0008 */ uint8_t byWinTeam;
    uint8_t _pad_0000[0x3];
    /* 0x000C */ long lStartTime;
    /* 0x0010 */ long lEndTime;
};
BS_STATIC_ASSERT_SIZE(_MATCH_INFO_, 0x14);

// class CTMNode; size: 0x18
struct CTMNode {
    /* 0x0000 */ _MATCH_INFO_ m_MI;
    /* 0x0014 */ unsigned long m_dwRoomID;
};
BS_STATIC_ASSERT_SIZE(CTMNode, 0x18);

// class CTMTree; size: 0x94
struct CTMTree {
    /* 0x0000 */ unsigned long m_arrAppClan[8];
    /* 0x0020 */ int32_t m_nAppClanCnt;
    /* 0x0024 */ int32_t m_bLoadAppTbl;
    /* 0x0028 */ int32_t m_bTmEnd;
    /* 0x002C */ int32_t m_iNation;
    /* 0x0030 */ int32_t m_iShop;
    /* 0x0034 */ CTMNode m_arrNodes[4];
};
BS_STATIC_ASSERT_SIZE(CTMTree, 0x94);

// struct _CELL_; size: 0x4
struct _CELL_ {
    /* 0x0000 */ union {
        unsigned long PKLevel;
        unsigned long bMove;
        unsigned long bSkill;
        unsigned long blkIndex;
        unsigned long collLevel;
        unsigned long monsterLevel;
        unsigned long reserved;
        unsigned long viewPoint;
        unsigned long warpIndex;
    };
};
BS_STATIC_ASSERT_SIZE(_CELL_, 0x4);

// struct _DROP_ITEM_; size: 0xC
struct _DROP_ITEM_ {
    /* 0x0000 */ _ITEM_* pItem;
    /* 0x0004 */ unsigned long dwDropTime;
    /* 0x0008 */ unsigned long dwPriority;
};
BS_STATIC_ASSERT_SIZE(_DROP_ITEM_, 0xC);

// class CCell; size: 0x24
struct CCell {
    /* 0x0000 */ _CELL_ m_cell;
    /* 0x0004 */ void* m_pStand;
    /* 0x0008 */ uint8_t m_movePCList[0xC]; /* original type: std::list<CPC *,std::allocator<CPC *> > */
    /* 0x0014 */ _DROP_ITEM_ m_Item;
    /* 0x0020 */ uint8_t m_byOccupied;
    uint8_t _pad_tail[0x3];
};
BS_STATIC_ASSERT_SIZE(CCell, 0x24);

// class CTeam; size: 0x18
struct CTeam {
    /* 0x0000 */ uint8_t m_PCList[0xC]; /* original type: std::list<CPC *,std::allocator<CPC *> > */
    /* 0x000C */ int32_t m_bIsClosed;
    /* 0x0010 */ unsigned long m_dwClanID;
    /* 0x0014 */ GAME_RESULT_FLAG m_enmGameFlag;
};
BS_STATIC_ASSERT_SIZE(CTeam, 0x18);

// struct _WARP_; size: 0x8
struct _WARP_ {
    /* 0x0000 */ uint16_t mapIndex;
    uint8_t _pad_0000[0x2];
    /* 0x0004 */ unsigned long cellIndex;
};
BS_STATIC_ASSERT_SIZE(_WARP_, 0x8);

// struct _START_POS_; size: 0x10
struct _START_POS_ {
    /* 0x0000 */ unsigned long cellIndex[4];
};
BS_STATIC_ASSERT_SIZE(_START_POS_, 0x10);

// struct CRoom::CMM_OPT; recovered name sanitized as CRoom__CMM_OPT; size: 0x8
struct CRoom__CMM_OPT {
    /* 0x0000 */ int32_t nMaxTeam;
    /* 0x0004 */ uint8_t byBattleType;
    /* 0x0005 */ uint8_t byWatchAllowed;
    /* 0x0006 */ uint8_t byTimeOut;
    uint8_t _pad_tail[0x1];
};
BS_STATIC_ASSERT_SIZE(CRoom__CMM_OPT, 0x8);

// struct CRoom::NRM_OPT; recovered name sanitized as CRoom__NRM_OPT; size: 0x8
struct CRoom__NRM_OPT {
    /* 0x0000 */ uint8_t byTeamDistribute;
    /* 0x0001 */ uint8_t byLevelRestrict;
    /* 0x0002 */ uint8_t byIsPrivate;
    uint8_t _pad_0000[0x1];
    /* 0x0004 */ int32_t nAllowedPC;
};
BS_STATIC_ASSERT_SIZE(CRoom__NRM_OPT, 0x8);

// class CRoom; size: 0x24019C
struct CRoom {
    /* 0x0000 */ unsigned long m_dwRoomID;
    /* 0x0004 */ CPC* m_pBossPC;
    /* 0x0008 */ char m_szTitle[64];
    /* 0x0048 */ char m_szMapName[20];
    /* 0x005C */ char m_szPassWord[9];
    uint8_t _pad_0000[0x3];
    /* 0x0068 */ CCell m_arrCell[65536];
    /* 0x240068 */ _WARP_ m_arrWarp[14];
    /* 0x2400D8 */ uint8_t m_ItemMap[0x10]; /* original type: std::map<unsigned long,_ITEM_ *,std::less<unsigned long>,std::allocator<_ITEM_ *> > */
    /* 0x2400E8 */ uint16_t m_wZbIndex;
    uint8_t _pad_0001[0x2];
    /* 0x2400EC */ _START_POS_ m_StartPos;
    /* 0x2400FC */ CTeam m_Teams[4];
    /* 0x24015C */ uint8_t m_WatchList[0xC]; /* original type: std::list<CPC *,std::allocator<CPC *> > */
    /* 0x240168 */ uint8_t m_byRoomState;
    uint8_t _pad_0002[0x3];
    /* 0x24016C */ int32_t m_bTransferedMapInfo;
    /* 0x240170 */ int32_t m_bAllEntered;
    /* 0x240174 */ CRoom__CMM_OPT m_OptCMM;
    /* 0x24017C */ CRoom__NRM_OPT m_OptNRM;
    /* 0x240184 */ long m_lStartTimeTick;
    /* 0x240188 */ long m_lEndTimeTick;
    /* 0x24018C */ int32_t m_bEndBattle;
    /* 0x240190 */ int32_t m_bEliminateRoom;
    /* 0x240194 */ int32_t m_bIsPvpRoom;
    /* 0x240198 */ int32_t m_bIsTmRoom;
};
BS_STATIC_ASSERT_SIZE(CRoom, 0x24019C);

// class CMapFile; size: 0x240098
struct CMapFile {
    /* 0x0000 */ uint16_t m_wZbIndex;
    /* 0x0002 */ char m_szName[20];
    uint8_t _pad_0000[0x2];
    /* 0x0018 */ CCell m_arrCell[65536];
    /* 0x240018 */ _WARP_ m_arrWarp[14];
    /* 0x240088 */ _START_POS_ m_StartPos;
};
BS_STATIC_ASSERT_SIZE(CMapFile, 0x240098);

// class CRoomManage; size: 0x38
struct CRoomManage {
    /* 0x0000 */ uint8_t m_BeginRoomList[0xC]; /* original type: std::list<CRoom *,std::allocator<CRoom *> > */
    /* 0x000C */ uint8_t m_EndRoomList[0xC]; /* original type: std::list<CRoom *,std::allocator<CRoom *> > */
    /* 0x0018 */ uint8_t m_PvpPCList[0xC]; /* original type: std::list<CPC *,std::allocator<CPC *> > */
    /* 0x0024 */ CMapFile* m_pMapPool;
    /* 0x0028 */ int32_t m_nMapPoolSize;
    /* 0x002C */ uint8_t m_RoomList[0xC]; /* original type: std::list<CRoom *,std::allocator<CRoom *> > */
};
BS_STATIC_ASSERT_SIZE(CRoomManage, 0x38);

// class CGameLog; size: 0x84
struct CGameLog {
    /* 0x0000 */ CLoopThread base_CLoopThread;
    /* 0x0010 */ int32_t m_bConnect;
    /* 0x0014 */ uint32_t m_sSocket;
    /* 0x0018 */ void* m_wsaEvent;
    /* 0x001C */ uint8_t m_netEvent[0x2C]; /* original type: _WSANETWORKEVENTS */
    /* 0x0048 */ char m_szAddr[16];
    /* 0x0058 */ int32_t m_nPort;
    /* 0x005C */ int32_t m_nConnectTryCount;
    /* 0x0060 */ uint8_t m_LogDataQ[0xC]; /* original type: std::list<_LOG_DATA_ *,std::allocator<_LOG_DATA_ *> > */
    /* 0x006C */ uint8_t m_csSend[0x18]; /* original type: _RTL_CRITICAL_SECTION */
};
BS_STATIC_ASSERT_SIZE(CGameLog, 0x84);

// class CTimeFunc; size: 0x1
struct CTimeFunc {
    uint8_t _pad_tail[0x1];
};
BS_STATIC_ASSERT_SIZE(CTimeFunc, 0x1);

// struct _PET_TABLE_DATA_; size: 0x28
struct _PET_TABLE_DATA_ {
    /* 0x0000 */ char itemName[32];
    /* 0x0020 */ unsigned long dwStdPrice;
    /* 0x0024 */ uint8_t byAuth;
    /* 0x0025 */ uint8_t byLimit;
    /* 0x0026 */ uint8_t byValue1;
    /* 0x0027 */ uint8_t byValue2;
};
BS_STATIC_ASSERT_SIZE(_PET_TABLE_DATA_, 0x28);

// class CPetManage; size: 0x410C
struct CPetManage {
    /* 0x0000 */ int32_t m_nTotalShueCombiNum;
    /* 0x0004 */ _PET_TABLE_DATA_ m_PetTable[256];
    /* 0x2804 */ _ITEM_COMBINATION_TABLE_ m_ShueCombinationTable[200];
    /* 0x4104 */ int32_t m_nNewPet;
    /* 0x4108 */ int32_t m_nMaxPet;
};
BS_STATIC_ASSERT_SIZE(CPetManage, 0x410C);

// class CUDPSock; size: 0x40C
struct CUDPSock {
    uint8_t _pad_0000[0x4];
    /* 0x0004 */ uint32_t m_hSocket;
    /* 0x0008 */ void* m_wsaEvent;
    /* 0x000C */ char m_ReadBuf[1024];
};
BS_STATIC_ASSERT_SIZE(CUDPSock, 0x40C);

// class CSimpleCrypt; size: 0x10
struct CSimpleCrypt {
    uint8_t _pad_0000[0x4];
    /* 0x0004 */ int32_t m_ConstKey1;
    /* 0x0008 */ int32_t m_ConstKey2;
    /* 0x000C */ int32_t m_DynamicKey;
};
BS_STATIC_ASSERT_SIZE(CSimpleCrypt, 0x10);

// class MSG_HEADER; size: 0x2
struct MSG_HEADER {
    /* 0x0000 */ uint16_t wProtocol;
};
BS_STATIC_ASSERT_SIZE(MSG_HEADER, 0x2);

// class MSG_V2S_CMM_KILL; size: 0x2
struct MSG_V2S_CMM_KILL {
    /* 0x0000 */ MSG_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_V2S_CMM_KILL, 0x2);

// class MSG_S2V_CMM_KILL; size: 0x2
struct MSG_S2V_CMM_KILL {
    /* 0x0000 */ MSG_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_S2V_CMM_KILL, 0x2);

// class MSG_V2S_MAIN_SHOUT; size: 0x42
struct MSG_V2S_MAIN_SHOUT {
    /* 0x0000 */ MSG_HEADER MsgHeader;
    /* 0x0002 */ char szMsg[64];
};
BS_STATIC_ASSERT_SIZE(MSG_V2S_MAIN_SHOUT, 0x42);

// class MSG_V2S_MAIN_WHISPER; size: 0x4F
struct MSG_V2S_MAIN_WHISPER {
    /* 0x0000 */ MSG_HEADER MsgHeader;
    /* 0x0002 */ char szPCName[13];
    /* 0x000F */ char szMsg[64];
};
BS_STATIC_ASSERT_SIZE(MSG_V2S_MAIN_WHISPER, 0x4F);

// class MSG_S2V_CMM_ALIVE; size: 0x2
struct MSG_S2V_CMM_ALIVE {
    /* 0x0000 */ MSG_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_S2V_CMM_ALIVE, 0x2);

// class MSG_S2V_MAIN_SHOUT; size: 0x42
struct MSG_S2V_MAIN_SHOUT {
    /* 0x0000 */ MSG_HEADER MsgHeader;
    /* 0x0002 */ char szMsg[64];
};
BS_STATIC_ASSERT_SIZE(MSG_S2V_MAIN_SHOUT, 0x42);

// struct _MAP_INFO_; size: 0x4
struct _MAP_INFO_ {
    /* 0x0000 */ uint16_t wMapIndex;
    /* 0x0002 */ uint16_t wCurUser;
};
BS_STATIC_ASSERT_SIZE(_MAP_INFO_, 0x4);

// class MSG_S2V_ZONE_INFO; size: 0xA
struct MSG_S2V_ZONE_INFO {
    /* 0x0000 */ MSG_HEADER MsgHeader;
    /* 0x0002 */ int32_t iTotalUser;
    /* 0x0006 */ _MAP_INFO_ Info;
};
BS_STATIC_ASSERT_SIZE(MSG_S2V_ZONE_INFO, 0xA);

// class MSG_S2V_WARNNING; size: 0x82
struct MSG_S2V_WARNNING {
    /* 0x0000 */ MSG_HEADER MsgHeader;
    /* 0x0002 */ char szWarn[128];
};
BS_STATIC_ASSERT_SIZE(MSG_S2V_WARNNING, 0x82);

// struct _TMRESULT_; size: 0x28
struct _TMRESULT_ {
    /* 0x0000 */ unsigned long arrErrt[4][2];
    /* 0x0020 */ unsigned long arrToll[2];
};
BS_STATIC_ASSERT_SIZE(_TMRESULT_, 0x28);

// class CAStar; size: 0x220
struct CAStar {
    uint8_t _pad_0000[0x4];
    /* 0x0004 */ int32_t m_nPathNum;
    /* 0x0008 */ unsigned long m_arrPath[128];
    /* 0x0208 */ int32_t m_DestX;
    /* 0x020C */ int32_t m_DestY;
    /* 0x0210 */ int32_t DIRNUM;
    /* 0x0214 */ CAStar____NODE* OPEN;
    /* 0x0218 */ CAStar____NODE* CLOSED;
    /* 0x021C */ CAStar____STACK* Stack;
};
BS_STATIC_ASSERT_SIZE(CAStar, 0x220);

// struct CAStar::__NODE; recovered name sanitized as CAStar____NODE; size: 0x3C
struct CAStar____NODE {
    /* 0x0000 */ int32_t f;
    /* 0x0004 */ int32_t h;
    /* 0x0008 */ int32_t g;
    /* 0x000C */ int32_t x;
    /* 0x0010 */ int32_t y;
    /* 0x0014 */ CAStar____NODE* Parent;
    /* 0x0018 */ CAStar____NODE* Child[8];
    /* 0x0038 */ CAStar____NODE* NextNode;
};
BS_STATIC_ASSERT_SIZE(CAStar____NODE, 0x3C);

// struct CAStar::__STACK; recovered name sanitized as CAStar____STACK; size: 0x8
struct CAStar____STACK {
    /* 0x0000 */ CAStar____NODE* Nodes;
    /* 0x0004 */ CAStar____STACK* NextStack;
};
BS_STATIC_ASSERT_SIZE(CAStar____STACK, 0x8);

// struct _PC_QUEST_INFO_; size: 0x1C
struct _PC_QUEST_INFO_ {
    /* 0x0000 */ int32_t QuestIndex;
    /* 0x0004 */ _PC_QUEST_INFO____PC_QUEST_DATA_ QuestData[7];
    uint8_t _pad_tail[0x3];
};
BS_STATIC_ASSERT_SIZE(_PC_QUEST_INFO_, 0x1C);

// struct _WARP_WAIT_PC_; size: 0xC
struct _WARP_WAIT_PC_ {
    /* 0x0000 */ unsigned long dwPCID;
    /* 0x0004 */ uint8_t byGateID;
    uint8_t _pad_0000[0x1];
    /* 0x0006 */ uint16_t wNewMap;
    /* 0x0008 */ unsigned long dwNewCell;
};
BS_STATIC_ASSERT_SIZE(_WARP_WAIT_PC_, 0xC);

// struct _LOG_DATA_; size: 0x804
struct _LOG_DATA_ {
    /* 0x0000 */ long tvTime;
    /* 0x0004 */ char LogStr[2048];
};
BS_STATIC_ASSERT_SIZE(_LOG_DATA_, 0x804);

// struct _RPC_ASYNC_STATE::__unnamed::__unnamed; recovered name sanitized as _RPC_ASYNC_STATE____unnamed____unnamed; size: 0x10
struct _RPC_ASYNC_STATE____unnamed____unnamed {
    /* 0x0000 */ void* hIOPort;
    /* 0x0004 */ unsigned long dwNumberOfBytesTransferred;
    /* 0x0008 */ unsigned long dwCompletionKey;
    /* 0x000C */ void* lpOverlapped;
};
BS_STATIC_ASSERT_SIZE(_RPC_ASYNC_STATE____unnamed____unnamed, 0x10);

// union _RPC_ASYNC_STATE::__unnamed; recovered name sanitized as _RPC_ASYNC_STATE____unnamed; size: 0x10
union _RPC_ASYNC_STATE____unnamed {
    /* 0x0000 */ _RPC_ASYNC_STATE____unnamed____unnamed APC;
    /* 0x0000 */ _RPC_ASYNC_STATE____unnamed____unnamed IOC;
    /* 0x0000 */ _RPC_ASYNC_STATE____unnamed____unnamed HWND;
    /* 0x0000 */ void* hEvent;
    /* 0x0000 */ void** NotificationRoutine;
};
BS_STATIC_ASSERT_SIZE(_RPC_ASYNC_STATE____unnamed, 0x10);

// union _MIDL_STUB_DESC::__unnamed; recovered name sanitized as _MIDL_STUB_DESC____unnamed; size: 0x4
union _MIDL_STUB_DESC____unnamed {
    /* 0x0000 */ void** pAutoHandle;
    /* 0x0000 */ void** pPrimitiveHandle;
    /* 0x0000 */ void* pGenericBindingInfo;
};
BS_STATIC_ASSERT_SIZE(_MIDL_STUB_DESC____unnamed, 0x4);

// struct _FULL_PTR_XLAT_TABLES::__unnamed; recovered name sanitized as _FULL_PTR_XLAT_TABLES____unnamed; size: 0xC
struct _FULL_PTR_XLAT_TABLES____unnamed {
    /* 0x0000 */ void** XlatTable;
    /* 0x0004 */ uint8_t* StateTable;
    /* 0x0008 */ unsigned long NumberOfEntries;
};
BS_STATIC_ASSERT_SIZE(_FULL_PTR_XLAT_TABLES____unnamed, 0xC);

// class CLoopSleepMgr; size: 0x14
struct CLoopSleepMgr {
    uint8_t _pad_0000[0x4];
    /* 0x0004 */ int32_t m_iInterval;
    /* 0x0008 */ unsigned long m_dwLongSleep;
    /* 0x000C */ unsigned long m_dwShortSleep;
    /* 0x0010 */ int32_t m_iCounter;
};
BS_STATIC_ASSERT_SIZE(CLoopSleepMgr, 0x14);

// class CMainServer; size: 0x80007C
struct CMainServer {
    /* 0x0000 */ CBaseServer base_CBaseServer;
    /* 0x800078 */ int32_t m_bRunServer;
};
BS_STATIC_ASSERT_SIZE(CMainServer, 0x80007C);

// class CTickManage; size: 0x38
struct CTickManage {
    /* 0x0000 */ long m_lNowTick;
    /* 0x0004 */ unsigned long m_dwNowMiliTick;
    /* 0x0008 */ long m_lSecondNewDate;
    /* 0x000C */ long m_lSecondOClock;
    /* 0x0010 */ long m_lSecond10Min;
    /* 0x0014 */ long m_lSecond180;
    /* 0x0018 */ long m_lSecond120;
    /* 0x001C */ long m_lSecond60;
    /* 0x0020 */ long m_lSecond30;
    /* 0x0024 */ long m_lSecond10;
    /* 0x0028 */ long m_lSecond5;
    /* 0x002C */ long m_lSecond2;
    /* 0x0030 */ long m_lSecond1;
    /* 0x0034 */ unsigned long m_dwMiliSecond500;
};
BS_STATIC_ASSERT_SIZE(CTickManage, 0x38);

// class CMsgCrypt; size: 0x14
struct CMsgCrypt {
    /* 0x0000 */ CSimpleCrypt base_CSimpleCrypt;
    /* 0x0010 */ int32_t m_iMsgHeaderSize;
};
BS_STATIC_ASSERT_SIZE(CMsgCrypt, 0x14);

// class CLargeRand; size: 0x9D0
struct CLargeRand {
    uint8_t _pad_0000[0x4];
    /* 0x0004 */ unsigned long state[625];
    /* 0x09C8 */ unsigned long* next;
    /* 0x09CC */ int32_t left;
};
BS_STATIC_ASSERT_SIZE(CLargeRand, 0x9D0);

// class CListenServer; size: 0x48
struct CListenServer {
    /* 0x0000 */ CLoopThread base_CLoopThread;
    /* 0x0010 */ uint32_t m_sSocket;
    /* 0x0014 */ int32_t m_bConnect;
    /* 0x0018 */ void* m_wsaEvent;
    /* 0x001C */ uint8_t m_netEvent[0x2C]; /* original type: _WSANETWORKEVENTS */
};
BS_STATIC_ASSERT_SIZE(CListenServer, 0x48);

// class CSystemMgr; size: 0x420
struct CSystemMgr {
    /* 0x0000 */ CUDPSock base_CUDPSock;
    /* 0x040C */ uint8_t m_peerAddr[0x10]; /* original type: sockaddr_in */
    /* 0x041C */ long m_lShutDownTime;
};
BS_STATIC_ASSERT_SIZE(CSystemMgr, 0x420);

// class CSvrManage; size: 0x38
struct CSvrManage {
    /* 0x0000 */ CGateServer* m_GateServer;
    /* 0x0004 */ int32_t m_iGateServerNum;
    /* 0x0008 */ int32_t m_bSocketActive;
    /* 0x000C */ CStandbyServer* m_pStandbyServer[10];
    /* 0x0034 */ int32_t m_iStandbyServerNum;
};
BS_STATIC_ASSERT_SIZE(CSvrManage, 0x38);

// class CLobby; size: 0xC
struct CLobby {
    /* 0x0000 */ uint8_t m_PCList[0xC]; /* original type: std::list<CPC *,std::allocator<CPC *> > */
};
BS_STATIC_ASSERT_SIZE(CLobby, 0xC);

// class CTMManage; size: 0x6AC
struct CTMManage {
    /* 0x0000 */ CTMTree m_arrThisWeek[4][2];
    /* 0x04A0 */ CTMTree m_arrToll[2];
    /* 0x05C8 */ _TMRESULT_ m_PreWeek;
    /* 0x05F0 */ _TMRESULT_ m_CurWeek;
    /* 0x0618 */ unsigned long m_arrCurWeekWinner[4][2];
    /* 0x0638 */ unsigned long m_FinalClan[2][2];
    /* 0x0648 */ uint8_t m_byNowWhat;
    uint8_t _pad_0000[0x3];
    /* 0x064C */ int32_t m_bInited;
    /* 0x0650 */ int32_t m_bTMClosed;
    /* 0x0654 */ int32_t m_bAskPreWeekData;
    /* 0x0658 */ int32_t m_bGetPreWeekData;
    /* 0x065C */ int32_t m_bPrepare;
    /* 0x0660 */ int32_t m_bBegin;
    /* 0x0664 */ int32_t m_bEnd;
    /* 0x0668 */ int32_t m_bPostproc;
    /* 0x066C */ long m_lBattleTimes;
    /* 0x0670 */ long m_lBroadcastTime;
    /* 0x0674 */ long m_lIdleTime;
    /* 0x0678 */ long m_lFirstGameTime;
    /* 0x067C */ long m_lTMCloseTick;
    /* 0x0680 */ int32_t m_nReignCmd;
    /* 0x0684 */ unsigned long m_ReignTmp[5][2];
};
BS_STATIC_ASSERT_SIZE(CTMManage, 0x6AC);

// struct _SKILL_DATA_TABLE_; size: 0x5E
struct _SKILL_DATA_TABLE_ {
    /* 0x0000 */ uint8_t Code;
    /* 0x0001 */ uint8_t Type;
    /* 0x0002 */ uint8_t SubType;
    /* 0x0003 */ uint8_t TargetType;
    /* 0x0004 */ uint8_t NeedItem;
    /* 0x0005 */ uint8_t Reaction;
    /* 0x0006 */ uint8_t Abnomalcy;
    /* 0x0007 */ uint8_t MonsterRate[6];
    /* 0x000D */ _SKILL_LEVEL_DATA_ LevelData[3];
};
BS_STATIC_ASSERT_SIZE(_SKILL_DATA_TABLE_, 0x5E);

// struct _PC_DATA_TABLE_; size: 0x1C
struct _PC_DATA_TABLE_ {
    /* 0x0000 */ uint16_t Str_Point;
    /* 0x0002 */ uint16_t Mag_Point;
    /* 0x0004 */ uint16_t Dex_Point;
    /* 0x0006 */ uint16_t Vit_Point;
    /* 0x0008 */ uint16_t Mana_Point;
    /* 0x000A */ uint16_t BonusPoint;
    /* 0x000C */ uint16_t Attack_Point;
    /* 0x000E */ uint16_t Defense_Point;
    /* 0x0010 */ uint16_t Magic_Point;
    /* 0x0012 */ uint16_t HP_Point;
    /* 0x0014 */ uint16_t MP_Point;
    /* 0x0016 */ uint16_t Hit_Probability;
    /* 0x0018 */ uint16_t Damage_ratio;
    /* 0x001A */ uint16_t Finish_ratio;
};
BS_STATIC_ASSERT_SIZE(_PC_DATA_TABLE_, 0x1C);

// class CGateServer; size: 0x80009C
struct CGateServer {
    /* 0x0000 */ CBaseServer base_CBaseServer;
    /* 0x800078 */ int32_t m_bRunServer;
    /* 0x80007C */ uint8_t m_bySvrID;
    uint8_t _pad_0000[0x3];
    /* 0x800080 */ CSyncSection m_CryptSync;
};
BS_STATIC_ASSERT_SIZE(CGateServer, 0x80009C);

// class CStandbyServer; size: 0x800080
struct CStandbyServer {
    /* 0x0000 */ CBaseServer base_CBaseServer;
    /* 0x800078 */ int32_t m_iIndex;
    /* 0x80007C */ int32_t m_bLogin;
};
BS_STATIC_ASSERT_SIZE(CStandbyServer, 0x800080);

// class MSG_DFLT_HEADER; size: 0xA
struct MSG_DFLT_HEADER {
    /* 0x0000 */ unsigned long dwSize;
    /* 0x0004 */ unsigned long dwPCID;
    /* 0x0008 */ uint8_t byCtrl;
    /* 0x0009 */ uint8_t byCmd;
};
BS_STATIC_ASSERT_SIZE(MSG_DFLT_HEADER, 0xA);

// class MSG_G2S_NEW_CLIENT; size: 0x1F
struct MSG_G2S_NEW_CLIENT {
    /* 0x0000 */ MSG_S2G_HEADER MsgHeader;
    /* 0x000A */ char szAccountName[21];
};
BS_STATIC_ASSERT_SIZE(MSG_G2S_NEW_CLIENT, 0x1F);

// class MSG_G2S_DISCONNECT; size: 0xB
struct MSG_G2S_DISCONNECT {
    /* 0x0000 */ MSG_S2G_HEADER MsgHeader;
    /* 0x000A */ uint8_t byReason;
};
BS_STATIC_ASSERT_SIZE(MSG_G2S_DISCONNECT, 0xB);

// class MSG_C2S_ASK_MOVE; size: 0x11
struct MSG_C2S_ASK_MOVE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwDestCell;
    /* 0x0010 */ uint8_t byMoveSpeed;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ASK_MOVE, 0x11);

// class MSG_C2S_PC_MOVE; size: 0x11
struct MSG_C2S_PC_MOVE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNextCell;
    /* 0x0010 */ uint8_t byMoveSpeed;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_PC_MOVE, 0x11);

// class MSG_C2S_CHAR_LOGOUT; size: 0xC
struct MSG_C2S_CHAR_LOGOUT {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_CHAR_LOGOUT, 0xC);

// class MSG_C2S_ASK_ATTACK; size: 0x12
struct MSG_C2S_ASK_ATTACK {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byTargetType;
    /* 0x000D */ unsigned long dwTargetID;
    /* 0x0011 */ uint8_t byAttackType;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ASK_ATTACK, 0x12);

// class MSG_C2S_ASK_SKILL; size: 0x12
struct MSG_C2S_ASK_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t bySkillIndex;
    /* 0x000D */ uint8_t byTargetType;
    /* 0x000E */ unsigned long dwTargetID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ASK_SKILL, 0x12);

// class MSG_C2S_USE_POTION; size: 0xD
struct MSG_C2S_USE_POTION {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byPotionType;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_USE_POTION, 0xD);

// class MSG_C2S_PICKUP_ITEM; size: 0x18
struct MSG_C2S_PICKUP_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ unsigned long dwCellIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_PICKUP_ITEM, 0x18);

// class MSG_C2S_DROP_ITEM; size: 0x15
struct MSG_C2S_DROP_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t invenIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_DROP_ITEM, 0x15);

// class MSG_C2S_SELL_ITEM; size: 0x20
struct MSG_C2S_SELL_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ _ITEM_ Item;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_SELL_ITEM, 0x20);

// class MSG_C2S_GIVE_ITEM; size: 0x18
struct MSG_C2S_GIVE_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwToPCID;
    /* 0x0010 */ _ITEM_ID_ ItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_GIVE_ITEM, 0x18);

// class MSG_C2S_ASK_DEAL; size: 0x10
struct MSG_C2S_ASK_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwOPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ASK_DEAL, 0x10);

// class MSG_C2S_ANS_DEAL; size: 0x11
struct MSG_C2S_ANS_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwAskPCID;
    /* 0x0010 */ uint8_t answer;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ANS_DEAL, 0x11);

// class MSG_C2S_PUTIN_ITEM; size: 0x1C
struct MSG_C2S_PUTIN_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMoney;
    /* 0x0010 */ uint16_t wHPotion;
    /* 0x0012 */ uint16_t wMPotion;
    /* 0x0014 */ _ITEM_ID_ ItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_PUTIN_ITEM, 0x1C);

// class MSG_C2S_PUTOUT_ITEM; size: 0x1C
struct MSG_C2S_PUTOUT_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwMoney;
    /* 0x0010 */ uint16_t wHPotion;
    /* 0x0012 */ uint16_t wMPotion;
    /* 0x0014 */ _ITEM_ID_ ItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_PUTOUT_ITEM, 0x1C);

// class MSG_C2S_DECIDE_DEAL; size: 0xD
struct MSG_C2S_DECIDE_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t decide;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_DECIDE_DEAL, 0xD);

// class MSG_C2S_CONFIRM_DEAL; size: 0xD
struct MSG_C2S_CONFIRM_DEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t confirm;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_CONFIRM_DEAL, 0xD);

// class MSG_C2S_ALLOT_POINT; size: 0x11
struct MSG_C2S_ALLOT_POINT {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t strPoint;
    /* 0x000D */ uint8_t magicPoint;
    /* 0x000E */ uint8_t dexPoint;
    /* 0x000F */ uint8_t vitPoint;
    /* 0x0010 */ uint8_t manaPoint;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ALLOT_POINT, 0x11);

// class MSG_C2S_CONFIRM_ITEM; size: 0x19
struct MSG_C2S_CONFIRM_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ _ITEM_ID_ ItemID;
    /* 0x0018 */ uint8_t byIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_CONFIRM_ITEM, 0x19);

// class MSG_C2S_REMODEL_ITEM; size: 0x1E
struct MSG_C2S_REMODEL_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t byItemIndex;
    /* 0x0015 */ _ITEM_ID_ StoneID;
    /* 0x001D */ uint8_t byStoneIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_REMODEL_ITEM, 0x1E);

// class MSG_C2S_PUTIN_PET; size: 0x10
struct MSG_C2S_PUTIN_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPetID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_PUTIN_PET, 0x10);

// class MSG_C2S_PUTOUT_PET; size: 0x10
struct MSG_C2S_PUTOUT_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPetID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_PUTOUT_PET, 0x10);

// class MSG_C2S_MOVE_ITEM; size: 0x16
struct MSG_C2S_MOVE_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
    /* 0x0014 */ uint8_t oldIndex;
    /* 0x0015 */ uint8_t newIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_MOVE_ITEM, 0x16);

// class MSG_C2S_WEAR_ITEM; size: 0x14
struct MSG_C2S_WEAR_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_WEAR_ITEM, 0x14);

// class MSG_C2S_STRIP_ITEM; size: 0x14
struct MSG_C2S_STRIP_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_STRIP_ITEM, 0x14);

// class MSG_C2S_REVIVE_PET; size: 0x14
struct MSG_C2S_REVIVE_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwItemID;
    /* 0x0010 */ unsigned long dwPetID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_REVIVE_PET, 0x14);

// class MSG_C2S_USESCROLL; size: 0x11
struct MSG_C2S_USESCROLL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byInvenIndex;
    /* 0x000D */ unsigned long dwItemID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_USESCROLL, 0x11);

// class MSG_C2S_BUY_ITEM; size: 0x14
struct MSG_C2S_BUY_ITEM {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ uint16_t code;
    /* 0x0012 */ uint16_t wQuantity;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_BUY_ITEM, 0x14);

// class MSG_C2S_ASK_HEAL; size: 0x10
struct MSG_C2S_ASK_HEAL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ASK_HEAL, 0x10);

// class MSG_C2S_RETURN2HERE; size: 0x12
struct MSG_C2S_RETURN2HERE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ uint16_t wTeleportIndex;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_RETURN2HERE, 0x12);

// class MSG_C2S_ACTIVE_PET; size: 0x10
struct MSG_C2S_ACTIVE_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwPetID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ACTIVE_PET, 0x10);

// class MSG_C2S_INACTIVE_PET; size: 0xC
struct MSG_C2S_INACTIVE_PET {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_INACTIVE_PET, 0xC);

// class MSG_C2S_GESTURE; size: 0xD
struct MSG_C2S_GESTURE {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ uint8_t byGestureType;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_GESTURE, 0xD);

// class MSG_C2S_OPTION; size: 0xD
struct MSG_C2S_OPTION {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _GAME_OPTION_ option;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_OPTION, 0xD);

// class MSG_C2S_SUBMAP_INFO; size: 0x10
struct MSG_C2S_SUBMAP_INFO {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_SUBMAP_INFO, 0x10);

// class MSG_C2S_ENTER; size: 0x50
struct MSG_C2S_ENTER {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ unsigned long dwNPCID;
    /* 0x0010 */ char keyword[64];
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_ENTER, 0x50);

// struct EXCEL_ITEM_DATA0; size: 0xF2
struct EXCEL_ITEM_DATA0 {
    /* 0x0000 */ uint16_t Group;
    /* 0x0002 */ uint16_t Index;
    /* 0x0004 */ uint16_t ItemType;
    /* 0x0006 */ uint16_t Category;
    /* 0x0008 */ char ItemName[32];
    /* 0x0028 */ unsigned long StdPrice;
    /* 0x002C */ uint16_t Auth;
    /* 0x002E */ uint16_t AttackRange;
    /* 0x0030 */ uint16_t MaxRepeat;
    /* 0x0032 */ uint16_t SoftSkin;
    /* 0x0034 */ uint16_t HardSkin;
    /* 0x0036 */ uint16_t Small;
    /* 0x0038 */ uint16_t Middle;
    /* 0x003A */ uint16_t Large;
    /* 0x003C */ uint16_t XLarge;
    /* 0x003E */ EXCEL_LEVEL_DATA arrLevel[10];
};
BS_STATIC_ASSERT_SIZE(EXCEL_ITEM_DATA0, 0xF2);

// struct EXCEL_ITEM_DATA1; size: 0x34
struct EXCEL_ITEM_DATA1 {
    /* 0x0000 */ uint16_t Group;
    /* 0x0002 */ uint16_t Index;
    /* 0x0004 */ char ItemName[32];
    /* 0x0024 */ unsigned long StdPrice;
    /* 0x0028 */ uint16_t Auth;
    /* 0x002A */ uint16_t Limit;
    /* 0x002C */ uint16_t Ability;
    /* 0x002E */ uint16_t MaxIceAttr;
    /* 0x0030 */ uint16_t MaxFireAttr;
    /* 0x0032 */ uint16_t MaxLightAttr;
};
BS_STATIC_ASSERT_SIZE(EXCEL_ITEM_DATA1, 0x34);

// struct EXCEL_ITEM_DATA2; size: 0x30
struct EXCEL_ITEM_DATA2 {
    /* 0x0000 */ uint16_t Group;
    /* 0x0002 */ uint16_t Index;
    /* 0x0004 */ char ItemName[32];
    /* 0x0024 */ unsigned long StdPrice;
    /* 0x0028 */ uint16_t Auth;
    /* 0x002A */ uint16_t Limit;
    /* 0x002C */ uint16_t Data1;
    /* 0x002E */ uint16_t Data2;
};
BS_STATIC_ASSERT_SIZE(EXCEL_ITEM_DATA2, 0x30);

// struct EXCEL_ITEM_DATA3; size: 0x30
struct EXCEL_ITEM_DATA3 {
    /* 0x0000 */ uint16_t Group;
    /* 0x0002 */ uint16_t Index;
    /* 0x0004 */ char ItemName[32];
    /* 0x0024 */ unsigned long StdPrice;
    /* 0x0028 */ uint16_t Auth;
    /* 0x002A */ uint16_t Limit;
    /* 0x002C */ uint16_t Data1;
    /* 0x002E */ uint16_t Data2;
};
BS_STATIC_ASSERT_SIZE(EXCEL_ITEM_DATA3, 0x30);

// struct EXCEL_ITEM_COMBINATION_TABLE; size: 0x20
struct EXCEL_ITEM_COMBINATION_TABLE {
    /* 0x0000 */ uint16_t wBaseRune1;
    /* 0x0002 */ uint16_t wBaseRune2;
    /* 0x0004 */ uint16_t wBaseRune3;
    /* 0x0006 */ uint16_t wRune1;
    /* 0x0008 */ uint16_t wRune2;
    /* 0x000A */ uint16_t wRune3;
    /* 0x000C */ uint16_t wItem1;
    /* 0x000E */ uint16_t wItem2;
    /* 0x0010 */ uint16_t wItem3;
    /* 0x0012 */ uint16_t wObjectItem;
    /* 0x0014 */ uint16_t wSuccessRatio;
    /* 0x0016 */ uint16_t wSuccessItem;
    /* 0x0018 */ uint16_t wOptionType;
    /* 0x001A */ uint16_t wFailure;
    /* 0x001C */ uint16_t wReserved1;
    /* 0x001E */ uint16_t wReserved2;
};
BS_STATIC_ASSERT_SIZE(EXCEL_ITEM_COMBINATION_TABLE, 0x20);

// struct _ITEM_COUNTER_HEADER; size: 0x28
struct _ITEM_COUNTER_HEADER {
    /* 0x0000 */ uint8_t serverID;
    uint8_t _pad_0000[0x3];
    /* 0x0004 */ uint8_t UpdateDate[0x24]; /* original type: tm */
};
BS_STATIC_ASSERT_SIZE(_ITEM_COUNTER_HEADER, 0x28);

// union _ITEM_SERIALKEY_; size: 0x4
union _ITEM_SERIALKEY_ {
    /* 0x0000 */ unsigned long serialKey;
    /* 0x0000 */ unsigned long year;
    /* 0x0000 */ unsigned long month;
    /* 0x0000 */ unsigned long day;
    /* 0x0000 */ unsigned long origin;
    /* 0x0000 */ unsigned long count;
};
BS_STATIC_ASSERT_SIZE(_ITEM_SERIALKEY_, 0x4);

// class MSG_M2S_ERROR; size: 0x49
struct MSG_M2S_ERROR {
    /* 0x0000 */ MSG_S2S_HEADER MsgHeader;
    /* 0x0002 */ unsigned long dwPCID;
    /* 0x0006 */ uint8_t byGateSvrID;
    /* 0x0007 */ uint16_t wErrCode;
    /* 0x0009 */ char szErrStr[64];
};
BS_STATIC_ASSERT_SIZE(MSG_M2S_ERROR, 0x49);

// struct EXCEL_PET_DATA; size: 0x30
struct EXCEL_PET_DATA {
    /* 0x0000 */ uint16_t Group;
    /* 0x0002 */ uint16_t Index;
    /* 0x0004 */ char ItemName[32];
    /* 0x0024 */ unsigned long StdPrice;
    /* 0x0028 */ uint16_t Auth;
    /* 0x002A */ uint16_t Limit;
    /* 0x002C */ uint16_t Data1;
    /* 0x002E */ uint16_t Data2;
};
BS_STATIC_ASSERT_SIZE(EXCEL_PET_DATA, 0x30);

// struct _CHK_HACK_; size: 0x8
struct _CHK_HACK_ {
    /* 0x0000 */ long tvTick;
    /* 0x0004 */ int32_t iCounter;
};
BS_STATIC_ASSERT_SIZE(_CHK_HACK_, 0x8);

// class MSG_C2S_LEARN_SKILL; size: 0x15
struct MSG_C2S_LEARN_SKILL {
    /* 0x0000 */ MSG_S2C_HEADER MsgHeader;
    /* 0x000C */ _ITEM_ID_ ScrollID;
    /* 0x0014 */ uint8_t invenIdx;
};
BS_STATIC_ASSERT_SIZE(MSG_C2S_LEARN_SKILL, 0x15);

// class MSG_G2S_SVR_LOGIN; size: 0xB
struct MSG_G2S_SVR_LOGIN {
    /* 0x0000 */ MSG_S2G_HEADER MsgHeader;
    /* 0x000A */ uint8_t byThisServerID;
};
BS_STATIC_ASSERT_SIZE(MSG_G2S_SVR_LOGIN, 0xB);

// struct _MAPHEADER_; size: 0x17
struct _MAPHEADER_ {
    /* 0x0000 */ uint16_t mapIndex;
    /* 0x0002 */ char mapName[20];
    /* 0x0016 */ uint8_t warpCount;
};
BS_STATIC_ASSERT_SIZE(_MAPHEADER_, 0x17);

#pragma pack(pop)

#undef BS_STATIC_ASSERT_SIZE

#endif /* BATTLESERVER_RECOVERED_H */
