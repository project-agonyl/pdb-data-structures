// Generated from ZoneServer.pdb/vc60.pdb, ZoneServer.map, and ZoneServer.exe.
// ponytail: layout recovery only; methods, STL internals, and noisy system records are intentionally skipped.
// Recovered 487 UDT layouts from VC6 CodeView type records.
// Input sizes: ZoneServer.pdb=4826112, vc60.pdb=438272, ZoneServer.map=2553658, ZoneServer.exe=25984243.
// ZoneServer.exe PE timestamp: 0x21475346.
#pragma once

#include <cstddef>
#include <cstdint>

#pragma pack(push, 1)

struct CLoopThread;
struct _ITEM_ID_;
union _ITEM_INFO_;
struct _ITEM_;
struct _PET_ID_;
struct _LASTINGSKILL_INFO_;
struct _SKILL_LEVEL_DATA_;
struct SKILL_STAT_CHANGE;
struct _PC_QUEST_INFO_PC_QUEST_DATA_;
struct _SAVE_QUEST_INFO_SAVE_QUEST_DATA_;
struct _SKILL_;
struct _SOCIALINFO_;
union _ITEM_IN_WEAR_;
union _ITEM_IN_INVEN_;
struct _PET_INFO_;
struct _SAVE_QUEST_INFO_;
struct _PC_2STAT_;
struct _ACCOUNT_ITEM_;
struct _CHARACTER_INFO_;
struct _CLAN_INFO_;
struct _KNIGHT_INFO_;
struct _LASTINGSKILL_MANAGEARRARY_;
struct _LASTINGITEM_ARRAY_;
struct _PARTISAN_;
struct _APPRENTICE_INFO_;
struct CBaseServer;
struct MSG_S2G_HEADER;
struct MSG_S2C_HEADER;
struct MSG_C2S_OP_CMD;
struct MSG_S2C_ERROR;
struct MSG_C2S_UNKNOWN_CHAR;
struct MSG_S2C_UNKNOWN_CHAR;
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
struct MSG_S2C_WARP_READY;
struct MSG_C2S_WARP;
struct MSG_S2C_WARP;
struct MSG_S2C_WARP_LOGIN;
struct MSG_S2C_ANS_MOVE;
struct MSG_S2C_SEE_MOVE;
struct MSG_S2C_FIX_MOVE;
struct MSG_S2C_SEE_STOP;
struct MSG_S2C_CHAR_LOGOUT;
struct _PET_STAT_;
struct MSG_S2C_STAT_AUTOUPDATE;
struct MSG_S2C_PET_LEVELUP;
struct MSG_S2C_PET_BUY;
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
struct MSG_S2C_BUY_ITEM;
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
struct MSG_S2C_ITEM_COMBINATION;
struct MSG_S2C_LOTTO_PURCHASE;
struct MSG_S2C_LOTTO_QUERY_PRIZE;
struct MSG_S2C_LOTTO_QUERY_HISTORY;
struct MSG_S2C_LOTTO_SALE;
struct MSG_S2C_LOTTO_NOTIFY;
struct MSG_S2C_DERBY_NOTICE;
struct MSG_S2C_DERBY_INDEX_QUERY;
struct _DERBY_MONSTER_INFO_;
struct MSG_S2C_DERBY_MONSTER_QUERY;
struct MSG_S2C_DERBY_RATIO_QUERY;
struct MSG_S2C_DERBY_PURCHASE;
struct MSG_S2C_DERBY_RACE_START;
struct _DERBY_HISTORY_INFO_;
struct MSG_S2C_DERBY_RESULT_QUERY;
struct MSG_S2C_DERBY_HISTORY_QUERY;
struct MSG_S2C_DERBY_EXCHANGE;
struct MSG_C2S_USE_ITEM;
struct MSG_S2C_ASK_APPRENTICE_IN;
struct MSG_S2C_ANS_APPRENTICE_IN;
struct MSG_S2C_APPRENTICE_UPDATE;
struct MSG_S2C_APPRENTICE_HP;
struct MSG_S2C_ASK_APPRENTICE_OUT;
struct MSG_S2C_SHUE_COMBINATION;
struct MSG_S2S_HEADER;
struct MSG_S2M_SVR_LOGIN;
struct MSG_S2M_CHAR_LOGIN;
struct MSG_S2M_WORLD_LOGIN;
struct _PCDATA_;
struct MSG_M2S_WORLD_LOGIN;
struct MSG_S2M_CHAR_LOGOUT;
struct MSG_S2M_DATA_UPDATE;
struct _ZONE_WARP_DATA_;
struct MSG_S2M_WARP_ZONE;
struct MSG_M2S_WARP_ZONE;
struct MSG_S2M_WARP_LOGIN;
struct MSG_M2S_WARP_LOGIN;
struct MSG_M2S_PASS2GATE;
struct MSG_S2M_SAY;
struct MSG_S2M_PARTY_CREATE;
struct MSG_S2M_PARTY_JOIN;
struct MSG_S2M_PARTY_OUT;
struct MSG_M2S_PARTY_OUT;
struct _PARTNER_INFO_;
struct MSG_S2M_APPRENTICE_CREATE;
struct _APPRENTICE_MEMBER_;
struct MSG_S2M_APPRENTICE_UPDATE;
struct MSG_S2M_APPRENTICE_QUIT;
struct MSG_M2S_ADMIN;
struct MSG_S2M_CHAR_DISCONNECT;
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
struct MSG_S2C_CLAN;
struct MSG_S2C_ASK_CLAN;
struct MSG_S2C_JOIN_CLAN;
struct MSG_S2C_BOLT_CLAN;
struct MSG_S2C_UPDATE_CLAN;
struct MSG_S2C_UPDATE_KNIGHT;
struct MSG_S2C_CLAN_FAIL;
struct MSG_S2C_CHANGE_NATION;
struct MSG_S2M_CLAN;
struct MSG_M2S_CLAN;
struct MSG_S2M_KNIGHT;
struct MSG_M2S_KNIGHT;
struct MSG_S2M_CLAN_INFO;
struct MSG_M2S_CLAN_INFO;
struct MSG_M2S_KNIGHT_INFO;
struct MSG_S2M_CLAN_UPDATE;
struct MSG_M2S_CLAN_FAIL;
struct MSG_S2C_PARTY_QUEST;
struct MSG_S2C_PARTY_QUEST_TIMER;
struct _BATTLE_WARP_DATA_;
struct MSG_C2S_ASK_WARP_Z2B;
struct MSG_S2M_ASK_WARP_Z2B;
struct MSG_M2S_ANS_WARP_Z2B;
struct MSG_S2C_ANS_WARP_Z2B;
struct MSG_C2S_ASK_WARP_B2Z;
struct MSG_S2M_ASK_WARP_B2Z;
struct MSG_M2S_ANS_WARP_B2Z;
struct MSG_S2C_ANS_WARP_B2Z;
struct MSG_C2S_ASK_PVP;
struct MSG_S2C_ASK_PVP;
struct MSG_C2S_ANS_PVP;
struct MSG_S2C_ANS_PVP;
struct MSG_M2S_CHANGE_REIGN;
struct MSG_C2S_ASK_SHOP_INFO;
struct MSG_S2C_ANS_SHOP_INFO;
struct MSG_C2S_ASK_GIVE_MY_TAX;
struct MSG_S2C_ANS_GIVE_MY_TAX;
struct MSG_S2C_FORTIFIER;
struct MSG_S2C_RETRIEVE_POINT;
struct MSG_S2C_CAO_MITIGATION;
struct MSG_S2C_UPDATE_LORE;
struct MSG_Z2C_CONFIRM_MARK;
struct MSG_Z2M_REGISTER_MARK;
struct MSG_Z2M_CONFIRM_MARK;
struct _AGIT_INFO_;
struct MSG_S2C_AGIT_INFO;
struct _AUCTION_INFO;
struct MSG_S2C_AUCTION_INFO;
struct MSG_S2C_AGIT_ENTER;
struct MSG_S2C_AGIT_PUTUP_AUCTION;
struct MSG_S2C_AGIT_BIDON;
struct MSG_S2C_AGIT_PAY_EXPENSE;
struct MSG_S2C_AGIT_CHANGE_NAME;
struct MSG_S2C_AGIT_REPAY_MONEY;
struct MSG_S2C_AGIT_OBTAIN_SALEMONEY;
struct MSG_S2C_TYR_ERROR;
struct MSG_S2C_TYR_ENTRY;
struct _TYR_ENTRY_;
struct MSG_S2C_TYR_INFO;
struct MSG_S2M_WGS_PAY;
struct MSG_M2S_WGS_PAY;
struct MSG_S2C_PAYINFO;
struct CShareObject;
struct CSyncSection;
struct CLinkedList;
struct _ListNODE_;
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
struct CKilledCharManage;
struct _OBJECT_;
struct CSimpleSyncSection;
struct CPC_CPCStatChange;
struct CCheckHACK;
struct CPC_REMEMBER_ENEMY_;
struct CPCManage;
struct CNPC_NPC_REMEMBER_PC_;
struct CNPC_CNPCStatChange;
struct CNPC;
struct CMemBlk;
struct CMemManager;
struct _CELL_;
struct _DROP_ITEM_;
struct CCell;
struct CBlock;
struct CAStar;
struct _WARP_;
struct CMap;
struct _NPC_DATA_TABLE_NPC_ATTACK_INFO_;
struct _NPC_DROPITEM_TABLE_ITEM_DROPRATE_;
struct CNPCRecallMemMgr;
struct CNPCWaitRecall;
struct CNPCAI;
struct _PET_TABLE_DATA_;
struct CPetManage;
struct _QUEST_HEADER_;
struct _QUEST_NEEDS_;
struct _QUEST_REWARD_;
struct _QUEST_CONTENTS_;
struct CQuest;
struct CUDPSock;
struct CSimpleCrypt;
struct CGameLog;
struct CTimeFunc;
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
struct CPartyQuest_CHALLENGER_;
struct CPartyQuest;
struct _QUEST_PORTAL_NPC_;
struct _LOTTO_LOG_DATA_;
struct CLottoManager;
struct _AGIT_STORAGE_;
struct CAgit;
struct _AGIT_TABLE_INFO_;
struct _REIGNCLAN_;
struct CReignMgr;
struct CDerbyManager;
struct CMainServer;
struct _PC_QUEST_INFO_;
struct _PC_DIEINFO_;
struct _WAIT_RECALL_;
struct _AGIT_REPAY_;
struct _NPC_DATA_TABLE_;
struct _NPC_DROPITEM_TABLE_;
struct CAStar_NODE;
struct CAStar_STACK;
struct _WARP_WAIT_PC_;
struct _LOG_DATA_;
struct _QUEST_TABLE_;
struct _AGIT_AUCTION_;
struct _ITEM_TABLE_FOR_EVENT;
struct CAgitAuctionManager;
struct CAgitManager;
struct CLoopSleepMgr;
struct _LAST_CALL_INFO_;
struct CMsgCrypt;
struct CGateServer;
struct CTickManage;
struct MSG_DFLT_HEADER;
struct MSG_G2S_NEW_CLIENT;
struct MSG_G2S_DISCONNECT;
struct MSG_C2S_ASK_MOVE;
struct MSG_C2S_PC_MOVE;
struct MSG_C2S_WORLD_LOGIN;
struct MSG_C2S_CHAR_LOGOUT;
struct MSG_C2S_ASK_ATTACK;
struct MSG_C2S_ASK_SKILL;
struct MSG_C2S_PICKUP_ITEM;
struct MSG_C2S_DROP_ITEM;
struct MSG_C2S_USE_POTION;
struct MSG_C2S_MOVE_ITEM;
struct MSG_C2S_WEAR_ITEM;
struct MSG_C2S_STRIP_ITEM;
struct MSG_C2S_BUY_ITEM;
struct MSG_C2S_SELL_ITEM;
struct MSG_C2S_GIVE_ITEM;
struct MSG_C2S_ASK_DEAL;
struct MSG_C2S_ANS_DEAL;
struct MSG_C2S_PUTIN_ITEM;
struct MSG_C2S_PUTOUT_ITEM;
struct MSG_C2S_DECIDE_DEAL;
struct MSG_C2S_CONFIRM_DEAL;
struct MSG_C2S_ALLOT_POINT;
struct MSG_C2S_ASK_HEAL;
struct MSG_C2S_LEARN_SKILL;
struct MSG_C2S_CONFIRM_ITEM;
struct MSG_C2S_REMODEL_ITEM;
struct MSG_C2S_ASK_PARTY;
struct MSG_C2S_ANS_PARTY;
struct MSG_C2S_OUT_PARTY;
struct MSG_C2S_RETURN2HERE;
struct MSG_C2S_ACTIVE_PET;
struct MSG_C2S_INACTIVE_PET;
struct MSG_C2S_PET_BUY;
struct MSG_C2S_PET_SELL;
struct MSG_C2S_FEED_PET;
struct MSG_C2S_USESCROLL;
struct MSG_C2S_PUTIN_PET;
struct MSG_C2S_PUTOUT_PET;
struct MSG_C2S_ASK_OPEN_STORAGE;
struct MSG_C2S_ASK_INVEN2STORAGE;
struct MSG_C2S_ASK_STORAGE2INVEN;
struct MSG_C2S_ASK_DEPOSITE_MONEY;
struct MSG_C2S_ASK_WITHDRAW_MONEY;
struct MSG_C2S_ASK_CLOSE_STORAGE;
struct MSG_C2S_ASK_MOVE_ITEMINSTORAGE;
struct MSG_C2S_REVIVE_PET;
struct MSG_C2S_GESTURE;
struct MSG_C2S_OPTION;
struct MSG_C2S_SUBMAP_INFO;
struct MSG_C2S_ENTER;
struct MSG_C2S_ITEM_COMBINATION;
struct MSG_C2S_CLAN;
struct MSG_C2S_JOIN_CLAN;
struct MSG_C2S_ANS_CLAN;
struct MSG_C2S_BOLT_CLAN;
struct MSG_C2S_REQ_CLAN_INFO;
struct MSG_C2S_PARTY_QUEST;
struct MSG_C2S_OBJECT_NPC;
struct MSG_C2S_LOTTO_PURCHASE;
struct MSG_C2S_LOTTO_QUERY_PRIZE;
struct MSG_C2S_LOTTO_QUERY_HISTORY;
struct MSG_C2S_LOTTO_SALE;
struct MSG_C2S_CHANGE_NATION;
struct MSG_C2S_DERBY_INDEX_QUERY;
struct MSG_C2S_DERBY_MONSTER_QUERY;
struct MSG_C2S_DERBY_RATIO_QUERY;
struct MSG_C2S_DERBY_PURCHASE;
struct MSG_C2S_DERBY_RESULT_QUERY;
struct MSG_C2S_DERBY_HISTORY_QUERY;
struct MSG_C2S_DERBY_EXCHANGE;
struct MSG_C2S_ASK_APPRENTICE_IN;
struct MSG_C2S_ANS_APPRENTICE_IN;
struct MSG_C2S_ASK_APPRENTICE_OUT;
struct MSG_C2S_RETRIEVE_POINT;
struct MSG_C2S_CAO_MITIGATION;
struct MSG_C2Z_REGISTER_MARK;
struct MSG_C2S_SHUE_COMBINATION;
struct MSG_C2S_PAYINFO;
struct EXCEL_ITEM_DATA0;
struct EXCEL_ITEM_DATA1;
struct EXCEL_ITEM_DATA2;
struct EXCEL_ITEM_DATA3;
struct EXCEL_ITEM_COMBINATION_TABLE;
struct _ITEM_COUNTER_HEADER;
union _ITEM_SERIALKEY_;
struct CLargeRand;
struct CListenServer;
struct CSvrManage;
struct CStandbyServer;
struct CSystemMgr;
struct CPartyQuestMgr;
struct _SKILL_DATA_TABLE_;
struct _Warp_Postion_;
struct _GAME_MANAGER_;
struct _DOOR_NPC_INFO_;
struct _PC_DATA_TABLE_;
struct _NPC_SELL_ITEM_INFO_;
struct MSG_M2S_ERROR;
struct MSG_M2S_APPRENTICE_QUIT;
struct MSG_M2Z_CONFIRM_MARK;
struct MSG_M2Z_CHANGE_MARK;
struct _MAPHEADER_;
struct _AttackParty_;
struct _NPC_NATION_INFO_;
struct _KWAN_POS;
struct EXCEL_PET_DATA;
struct _CHK_HACK_;
struct MSG_G2S_SVR_LOGIN;
struct MSG_C2S_AGIT_INFO;
struct MSG_C2S_AUCTION_INFO;
struct MSG_C2S_AGIT_ENTER;
struct MSG_C2S_AGIT_PUTUP_AUCTION;
struct MSG_C2S_AGIT_BIDON;
struct MSG_C2S_AGIT_PAY_EXPENSE;
struct MSG_C2S_AGIT_CHANGE_NAME;
struct MSG_C2S_AGIT_REPAY_MONEY;
struct MSG_C2S_AGIT_OBTAIN_SALEMONEY;
struct MSG_C2S_TYR_ENTRY;
struct MSG_C2S_TYR_INFO;
struct MSG_C2S_TYR_JOIN;
struct CPC;

struct CLoopThread {
  uint8_t _raw[0x10];
}; // size 0x10 CLoopThread

struct _ITEM_ID_ {
  uint32_t id; // +0x0
  uint32_t code : 14;
  uint32_t bDefault : 1;
  uint32_t bBless : 1;
  uint32_t downOption : 2;
  uint32_t bItemFlag : 1;
  uint32_t bCheckFlag : 1;
  uint32_t reserved : 12;
}; // size 0x8 _ITEM_ID_

union _ITEM_INFO_ {
  uint8_t _raw[0x4];
  uint32_t confirm; // +0x0
  uint32_t fireAttr; // +0x0
  uint32_t iceAttr; // +0x0
  uint32_t iChosenNum1; // +0x0
  uint32_t iChosenNum2; // +0x0
  uint32_t iChosenNum3; // +0x0
  uint32_t iChosenNum4; // +0x0
  uint32_t iChosenNum5; // +0x0
  uint32_t iDerbyBetMoney; // +0x0
  uint32_t iDerbyChosenNum1; // +0x0
  uint32_t iDerbyChosenNum2; // +0x0
  uint32_t iDerbyIndex; // +0x0
  uint32_t iLottoIndex; // +0x0
  uint32_t info; // +0x0
  uint32_t level; // +0x0
  uint32_t lightAttr; // +0x0
  uint16_t money; // +0x0
  uint32_t option; // +0x0
  uint16_t quantity; // +0x0
  uint32_t subtype; // +0x0
  uint32_t wearIdx; // +0x0
}; // size 0x4 _ITEM_INFO_

struct _ITEM_ {
  _ITEM_ID_ ItemID; // +0x0 _ITEM_ID_
  _ITEM_INFO_ ItemInfo; // +0x8 _ITEM_INFO_
  uint32_t ItemKey; // +0xc
}; // size 0x10 _ITEM_

struct _PET_ID_ {
  uint32_t id; // +0x0
  uint32_t code : 16;
  uint32_t subcode : 16;
}; // size 0x8 _PET_ID_

struct _LASTINGSKILL_INFO_ {
  uint8_t byClassIndex; // +0x0
  uint8_t bySkillIndex; // +0x1
  uint8_t bySkillLevel; // +0x2
  uint8_t _pad0[0x1];
  uint32_t dwCastingTime; // +0x4
  uint32_t dwRemainTime; // +0x8
}; // size 0xc _LASTINGSKILL_INFO_

struct _SKILL_LEVEL_DATA_ {
  uint8_t HPConsume; // +0x0
  uint8_t MPConsume; // +0x1
  uint8_t Delay; // +0x2
  uint8_t Range; // +0x3
  uint8_t Scope; // +0x4
  uint8_t LastingTime; // +0x5
  uint16_t AddDamage; // +0x6
  uint16_t AddIceDam; // +0x8
  uint16_t AddFireDam; // +0xa
  uint16_t AddLightDam; // +0xc
  uint8_t CommonVal1; // +0xe
  uint8_t CommonVal2; // +0xf
  uint8_t AttkRate; // +0x10
  uint8_t MagRate; // +0x11
  uint8_t DefRate; // +0x12
  uint8_t IceAttkRate; // +0x13
  uint8_t FireAttkRate; // +0x14
  uint8_t LightAttkRate; // +0x15
  uint8_t IceDefRate; // +0x16
  uint8_t FireDefRate; // +0x17
  uint8_t LightDefRate; // +0x18
  uint8_t MaxHPRate; // +0x19
  uint8_t MaxMPRate; // +0x1a
}; // size 0x1b _SKILL_LEVEL_DATA_

struct SKILL_STAT_CHANGE {
  uint8_t AttkRate; // +0x0
  uint8_t MagRate; // +0x1
  uint8_t DefRate; // +0x2
  uint8_t FireAttkRate; // +0x3
  uint8_t FireDefRate; // +0x4
  uint8_t IceAttkRate; // +0x5
  uint8_t IceDefRate; // +0x6
  uint8_t LightAttkRate; // +0x7
  uint8_t LightDefRate; // +0x8
  uint8_t MaxHPRate; // +0x9
  uint8_t MaxMPRate; // +0xa
}; // size 0xb SKILL_STAT_CHANGE

struct _PC_QUEST_INFO_PC_QUEST_DATA_ {
  uint8_t QuestType; // +0x0
  uint8_t QuestOK; // +0x1
  uint8_t QuestVar; // +0x2
}; // size 0x3 _PC_QUEST_INFO_::_PC_QUEST_DATA_

struct _SAVE_QUEST_INFO_SAVE_QUEST_DATA_ {
  uint8_t QuestOK : 1;
  uint8_t QuestVar : 7;
}; // size 0x1 _SAVE_QUEST_INFO_::_SAVE_QUEST_DATA_

struct _SKILL_ {
  uint32_t skill_0; // +0x0
  uint32_t skill_1; // +0x4
  uint32_t skill_2; // +0x8
}; // size 0xc _SKILL_

struct _SOCIALINFO_ {
  uint32_t nation : 8;
  uint32_t rank : 8;
  uint32_t knight_index : 16;
}; // size 0x4 _SOCIALINFO_

union _ITEM_IN_WEAR_ {
  uint8_t _raw[0x14];
  _ITEM_ item; // +0x0 _ITEM_
  _ITEM_ID_ ItemID; // +0x0 _ITEM_ID_
  struct {
    uint8_t _pad0[0x8];
    _ITEM_INFO_ ItemInfo; // +0x8 _ITEM_INFO_
  };
  struct {
    uint8_t _pad1[0xc];
    uint32_t ItemKey; // +0xc
  };
  struct {
    uint8_t _pad2[0x10];
    uint8_t byWearIndex; // +0x10
  };
}; // size 0x14 _ITEM_IN_WEAR_

union _ITEM_IN_INVEN_ {
  uint8_t _raw[0x14];
  _ITEM_ item; // +0x0 _ITEM_
  _ITEM_ID_ ItemID; // +0x0 _ITEM_ID_
  struct {
    uint8_t _pad0[0x8];
    _ITEM_INFO_ ItemInfo; // +0x8 _ITEM_INFO_
  };
  struct {
    uint8_t _pad1[0xc];
    uint32_t ItemKey; // +0xc
  };
  struct {
    uint8_t _pad2[0x10];
    uint8_t byInvenIndex; // +0x10
  };
}; // size 0x14 _ITEM_IN_INVEN_

struct _PET_INFO_ {
  _PET_ID_ PetID; // +0x0 _PET_ID_
  uint32_t serialKey; // +0x8
  uint32_t Level : 8;
  uint32_t Exp : 14;
  uint32_t HP : 6;
  uint32_t FireAttk : 1;
  uint32_t FireDef : 1;
  uint32_t IceAttk : 1;
  uint32_t IceDef : 1;
  uint32_t LightAttk : 1;
  uint32_t LightDef : 1;
  uint32_t AttkRate : 1;
  uint32_t DefRate : 1;
  uint32_t MagicAttkRate : 1;
  uint32_t DownDropRate : 1;
  uint32_t UpExp : 1;
  uint32_t Food : 14;
  uint32_t petIndex : 8;
  uint32_t Confirm : 1;
  uint32_t bAlive : 1;
  uint32_t bCritiRateInc : 1;
}; // size 0x14 _PET_INFO_

struct _SAVE_QUEST_INFO_ {
  int32_t QuestIndex; // +0x0
  _SAVE_QUEST_INFO_SAVE_QUEST_DATA_ QuestData[0x7]; // +0x4 _SAVE_QUEST_INFO_::_SAVE_QUEST_DATA_
  uint8_t _pad0[0x1];
}; // size 0xc _SAVE_QUEST_INFO_

struct _PC_2STAT_ {
  uint16_t wHitAttack; // +0x0
  uint16_t wMagicAttack; // +0x2
  uint16_t wDefense; // +0x4
  uint16_t wFireAttack; // +0x6
  uint16_t wFireDefence; // +0x8
  uint16_t wIceAttack; // +0xa
  uint16_t wIceDefense; // +0xc
  uint16_t wLightAttack; // +0xe
  uint16_t wLightDefense; // +0x10
  uint16_t wMaxHp; // +0x12
  uint16_t wMaxMp; // +0x14
  uint16_t wHitAddition; // +0x16
  uint16_t wMagAddition; // +0x18
}; // size 0x1a _PC_2STAT_

struct _ACCOUNT_ITEM_ {
  _ITEM_ID_ ItemID; // +0x0 _ITEM_ID_
  _ITEM_INFO_ ItemInfo; // +0x8 _ITEM_INFO_
  uint8_t byWearIndex; // +0xc
  uint8_t _pad0[0x3];
}; // size 0x10 _ACCOUNT_ITEM_

struct _CHARACTER_INFO_ {
  char szPCName[0xd]; // +0x0
  uint8_t byType; // +0xd
  uint16_t wLevel; // +0xe
  _ACCOUNT_ITEM_ WearList[0xa]; // +0x10 _ACCOUNT_ITEM_
}; // size 0xb0 _CHARACTER_INFO_

struct _CLAN_INFO_ {
  uint32_t dwClanID; // +0x0
  uint32_t dwMarkID; // +0x4
  uint32_t dwCDate; // +0x8
  uint32_t dwDDate; // +0xc
  char szClanName[0x20]; // +0x10
  char szClanPasswd[0x10]; // +0x30
  uint8_t nation; // +0x40
  uint8_t clanRank; // +0x41
  uint8_t clanStat; // +0x42
  uint8_t byReserved; // +0x43
  uint16_t wStorageIndex; // +0x44
  uint16_t wAgitID; // +0x46
  uint16_t wWinCnt; // +0x48
  uint16_t wLooseCnt; // +0x4a
  uint16_t wReserved; // +0x4c
  uint8_t _pad0[0x2];
}; // size 0x50 _CLAN_INFO_

struct _KNIGHT_INFO_ {
  char szPCName[0xd]; // +0x0
  uint8_t _pad0[0x3];
  uint32_t dwPCID; // +0x10
  uint16_t wLevel; // +0x14
  uint8_t rankInClan; // +0x16
  uint8_t status; // +0x17
  uint8_t byPCType; // +0x18
  uint8_t _pad1[0x3];
}; // size 0x1c _KNIGHT_INFO_

struct _LASTINGSKILL_MANAGEARRARY_ {
  _LASTINGSKILL_INFO_ LastingSkillInfo[0x4]; // +0x0 _LASTINGSKILL_INFO_
}; // size 0x30 _LASTINGSKILL_MANAGEARRARY_

struct _LASTINGITEM_ARRAY_ {
  uint8_t byItemType; // +0x0
  uint8_t _pad0[0x3];
  uint32_t dwRemainTime; // +0x4
}; // size 0x8 _LASTINGITEM_ARRAY_

struct _PARTISAN_ {
  uint32_t dwPCID; // +0x0
  uint8_t byGateSvr; // +0x4
  uint8_t _pad0[0x3];
}; // size 0x8 _PARTISAN_

struct _APPRENTICE_INFO_ {
  uint32_t dwPCID; // +0x0
}; // size 0x4 _APPRENTICE_INFO_

struct CBaseServer {
  CLoopThread _base_CLoopThread; // +0x0 CLoopThread
  int32_t m_bConnect; // +0x10
  uint32_t m_sSocket; // +0x14
  void* m_wsaEvent; // +0x18
  uint8_t m_netEvent[0x2c]; // +0x1c _WSANETWORKEVENTS
  char m_RecvMsgQBuf[0x400000]; // +0x48
  int32_t m_nRecvStartPos; // +0x400048
  int32_t m_nRecvEndPos; // +0x40004c
  char m_SendMsgQBuf[0x400000]; // +0x400050
  int32_t m_nSendStartPos; // +0x800050
  int32_t m_nSendEndPos; // +0x800054
  int32_t m_iSentCount; // +0x800058
  int32_t m_iSentSize; // +0x80005c
  uint8_t m_csSend[0x18]; // +0x800060 _RTL_CRITICAL_SECTION
}; // size 0x800078 CBaseServer

struct MSG_S2G_HEADER {
  uint32_t dwSize; // +0x0
  uint32_t dwPCID; // +0x4
  uint8_t byCtrl; // +0x8
  uint8_t byCmd; // +0x9
}; // size 0xa MSG_S2G_HEADER

struct MSG_S2C_HEADER {
  uint32_t dwSize; // +0x0
  uint32_t dwPCID; // +0x4
  uint8_t byCtrl; // +0x8
  uint8_t byCmd; // +0x9
  uint16_t wProtocol; // +0xa
}; // size 0xc MSG_S2C_HEADER

struct MSG_C2S_OP_CMD {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wOpCmd; // +0xc
  char szParam[0x40]; // +0xe
}; // size 0x4e MSG_C2S_OP_CMD

struct MSG_S2C_ERROR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wErrCode; // +0xc
  char szErrStr[0x40]; // +0xe
}; // size 0x4e MSG_S2C_ERROR

struct MSG_C2S_UNKNOWN_CHAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byType; // +0xc
  uint32_t dwID; // +0xd
  uint16_t wRetProtocol; // +0x11
}; // size 0x13 MSG_C2S_UNKNOWN_CHAR

struct MSG_S2C_UNKNOWN_CHAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byType; // +0xc
  uint8_t byCode; // +0xd
  uint32_t dwID; // +0xe
  uint16_t wRetProtocol; // +0x12
}; // size 0x14 MSG_S2C_UNKNOWN_CHAR

struct _ITEM_APPEAR_ {
  uint32_t ItemCode : 14;
  uint32_t wearIndex : 4;
  uint32_t level : 4;
  uint32_t bIceAttr : 1;
  uint32_t bFireAttr : 1;
  uint32_t bLightAttr : 1;
  uint32_t reserved : 7;
}; // size 0x4 _ITEM_APPEAR_

struct _PET_APPEAR_ {
  uint16_t code; // +0x0
  uint16_t level; // +0x2
}; // size 0x4 _PET_APPEAR_

struct _SKILL_CAST_ {
  uint8_t byClassIndex; // +0x0
  uint8_t bySkillIndex; // +0x1
  uint8_t bySkillLevel; // +0x2
}; // size 0x3 _SKILL_CAST_

struct MSG_S2C_PC_APPEAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwPCID; // +0xc
  char szPCName[0xd]; // +0x10
  uint8_t byPCType; // +0x1d
  uint8_t byCaoLevel; // +0x1e
  uint8_t direction : 4;
  uint8_t action : 4;
  uint32_t dwAppearCell; // +0x20
  _SOCIALINFO_ SInfo; // +0x24 _SOCIALINFO_
  _ITEM_APPEAR_ HeadItem; // +0x28 _ITEM_APPEAR_
  _ITEM_APPEAR_ UpperItem; // +0x2c _ITEM_APPEAR_
  _ITEM_APPEAR_ LowerItem; // +0x30 _ITEM_APPEAR_
  _ITEM_APPEAR_ HandItem; // +0x34 _ITEM_APPEAR_
  _ITEM_APPEAR_ FootItem; // +0x38 _ITEM_APPEAR_
  _ITEM_APPEAR_ LeftItem; // +0x3c _ITEM_APPEAR_
  _ITEM_APPEAR_ RightItem; // +0x40 _ITEM_APPEAR_
  _PET_APPEAR_ ActivePet; // +0x44 _PET_APPEAR_
  _SKILL_CAST_ CastSkillList[0x4]; // +0x48 _SKILL_CAST_
  char szClanName[0x20]; // +0x54
  uint32_t dwMarkID; // +0x74
  uint8_t bWearFlag; // +0x78
}; // size 0x79 MSG_S2C_PC_APPEAR

struct MSG_S2C_PC_DISAPPEAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwPCID; // +0xc
}; // size 0x10 MSG_S2C_PC_DISAPPEAR

struct MSG_S2C_CHAR_LIST {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _CHARACTER_INFO_ CharInfo[0x5]; // +0xc _CHARACTER_INFO_
}; // size 0x37c MSG_S2C_CHAR_LIST

struct MSG_S2C_CHAR_LOGIN_OK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char szPCName[0xd]; // +0xc
  uint32_t dwPCID; // +0x19
}; // size 0x1d MSG_S2C_CHAR_LOGIN_OK

struct _PC_INFO_ {
  char szPCName[0xd]; // +0x0
  uint8_t byType; // +0xd
  uint16_t wLevel; // +0xe
  uint32_t dwExp; // +0x10
  uint16_t wMapIndex; // +0x14
  uint8_t _pad0[0x2];
  uint32_t dwCellIndex; // +0x18
  _SKILL_ SkillList; // +0x1c _SKILL_
  uint8_t byPKCount; // +0x28
  uint8_t _pad1[0x1];
  uint16_t wRTime; // +0x2a
  _SOCIALINFO_ SInfo; // +0x2c _SOCIALINFO_
  uint32_t dwMoney; // +0x30
  uint16_t wStoredHp; // +0x34
  uint16_t wStoredMp; // +0x36
  uint32_t dwLore; // +0x38
}; // size 0x3c _PC_INFO_

struct _PC_STAT_UPDATE_ {
  uint16_t wPoint; // +0x0
  uint16_t wStr; // +0x2
  uint16_t wMagic; // +0x4
  uint16_t wDex; // +0x6
  uint16_t wVit; // +0x8
  uint16_t wMana; // +0xa
  uint16_t wHPCapacity; // +0xc
  uint16_t wMPCapacity; // +0xe
  uint16_t wHP; // +0x10
  uint16_t wMP; // +0x12
  _PC_2STAT_ PC2ndStat; // +0x14 _PC_2STAT_
}; // size 0x2e _PC_STAT_UPDATE_

struct MSG_S2C_WORLD_LOGIN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _PC_INFO_ PCInfo; // +0xc _PC_INFO_
  _PC_STAT_UPDATE_ PCStatUpdate; // +0x48 _PC_STAT_UPDATE_
  _ITEM_IN_WEAR_ WearList[0xa]; // +0x76 _ITEM_IN_WEAR_
  _ITEM_IN_INVEN_ HaveList[0x1e]; // +0x13e _ITEM_IN_INVEN_
  _PET_INFO_ PetActive; // +0x396 _PET_INFO_
  _PET_INFO_ PetInven[0x5]; // +0x3aa _PET_INFO_
}; // size 0x40e MSG_S2C_WORLD_LOGIN

struct MSG_S2C_WARP_READY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wNewMapIndex; // +0xc
}; // size 0xe MSG_S2C_WARP_READY

struct MSG_C2S_WARP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wNewMapIndex; // +0xc
}; // size 0xe MSG_C2S_WARP

struct MSG_S2C_WARP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNewCell; // +0xc
}; // size 0x10 MSG_S2C_WARP

struct MSG_S2C_WARP_LOGIN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNewCell; // +0xc
  _ITEM_IN_WEAR_ WearList[0xa]; // +0x10 _ITEM_IN_WEAR_
  _ITEM_IN_INVEN_ HaveList[0x1e]; // +0xd8 _ITEM_IN_INVEN_
  _PET_INFO_ PetActive; // +0x330 _PET_INFO_
  _PET_INFO_ PetInven[0x5]; // +0x344 _PET_INFO_
}; // size 0x3a8 MSG_S2C_WARP_LOGIN

struct MSG_S2C_ANS_MOVE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bAns; // +0xc
  uint32_t dwDestCell; // +0xd
  uint8_t byMoveSpeed; // +0x11
}; // size 0x12 MSG_S2C_ANS_MOVE

struct MSG_S2C_SEE_MOVE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMovePCID; // +0xc
  uint32_t dwStartCell; // +0x10
  uint32_t dwDestCell; // +0x14
  uint8_t byMoveSpeed; // +0x18
}; // size 0x19 MSG_S2C_SEE_MOVE

struct MSG_S2C_FIX_MOVE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwFixCell; // +0xc
}; // size 0x10 MSG_S2C_FIX_MOVE

struct MSG_S2C_SEE_STOP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwStopPCID; // +0xc
  uint32_t dwFixCell; // +0x10
}; // size 0x14 MSG_S2C_SEE_STOP

struct MSG_S2C_CHAR_LOGOUT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_S2C_CHAR_LOGOUT

struct _PET_STAT_ {
  _PET_ID_ PetID; // +0x0 _PET_ID_
  uint8_t Level; // +0x8
  uint8_t _pad0[0x1];
  uint16_t Exp; // +0xa
  uint16_t Food; // +0xc
  uint8_t _pad1[0x2];
}; // size 0x10 _PET_STAT_

struct MSG_S2C_STAT_AUTOUPDATE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wRTime; // +0xc
  _PET_STAT_ PetActive; // +0xe _PET_STAT_
  _PET_STAT_ PetInven[0x5]; // +0x1e _PET_STAT_
}; // size 0x6e MSG_S2C_STAT_AUTOUPDATE

struct MSG_S2C_PET_LEVELUP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOPCID; // +0xc
  uint8_t byLevel; // +0x10
}; // size 0x11 MSG_S2C_PET_LEVELUP

struct MSG_S2C_PET_BUY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t petIndex; // +0xc
  _PET_INFO_ NewPet; // +0xd _PET_INFO_
  uint32_t dwMoney; // +0x21
}; // size 0x25 MSG_S2C_PET_BUY

struct MSG_S2C_NPC_APPEAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wNPCType; // +0xc
  uint32_t dwNPCID; // +0xe
  uint32_t dwNPCHp; // +0x12
  uint32_t dwNPCMp; // +0x16
  uint32_t dwCellIndex; // +0x1a
  int32_t iDirection; // +0x1e
  uint16_t wNPCLevel; // +0x22
  _SKILL_CAST_ CastSkillList[0x4]; // +0x24 _SKILL_CAST_
  int32_t bIsRegen; // +0x30
}; // size 0x34 MSG_S2C_NPC_APPEAR

struct MSG_S2C_NPC_DISAPPEAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_S2C_NPC_DISAPPEAR

struct MSG_S2C_NPC_MOVE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint32_t dwStartCell; // +0x10
  uint32_t dwMoveCell[0x8]; // +0x14
}; // size 0x34 MSG_S2C_NPC_MOVE

struct MSG_S2C_NPC_STATE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint8_t byNPCState; // +0x10
  uint16_t wReserved; // +0x11
}; // size 0x13 MSG_S2C_NPC_STATE

struct MSG_S2C_NPC_ATTACK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint32_t dwNPCCell; // +0x10
  uint32_t dwTargetPCID; // +0x14
  uint32_t dwTargetPCCell; // +0x18
  uint32_t dwPCHp; // +0x1c
  uint16_t wAttackType; // +0x20
  int32_t bPCDie; // +0x22
  uint8_t byPetHP; // +0x26
}; // size 0x27 MSG_S2C_NPC_ATTACK

struct MSG_S2C_SEE_NPC_ATTACK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint32_t dwNPCCell; // +0x10
  uint32_t dwPCID; // +0x14
  uint32_t dwPCCell; // +0x18
  uint16_t wAttackType; // +0x1c
  int32_t bPCDie; // +0x1e
}; // size 0x22 MSG_S2C_SEE_NPC_ATTACK

struct _NPC_SKILL_DAMAGEINFO_ {
  uint32_t dwTargetID; // +0x0
  uint32_t dwCellIndex; // +0x4
  uint8_t bDie; // +0x8
}; // size 0x9 _NPC_SKILL_DAMAGEINFO_

struct MSG_S2C_SEE_NPC_SKILLATTACK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint32_t dwNPCCell; // +0x10
  uint32_t dwBaseCell; // +0x14
  uint8_t byAttackType; // +0x18
  uint8_t targetCnt; // +0x19
  _NPC_SKILL_DAMAGEINFO_ targetInfo[0x19]; // +0x1a _NPC_SKILL_DAMAGEINFO_
}; // size 0xfb MSG_S2C_SEE_NPC_SKILLATTACK

struct MSG_S2C_ANS_ATTACK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResult; // +0xc
  uint32_t dwPCCell; // +0xd
  uint8_t byTargetType; // +0x11
  uint32_t dwTargetID; // +0x12
  uint32_t dwTargetCell; // +0x16
  uint8_t byCurrentStep; // +0x1a
  uint16_t wDamage; // +0x1b
  uint8_t bFinish; // +0x1d
  uint16_t wHP; // +0x1e
  uint16_t wMP; // +0x20
}; // size 0x22 MSG_S2C_ANS_ATTACK

struct MSG_S2C_SEE_ATTACK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwPCID; // +0xc
  uint32_t dwPCCell; // +0x10
  uint8_t byTargetType; // +0x14
  uint32_t dwTargetID; // +0x15
  uint32_t dwTargetCell; // +0x19
  uint8_t byCurrentStep; // +0x1d
  uint8_t byTargetStatus; // +0x1e
  uint8_t bFinish; // +0x1f
}; // size 0x20 MSG_S2C_SEE_ATTACK

struct MSG_S2C_UPDATE_PKCOUNT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wRTime; // +0xc
  uint8_t byPKCount; // +0xe
}; // size 0xf MSG_S2C_UPDATE_PKCOUNT

struct MSG_S2C_UPDATE_PCEXP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwExp; // +0xc
  uint16_t wPetExp; // +0x10
}; // size 0x12 MSG_S2C_UPDATE_PCEXP

struct MSG_S2C_SKILL_DELAY_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byDelay[0x20]; // +0xc
}; // size 0x2c MSG_S2C_SKILL_DELAY_INFO

struct MSG_S2C_LEARN_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t invenIdx; // +0xc
  _ITEM_ID_ ScrollID; // +0xd _ITEM_ID_
  uint8_t skillCode; // +0x15
  uint8_t skillLevel; // +0x16
}; // size 0x17 MSG_S2C_LEARN_SKILL

struct MSG_S2C_ERR_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySkillIndex; // +0xc
  uint8_t byErrCode; // +0xd
}; // size 0xe MSG_S2C_ERR_SKILL

struct _SKILL_DAMAGEINFO_ {
  uint32_t dwTargetID; // +0x0
  uint16_t wDamage; // +0x4
  uint32_t dwCellIndex; // +0x6
}; // size 0xa _SKILL_DAMAGEINFO_

struct MSG_S2C_DONE_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySkillIndex; // +0xc
  uint8_t bySkillLevel; // +0xd
  uint8_t byTargetType; // +0xe
  uint32_t dwCurCell; // +0xf
  uint32_t dwBaseCell; // +0x13
  uint16_t wHP; // +0x17
  uint16_t wMP; // +0x19
  uint8_t targetCnt; // +0x1b
  _SKILL_DAMAGEINFO_ targetInfo[0x19]; // +0x1c _SKILL_DAMAGEINFO_
}; // size 0x116 MSG_S2C_DONE_SKILL

struct MSG_S2C_GET_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySkillIndex; // +0xc
  uint8_t bySkillLevel; // +0xd
  uint32_t dwOPCID; // +0xe
  uint32_t dwBaseCell; // +0x12
  uint16_t wHP; // +0x16
  uint16_t wMP; // +0x18
  uint8_t bDie; // +0x1a
  uint8_t byPetHP; // +0x1b
}; // size 0x1c MSG_S2C_GET_SKILL

struct MSG_S2C_SEE_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySkillIndex; // +0xc
  uint8_t bySkillLevel; // +0xd
  uint32_t dwOPCID; // +0xe
  uint32_t dwBaseCell; // +0x12
  uint8_t byTargetType; // +0x16
  uint8_t targetCnt; // +0x17
  _SKILL_DAMAGEINFO_ targetInfo[0x19]; // +0x18 _SKILL_DAMAGEINFO_
}; // size 0x112 MSG_S2C_SEE_SKILL

struct MSG_S2C_CAST_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySkillIndex; // +0xc
  uint8_t bySkillLevel; // +0xd
  uint16_t wHP; // +0xe
  uint16_t wMP; // +0x10
  uint32_t dwCurCell; // +0x12
}; // size 0x16 MSG_S2C_CAST_SKILL

struct MSG_S2C_LASTING_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySkillClass; // +0xc
  uint8_t bySkillIndex; // +0xd
  uint8_t bySkillLevel; // +0xe
  uint32_t dwOPCID; // +0xf
  uint8_t bOnOff; // +0x13
  SKILL_STAT_CHANGE statChange; // +0x14 SKILL_STAT_CHANGE
}; // size 0x1f MSG_S2C_LASTING_SKILL

struct MSG_S2C_SEE_LASTING_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySkillClass; // +0xc
  uint8_t bySkillIndex; // +0xd
  uint8_t bySkillLevel; // +0xe
  uint8_t byTargetType; // +0xf
  uint32_t dwCastPCID; // +0x10
  uint32_t dwTargetID; // +0x14
  int32_t bOnOff; // +0x18
}; // size 0x1c MSG_S2C_SEE_LASTING_SKILL

struct MSG_S2C_PC_LEVELUP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wLevel; // +0xc
  _PC_STAT_UPDATE_ PCStatUpdate; // +0xe _PC_STAT_UPDATE_
}; // size 0x3c MSG_S2C_PC_LEVELUP

struct MSG_S2C_SEE_LEVELUP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t wLevelUpPCID; // +0xc
}; // size 0x10 MSG_S2C_SEE_LEVELUP

struct MSG_S2C_ALLOT_POINT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _PC_STAT_UPDATE_ PCStatUpdate; // +0xc _PC_STAT_UPDATE_
}; // size 0x3a MSG_S2C_ALLOT_POINT

struct MSG_S2C_ITEM_APPEAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  _ITEM_INFO_ ItemInfo; // +0x14 _ITEM_INFO_
  uint8_t objType; // +0x18
  uint32_t dwObjID; // +0x19
  uint32_t dwCellIndex; // +0x1d
}; // size 0x21 MSG_S2C_ITEM_APPEAR

struct MSG_S2C_ITEM_DISAPPEAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint32_t dwCellIndex; // +0x14
}; // size 0x18 MSG_S2C_ITEM_DISAPPEAR

struct MSG_S2C_PICKUP_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ Item; // +0xc _ITEM_
  uint8_t byInvenIndex; // +0x1c
}; // size 0x1d MSG_S2C_PICKUP_ITEM

struct MSG_S2C_DROP_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t result; // +0x14
  uint32_t dwDropCell; // +0x15
}; // size 0x19 MSG_S2C_DROP_ITEM

struct MSG_S2C_MOVE_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t index1; // +0xc
  _ITEM_ID_ ItemID1; // +0xd _ITEM_ID_
  uint8_t index2; // +0x15
  _ITEM_ID_ ItemID2; // +0x16 _ITEM_ID_
}; // size 0x1e MSG_S2C_MOVE_ITEM

struct MSG_S2C_SEE_WEAR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOPCID; // +0xc
  _ITEM_APPEAR_ ItemAppear; // +0x10 _ITEM_APPEAR_
}; // size 0x14 MSG_S2C_SEE_WEAR

struct MSG_S2C_WEAR_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t wearIndex; // +0xc
  _ITEM_ID_ OnItemID; // +0xd _ITEM_ID_
  uint8_t invenIndex; // +0x15
  _ITEM_ID_ OffItemID; // +0x16 _ITEM_ID_
  _PC_2STAT_ PC2ndStat; // +0x1e _PC_2STAT_
}; // size 0x38 MSG_S2C_WEAR_ITEM

struct MSG_S2C_SEE_STRIP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOPCID; // +0xc
  uint16_t wItemCode; // +0x10
  uint8_t wearIndex; // +0x12
}; // size 0x13 MSG_S2C_SEE_STRIP

struct MSG_S2C_STRIP_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t invenIndex; // +0x14
  _PC_2STAT_ PC2ndStat; // +0x15 _PC_2STAT_
}; // size 0x2f MSG_S2C_STRIP_ITEM

struct MSG_S2C_BUY_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t invenIndex; // +0xc
  _ITEM_ Item; // +0xd _ITEM_
  uint32_t dwMoney; // +0x1d
}; // size 0x21 MSG_S2C_BUY_ITEM

struct MSG_S2C_SELL_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t errCode; // +0xc
  uint32_t dwMoney; // +0xd
  _ITEM_ID_ ItemID; // +0x11 _ITEM_ID_
}; // size 0x19 MSG_S2C_SELL_ITEM

struct MSG_S2C_GIVE_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t byResult; // +0x14
}; // size 0x15 MSG_S2C_GIVE_ITEM

struct MSG_S2C_GIVEN_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char szPCName[0xd]; // +0xc
  uint8_t invenIndex; // +0x19
  _ITEM_ Item; // +0x1a _ITEM_
}; // size 0x2a MSG_S2C_GIVEN_ITEM

struct MSG_S2C_USE_POTION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResult; // +0xc
  uint16_t dwRecovery; // +0xd
  uint16_t dwStored; // +0xf
}; // size 0x11 MSG_S2C_USE_POTION

struct MSG_S2C_ASK_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwAskPCID; // +0xc
}; // size 0x10 MSG_S2C_ASK_DEAL

struct MSG_S2C_ANS_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOPCID; // +0xc
  uint8_t errCode; // +0x10
}; // size 0x11 MSG_S2C_ANS_DEAL

struct MSG_S2C_PUTIN_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMoney; // +0xc
  uint16_t wHPotion; // +0x10
  uint16_t wMPotion; // +0x12
  _ITEM_ Item; // +0x14 _ITEM_
}; // size 0x24 MSG_S2C_PUTIN_ITEM

struct MSG_S2C_PUTOUT_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMoney; // +0xc
  uint16_t wHPotion; // +0x10
  uint16_t wMPotion; // +0x12
  _ITEM_ID_ ItemID; // +0x14 _ITEM_ID_
}; // size 0x1c MSG_S2C_PUTOUT_ITEM

struct MSG_S2C_DECIDE_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_S2C_DECIDE_DEAL

struct MSG_S2C_SUCCESS_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMoney; // +0xc
  uint16_t wHPotion; // +0x10
  uint16_t wMPotion; // +0x12
  _ITEM_IN_INVEN_ takeItemList[0x14]; // +0x14 _ITEM_IN_INVEN_
}; // size 0x1a4 MSG_S2C_SUCCESS_DEAL

struct MSG_S2C_FAIL_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t errCode; // +0xc
}; // size 0xd MSG_S2C_FAIL_DEAL

struct MSG_S2C_PEAR_DECIDE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_S2C_PEAR_DECIDE

struct MSG_S2C_PUTIN_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _PET_INFO_ Pet; // +0xc _PET_INFO_
}; // size 0x20 MSG_S2C_PUTIN_PET

struct MSG_S2C_PUTOUT_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwPetID; // +0xc
}; // size 0x10 MSG_S2C_PUTOUT_PET

struct MSG_S2C_SUCCESS_DEAL_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _PET_INFO_ takePetList[0x2]; // +0xc _PET_INFO_
}; // size 0x34 MSG_S2C_SUCCESS_DEAL_PET

struct MSG_S2C_CONFIRM_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ Item; // +0xc _ITEM_
  uint8_t byIndex; // +0x1c
  uint32_t dwMoney; // +0x1d
}; // size 0x21 MSG_S2C_CONFIRM_ITEM

struct MSG_S2C_REMODEL_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byStoneIndex; // +0xc
  _ITEM_ Item; // +0xd _ITEM_
  uint8_t byItemIndex; // +0x1d
}; // size 0x1e MSG_S2C_REMODEL_ITEM

struct MSG_S2C_SET_PC2STAT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _PC_2STAT_ PC2ndStat; // +0xc _PC_2STAT_
  uint8_t byStatCode; // +0x26
}; // size 0x27 MSG_S2C_SET_PC2STAT

struct MSG_C2S_SAY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySayType; // +0xc
  char szListenPC[0xd]; // +0xd
  char szWords[0x40]; // +0x1a
}; // size 0x5a MSG_C2S_SAY

struct MSG_S2C_SAY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySayType; // +0xc
  uint32_t dwSayPCID; // +0xd
  char szSayPC[0xd]; // +0x11
  char szWords[0x40]; // +0x1e
}; // size 0x5e MSG_S2C_SAY

struct MSG_C2S_QUEST_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t invenIndex; // +0x14
}; // size 0x15 MSG_C2S_QUEST_INFO

struct MSG_S2C_QUEST_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char Title[0x40]; // +0xc
  char Desc[0x180]; // +0x4c
}; // size 0x1cc MSG_S2C_QUEST_INFO

struct MSG_C2S_QUEST_START {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t invenIndex; // +0x14
}; // size 0x15 MSG_C2S_QUEST_START

struct MSG_S2C_QUEST_START {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t errCode; // +0x14
}; // size 0x15 MSG_S2C_QUEST_START

struct MSG_S2C_QUEST_CONTINUE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char Title[0x40]; // +0xc
  char Desc[0x180]; // +0x4c
}; // size 0x1cc MSG_S2C_QUEST_CONTINUE

struct MSG_C2S_QUEST_CANCEL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_QUEST_CANCEL

struct MSG_S2C_QUEST_CANCEL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t errCode; // +0xc
}; // size 0xd MSG_S2C_QUEST_CANCEL

struct MSG_S2C_QUEST_STATE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char szState[0xc0]; // +0xc
}; // size 0xcc MSG_S2C_QUEST_STATE

struct MSG_S2C_QUEST_OK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  int32_t Lore; // +0xc
}; // size 0x10 MSG_S2C_QUEST_OK

struct MSG_S2C_ANS_HEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wHP; // +0xc
  uint16_t wMP; // +0xe
}; // size 0x10 MSG_S2C_ANS_HEAL

struct MSG_S2C_ASK_PARTY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwAskPCID; // +0xc
}; // size 0x10 MSG_S2C_ASK_PARTY

struct MSG_S2C_ANS_PARTY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t result; // +0xc
}; // size 0xd MSG_S2C_ANS_PARTY

struct _PARTY_MEMBER_ {
  uint32_t dwMemberID; // +0x0
  char szName[0xd]; // +0x4
  uint8_t _pad0[0x3];
  uint32_t dwCurCell; // +0x14
  uint16_t wCurMap; // +0x18
  uint16_t wHPRatio; // +0x1a
}; // size 0x1c _PARTY_MEMBER_

struct MSG_S2C_PARTY_IN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _PARTY_MEMBER_ Member; // +0xc _PARTY_MEMBER_
}; // size 0x28 MSG_S2C_PARTY_IN

struct MSG_S2C_PARTY_LIST {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _PARTY_MEMBER_ Member[0x4]; // +0xc _PARTY_MEMBER_
}; // size 0x7c MSG_S2C_PARTY_LIST

struct MSG_S2C_PARTY_OUT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMemberID; // +0xc
}; // size 0x10 MSG_S2C_PARTY_OUT

struct MSG_S2C_PARTY_WHERE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMemberID; // +0xc
  uint16_t wMapIndex; // +0x10
  uint32_t dwCellIndex; // +0x12
}; // size 0x16 MSG_S2C_PARTY_WHERE

struct MSG_S2C_PARTY_HP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMemberID; // +0xc
  uint16_t wHP; // +0x10
}; // size 0x12 MSG_S2C_PARTY_HP

struct MSG_S2C_PC_ATTACK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwAttackPCID; // +0xc
  uint32_t dwAttackPCCell; // +0x10
  uint16_t wPCHP; // +0x14
  uint16_t wPCMP; // +0x16
  uint8_t byCurStep; // +0x18
  uint8_t bDie; // +0x19
  uint8_t byPetHP; // +0x1a
}; // size 0x1b MSG_S2C_PC_ATTACK

struct MSG_S2C_ACTIVE_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwActivePetID; // +0xc
  uint32_t dwInactPetID; // +0x10
  uint8_t petIndex; // +0x14
  _PC_2STAT_ PC2ndStat; // +0x15 _PC_2STAT_
}; // size 0x2f MSG_S2C_ACTIVE_PET

struct MSG_S2C_INACTIVE_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwInactPetID; // +0xc
  uint8_t petIndex; // +0x10
  _PC_2STAT_ PC2ndStat; // +0x11 _PC_2STAT_
}; // size 0x2b MSG_S2C_INACTIVE_PET

struct MSG_S2C_SEE_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOPCID; // +0xc
  _PET_APPEAR_ PetAppear; // +0x10 _PET_APPEAR_
  uint8_t petStat; // +0x14
}; // size 0x15 MSG_S2C_SEE_PET

struct MSG_S2C_PET_DIE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwPetID; // +0xc
  _PC_2STAT_ PC2ndStat; // +0x10 _PC_2STAT_
}; // size 0x2a MSG_S2C_PET_DIE

struct MSG_S2C_PET_SELL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t petIndex; // +0xc
  uint32_t PetID; // +0xd
  uint32_t dwMoney; // +0x11
}; // size 0x15 MSG_S2C_PET_SELL

struct MSG_S2C_FEED_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t result; // +0x14
  uint32_t PetID; // +0x15
  uint8_t petIndex; // +0x19
  uint16_t wQuantity; // +0x1a
}; // size 0x1c MSG_S2C_FEED_PET

struct MSG_S2C_USESCROLL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byInvenIndex; // +0xc
  uint32_t dwItemID; // +0xd
  uint8_t amount; // +0x11
}; // size 0x12 MSG_S2C_USESCROLL

struct MSG_S2C_UPDATE_MONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  int32_t iAddMoney; // +0xc
  uint8_t code; // +0x10
}; // size 0x11 MSG_S2C_UPDATE_MONEY

struct MSG_S2C_REVIVE_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwItemID; // +0xc
  _PET_STAT_ PetUpdate; // +0x10 _PET_STAT_
}; // size 0x20 MSG_S2C_REVIVE_PET

struct MSG_S2C_SVR_TIME {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t hour; // +0xc
  uint8_t min; // +0xd
}; // size 0xe MSG_S2C_SVR_TIME

struct MSG_S2C_GESTURE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwGesturePCID; // +0xc
  uint8_t byGestureType; // +0x10
}; // size 0x11 MSG_S2C_GESTURE

struct _GAME_OPTION_ {
  uint8_t bDeal : 1;
  uint8_t bPrivateSay : 1;
  uint8_t bParty : 1;
  uint8_t bGiven : 1;
  uint8_t bWearFlag : 1;
  uint8_t bReserved : 3;
}; // size 0x1 _GAME_OPTION_

struct MSG_S2C_OPTION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _GAME_OPTION_ option; // +0xc _GAME_OPTION_
}; // size 0xd MSG_S2C_OPTION

struct MSG_S2C_SUBMAP_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char szSubmapName[0x14]; // +0xc
  uint16_t wSubmapIndex; // +0x20
  uint8_t bOpen : 1;
  uint8_t bPublic : 1;
  uint8_t bKeyword : 1;
  uint8_t Reserved : 5;
  uint8_t Condition_Level; // +0x23
  uint8_t Condition_Type; // +0x24
}; // size 0x25 MSG_S2C_SUBMAP_INFO

struct MSG_S2C_ENTER {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  uint16_t wSubmapIndex; // +0xd
  uint32_t dwCellIndex; // +0xf
}; // size 0x13 MSG_S2C_ENTER

struct MSG_S2C_OTHER_UPDATE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOPCID; // +0xc
  uint8_t byCaoLevel; // +0x10
  uint8_t byPose; // +0x11
}; // size 0x12 MSG_S2C_OTHER_UPDATE

struct MSG_S2C_ITEM_COMBINATION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResult; // +0xc
  uint8_t byInvenIndex; // +0xd
  _ITEM_ NewItem; // +0xe _ITEM_
}; // size 0x1e MSG_S2C_ITEM_COMBINATION

struct MSG_S2C_LOTTO_PURCHASE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResult; // +0xc
  uint8_t byInvenIndex; // +0xd
  _ITEM_ itemLotto; // +0xe _ITEM_
  uint32_t uPresentMoney; // +0x1e
}; // size 0x22 MSG_S2C_LOTTO_PURCHASE

struct MSG_S2C_LOTTO_QUERY_PRIZE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t uNowPrize; // +0xc
}; // size 0x10 MSG_S2C_LOTTO_QUERY_PRIZE

struct MSG_S2C_LOTTO_QUERY_HISTORY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  int32_t nNowLotto; // +0xc
  uint8_t arrWinNumHistory[0x19]; // +0x10
}; // size 0x29 MSG_S2C_LOTTO_QUERY_HISTORY

struct MSG_S2C_LOTTO_SALE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResult; // +0xc
  uint32_t uPrizeMoney; // +0xd
  uint32_t uPresentMoney; // +0x11
}; // size 0x15 MSG_S2C_LOTTO_SALE

struct MSG_S2C_LOTTO_NOTIFY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byNoticeType; // +0xc
  int32_t nNowLotto; // +0xd
  uint8_t byArrWinNum[0x5]; // +0x11
  uint8_t byCarriedForward; // +0x16
  uint32_t u1stPrizeMoney; // +0x17
}; // size 0x1b MSG_S2C_LOTTO_NOTIFY

struct MSG_S2C_DERBY_NOTICE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t iDerbyIndex; // +0xc
  uint8_t byNoticeCode; // +0xe
}; // size 0xf MSG_S2C_DERBY_NOTICE

struct MSG_S2C_DERBY_INDEX_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t iDerbyIndex; // +0xc
}; // size 0xe MSG_S2C_DERBY_INDEX_QUERY

struct _DERBY_MONSTER_INFO_ {
  uint8_t byMonsterIndex; // +0x0
  uint8_t byStamina; // +0x1
  uint8_t bySpeed; // +0x2
  uint8_t byAcceleration; // +0x3
  uint8_t byEndurance; // +0x4
  uint8_t byCornering; // +0x5
  uint16_t wNumGames; // +0x6
  uint16_t wNumWins; // +0x8
}; // size 0xa _DERBY_MONSTER_INFO_

struct MSG_S2C_DERBY_MONSTER_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t iDerbyIndex; // +0xc
  _DERBY_MONSTER_INFO_ arrDerbyMonsterInfo[0x5]; // +0xe _DERBY_MONSTER_INFO_
}; // size 0x40 MSG_S2C_DERBY_MONSTER_QUERY

struct MSG_S2C_DERBY_RATIO_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  float fDerbyRatio[0xf]; // +0xc
  uint16_t iDerbyIndex; // +0x48
  int32_t bIsAbleToPurchase; // +0x4a
}; // size 0x4e MSG_S2C_DERBY_RATIO_QUERY

struct MSG_S2C_DERBY_PURCHASE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResult; // +0xc
  uint8_t byInvenIndex; // +0xd
  _ITEM_ itemDerby; // +0xe _ITEM_
  uint32_t dwPresentMoney; // +0x1e
}; // size 0x22 MSG_S2C_DERBY_PURCHASE

struct MSG_S2C_DERBY_RACE_START {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t iDerbyIndex; // +0xc
  float fVelocity[0x1e]; // +0xe
}; // size 0x86 MSG_S2C_DERBY_RACE_START

struct _DERBY_HISTORY_INFO_ {
  uint16_t iDerbyIndex; // +0x0
  uint8_t byFirstPlace; // +0x2
  uint8_t byFirstPlaceIndex; // +0x3
  uint8_t bySecondPlace; // +0x4
  uint8_t bySecondPlaceIndex; // +0x5
  uint8_t _pad0[0x2];
  float fSingleEarningRatio; // +0x8
  float fDoubleEarningRatio; // +0xc
}; // size 0x10 _DERBY_HISTORY_INFO_

struct MSG_S2C_DERBY_RESULT_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t iDerbyIndex; // +0xc
  _DERBY_HISTORY_INFO_ dhiResult; // +0xe _DERBY_HISTORY_INFO_
}; // size 0x1e MSG_S2C_DERBY_RESULT_QUERY

struct MSG_S2C_DERBY_HISTORY_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t iDerbyIndex; // +0xc
  uint16_t iLatestIndex; // +0xe
  uint8_t byPage; // +0x10
  uint8_t byNumHistory; // +0x11
  _DERBY_HISTORY_INFO_ dhiHistory[0xc]; // +0x12 _DERBY_HISTORY_INFO_
}; // size 0xd2 MSG_S2C_DERBY_HISTORY_QUERY

struct MSG_S2C_DERBY_EXCHANGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t iEarnedMoney; // +0xc
  float fEarningRatio; // +0x10
  uint32_t dwPresentMoney; // +0x14
  uint8_t byResult; // +0x18
}; // size 0x19 MSG_S2C_DERBY_EXCHANGE

struct MSG_C2S_USE_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwItemID; // +0xc
}; // size 0x10 MSG_C2S_USE_ITEM

struct MSG_S2C_ASK_APPRENTICE_IN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwRequestPCID; // +0xc
}; // size 0x10 MSG_S2C_ASK_APPRENTICE_IN

struct MSG_S2C_ANS_APPRENTICE_IN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bResult; // +0xc
  _PARTY_MEMBER_ stApprenticeInfo; // +0xd _PARTY_MEMBER_
}; // size 0x29 MSG_S2C_ANS_APPRENTICE_IN

struct MSG_S2C_APPRENTICE_UPDATE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wMapIndex; // +0xc
  uint32_t dwCellIndex; // +0xe
}; // size 0x12 MSG_S2C_APPRENTICE_UPDATE

struct MSG_S2C_APPRENTICE_HP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wHP; // +0xc
}; // size 0xe MSG_S2C_APPRENTICE_HP

struct MSG_S2C_ASK_APPRENTICE_OUT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_S2C_ASK_APPRENTICE_OUT

struct MSG_S2C_SHUE_COMBINATION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResult; // +0xc
  uint32_t uPresentMoney; // +0xd
  uint8_t byInvenIndex; // +0x11
  _PET_INFO_ stPetInfo; // +0x12 _PET_INFO_
}; // size 0x26 MSG_S2C_SHUE_COMBINATION

struct MSG_S2S_HEADER {
  uint16_t wProtocol; // +0x0
}; // size 0x2 MSG_S2S_HEADER

struct MSG_S2M_SVR_LOGIN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byThisServerID; // +0x2
}; // size 0x3 MSG_S2M_SVR_LOGIN

struct MSG_S2M_CHAR_LOGIN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  char szAccountName[0x15]; // +0x7
  char szPasswd[0x15]; // +0x1c
  char szPCName[0xd]; // +0x31
  char szIP[0x10]; // +0x3e
  uint32_t RemainTime; // +0x4e
  char PayMode[0x4]; // +0x52
  int32_t PayNo; // +0x56
  char Reserved1[0x21]; // +0x5a
  char Reserved2[0x21]; // +0x7b
}; // size 0x9c MSG_S2M_CHAR_LOGIN

struct MSG_S2M_WORLD_LOGIN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szPCName[0xd]; // +0x2
  uint32_t dwPCID; // +0xf
}; // size 0x13 MSG_S2M_WORLD_LOGIN

struct _PCDATA_ {
  char szPCName[0xd]; // +0x0
  char szAccountName[0x15]; // +0xd
  uint8_t byType; // +0x22
  uint8_t _pad0[0x1];
  uint16_t wLevel; // +0x24
  uint8_t _pad1[0x2];
  uint32_t dwExp; // +0x28
  uint16_t wStr; // +0x2c
  uint16_t wMagic; // +0x2e
  uint16_t wDex; // +0x30
  uint16_t wVit; // +0x32
  uint16_t wMana; // +0x34
  uint16_t wPoint; // +0x36
  uint16_t wHp; // +0x38
  uint16_t wMp; // +0x3a
  uint16_t wStoredHp; // +0x3c
  uint16_t wStoredMp; // +0x3e
  uint16_t wMapIndex; // +0x40
  uint8_t _pad2[0x2];
  uint32_t dwCellIndex; // +0x44
  _SKILL_ SkillList; // +0x48 _SKILL_
  uint8_t byPKCount; // +0x54
  uint8_t _pad3[0x1];
  uint16_t wRTime; // +0x56
  _SOCIALINFO_ SInfo; // +0x58 _SOCIALINFO_
  uint32_t dwMoney; // +0x5c
  uint32_t dwLore; // +0x60
  uint16_t wLastQuest; // +0x64
  uint8_t _pad4[0x2];
  uint32_t dwLastRTime; // +0x68
  uint32_t dwFatigue; // +0x6c
  _ITEM_IN_WEAR_ WearList[0xa]; // +0x70 _ITEM_IN_WEAR_
  _ITEM_IN_INVEN_ HaveList[0x1e]; // +0x138 _ITEM_IN_INVEN_
  _PET_INFO_ PetActive; // +0x390 _PET_INFO_
  _PET_INFO_ PetInven[0x5]; // +0x3a4 _PET_INFO_
  _SAVE_QUEST_INFO_ SaveQuestInfo; // +0x408 _SAVE_QUEST_INFO_
}; // size 0x414 _PCDATA_

struct MSG_M2S_WORLD_LOGIN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  _PCDATA_ PCData; // +0x6 _PCDATA_
  char szPasswd[0x15]; // +0x41a
  char szIP[0x10]; // +0x42f
  uint32_t RemainTime; // +0x43f
  char PayMode[0x4]; // +0x443
  int32_t PayNo; // +0x447
  char Reserved1[0x21]; // +0x44b
  char Reserved2[0x21]; // +0x46c
}; // size 0x48d MSG_M2S_WORLD_LOGIN

struct MSG_S2M_CHAR_LOGOUT {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  _PCDATA_ PCData; // +0x6 _PCDATA_
}; // size 0x41a MSG_S2M_CHAR_LOGOUT

struct MSG_S2M_DATA_UPDATE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  _PCDATA_ PCData; // +0x6 _PCDATA_
}; // size 0x41a MSG_S2M_DATA_UPDATE

struct _ZONE_WARP_DATA_ {
  _LASTINGSKILL_MANAGEARRARY_ LastingSkillManageArray; // +0x0 _LASTINGSKILL_MANAGEARRARY_
  _LASTINGITEM_ARRAY_ LastingItemArray[0x5]; // +0x30 _LASTINGITEM_ARRAY_
  uint32_t dwPartyID; // +0x58
  _PARTISAN_ arrMyParty[0x3]; // +0x5c _PARTISAN_
  uint32_t dwApprenticeID; // +0x74
  _APPRENTICE_INFO_ stApprenticeInfo; // +0x78 _APPRENTICE_INFO_
  uint16_t wAgitID; // +0x7c
  uint8_t _pad0[0x2];
  uint32_t dwMarkID; // +0x80
  char szClanName[0x20]; // +0x84
  char szPasswd[0x15]; // +0xa4
  uint8_t _pad1[0x3];
  int32_t RemainTime; // +0xbc
  uint8_t PayMode; // +0xc0
  uint8_t _pad2[0x3];
  int32_t PayNo; // +0xc4
  char Reserved1[0x21]; // +0xc8
  char Reserved2[0x21]; // +0xe9
  uint8_t _pad3[0x2];
}; // size 0x10c _ZONE_WARP_DATA_

struct MSG_S2M_WARP_ZONE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
  _PCDATA_ PCData; // +0x7 _PCDATA_
  _ZONE_WARP_DATA_ WarpData; // +0x41b _ZONE_WARP_DATA_
}; // size 0x527 MSG_S2M_WARP_ZONE

struct MSG_M2S_WARP_ZONE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
  int32_t bOK; // +0x7
}; // size 0xb MSG_M2S_WARP_ZONE

struct MSG_S2M_WARP_LOGIN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
}; // size 0x7 MSG_S2M_WARP_LOGIN

struct MSG_M2S_WARP_LOGIN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
  char szIP[0x10]; // +0x7
  _PCDATA_ PCData; // +0x17 _PCDATA_
  _ZONE_WARP_DATA_ WarpData; // +0x42b _ZONE_WARP_DATA_
}; // size 0x537 MSG_M2S_WARP_LOGIN

struct MSG_M2S_PASS2GATE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  int32_t nSize; // +0x3
  char Msg[0x100]; // +0x7
}; // size 0x107 MSG_M2S_PASS2GATE

struct MSG_S2M_SAY {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t bySayType; // +0x2
  uint32_t dwSayPCID; // +0x3
  uint8_t bySayPCGateID; // +0x7
  char szSayPC[0xd]; // +0x8
  char szListenPC[0xd]; // +0x15
  char szWords[0x40]; // +0x22
}; // size 0x62 MSG_S2M_SAY

struct MSG_S2M_PARTY_CREATE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szPCName[0xd]; // +0x2
  uint32_t dwPartyID; // +0xf
}; // size 0x13 MSG_S2M_PARTY_CREATE

struct MSG_S2M_PARTY_JOIN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szPCName[0xd]; // +0x2
  uint32_t dwPartyID; // +0xf
}; // size 0x13 MSG_S2M_PARTY_JOIN

struct MSG_S2M_PARTY_OUT {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPartyID; // +0x2
  uint32_t dwPCID; // +0x6
}; // size 0xa MSG_S2M_PARTY_OUT

struct MSG_M2S_PARTY_OUT {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x6
  uint32_t dwOutPCID; // +0xa
}; // size 0xe MSG_M2S_PARTY_OUT

struct _PARTNER_INFO_ {
  uint32_t dwPCID; // +0x0
  char szPCName[0xd]; // +0x4
  uint8_t _pad0[0x3];
}; // size 0x14 _PARTNER_INFO_

struct MSG_S2M_APPRENTICE_CREATE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  _PARTNER_INFO_ stMemberInfo[0x2]; // +0x2 _PARTNER_INFO_
  uint32_t dwApprenticeID; // +0x2a
}; // size 0x2e MSG_S2M_APPRENTICE_CREATE

struct _APPRENTICE_MEMBER_ {
  uint32_t dwMemberID; // +0x0
  char szMemberName[0xd]; // +0x4
  uint8_t _pad0[0x3];
  uint32_t dwCurCell; // +0x14
  uint16_t wCurMap; // +0x18
  uint16_t wHPRatio; // +0x1a
  uint8_t byNowZoneServerID; // +0x1c
  uint8_t _pad1[0x3];
}; // size 0x20 _APPRENTICE_MEMBER_

struct MSG_S2M_APPRENTICE_UPDATE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwApprenticeID; // +0x2
  _APPRENTICE_MEMBER_ stMemberInfo; // +0x6 _APPRENTICE_MEMBER_
}; // size 0x26 MSG_S2M_APPRENTICE_UPDATE

struct MSG_S2M_APPRENTICE_QUIT {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwApprenticeID; // +0x2
  uint32_t dwPCID; // +0x6
}; // size 0xa MSG_S2M_APPRENTICE_QUIT

struct MSG_M2S_ADMIN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t Cmd; // +0x2
  uint32_t dwVal1; // +0x3
  uint32_t dwVal2; // +0x7
  char szVal[0x40]; // +0xb
}; // size 0x4b MSG_M2S_ADMIN

struct MSG_S2M_CHAR_DISCONNECT {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateID; // +0x6
}; // size 0x7 MSG_S2M_CHAR_DISCONNECT

struct MSG_S2G_DISCONNECT {
  MSG_S2G_HEADER MsgHeader; // +0x0 MSG_S2G_HEADER
}; // size 0xa MSG_S2G_DISCONNECT

struct MSG_S2G_SWITCH_ZONE {
  MSG_S2G_HEADER MsgHeader; // +0x0 MSG_S2G_HEADER
  uint8_t byNewServerID; // +0xa
}; // size 0xb MSG_S2G_SWITCH_ZONE

struct MSG_S2G_BROADCAST {
  MSG_S2G_HEADER MsgHeader; // +0x0 MSG_S2G_HEADER
}; // size 0xa MSG_S2G_BROADCAST

struct _ITEM_IN_STORAGE_ {
  _ITEM_ID_ ItemID; // +0x0 _ITEM_ID_
  _ITEM_INFO_ ItemInfo; // +0x8 _ITEM_INFO_
  uint32_t ItemKey; // +0xc
  uint8_t byStorageIndex; // +0x10
  uint8_t _pad0[0x3];
}; // size 0x14 _ITEM_IN_STORAGE_

struct MSG_S2C_ANS_OPEN_STORAGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrCode; // +0xc
  uint32_t dwMoney; // +0xd
  uint8_t byNumItem; // +0x11
  _ITEM_IN_STORAGE_ Storage[0x50]; // +0x12 _ITEM_IN_STORAGE_
}; // size 0x652 MSG_S2C_ANS_OPEN_STORAGE

struct MSG_S2C_ANS_INVEN2STORAGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrCode; // +0xc
  _ITEM_ID_ itemID; // +0xd _ITEM_ID_
  uint8_t byInvenIndex; // +0x15
  uint8_t byStorageIndex; // +0x16
  uint32_t dwMoney; // +0x17
}; // size 0x1b MSG_S2C_ANS_INVEN2STORAGE

struct MSG_S2C_ANS_STORAGE2INVEN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrCode; // +0xc
  _ITEM_ID_ itemID; // +0xd _ITEM_ID_
  uint8_t byStorageIndex; // +0x15
  uint8_t byInvenIndex; // +0x16
}; // size 0x17 MSG_S2C_ANS_STORAGE2INVEN

struct MSG_S2C_ANS_DEPOSITE_MONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrCode; // +0xc
  uint32_t dwStorageMoney; // +0xd
  uint32_t dwPCMoney; // +0x11
}; // size 0x15 MSG_S2C_ANS_DEPOSITE_MONEY

struct MSG_S2C_ANS_WITHDRAW_MONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrCode; // +0xc
  uint32_t dwStorageMoney; // +0xd
  uint32_t dwPCMoney; // +0x11
}; // size 0x15 MSG_S2C_ANS_WITHDRAW_MONEY

struct MSG_S2C_ANS_MOVE_ITEMINSTORAGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrCode; // +0xc
  _ITEM_ID_ itemID; // +0xd _ITEM_ID_
  uint8_t bySrcIndex; // +0x15
  uint8_t byTargetIndex; // +0x16
  _ITEM_ID_ SwapitemID; // +0x17 _ITEM_ID_
}; // size 0x1f MSG_S2C_ANS_MOVE_ITEMINSTORAGE

struct MSG_S2M_LOAD_STORAGE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szCharacterName[0xd]; // +0x2
}; // size 0xf MSG_S2M_LOAD_STORAGE

struct MSG_M2S_LOAD_STORAGE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  uint32_t dwStorageMoney; // +0x7
  _ITEM_IN_STORAGE_ StorageItemList[0x50]; // +0xb _ITEM_IN_STORAGE_
}; // size 0x64b MSG_M2S_LOAD_STORAGE

struct MSG_S2M_SAVE_STORAGE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szCharacterName[0xd]; // +0x2
  uint32_t dwStorageMoney; // +0xf
  _ITEM_IN_STORAGE_ StorageItemList[0x50]; // +0x13 _ITEM_IN_STORAGE_
}; // size 0x653 MSG_S2M_SAVE_STORAGE

struct MSG_S2M_OP_CMD {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szOPCharacter[0xd]; // +0x2
  uint16_t wOpCmd; // +0xf
  char szParam[0x40]; // +0x11
  int32_t bFlag; // +0x51
}; // size 0x55 MSG_S2M_OP_CMD

struct MSG_M2S_OP_CMD {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szOPCharacter[0xd]; // +0x2
  uint16_t wOpCmd; // +0xf
  char szParam[0x40]; // +0x11
}; // size 0x51 MSG_M2S_OP_CMD

struct MSG_S2C_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t requestType; // +0xc
  uint8_t result; // +0xd
  uint32_t ClanID; // +0xe
  _SOCIALINFO_ mySocialInfo; // +0x12 _SOCIALINFO_
}; // size 0x16 MSG_S2C_CLAN

struct MSG_S2C_ASK_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwAnsPCID; // +0xc
}; // size 0x10 MSG_S2C_ASK_CLAN

struct MSG_S2C_JOIN_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t resultCode; // +0xc
  _SOCIALINFO_ mySocialInfo; // +0xd _SOCIALINFO_
}; // size 0x11 MSG_S2C_JOIN_CLAN

struct MSG_S2C_BOLT_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t resultCode; // +0xc
  _SOCIALINFO_ mySocialInfo; // +0xd _SOCIALINFO_
}; // size 0x11 MSG_S2C_BOLT_CLAN

struct MSG_S2C_UPDATE_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char szClanName[0x20]; // +0xc
  uint32_t dwClanID; // +0x2c
  uint32_t dwMarkID; // +0x30
  uint32_t dwStorageID; // +0x34
  uint8_t Clan_Rank; // +0x38
  uint16_t wAgit_ID; // +0x39
  _KNIGHT_INFO_ arrKnightInfo[0xd]; // +0x3b _KNIGHT_INFO_
}; // size 0x1a7 MSG_S2C_UPDATE_CLAN

struct MSG_S2C_UPDATE_KNIGHT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byCode; // +0xc
  _KNIGHT_INFO_ KnightInfo; // +0xd _KNIGHT_INFO_
}; // size 0x29 MSG_S2C_UPDATE_KNIGHT

struct MSG_S2C_CLAN_FAIL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  uint32_t dwClanID; // +0xd
  _SOCIALINFO_ mySocialInfo; // +0x11 _SOCIALINFO_
}; // size 0x15 MSG_S2C_CLAN_FAIL

struct MSG_S2C_CHANGE_NATION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  _SOCIALINFO_ mySocialInfo; // +0xd _SOCIALINFO_
  uint32_t dwLore; // +0x11
}; // size 0x15 MSG_S2C_CHANGE_NATION

struct MSG_S2M_CLAN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t requestType; // +0x2
  char szMasterName[0xd]; // +0x3
  char szClanName[0x20]; // +0x10
  char szClanPasswd[0x10]; // +0x30
  uint32_t ClanID; // +0x40
  uint8_t byNation; // +0x44
}; // size 0x45 MSG_S2M_CLAN

struct MSG_M2S_CLAN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  uint8_t requestType; // +0x7
  uint8_t errorCode; // +0x8
  uint32_t ClanID; // +0x9
}; // size 0xd MSG_M2S_CLAN

struct MSG_S2M_KNIGHT {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t requestType; // +0x2
  uint32_t ClanID; // +0x3
  uint8_t rank; // +0x7
  char szKnightName[0xd]; // +0x8
  uint32_t dwKnightID; // +0x15
}; // size 0x19 MSG_S2M_KNIGHT

struct MSG_M2S_KNIGHT {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  uint8_t requestType; // +0x7
  uint32_t dwClanID; // +0x8
  uint8_t errorCode; // +0xc
}; // size 0xd MSG_M2S_KNIGHT

struct MSG_S2M_CLAN_INFO {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szPCName[0xd]; // +0x2
  uint32_t dwClanID; // +0xf
}; // size 0x13 MSG_S2M_CLAN_INFO

struct MSG_M2S_CLAN_INFO {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  char szClanName[0x20]; // +0x7
  uint32_t dwClanID; // +0x27
  uint32_t dwMarkID; // +0x2b
  uint32_t dwStorageID; // +0x2f
  uint8_t Clan_Rank; // +0x33
  uint16_t wAgit_ID; // +0x34
  _KNIGHT_INFO_ arrKnightInfo[0xd]; // +0x36 _KNIGHT_INFO_
}; // size 0x1a2 MSG_M2S_CLAN_INFO

struct MSG_M2S_KNIGHT_INFO {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  uint8_t byCode; // +0x7
  _KNIGHT_INFO_ KnightInfo; // +0x8 _KNIGHT_INFO_
}; // size 0x24 MSG_M2S_KNIGHT_INFO

struct MSG_S2M_CLAN_UPDATE {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwClanID; // +0x2
}; // size 0x6 MSG_S2M_CLAN_UPDATE

struct MSG_M2S_CLAN_FAIL {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  uint8_t byErrorCode; // +0x7
  uint32_t dwClanID; // +0x8
}; // size 0xc MSG_M2S_CLAN_FAIL

struct MSG_S2C_PARTY_QUEST {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byPartyQuestIndex; // +0xc
  uint8_t byPartyQuestStep; // +0xd
  uint8_t byResultCode; // +0xe
}; // size 0xf MSG_S2C_PARTY_QUEST

struct MSG_S2C_PARTY_QUEST_TIMER {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byLimitTime; // +0xc
  uint8_t byCode; // +0xd
}; // size 0xe MSG_S2C_PARTY_QUEST_TIMER

struct _BATTLE_WARP_DATA_ {
  uint8_t byWarpType; // +0x0
  uint8_t _pad0[0x3];
  uint32_t dwOtherPCID; // +0x4
}; // size 0x8 _BATTLE_WARP_DATA_

struct MSG_C2S_ASK_WARP_Z2B {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _BATTLE_WARP_DATA_ BtWarpData; // +0xc _BATTLE_WARP_DATA_
}; // size 0x14 MSG_C2S_ASK_WARP_Z2B

struct MSG_S2M_ASK_WARP_Z2B {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
  _PCDATA_ PCData; // +0x7 _PCDATA_
  _BATTLE_WARP_DATA_ BtWarpData; // +0x41b _BATTLE_WARP_DATA_
}; // size 0x423 MSG_S2M_ASK_WARP_Z2B

struct MSG_M2S_ANS_WARP_Z2B {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
  uint8_t byBattleSvrID; // +0x7
  uint8_t byResult; // +0x8
}; // size 0x9 MSG_M2S_ANS_WARP_Z2B

struct MSG_S2C_ANS_WARP_Z2B {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResult; // +0xc
}; // size 0xd MSG_S2C_ANS_WARP_Z2B

struct MSG_C2S_ASK_WARP_B2Z {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_ASK_WARP_B2Z

struct MSG_S2M_ASK_WARP_B2Z {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
}; // size 0x7 MSG_S2M_ASK_WARP_B2Z

struct MSG_M2S_ANS_WARP_B2Z {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
  char szIP[0x10]; // +0x7
  _PCDATA_ PCData; // +0x17 _PCDATA_
}; // size 0x42b MSG_M2S_ANS_WARP_B2Z

struct MSG_S2C_ANS_WARP_B2Z {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNewCell; // +0xc
  _ITEM_IN_WEAR_ WearList[0xa]; // +0x10 _ITEM_IN_WEAR_
  _ITEM_IN_INVEN_ HaveList[0x1e]; // +0xd8 _ITEM_IN_INVEN_
  _PET_INFO_ PetActive; // +0x330 _PET_INFO_
  _PET_INFO_ PetInven[0x5]; // +0x344 _PET_INFO_
}; // size 0x3a8 MSG_S2C_ANS_WARP_B2Z

struct MSG_C2S_ASK_PVP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOtherPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_PVP

struct MSG_S2C_ASK_PVP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOtherPCID; // +0xc
}; // size 0x10 MSG_S2C_ASK_PVP

struct MSG_C2S_ANS_PVP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOtherPCID; // +0xc
  uint8_t byAnswer; // +0x10
}; // size 0x11 MSG_C2S_ANS_PVP

struct MSG_S2C_ANS_PVP {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOtherPCID; // +0xc
  uint8_t byAnswer; // +0x10
}; // size 0x11 MSG_S2C_ANS_PVP

struct MSG_M2S_CHANGE_REIGN {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byWhichTollan; // +0x2
  uint32_t arrToll[0x2]; // +0x3
  uint32_t arrErrt[0x2][0x4]; // +0xb
  char arrTollNames[0x2][0x20]; // +0x2b
  char arrErrtNames[0x2][0x4][0x20]; // +0x6b
  char arrTollPCNames[0x2][0xd]; // +0x16b
}; // size 0x185 MSG_M2S_CHANGE_REIGN

struct MSG_C2S_ASK_SHOP_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_SHOP_INFO

struct MSG_S2C_ANS_SHOP_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byNation; // +0xc
  uint8_t byShop; // +0xd
  char szNames[0x3][0x20]; // +0xe
  char szPCNames[0x2][0xd]; // +0x6e
}; // size 0x88 MSG_S2C_ANS_SHOP_INFO

struct MSG_C2S_ASK_GIVE_MY_TAX {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_GIVE_MY_TAX

struct MSG_S2C_ANS_GIVE_MY_TAX {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byAns; // +0xc
  uint32_t dwMoney; // +0xd
  uint32_t dwTax; // +0x11
}; // size 0x15 MSG_S2C_ANS_GIVE_MY_TAX

struct MSG_S2C_FORTIFIER {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byGreen; // +0xc
  uint8_t byBlue; // +0xd
  uint8_t byRed; // +0xe
  uint8_t byYellow; // +0xf
  uint8_t byBlack; // +0x10
}; // size 0x11 MSG_S2C_FORTIFIER

struct MSG_S2C_RETRIEVE_POINT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResultCode; // +0xc
  _PC_STAT_UPDATE_ PCStatUpdate; // +0xd _PC_STAT_UPDATE_
  uint32_t dwLore; // +0x3b
}; // size 0x3f MSG_S2C_RETRIEVE_POINT

struct MSG_S2C_CAO_MITIGATION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byResultCode; // +0xc
  uint16_t wRTime; // +0xd
  uint32_t dwLore; // +0xf
}; // size 0x13 MSG_S2C_CAO_MITIGATION

struct MSG_S2C_UPDATE_LORE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  int32_t iAddLore; // +0xc
  uint8_t code; // +0x10
}; // size 0x11 MSG_S2C_UPDATE_LORE

struct MSG_Z2C_CONFIRM_MARK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMarkID; // +0xc
  uint32_t dwLore; // +0x10
  uint32_t dwMoney; // +0x14
  uint8_t byResultCode; // +0x18
}; // size 0x19 MSG_Z2C_CONFIRM_MARK

struct MSG_Z2M_REGISTER_MARK {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szPCName[0xd]; // +0x2
  uint32_t dwClanID; // +0xf
}; // size 0x13 MSG_Z2M_REGISTER_MARK

struct MSG_Z2M_CONFIRM_MARK {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szPCName[0xd]; // +0x2
  uint8_t byResultCode; // +0xf
  uint32_t dwClanID; // +0x10
  uint32_t dwMarkID; // +0x14
}; // size 0x18 MSG_Z2M_CONFIRM_MARK

struct _AGIT_INFO_ {
  uint16_t m_wAgitID; // +0x0
  char m_szAgitName[0x20]; // +0x2
  char m_szOwnClanName[0x20]; // +0x22
}; // size 0x42 _AGIT_INFO_

struct MSG_S2C_AGIT_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byAgitCount; // +0xc
  _AGIT_INFO_ arrAgitInfo[0x19]; // +0xd _AGIT_INFO_
}; // size 0x67f MSG_S2C_AGIT_INFO

struct _AUCTION_INFO {
  uint16_t m_wAgitID; // +0x0
  uint8_t _pad0[0x2];
  uint32_t m_dwTimeElapsed; // +0x4
  uint32_t m_dwBidPrice; // +0x8
  uint32_t m_dwMaximumPrice; // +0xc
  char m_szAgitName[0x20]; // +0x10
}; // size 0x30 _AUCTION_INFO

struct MSG_S2C_AUCTION_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byAuctionCount; // +0xc
  _AUCTION_INFO arrAuctionInfo[0x14]; // +0xd _AUCTION_INFO
}; // size 0x3cd MSG_S2C_AUCTION_INFO

struct MSG_S2C_AGIT_ENTER {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  uint16_t wSubmapIndex; // +0xd
  uint32_t dwCellIndex; // +0xf
}; // size 0x13 MSG_S2C_AGIT_ENTER

struct MSG_S2C_AGIT_PUTUP_AUCTION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
}; // size 0xd MSG_S2C_AGIT_PUTUP_AUCTION

struct MSG_S2C_AGIT_BIDON {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  uint32_t dwMoney; // +0xd
}; // size 0x11 MSG_S2C_AGIT_BIDON

struct MSG_S2C_AGIT_PAY_EXPENSE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  uint32_t dwMoney; // +0xd
}; // size 0x11 MSG_S2C_AGIT_PAY_EXPENSE

struct MSG_S2C_AGIT_CHANGE_NAME {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  uint32_t dwLore; // +0xd
}; // size 0x11 MSG_S2C_AGIT_CHANGE_NAME

struct MSG_S2C_AGIT_REPAY_MONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  uint32_t dwMoney; // +0xd
}; // size 0x11 MSG_S2C_AGIT_REPAY_MONEY

struct MSG_S2C_AGIT_OBTAIN_SALEMONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byErrorCode; // +0xc
  uint32_t dwMoney; // +0xd
}; // size 0x11 MSG_S2C_AGIT_OBTAIN_SALEMONEY

struct MSG_S2C_TYR_ERROR {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wTyrErrCode; // +0xc
}; // size 0xe MSG_S2C_TYR_ERROR

struct MSG_S2C_TYR_ENTRY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byMyUnit; // +0xc
  uint16_t wEntryCnt; // +0xd
  char szTyrInfo[0x80]; // +0xf
}; // size 0x8f MSG_S2C_TYR_ENTRY

struct _TYR_ENTRY_ {
  char szPCName[0xd]; // +0x0
  char szClanName[0x20]; // +0xd
}; // size 0x2d _TYR_ENTRY_

struct MSG_S2C_TYR_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byTyrStat; // +0xc
  uint8_t byUnitIdx; // +0xd
  uint16_t wEntryCnt; // +0xe
  uint16_t wUnitMemberCnt; // +0x10
  _TYR_ENTRY_ EntryList[0x30]; // +0x12 _TYR_ENTRY_
}; // size 0x882 MSG_S2C_TYR_INFO

struct MSG_S2M_WGS_PAY {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  char szAccountName[0x15]; // +0x2
  char szPasswd[0x15]; // +0x17
}; // size 0x2c MSG_S2M_WGS_PAY

struct MSG_M2S_WGS_PAY {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
  uint8_t byPayMode; // +0x7
  char szAccountName[0x15]; // +0x8
  char szDeadLine[0xf]; // +0x1d
}; // size 0x2c MSG_M2S_WGS_PAY

struct MSG_S2C_PAYINFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byPayMode; // +0xc
  int32_t lRemainTime; // +0xd
}; // size 0x11 MSG_S2C_PAYINFO

struct CShareObject {
  int32_t m_lockFlag; // +0x0
  int32_t m_refCnt; // +0x4
}; // size 0x8 CShareObject

struct CSyncSection {
  uint8_t m_cs[0x18]; // +0x0 _RTL_CRITICAL_SECTION
  uint8_t m_bLocked; // +0x18
  uint8_t _pad0[0x3];
}; // size 0x1c CSyncSection

struct CLinkedList {
  _ListNODE_* m_pHead; // +0x0 __ListNODE_
  _ListNODE_* m_pTail; // +0x4 __ListNODE_
}; // size 0x8 CLinkedList

struct _ListNODE_ {
  void* pObj; // +0x0
  _ListNODE_* pPrev; // +0x4 __ListNODE_
  _ListNODE_* pNext; // +0x8 __ListNODE_
}; // size 0xc __ListNODE_

struct _ITEM_LEVEL_ {
  uint16_t wNeedStr; // +0x0
  uint16_t wNeedDex; // +0x2
  uint16_t wNeedMagic; // +0x4
  uint8_t byRuneOption; // +0x6
  uint8_t _pad0[0x1];
  uint16_t wBaseAbility; // +0x8
  uint16_t wPlusAbility; // +0xa
  uint8_t byMaxIceAttr; // +0xc
  uint8_t byMaxFireAttr; // +0xd
  uint8_t byMaxLightAttr; // +0xe
  uint8_t _pad1[0x1];
}; // size 0x10 _ITEM_LEVEL_

struct _ITEM_TABLE0_DATA {
  char itemName[0x20]; // +0x0
  uint32_t dwStdPrice; // +0x20
  uint8_t category; // +0x24
  uint8_t kind; // +0x25
  uint8_t byAuth; // +0x26
  uint8_t byAttackRange; // +0x27
  uint8_t byMaxRepeatHit; // +0x28
  uint8_t bySoftSkin; // +0x29
  uint8_t byHardSkin; // +0x2a
  uint8_t bySmall; // +0x2b
  uint8_t byMiddle; // +0x2c
  uint8_t byLarge; // +0x2d
  uint8_t byXLarge; // +0x2e
  uint8_t _pad0[0x1];
  _ITEM_LEVEL_ arrLevelData[0xa]; // +0x30 _ITEM_LEVEL_
}; // size 0xd0 _ITEM_TABLE0_DATA

struct _ITEM_TABLE1_DATA_ {
  char itemName[0x20]; // +0x0
  uint32_t dwStdPrice; // +0x20
  uint8_t byAuth; // +0x24
  uint8_t byLimit; // +0x25
  uint8_t byAbility; // +0x26
  uint8_t byMaxIceAttr; // +0x27
  uint8_t byMaxFireAttr; // +0x28
  uint8_t byMaxLightAttr; // +0x29
  uint8_t _pad0[0x2];
}; // size 0x2c _ITEM_TABLE1_DATA_

struct _ITEM_TABLE2_DATA_ {
  char itemName[0x20]; // +0x0
  uint32_t dwStdPrice; // +0x20
  uint8_t byAuth; // +0x24
  uint8_t byLimit; // +0x25
  uint8_t byValue1; // +0x26
  uint8_t byValue2; // +0x27
}; // size 0x28 _ITEM_TABLE2_DATA_

struct _ITEM_TABLE3_DATA_ {
  char itemName[0x20]; // +0x0
  uint32_t dwStdPrice; // +0x20
  uint8_t byAuth; // +0x24
  uint8_t byLimit; // +0x25
  uint8_t byValue1; // +0x26
  uint8_t byValue2; // +0x27
}; // size 0x28 _ITEM_TABLE3_DATA_

struct _ITEM_COUNTER {
  uint32_t newCnt; // +0x0
  uint32_t delCnt; // +0x4
}; // size 0x8 _ITEM_COUNTER

struct _ITEM_COMBINATION_TABLE_ {
  uint16_t wBaseRune1; // +0x0
  uint16_t wBaseRune2; // +0x2
  uint16_t wBaseRune3; // +0x4
  uint16_t wRune1; // +0x6
  uint16_t wRune2; // +0x8
  uint16_t wRune3; // +0xa
  uint16_t wItem1; // +0xc
  uint16_t wItem2; // +0xe
  uint16_t wItem3; // +0x10
  uint16_t wObjectItem; // +0x12
  uint16_t wSuccessRatio; // +0x14
  uint16_t wSuccessItem; // +0x16
  uint16_t wOptionType; // +0x18
  uint16_t wFailure; // +0x1a
  uint16_t wReserved1; // +0x1c
  uint16_t wReserved2; // +0x1e
}; // size 0x20 _ITEM_COMBINATION_TABLE_

struct CItemManage {
  _ITEM_TABLE0_DATA m_ItemTable0[0x400]; // +0x0 _ITEM_TABLE0_DATA
  _ITEM_TABLE1_DATA_ m_ItemTable1[0x400]; // +0x34000 _ITEM_TABLE1_DATA_
  _ITEM_TABLE2_DATA_ m_ItemTable2[0x400]; // +0x3f000 _ITEM_TABLE2_DATA_
  _ITEM_TABLE3_DATA_ m_ItemTable3[0x400]; // +0x49000 _ITEM_TABLE3_DATA_
  _ITEM_COUNTER m_ItemCountTable[0x3][0x400]; // +0x53000 _ITEM_COUNTER
  _ITEM_COMBINATION_TABLE_ m_ItemCombination[0x1770]; // +0x59000 _ITEM_COMBINATION_TABLE_
  int32_t m_nTotalItemTable; // +0x87e00
}; // size 0x87e04 CItemManage

struct EXCEL_LEVEL_DATA {
  uint16_t LevelOpt; // +0x0
  uint16_t NeedStr; // +0x2
  uint16_t NeedDex; // +0x4
  uint16_t NeedMag; // +0x6
  uint16_t BaseAbility; // +0x8
  uint16_t PlusAbility; // +0xa
  uint16_t MaxIceAttr; // +0xc
  uint16_t MaxFireAttr; // +0xe
  uint16_t MaxLightAttr; // +0x10
}; // size 0x12 EXCEL_LEVEL_DATA

struct CSkill {
  int32_t m_Skills[0x3]; // +0x0
}; // size 0xc CSkill

struct CKilledCharManage {
  CLinkedList m_ListKilledChar; // +0x0 CLinkedList
  uint8_t m_cs[0x18]; // +0x8 _RTL_CRITICAL_SECTION
}; // size 0x20 CKilledCharManage

struct _OBJECT_ {
  uint8_t objType; // +0x0
}; // size 0x1 _OBJECT_

struct CSimpleSyncSection {
  uint8_t _raw[0x8];
}; // size 0x8 CSimpleSyncSection

struct CPC_CPCStatChange {
  SKILL_STAT_CHANGE _base_SKILL_STAT_CHANGE; // +0x0 SKILL_STAT_CHANGE
  uint8_t HPConsumRate; // +0xb
  uint8_t MPConsumRate; // +0xc
  uint8_t HPStealRate; // +0xd
  uint8_t MPStealRate; // +0xe
  uint8_t _pad0[0x1];
  int32_t iBindFoot; // +0x10
}; // size 0x14 CPC::CPCStatChange

struct CCheckHACK {
  CLinkedList m_HackLog[0x3]; // +0x0 CLinkedList
  int32_t m_iTotalCounter[0x3]; // +0x18
}; // size 0x24 CCheckHACK

struct CPC_REMEMBER_ENEMY_ {
  uint32_t dwPCID; // +0x0
  uint32_t dwFirstAtkTime; // +0x4
  char szPCName[0xd]; // +0x8
  uint8_t byGate; // +0x15
  uint8_t _pad0[0x2];
}; // size 0x18 CPC::_REMEMBER_ENEMY_

struct CPCManage {
  int32_t m_iPCCnt; // +0x0
  uint8_t m_PCTable[0x1900]; // +0x4 std::map<unsigned long,CPC *,std::less<unsigned long>,std::allocator<CPC *> >
  uint8_t m_NameTable[0x2ee0]; // +0x1904 std::list<CPC *,std::allocator<CPC *> >
  CKilledCharManage m_KilledPC; // +0x47e4 CKilledCharManage
  CLinkedList m_LogoutPCList; // +0x4804 CLinkedList
  uint8_t m_PCFreeList[0xc]; // +0x480c std::list<CPC *,std::allocator<CPC *> >
  uint8_t m_standbyPCList[0xc]; // +0x4818 std::list<CPC *,std::allocator<CPC *> >
  CLinkedList m_WarpWaitPCList[0x2]; // +0x4824 CLinkedList
  uint8_t m_cs[0x18]; // +0x4834 _RTL_CRITICAL_SECTION
}; // size 0x484c CPCManage

struct CNPC_NPC_REMEMBER_PC_ {
  uint32_t dwPCID; // +0x0
  uint16_t wMap; // +0x4
  uint8_t byGate; // +0x6
  uint8_t _pad0[0x1];
  int32_t iDamage; // +0x8
}; // size 0xc CNPC::_NPC_REMEMBER_PC_

struct CNPC_CNPCStatChange {
  SKILL_STAT_CHANGE _base_SKILL_STAT_CHANGE; // +0x0 SKILL_STAT_CHANGE
  uint8_t _pad0[0x1];
  uint16_t IsStun : 1;
  uint16_t IsConfuse : 1;
  uint16_t IsSleep : 1;
  uint16_t ActionSpeedPlus : 13;
}; // size 0xe CNPC::CNPCStatChange

struct CNPC {
  _OBJECT_ _base_OBJECT_; // +0x0 _OBJECT_
  uint8_t _pad0[0x3];
  uint32_t m_dwNPCID; // +0x4
  uint16_t m_wNPCType; // +0x8
  uint16_t m_wRegenMap; // +0xa
  uint32_t m_dwRegenCell; // +0xc
  int32_t m_iRegenDir; // +0x10
  int32_t m_NPCAIState; // +0x14 enum NPCAI_STATE
  int32_t m_iActionSpeed; // +0x18
  int32_t m_iHp; // +0x1c
  int32_t m_iMp; // +0x20
  int32_t m_iDirection; // +0x24
  uint16_t m_wLevel; // +0x28
  uint16_t m_wCurMap; // +0x2a
  uint32_t m_dwCurCell; // +0x2c
  uint8_t m_byAttackType; // +0x30
  uint8_t m_byAttkRangeMin; // +0x31
  uint8_t m_byAttkRangeMax; // +0x32
  uint8_t m_bBoss; // +0x33
  uint8_t m_bQuestNPC; // +0x34
  uint8_t m_byRecallInfo; // +0x35
  uint8_t _pad1[0x2];
  CNPC* m_pMasterNPC; // +0x38 CNPC
  uint32_t m_dwSlaveNPCID; // +0x3c
  uint16_t m_DropItemCode; // +0x40
  uint8_t _pad2[0x2];
  int32_t m_iMoveCellIdx; // +0x44
  int32_t m_iMoveCellNum; // +0x48
  uint32_t m_dwMoveCell[0x8]; // +0x4c
  uint32_t m_dwLastTick; // +0x6c
  uint32_t m_dwDieTime; // +0x70
  CNPC_NPC_REMEMBER_PC_ m_LastTarget; // +0x74 CNPC::_NPC_REMEMBER_PC_
  CNPC_NPC_REMEMBER_PC_ m_arrAttacker[0x40]; // +0x80 CNPC::_NPC_REMEMBER_PC_
  int32_t m_iAttackerCnt; // +0x380
  int32_t m_iLastAttackerIdx; // +0x384
  CNPC_CNPCStatChange m_SkillStatChange; // +0x388 CNPC::CNPCStatChange
  uint8_t _pad3[0x2];
  CPC* m_parrScanPC[0x80]; // +0x398 CPC
  int32_t m_iScanPCCnt; // +0x598
  _LASTINGSKILL_MANAGEARRARY_ m_NPCSkillCasted; // +0x59c _LASTINGSKILL_MANAGEARRARY_
  CSimpleSyncSection m_SyncObj; // +0x5cc CSimpleSyncSection
}; // size 0x5d4 CNPC

struct CMemBlk {
  void* pObj; // +0x0
}; // size 0x4 CMemBlk

struct CMemManager {
  CMemBlk* m_ptrMemPool; // +0x0 CMemBlk
  int32_t m_iPoolSize; // +0x4
  uint32_t m_dwStrtFree; // +0x8
  uint32_t m_dwEndFree; // +0xc
  int32_t m_bEmptyFree; // +0x10
  int32_t m_bFullFree; // +0x14
  int32_t m_nUsed; // +0x18
  int32_t m_nMaxUsed; // +0x1c
}; // size 0x20 CMemManager

struct _CELL_ {
  uint32_t bMove : 1;
  uint32_t blkIndex : 10;
  uint32_t warpIndex : 4;
  uint32_t PKLevel : 2;
  uint32_t collLevel : 2;
  uint32_t bSkill : 1;
  uint32_t monsterLevel : 8;
  uint32_t viewPoint : 1;
  uint32_t reserved : 3;
}; // size 0x4 _CELL_

struct _DROP_ITEM_ {
  _ITEM_* pItem; // +0x0 _ITEM_
  uint32_t dwDropTime; // +0x4
  uint32_t dwPriority; // +0x8
}; // size 0xc _DROP_ITEM_

struct CCell {
  _CELL_ m_cell; // +0x0 _CELL_
  void* m_pStand; // +0x4
  uint8_t m_movePCList[0xc]; // +0x8 std::list<CPC *,std::allocator<CPC *> >
  _DROP_ITEM_ m_Item; // +0x14 _DROP_ITEM_
  uint8_t m_byOccupied; // +0x20
  uint8_t _pad0[0x3];
}; // size 0x24 CCell

struct CBlock {
  CSyncSection _base_CSyncSection; // +0x0 CSyncSection
  uint8_t m_PCList[0xc]; // +0x1c std::list<CPC *,std::allocator<CPC *> >
  uint8_t m_NPCList[0xc]; // +0x28 std::list<CNPC *,std::allocator<CNPC *> >
  uint8_t m_ItemMap[0x10]; // +0x34 std::map<unsigned long,_ITEM_ *,std::less<unsigned long>,std::allocator<_ITEM_ *> >
}; // size 0x44 CBlock

struct CAStar {
  uint8_t _raw[0x460];
}; // size 0x460 CAStar

struct _WARP_ {
  uint16_t mapIndex; // +0x0
  uint8_t _pad0[0x2];
  uint32_t cellIndex; // +0x4
}; // size 0x8 _WARP_

struct CMap {
  CAStar _base_CAStar; // +0x0 CAStar
  uint16_t m_wIndex; // +0x460
  uint16_t m_wPCCountInMap; // +0x462
  char m_szName[0x14]; // +0x464
  CCell* m_arrCell; // +0x478 CCell
  CBlock m_arrBlock[0x1e4]; // +0x47c CBlock
  _WARP_ m_arrWarp[0xe]; // +0x850c _WARP_
  uint16_t m_wSubType; // +0x857c
  uint16_t m_wParentMap; // +0x857e
  uint32_t m_dwParentSafeCell; // +0x8580
  uint32_t m_dwCenterCell; // +0x8584
  uint8_t m_byRange; // +0x8588
  uint8_t m_byCondition_Level; // +0x8589
  uint16_t m_wCapacity; // +0x858a
  uint16_t m_wCondition_Type; // +0x858c
  uint16_t m_wCondition_Item; // +0x858e
  int32_t m_arrNPCReservedCell[0x10000]; // +0x8590
}; // size 0x48590 CMap

struct _NPC_DATA_TABLE_NPC_ATTACK_INFO_ {
  uint32_t AttkRangeMin : 4;
  uint32_t AttkRangeMax : 7;
  uint32_t AttkSphere : 5;
  uint32_t Reservered : 16;
  uint32_t AttkRateBase : 16;
  uint32_t AttkRateOpt : 16;
}; // size 0x8 _NPC_DATA_TABLE_::_NPC_ATTACK_INFO_

struct _NPC_DROPITEM_TABLE_ITEM_DROPRATE_ {
  uint16_t wItemCode; // +0x0
  uint8_t _pad0[0x2];
  uint32_t dwDropRate; // +0x4
}; // size 0x8 _NPC_DROPITEM_TABLE_::_ITEM_DROPRATE_

struct CNPCRecallMemMgr {
  CLinkedList m_RecallNPCMemPool; // +0x0 CLinkedList
}; // size 0x8 CNPCRecallMemMgr

struct CNPCWaitRecall {
  CLinkedList m_ListWaitRecallNPC; // +0x0 CLinkedList
  uint8_t m_cs[0x18]; // +0x8 _RTL_CRITICAL_SECTION
}; // size 0x20 CNPCWaitRecall

struct CNPCAI {
  CLoopThread _base_CLoopThread; // +0x0 CLoopThread
  CLinkedList* m_ListNPC; // +0x10 CLinkedList
  CKilledCharManage m_KilledNPC; // +0x14 CKilledCharManage
  CNPCWaitRecall m_WaitRecallNPC; // +0x34 CNPCWaitRecall
  CNPCRecallMemMgr m_RecallNPCMemMgr; // +0x54 CNPCRecallMemMgr
  uint32_t m_dwNowAITick; // +0x5c
  CNPC* m_EventNPC[0x16]; // +0x60 CNPC
}; // size 0xb8 CNPCAI

struct _PET_TABLE_DATA_ {
  char itemName[0x20]; // +0x0
  uint32_t dwStdPrice; // +0x20
  uint8_t byAuth; // +0x24
  uint8_t byLimit; // +0x25
  uint8_t byValue1; // +0x26
  uint8_t byValue2; // +0x27
}; // size 0x28 _PET_TABLE_DATA_

struct CPetManage {
  int32_t m_nTotalShueCombiNum; // +0x0
  _PET_TABLE_DATA_ m_PetTable[0x100]; // +0x4 _PET_TABLE_DATA_
  _ITEM_COMBINATION_TABLE_ m_ShueCombinationTable[0xc8]; // +0x2804 _ITEM_COMBINATION_TABLE_
  int32_t m_nNewPet; // +0x4104
  int32_t m_nMaxPet; // +0x4108
}; // size 0x410c CPetManage

struct _QUEST_HEADER_ {
  char Title[0x40]; // +0x0
  char Desc[0x180]; // +0x40
  int32_t Index; // +0x1c0
  int32_t Level; // +0x1c4
  int32_t Nation; // +0x1c8
}; // size 0x1cc _QUEST_HEADER_

struct _QUEST_NEEDS_ {
  int32_t Class; // +0x0
  int32_t PartyNumb; // +0x4
  int32_t PartyClass; // +0x8
  int32_t PrevQuest; // +0xc
  int32_t LevelLow; // +0x10
  int32_t LevelHigh; // +0x14
}; // size 0x18 _QUEST_NEEDS_

struct _QUEST_REWARD_ {
  int32_t ItemCode[0x3]; // +0x0
  int32_t ItemLevel[0x3]; // +0xc
  int32_t ItemNumb[0x3]; // +0x18
  int32_t Exp; // +0x24
  int32_t Money; // +0x28
  int32_t Lore; // +0x2c
  int32_t Quest; // +0x30
}; // size 0x34 _QUEST_REWARD_

struct _QUEST_CONTENTS_ {
  int32_t Type; // +0x0
  int32_t Map; // +0x4
  int32_t Cell; // +0x8
  int32_t Distance; // +0xc
  int32_t NPCCode; // +0x10
  int32_t NPCNumb; // +0x14
  int32_t ItemCode[0x4]; // +0x18
  int32_t ItemLevel[0x4]; // +0x28
  int32_t ItemNumb[0x4]; // +0x38
  int32_t Probabilty[0x4]; // +0x48
  int32_t Skill; // +0x58
  char Str0[0x40]; // +0x5c
  char Str1[0x40]; // +0x9c
}; // size 0xdc _QUEST_CONTENTS_

struct CQuest {
  _QUEST_TABLE_* m_pQuestTable; // +0x0 _QUEST_TABLE_
  _QUEST_HEADER_* m_pSortQuestTable; // +0x4 _QUEST_HEADER_
  int32_t m_iDefaultLevelQuest; // +0x8
  int32_t m_iMaxQuestLevel; // +0xc
}; // size 0x10 CQuest

struct CUDPSock {
  uint8_t _raw[0x40c];
}; // size 0x40c CUDPSock

struct CSimpleCrypt {
  uint8_t _raw[0x10];
}; // size 0x10 CSimpleCrypt

struct CGameLog {
  CLoopThread _base_CLoopThread; // +0x0 CLoopThread
  int32_t m_bConnect; // +0x10
  uint32_t m_sSocket; // +0x14
  void* m_wsaEvent; // +0x18
  uint8_t m_netEvent[0x2c]; // +0x1c _WSANETWORKEVENTS
  char m_szAddr[0x10]; // +0x48
  int32_t m_nPort; // +0x58
  int32_t m_nConnectTryCount; // +0x5c
  uint8_t m_LogDataQ[0xc]; // +0x60 std::list<_LOG_DATA_ *,std::allocator<_LOG_DATA_ *> >
  uint8_t m_csSend[0x18]; // +0x6c _RTL_CRITICAL_SECTION
}; // size 0x84 CGameLog

struct CTimeFunc {
  uint8_t _raw[0x1];
}; // size 0x1 CTimeFunc

struct MSG_HEADER {
  uint16_t wProtocol; // +0x0
}; // size 0x2 MSG_HEADER

struct MSG_V2S_CMM_KILL {
  MSG_HEADER MsgHeader; // +0x0 MSG_HEADER
}; // size 0x2 MSG_V2S_CMM_KILL

struct MSG_S2V_CMM_KILL {
  MSG_HEADER MsgHeader; // +0x0 MSG_HEADER
}; // size 0x2 MSG_S2V_CMM_KILL

struct MSG_V2S_MAIN_SHOUT {
  MSG_HEADER MsgHeader; // +0x0 MSG_HEADER
  char szMsg[0x40]; // +0x2
}; // size 0x42 MSG_V2S_MAIN_SHOUT

struct MSG_V2S_MAIN_WHISPER {
  MSG_HEADER MsgHeader; // +0x0 MSG_HEADER
  char szPCName[0xd]; // +0x2
  char szMsg[0x40]; // +0xf
}; // size 0x4f MSG_V2S_MAIN_WHISPER

struct MSG_S2V_CMM_ALIVE {
  MSG_HEADER MsgHeader; // +0x0 MSG_HEADER
}; // size 0x2 MSG_S2V_CMM_ALIVE

struct MSG_S2V_MAIN_SHOUT {
  MSG_HEADER MsgHeader; // +0x0 MSG_HEADER
  char szMsg[0x40]; // +0x2
}; // size 0x42 MSG_S2V_MAIN_SHOUT

struct _MAP_INFO_ {
  uint16_t wMapIndex; // +0x0
  uint16_t wCurUser; // +0x2
}; // size 0x4 _MAP_INFO_

struct MSG_S2V_ZONE_INFO {
  MSG_HEADER MsgHeader; // +0x0 MSG_HEADER
  int32_t iTotalUser; // +0x2
  _MAP_INFO_ Info; // +0x6 _MAP_INFO_
}; // size 0xa MSG_S2V_ZONE_INFO

struct MSG_S2V_WARNNING {
  MSG_HEADER MsgHeader; // +0x0 MSG_HEADER
  char szWarn[0x80]; // +0x2
}; // size 0x82 MSG_S2V_WARNNING

struct CPartyQuest_CHALLENGER_ {
  uint32_t dwPCID; // +0x0
  uint8_t byGateSvr; // +0x4
  uint8_t _pad0[0x3];
}; // size 0x8 CPartyQuest::_CHALLENGER_

struct CPartyQuest {
  int32_t m_bRun; // +0x0
  uint8_t m_byStep; // +0x4
  uint8_t m_byPartyQuestIndex; // +0x5
  uint8_t m_byTimeLimit; // +0x6
  uint8_t m_classCheck; // +0x7
  uint16_t m_wMasterItem; // +0x8
  uint16_t m_wLowLevel; // +0xa
  uint16_t m_wHighLevel; // +0xc
  uint16_t m_wMapIndex; // +0xe
  uint16_t m_wMap2Fail; // +0x10
  uint16_t m_arrQuestItem[0x6]; // +0x12
  uint16_t m_wRemuneration; // +0x1e
  uint16_t m_wQuestNPCs[0x3]; // +0x20
  uint8_t _pad0[0x2];
  uint32_t m_dwNeedLore; // +0x28
  uint32_t m_dwStartTick; // +0x2c
  uint32_t m_dwCell2Fail; // +0x30
  CNPC* m_pQuestNPCs[0x3]; // +0x34 CNPC
  CPartyQuest_CHALLENGER_ m_arrPC[0x4]; // +0x40 CPartyQuest::_CHALLENGER_
}; // size 0x60 CPartyQuest

struct _QUEST_PORTAL_NPC_ {
  uint8_t questIdx; // +0x0
  uint8_t questStep; // +0x1
  uint8_t feature; // +0x2
  uint8_t _pad0[0x1];
  uint16_t wNPCType; // +0x4
  uint16_t wMapIndex; // +0x6
  uint16_t wNeedItem; // +0x8
  uint8_t _pad1[0x2];
  uint32_t dwMasterCell; // +0xc
  uint32_t dwSubCell; // +0x10
}; // size 0x14 _QUEST_PORTAL_NPC_

struct _LOTTO_LOG_DATA_ {
  int32_t nLottoCnt; // +0x0
  int32_t iLuckyNumber[0x5]; // +0x4
  int32_t nTotalWinner[0x4]; // +0x18
  uint32_t iRemainMoney; // +0x28
  char szDateLog[0x40]; // +0x2c
}; // size 0x6c _LOTTO_LOG_DATA_

struct CLottoManager {
  uint8_t _raw[0x98];
}; // size 0x98 CLottoManager

struct _AGIT_STORAGE_ {
  uint8_t m_byOpen; // +0x0
  uint8_t _pad0[0x3];
  uint32_t m_dwOpenPCID; // +0x4
  uint32_t m_dwStorageMoney; // +0x8
  char m_szStorageName[0x5][0x15]; // +0xc
  uint8_t _pad1[0x3];
  _ITEM_* m_StorageItem[0x5][0x50]; // +0x78 _ITEM_
}; // size 0x6b8 _AGIT_STORAGE_

struct CAgit {
  uint8_t _raw[0x738];
}; // size 0x738 CAgit

struct _AGIT_TABLE_INFO_ {
  char szAgitRecordName[0xd]; // +0x0
  uint8_t byNation; // +0xd
  uint8_t _pad0[0x2];
  int32_t nAgitRoomID; // +0x10
  int32_t nTabID; // +0x14
}; // size 0x18 _AGIT_TABLE_INFO_

struct _REIGNCLAN_ {
  uint8_t byWhichTollan; // +0x0
  uint8_t _pad0[0x3];
  uint32_t arrToll[0x2]; // +0x4
  uint32_t arrErrt[0x2][0x4]; // +0xc
  char arrTollNames[0x2][0x20]; // +0x2c
  char arrErrtNames[0x2][0x4][0x20]; // +0x6c
  uint32_t arrMoney4Toll[0x2][0x4]; // +0x16c
  uint32_t arrMoney4Errt[0x2][0x4]; // +0x18c
  char arrTollPCNames[0x2][0xd]; // +0x1ac
  uint8_t _pad1[0x2];
}; // size 0x1c8 _REIGNCLAN_

struct CReignMgr {
  _REIGNCLAN_ m_Reign; // +0x0 _REIGNCLAN_
}; // size 0x1c8 CReignMgr

struct CDerbyManager {
  int32_t iDerbyIndex; // +0x0
  int32_t iDerbyTickCount; // +0x4
  _DERBY_MONSTER_INFO_ dmiMonster[0x20]; // +0x8 _DERBY_MONSTER_INFO_
  _DERBY_HISTORY_INFO_ dhiHistory[0x1e0]; // +0x148 _DERBY_HISTORY_INFO_
  _DERBY_MONSTER_INFO_ dmiEntryList[0x5]; // +0x1f48 _DERBY_MONSTER_INFO_
  uint8_t _pad0[0x2];
  float fVelocityCurve[0x1e]; // +0x1f7c
  int32_t recentBackupFileID; // +0x1ff4
  int32_t recentBackupStamp; // +0x1ff8
  int32_t recentHistoryIndex; // +0x1ffc
  int32_t recentLoggedDerbyIndex; // +0x2000
  uint32_t iBetTotal[0xf]; // +0x2004
  float fRatioTable[0xf]; // +0x2040
  uint8_t bIsRatioValid; // +0x207c
  uint8_t _pad1[0x3];
}; // size 0x2080 CDerbyManager

struct CMainServer {
  CBaseServer _base_CBaseServer; // +0x0 CBaseServer
  int32_t m_bRunServer; // +0x800078
}; // size 0x80007c CMainServer

struct _PC_QUEST_INFO_ {
  int32_t QuestIndex; // +0x0
  _PC_QUEST_INFO_PC_QUEST_DATA_ QuestData[0x7]; // +0x4 _PC_QUEST_INFO_::_PC_QUEST_DATA_
  uint8_t _pad0[0x3];
}; // size 0x1c _PC_QUEST_INFO_

struct _PC_DIEINFO_ {
  uint32_t dwPCID; // +0x0
  uint8_t byGateSvrID; // +0x4
  uint8_t _pad0[0x3];
}; // size 0x8 _PC_DIEINFO_

struct _WAIT_RECALL_ {
  CNPC* pMasterNPC; // +0x0 CNPC
  uint16_t wRecallNPC; // +0x4
  uint8_t _pad0[0x2];
  uint32_t dwDestCell; // +0x8
  int32_t iRecallNum; // +0xc
  uint8_t byRecallInfo; // +0x10
  uint8_t _pad1[0x3];
}; // size 0x14 _WAIT_RECALL_

struct _AGIT_REPAY_ {
  uint32_t m_dwMoney; // +0x0
  char m_szBidder[0xd]; // +0x4
  uint8_t _pad0[0x3];
}; // size 0x14 _AGIT_REPAY_

struct _NPC_DATA_TABLE_ {
  char szNPCName[0x14]; // +0x0
  uint16_t wNPCType; // +0x14
  uint16_t wRegenTime; // +0x16
  uint32_t NPCClass : 4;
  uint32_t AIPattern : 4;
  uint32_t ScanRange : 4;
  uint32_t SetTargetType : 4;
  uint32_t ChangeTargetType : 1;
  uint32_t DefRate : 12;
  uint32_t AttkTypeNum : 3;
  _NPC_DATA_TABLE_NPC_ATTACK_INFO_ AttkInfo[0x3]; // +0x1c _NPC_DATA_TABLE_::_NPC_ATTACK_INFO_
  uint32_t ActionSpeed : 16;
  uint32_t MoveSpeed : 16;
  uint32_t Level : 9;
  uint32_t Exp : 16;
  uint32_t BodySize : 3;
  uint32_t Skin : 4;
  uint32_t dwMaxHP; // +0x3c
  uint32_t RecallType : 2;
  uint32_t RecallFamily : 12;
  uint32_t RandomType : 2;
  uint32_t FireAttk : 8;
  uint32_t FireDef : 8;
  uint32_t IceAttk : 8;
  uint32_t IceDef : 8;
  uint32_t LightAttk : 8;
  uint32_t LightDef : 8;
}; // size 0x48 _NPC_DATA_TABLE_

struct _NPC_DROPITEM_TABLE_ {
  uint16_t wNPCType; // +0x0
  uint8_t _pad0[0x2];
  _NPC_DROPITEM_TABLE_ITEM_DROPRATE_ ItemDrop[0x3e]; // +0x4 _NPC_DROPITEM_TABLE_::_ITEM_DROPRATE_
}; // size 0x1f4 _NPC_DROPITEM_TABLE_

struct CAStar_NODE {
  int32_t f; // +0x0
  int32_t h; // +0x4
  int32_t g; // +0x8
  int32_t x; // +0xc
  int32_t y; // +0x10
  CAStar_NODE* Parent; // +0x14 CAStar::__NODE
  CAStar_NODE* Child[0x8]; // +0x18 CAStar::__NODE
  CAStar_NODE* NextNode; // +0x38 CAStar::__NODE
}; // size 0x3c CAStar::__NODE

struct CAStar_STACK {
  CAStar_NODE* Nodes; // +0x0 CAStar::__NODE
  CAStar_STACK* NextStack; // +0x4 CAStar::__STACK
}; // size 0x8 CAStar::__STACK

struct _WARP_WAIT_PC_ {
  uint32_t dwPCID; // +0x0
  uint8_t byGateID; // +0x4
  uint8_t _pad0[0x1];
  uint16_t wNewMap; // +0x6
  uint32_t dwNewCell; // +0x8
}; // size 0xc _WARP_WAIT_PC_

struct _LOG_DATA_ {
  int32_t tvTime; // +0x0
  char LogStr[0x800]; // +0x4
}; // size 0x804 _LOG_DATA_

struct _QUEST_TABLE_ {
  _QUEST_HEADER_ Header; // +0x0 _QUEST_HEADER_
  _QUEST_NEEDS_ Needs; // +0x1cc _QUEST_NEEDS_
  _QUEST_REWARD_ Reward; // +0x1e4 _QUEST_REWARD_
  _QUEST_CONTENTS_ Contents[0x7]; // +0x218 _QUEST_CONTENTS_
  char Info[0x180]; // +0x81c
}; // size 0x99c _QUEST_TABLE_

struct _AGIT_AUCTION_ {
  uint16_t m_wAgitID; // +0x0
  uint8_t _pad0[0x2];
  uint32_t m_dwAuctionTerm; // +0x4
  uint32_t m_dwMinimumPrice; // +0x8
  uint32_t m_dwMaximumPrice; // +0xc
  uint32_t m_dwBidPrice; // +0x10
  uint32_t m_dwTimeElapsed; // +0x14
  uint32_t m_dwAuctioneerClanID; // +0x18
  uint32_t m_dwBidderClanID; // +0x1c
  char m_szAuctioneer[0xd]; // +0x20
  char m_szAuctioneerClan[0x20]; // +0x2d
  char m_szBidder[0xd]; // +0x4d
  char m_szBidderClan[0x20]; // +0x5a
  char m_szAgitName[0x20]; // +0x7a
  uint8_t _pad1[0x2];
}; // size 0x9c _AGIT_AUCTION_

struct _ITEM_TABLE_FOR_EVENT {
  uint16_t code; // +0x0
  uint16_t dropProb; // +0x2
}; // size 0x4 _ITEM_TABLE_FOR_EVENT

struct CAgitAuctionManager {
  uint8_t _raw[0x30];
}; // size 0x30 CAgitAuctionManager

struct CAgitManager {
  CAgit m_arrAgit[0x2][0x1d]; // +0x0 CAgit
  _AGIT_TABLE_INFO_ m_arrAgitTblInfo[0x2][0x41]; // +0x1a2b0 _AGIT_TABLE_INFO_
}; // size 0x1aee0 CAgitManager

struct CLoopSleepMgr {
  uint8_t _raw[0x14];
}; // size 0x14 CLoopSleepMgr

struct _LAST_CALL_INFO_ {
  char pFile[0x104]; // +0x0
  int32_t nLine; // +0x104
}; // size 0x108 _LAST_CALL_INFO_

struct CMsgCrypt {
  CSimpleCrypt _base_CSimpleCrypt; // +0x0 CSimpleCrypt
  int32_t m_iMsgHeaderSize; // +0x10
}; // size 0x14 CMsgCrypt

struct CGateServer {
  CBaseServer _base_CBaseServer; // +0x0 CBaseServer
  int32_t m_bRunServer; // +0x800078
  uint8_t m_bySvrID; // +0x80007c
  uint8_t _pad0[0x3];
  CSyncSection m_CryptSync; // +0x800080 CSyncSection
}; // size 0x80009c CGateServer

struct CTickManage {
  int32_t m_lNowTick; // +0x0
  uint32_t m_dwNowMiliTick; // +0x4
  int32_t m_lSecondNewDate; // +0x8
  int32_t m_lSecondOClock; // +0xc
  int32_t m_lSecond10Min; // +0x10
  int32_t m_lSecond180; // +0x14
  int32_t m_lSecond120; // +0x18
  int32_t m_lSecond60; // +0x1c
  int32_t m_lSecond30; // +0x20
  int32_t m_lSecond10; // +0x24
  int32_t m_lSecond5; // +0x28
  int32_t m_lSecond2; // +0x2c
  int32_t m_lSecond1; // +0x30
  uint32_t m_dwMiliSecond500; // +0x34
}; // size 0x38 CTickManage

struct MSG_DFLT_HEADER {
  uint32_t dwSize; // +0x0
  uint32_t dwPCID; // +0x4
  uint8_t byCtrl; // +0x8
  uint8_t byCmd; // +0x9
}; // size 0xa MSG_DFLT_HEADER

struct MSG_G2S_NEW_CLIENT {
  MSG_S2G_HEADER MsgHeader; // +0x0 MSG_S2G_HEADER
  char szAccountName[0x15]; // +0xa
}; // size 0x1f MSG_G2S_NEW_CLIENT

struct MSG_G2S_DISCONNECT {
  MSG_S2G_HEADER MsgHeader; // +0x0 MSG_S2G_HEADER
  uint8_t byReason; // +0xa
}; // size 0xb MSG_G2S_DISCONNECT

struct MSG_C2S_ASK_MOVE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwDestCell; // +0xc
  uint8_t byMoveSpeed; // +0x10
}; // size 0x11 MSG_C2S_ASK_MOVE

struct MSG_C2S_PC_MOVE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNextCell; // +0xc
  uint8_t byMoveSpeed; // +0x10
}; // size 0x11 MSG_C2S_PC_MOVE

struct MSG_C2S_WORLD_LOGIN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char szPCName[0xd]; // +0xc
}; // size 0x19 MSG_C2S_WORLD_LOGIN

struct MSG_C2S_CHAR_LOGOUT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_CHAR_LOGOUT

struct MSG_C2S_ASK_ATTACK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byTargetType; // +0xc
  uint32_t dwTargetID; // +0xd
  uint8_t byAttackType; // +0x11
}; // size 0x12 MSG_C2S_ASK_ATTACK

struct MSG_C2S_ASK_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bySkillIndex; // +0xc
  uint8_t byTargetType; // +0xd
  uint32_t dwTargetID; // +0xe
}; // size 0x12 MSG_C2S_ASK_SKILL

struct MSG_C2S_PICKUP_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint32_t dwCellIndex; // +0x14
}; // size 0x18 MSG_C2S_PICKUP_ITEM

struct MSG_C2S_DROP_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t invenIndex; // +0x14
}; // size 0x15 MSG_C2S_DROP_ITEM

struct MSG_C2S_USE_POTION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byPotionType; // +0xc
}; // size 0xd MSG_C2S_USE_POTION

struct MSG_C2S_MOVE_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t oldIndex; // +0x14
  uint8_t newIndex; // +0x15
}; // size 0x16 MSG_C2S_MOVE_ITEM

struct MSG_C2S_WEAR_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
}; // size 0x14 MSG_C2S_WEAR_ITEM

struct MSG_C2S_STRIP_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
}; // size 0x14 MSG_C2S_STRIP_ITEM

struct MSG_C2S_BUY_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint16_t code; // +0x10
  uint16_t wQuantity; // +0x12
}; // size 0x14 MSG_C2S_BUY_ITEM

struct MSG_C2S_SELL_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  _ITEM_ Item; // +0x10 _ITEM_
}; // size 0x20 MSG_C2S_SELL_ITEM

struct MSG_C2S_GIVE_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwToPCID; // +0xc
  _ITEM_ID_ ItemID; // +0x10 _ITEM_ID_
}; // size 0x18 MSG_C2S_GIVE_ITEM

struct MSG_C2S_ASK_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_DEAL

struct MSG_C2S_ANS_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwAskPCID; // +0xc
  uint8_t answer; // +0x10
}; // size 0x11 MSG_C2S_ANS_DEAL

struct MSG_C2S_PUTIN_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMoney; // +0xc
  uint16_t wHPotion; // +0x10
  uint16_t wMPotion; // +0x12
  _ITEM_ID_ ItemID; // +0x14 _ITEM_ID_
}; // size 0x1c MSG_C2S_PUTIN_ITEM

struct MSG_C2S_PUTOUT_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwMoney; // +0xc
  uint16_t wHPotion; // +0x10
  uint16_t wMPotion; // +0x12
  _ITEM_ID_ ItemID; // +0x14 _ITEM_ID_
}; // size 0x1c MSG_C2S_PUTOUT_ITEM

struct MSG_C2S_DECIDE_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t decide; // +0xc
}; // size 0xd MSG_C2S_DECIDE_DEAL

struct MSG_C2S_CONFIRM_DEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t confirm; // +0xc
}; // size 0xd MSG_C2S_CONFIRM_DEAL

struct MSG_C2S_ALLOT_POINT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t strPoint; // +0xc
  uint8_t magicPoint; // +0xd
  uint8_t dexPoint; // +0xe
  uint8_t vitPoint; // +0xf
  uint8_t manaPoint; // +0x10
}; // size 0x11 MSG_C2S_ALLOT_POINT

struct MSG_C2S_ASK_HEAL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_HEAL

struct MSG_C2S_LEARN_SKILL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ScrollID; // +0xc _ITEM_ID_
  uint8_t invenIdx; // +0x14
}; // size 0x15 MSG_C2S_LEARN_SKILL

struct MSG_C2S_CONFIRM_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  _ITEM_ID_ ItemID; // +0x10 _ITEM_ID_
  uint8_t byIndex; // +0x18
}; // size 0x19 MSG_C2S_CONFIRM_ITEM

struct MSG_C2S_REMODEL_ITEM {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ ItemID; // +0xc _ITEM_ID_
  uint8_t byItemIndex; // +0x14
  _ITEM_ID_ StoneID; // +0x15 _ITEM_ID_
  uint8_t byStoneIndex; // +0x1d
}; // size 0x1e MSG_C2S_REMODEL_ITEM

struct MSG_C2S_ASK_PARTY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwOPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_PARTY

struct MSG_C2S_ANS_PARTY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwAskPCID; // +0xc
  uint8_t bAccept; // +0x10
}; // size 0x11 MSG_C2S_ANS_PARTY

struct MSG_C2S_OUT_PARTY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_OUT_PARTY

struct MSG_C2S_RETURN2HERE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint16_t wTeleportIndex; // +0x10
}; // size 0x12 MSG_C2S_RETURN2HERE

struct MSG_C2S_ACTIVE_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwPetID; // +0xc
}; // size 0x10 MSG_C2S_ACTIVE_PET

struct MSG_C2S_INACTIVE_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_INACTIVE_PET

struct MSG_C2S_PET_BUY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint16_t code; // +0x10
}; // size 0x12 MSG_C2S_PET_BUY

struct MSG_C2S_PET_SELL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint32_t PetID; // +0x10
}; // size 0x14 MSG_C2S_PET_SELL

struct MSG_C2S_FEED_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t PetID; // +0xc
}; // size 0x10 MSG_C2S_FEED_PET

struct MSG_C2S_USESCROLL {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byInvenIndex; // +0xc
  uint32_t dwItemID; // +0xd
}; // size 0x11 MSG_C2S_USESCROLL

struct MSG_C2S_PUTIN_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwPetID; // +0xc
}; // size 0x10 MSG_C2S_PUTIN_PET

struct MSG_C2S_PUTOUT_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwPetID; // +0xc
}; // size 0x10 MSG_C2S_PUTOUT_PET

struct MSG_C2S_ASK_OPEN_STORAGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_OPEN_STORAGE

struct MSG_C2S_ASK_INVEN2STORAGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  _ITEM_ID_ itemID; // +0x10 _ITEM_ID_
  uint8_t byInvenIndex; // +0x18
  uint8_t byStorageIndex; // +0x19
}; // size 0x1a MSG_C2S_ASK_INVEN2STORAGE

struct MSG_C2S_ASK_STORAGE2INVEN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  _ITEM_ID_ itemID; // +0x10 _ITEM_ID_
  uint8_t byStorageIndex; // +0x18
  uint8_t byInvenIndex; // +0x19
}; // size 0x1a MSG_C2S_ASK_STORAGE2INVEN

struct MSG_C2S_ASK_DEPOSITE_MONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint32_t dwDepositeMoney; // +0x10
}; // size 0x14 MSG_C2S_ASK_DEPOSITE_MONEY

struct MSG_C2S_ASK_WITHDRAW_MONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint32_t dwWithdrawMoney; // +0x10
}; // size 0x14 MSG_C2S_ASK_WITHDRAW_MONEY

struct MSG_C2S_ASK_CLOSE_STORAGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_CLOSE_STORAGE

struct MSG_C2S_ASK_MOVE_ITEMINSTORAGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  _ITEM_ID_ itemID; // +0x10 _ITEM_ID_
  uint8_t byFromIndex; // +0x18
  uint8_t byToIndex; // +0x19
}; // size 0x1a MSG_C2S_ASK_MOVE_ITEMINSTORAGE

struct MSG_C2S_REVIVE_PET {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwItemID; // +0xc
  uint32_t dwPetID; // +0x10
}; // size 0x14 MSG_C2S_REVIVE_PET

struct MSG_C2S_GESTURE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t byGestureType; // +0xc
}; // size 0xd MSG_C2S_GESTURE

struct MSG_C2S_OPTION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _GAME_OPTION_ option; // +0xc _GAME_OPTION_
}; // size 0xd MSG_C2S_OPTION

struct MSG_C2S_SUBMAP_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_SUBMAP_INFO

struct MSG_C2S_ENTER {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  char keyword[0x40]; // +0x10
}; // size 0x50 MSG_C2S_ENTER

struct MSG_C2S_ITEM_COMBINATION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ID_ arrItemID[0xa]; // +0xc _ITEM_ID_
  uint32_t dwNPCID; // +0x5c
}; // size 0x60 MSG_C2S_ITEM_COMBINATION

struct MSG_C2S_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t requestType; // +0xc
  char szClanName[0x20]; // +0xd
  char szClanPasswd[0x10]; // +0x2d
}; // size 0x3d MSG_C2S_CLAN

struct MSG_C2S_JOIN_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwAskPCID; // +0xc
}; // size 0x10 MSG_C2S_JOIN_CLAN

struct MSG_C2S_ANS_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bAccept; // +0xc
  uint32_t dwAskPCID; // +0xd
}; // size 0x11 MSG_C2S_ANS_CLAN

struct MSG_C2S_BOLT_CLAN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t bDismissal; // +0xc
  char szKnightName[0xd]; // +0xd
}; // size 0x1a MSG_C2S_BOLT_CLAN

struct MSG_C2S_REQ_CLAN_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_REQ_CLAN_INFO

struct MSG_C2S_PARTY_QUEST {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_PARTY_QUEST

struct MSG_C2S_OBJECT_NPC {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_OBJECT_NPC

struct MSG_C2S_LOTTO_PURCHASE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  int32_t iLottoSellingCounter; // +0xc
  uint8_t arrLottoNum[0x5]; // +0x10
  uint32_t dwNPCID; // +0x15
}; // size 0x19 MSG_C2S_LOTTO_PURCHASE

struct MSG_C2S_LOTTO_QUERY_PRIZE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_LOTTO_QUERY_PRIZE

struct MSG_C2S_LOTTO_QUERY_HISTORY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_LOTTO_QUERY_HISTORY

struct MSG_C2S_LOTTO_SALE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ itemLotto; // +0xc _ITEM_
  uint32_t dwNPCID; // +0x1c
}; // size 0x20 MSG_C2S_LOTTO_SALE

struct MSG_C2S_CHANGE_NATION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t newNation; // +0xc
}; // size 0xd MSG_C2S_CHANGE_NATION

struct MSG_C2S_DERBY_INDEX_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_DERBY_INDEX_QUERY

struct MSG_C2S_DERBY_MONSTER_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_DERBY_MONSTER_QUERY

struct MSG_C2S_DERBY_RATIO_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_DERBY_RATIO_QUERY

struct MSG_C2S_DERBY_PURCHASE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t iDerbyIndex; // +0xc
  uint8_t iChosenNum[0x2]; // +0xe
  uint16_t iBetMoney; // +0x10
  uint32_t dwNPCID; // +0x12
}; // size 0x16 MSG_C2S_DERBY_PURCHASE

struct MSG_C2S_DERBY_RESULT_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_DERBY_RESULT_QUERY

struct MSG_C2S_DERBY_HISTORY_QUERY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint8_t byPage; // +0x10
}; // size 0x11 MSG_C2S_DERBY_HISTORY_QUERY

struct MSG_C2S_DERBY_EXCHANGE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  _ITEM_ itemDerby; // +0xc _ITEM_
  uint32_t dwNPCID; // +0x1c
}; // size 0x20 MSG_C2S_DERBY_EXCHANGE

struct MSG_C2S_ASK_APPRENTICE_IN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwRequestedPCID; // +0xc
}; // size 0x10 MSG_C2S_ASK_APPRENTICE_IN

struct MSG_C2S_ANS_APPRENTICE_IN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwRequestPCID; // +0xc
  uint8_t bAccepted; // +0x10
}; // size 0x11 MSG_C2S_ANS_APPRENTICE_IN

struct MSG_C2S_ASK_APPRENTICE_OUT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_ASK_APPRENTICE_OUT

struct MSG_C2S_RETRIEVE_POINT {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint8_t strPoint; // +0xc
  uint8_t magicPoint; // +0xd
  uint8_t dexPoint; // +0xe
  uint8_t vitPoint; // +0xf
  uint8_t manaPoint; // +0x10
}; // size 0x11 MSG_C2S_RETRIEVE_POINT

struct MSG_C2S_CAO_MITIGATION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint16_t wMinutes; // +0xc
}; // size 0xe MSG_C2S_CAO_MITIGATION

struct MSG_C2Z_REGISTER_MARK {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2Z_REGISTER_MARK

struct MSG_C2S_SHUE_COMBINATION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  _PET_INFO_ arrPetInfo[0x2]; // +0x10 _PET_INFO_
}; // size 0x38 MSG_C2S_SHUE_COMBINATION

struct MSG_C2S_PAYINFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_PAYINFO

struct EXCEL_ITEM_DATA0 {
  uint16_t Group; // +0x0
  uint16_t Index; // +0x2
  uint16_t ItemType; // +0x4
  uint16_t Category; // +0x6
  char ItemName[0x20]; // +0x8
  uint32_t StdPrice; // +0x28
  uint16_t Auth; // +0x2c
  uint16_t AttackRange; // +0x2e
  uint16_t MaxRepeat; // +0x30
  uint16_t SoftSkin; // +0x32
  uint16_t HardSkin; // +0x34
  uint16_t Small; // +0x36
  uint16_t Middle; // +0x38
  uint16_t Large; // +0x3a
  uint16_t XLarge; // +0x3c
  EXCEL_LEVEL_DATA arrLevel[0xa]; // +0x3e EXCEL_LEVEL_DATA
}; // size 0xf2 EXCEL_ITEM_DATA0

struct EXCEL_ITEM_DATA1 {
  uint16_t Group; // +0x0
  uint16_t Index; // +0x2
  char ItemName[0x20]; // +0x4
  uint32_t StdPrice; // +0x24
  uint16_t Auth; // +0x28
  uint16_t Limit; // +0x2a
  uint16_t Ability; // +0x2c
  uint16_t MaxIceAttr; // +0x2e
  uint16_t MaxFireAttr; // +0x30
  uint16_t MaxLightAttr; // +0x32
}; // size 0x34 EXCEL_ITEM_DATA1

struct EXCEL_ITEM_DATA2 {
  uint16_t Group; // +0x0
  uint16_t Index; // +0x2
  char ItemName[0x20]; // +0x4
  uint32_t StdPrice; // +0x24
  uint16_t Auth; // +0x28
  uint16_t Limit; // +0x2a
  uint16_t Data1; // +0x2c
  uint16_t Data2; // +0x2e
}; // size 0x30 EXCEL_ITEM_DATA2

struct EXCEL_ITEM_DATA3 {
  uint16_t Group; // +0x0
  uint16_t Index; // +0x2
  char ItemName[0x20]; // +0x4
  uint32_t StdPrice; // +0x24
  uint16_t Auth; // +0x28
  uint16_t Limit; // +0x2a
  uint16_t Data1; // +0x2c
  uint16_t Data2; // +0x2e
}; // size 0x30 EXCEL_ITEM_DATA3

struct EXCEL_ITEM_COMBINATION_TABLE {
  uint16_t wBaseRune1; // +0x0
  uint16_t wBaseRune2; // +0x2
  uint16_t wBaseRune3; // +0x4
  uint16_t wRune1; // +0x6
  uint16_t wRune2; // +0x8
  uint16_t wRune3; // +0xa
  uint16_t wItem1; // +0xc
  uint16_t wItem2; // +0xe
  uint16_t wItem3; // +0x10
  uint16_t wObjectItem; // +0x12
  uint16_t wSuccessRatio; // +0x14
  uint16_t wSuccessItem; // +0x16
  uint16_t wOptionType; // +0x18
  uint16_t wFailure; // +0x1a
  uint16_t wReserved1; // +0x1c
  uint16_t wReserved2; // +0x1e
}; // size 0x20 EXCEL_ITEM_COMBINATION_TABLE

struct _ITEM_COUNTER_HEADER {
  uint8_t serverID; // +0x0
  uint8_t _pad0[0x3];
  uint8_t UpdateDate[0x24]; // +0x4 tm
}; // size 0x28 _ITEM_COUNTER_HEADER

union _ITEM_SERIALKEY_ {
  uint8_t _raw[0x4];
  uint32_t count; // +0x0
  uint32_t day; // +0x0
  uint32_t month; // +0x0
  uint32_t origin; // +0x0
  uint32_t serialKey; // +0x0
  uint32_t year; // +0x0
}; // size 0x4 _ITEM_SERIALKEY_

struct CLargeRand {
  uint8_t _raw[0x9d0];
}; // size 0x9d0 CLargeRand

struct CListenServer {
  CLoopThread _base_CLoopThread; // +0x0 CLoopThread
  uint32_t m_sSocket; // +0x10
  int32_t m_bConnect; // +0x14
  void* m_wsaEvent; // +0x18
  uint8_t m_netEvent[0x2c]; // +0x1c _WSANETWORKEVENTS
}; // size 0x48 CListenServer

struct CSvrManage {
  CGateServer* m_GateServer; // +0x0 CGateServer
  int32_t m_iGateServerNum; // +0x4
  int32_t m_bSocketActive; // +0x8
  CStandbyServer* m_pStandbyServer[0xa]; // +0xc CStandbyServer
  int32_t m_iStandbyServerNum; // +0x34
}; // size 0x38 CSvrManage

struct CStandbyServer {
  CBaseServer _base_CBaseServer; // +0x0 CBaseServer
  int32_t m_iIndex; // +0x800078
  int32_t m_bLogin; // +0x80007c
}; // size 0x800080 CStandbyServer

struct CSystemMgr {
  CUDPSock _base_CUDPSock; // +0x0 CUDPSock
  uint8_t m_peerAddr[0x10]; // +0x40c sockaddr_in
  int32_t m_lShutDownTime; // +0x41c
}; // size 0x420 CSystemMgr

struct CPartyQuestMgr {
  CPartyQuest* m_pQeustTable; // +0x0 CPartyQuest
  _QUEST_PORTAL_NPC_ m_PortalNPCTable[0x64]; // +0x4 _QUEST_PORTAL_NPC_
  int32_t m_iQuestMax; // +0x7d4
}; // size 0x7d8 CPartyQuestMgr

struct _SKILL_DATA_TABLE_ {
  uint8_t Code; // +0x0
  uint8_t Type; // +0x1
  uint8_t SubType; // +0x2
  uint8_t TargetType; // +0x3
  uint8_t NeedItem; // +0x4
  uint8_t Reaction; // +0x5
  uint8_t Abnomalcy; // +0x6
  uint8_t MonsterRate[0x6]; // +0x7
  _SKILL_LEVEL_DATA_ LevelData[0x3]; // +0xd _SKILL_LEVEL_DATA_
}; // size 0x5e _SKILL_DATA_TABLE_

struct _Warp_Postion_ {
  uint16_t wMapIndex; // +0x0
  uint8_t _pad0[0x2];
  uint32_t dwCellIndex; // +0x4
}; // size 0x8 _Warp_Postion_

struct _GAME_MANAGER_ {
  char szGMName[0xd]; // +0x0
  char IP[0x10]; // +0xd
}; // size 0x1d _GAME_MANAGER_

struct _DOOR_NPC_INFO_ {
  uint16_t wNPCType; // +0x0
  uint16_t wMapIndex; // +0x2
}; // size 0x4 _DOOR_NPC_INFO_

struct _PC_DATA_TABLE_ {
  uint16_t Str_Point; // +0x0
  uint16_t Mag_Point; // +0x2
  uint16_t Dex_Point; // +0x4
  uint16_t Vit_Point; // +0x6
  uint16_t Mana_Point; // +0x8
  uint16_t BonusPoint; // +0xa
  uint16_t Attack_Point; // +0xc
  uint16_t Defense_Point; // +0xe
  uint16_t Magic_Point; // +0x10
  uint16_t HP_Point; // +0x12
  uint16_t MP_Point; // +0x14
  uint16_t Hit_Probability; // +0x16
  uint16_t Damage_ratio; // +0x18
  uint16_t Finish_ratio; // +0x1a
}; // size 0x1c _PC_DATA_TABLE_

struct _NPC_SELL_ITEM_INFO_ {
  uint16_t wNPCType; // +0x0
  uint8_t _pad0[0x2];
  int32_t iItemCode[0xff]; // +0x4
}; // size 0x400 _NPC_SELL_ITEM_INFO_

struct MSG_M2S_ERROR {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  uint16_t wErrCode; // +0x7
  char szErrStr[0x40]; // +0x9
}; // size 0x49 MSG_M2S_ERROR

struct MSG_M2S_APPRENTICE_QUIT {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint8_t byGateSvrID; // +0x2
  uint32_t dwPCID; // +0x3
  uint32_t dwQuitPCID; // +0x7
}; // size 0xb MSG_M2S_APPRENTICE_QUIT

struct MSG_M2Z_CONFIRM_MARK {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  uint8_t byResultCode; // +0x7
  uint32_t dwMarkID; // +0x8
}; // size 0xc MSG_M2Z_CONFIRM_MARK

struct MSG_M2Z_CHANGE_MARK {
  MSG_S2S_HEADER MsgHeader; // +0x0 MSG_S2S_HEADER
  uint32_t dwPCID; // +0x2
  uint8_t byGateSvrID; // +0x6
  uint32_t dwMarkID; // +0x7
}; // size 0xb MSG_M2Z_CHANGE_MARK

struct _MAPHEADER_ {
  uint16_t mapIndex; // +0x0
  char mapName[0x14]; // +0x2
  uint8_t warpCount; // +0x16
}; // size 0x17 _MAPHEADER_

struct _AttackParty_ {
  CPC* pPC; // +0x0 CPC
  int32_t iDamageSum; // +0x4
}; // size 0x8 _AttackParty_

struct _NPC_NATION_INFO_ {
  uint16_t wNPCType; // +0x0
  uint8_t _pad0[0x2];
  int32_t iNation; // +0x4
}; // size 0x8 _NPC_NATION_INFO_

struct _KWAN_POS {
  uint16_t wMapIndex; // +0x0
  uint16_t wX; // +0x2
  uint16_t wY; // +0x4
}; // size 0x6 _KWAN_POS

struct EXCEL_PET_DATA {
  uint16_t Group; // +0x0
  uint16_t Index; // +0x2
  char ItemName[0x20]; // +0x4
  uint32_t StdPrice; // +0x24
  uint16_t Auth; // +0x28
  uint16_t Limit; // +0x2a
  uint16_t Data1; // +0x2c
  uint16_t Data2; // +0x2e
}; // size 0x30 EXCEL_PET_DATA

struct _CHK_HACK_ {
  int32_t tvTick; // +0x0
  int32_t iCounter; // +0x4
}; // size 0x8 _CHK_HACK_

struct MSG_G2S_SVR_LOGIN {
  MSG_S2G_HEADER MsgHeader; // +0x0 MSG_S2G_HEADER
  uint8_t byThisServerID; // +0xa
}; // size 0xb MSG_G2S_SVR_LOGIN

struct MSG_C2S_AGIT_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_AGIT_INFO

struct MSG_C2S_AUCTION_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_AUCTION_INFO

struct MSG_C2S_AGIT_ENTER {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint8_t bySelfAgit; // +0x10
  uint16_t wAgitID; // +0x11
}; // size 0x13 MSG_C2S_AGIT_ENTER

struct MSG_C2S_AGIT_PUTUP_AUCTION {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint32_t dwAuctionTerm; // +0x10
  uint32_t dwMaximumPrice; // +0x14
  uint32_t dwMinimumPrice; // +0x18
}; // size 0x1c MSG_C2S_AGIT_PUTUP_AUCTION

struct MSG_C2S_AGIT_BIDON {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint16_t wAgitID; // +0x10
  uint32_t dwBidPrice; // +0x12
}; // size 0x16 MSG_C2S_AGIT_BIDON

struct MSG_C2S_AGIT_PAY_EXPENSE {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
}; // size 0xc MSG_C2S_AGIT_PAY_EXPENSE

struct MSG_C2S_AGIT_CHANGE_NAME {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  char szAgitName[0x20]; // +0xc
}; // size 0x2c MSG_C2S_AGIT_CHANGE_NAME

struct MSG_C2S_AGIT_REPAY_MONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_AGIT_REPAY_MONEY

struct MSG_C2S_AGIT_OBTAIN_SALEMONEY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_AGIT_OBTAIN_SALEMONEY

struct MSG_C2S_TYR_ENTRY {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint8_t byUnitSelected; // +0x10
}; // size 0x11 MSG_C2S_TYR_ENTRY

struct MSG_C2S_TYR_INFO {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
  uint8_t byUnitIdx; // +0x10
}; // size 0x11 MSG_C2S_TYR_INFO

struct MSG_C2S_TYR_JOIN {
  MSG_S2C_HEADER MsgHeader; // +0x0 MSG_S2C_HEADER
  uint32_t dwNPCID; // +0xc
}; // size 0x10 MSG_C2S_TYR_JOIN

struct CPC {
  _OBJECT_ _base_OBJECT_; // +0x0 _OBJECT_
  uint8_t _pad0[0x3];
  int32_t m_PCstat; // +0x4 enum _ENUM_PC_STAT
  CSimpleSyncSection m_syncObj; // +0x8 CSimpleSyncSection
  char m_szIP[0x10]; // +0x10
  char m_szPCName[0xd]; // +0x20
  uint8_t _pad1[0x3];
  uint32_t m_dwPCID; // +0x30
  uint32_t m_dwCurCell; // +0x34
  uint32_t m_dwDestCell; // +0x38
  uint32_t m_dwExp; // +0x3c
  uint32_t m_dwMoney; // +0x40
  int32_t m_iDir; // +0x44
  uint16_t m_wCurMap; // +0x48
  uint16_t m_wLevel; // +0x4a
  uint16_t m_wPoint; // +0x4c
  uint16_t m_wRTime; // +0x4e
  uint8_t m_byPKCount; // +0x50
  uint8_t m_byGateSvrID; // +0x51
  uint8_t m_byPCType; // +0x52
  uint8_t m_byMoveSpeed; // +0x53
  uint8_t m_byAction; // +0x54
  uint8_t m_byPartyQuest; // +0x55
  uint8_t m_byPartyStep; // +0x56
  uint8_t m_byExStatus; // +0x57
  int32_t m_lLogoutTick; // +0x58
  CSkill m_PCSkill; // +0x5c CSkill
  _SOCIALINFO_ m_SInfo; // +0x68 _SOCIALINFO_
  int32_t m_lLastSaveTick; // +0x6c
  int32_t m_iHp; // +0x70
  int32_t m_iMp; // +0x74
  uint16_t m_wStoredHp; // +0x78
  uint16_t m_wStoredMp; // +0x7a
  uint16_t m_wStr; // +0x7c
  uint16_t m_wMagic; // +0x7e
  uint16_t m_wDex; // +0x80
  uint16_t m_wVit; // +0x82
  uint16_t m_wMana; // +0x84
  uint16_t m_wHitAttack; // +0x86
  uint16_t m_wMagicAttack; // +0x88
  uint16_t m_wDefense; // +0x8a
  uint16_t m_wFireAttack; // +0x8c
  uint16_t m_wFireDefense; // +0x8e
  uint16_t m_wIceAttack; // +0x90
  uint16_t m_wIceDefense; // +0x92
  uint16_t m_wLightAttack; // +0x94
  uint16_t m_wLightDefense; // +0x96
  uint16_t m_wMaxHp; // +0x98
  uint16_t m_wMaxMp; // +0x9a
  uint16_t m_wHitAddition; // +0x9c
  uint16_t m_wMagAddition; // +0x9e
  uint8_t m_byAttackRange; // +0xa0
  uint8_t m_byWeaponStep; // +0xa1
  uint8_t m_byHitRate; // +0xa2
  uint8_t m_byDodge; // +0xa3
  uint8_t m_bySkillDodge; // +0xa4
  uint8_t m_byCriticalHit; // +0xa5
  uint8_t m_byCriticalDodge; // +0xa6
  uint8_t m_byGreen; // +0xa7
  uint8_t m_byBlue; // +0xa8
  uint8_t m_byRed; // +0xa9
  uint8_t m_byYellow; // +0xaa
  uint8_t m_byBlack; // +0xab
  uint32_t m_dwGreenTime; // +0xac
  uint32_t m_dwBlueTime; // +0xb0
  uint32_t m_dwRedTime; // +0xb4
  uint32_t m_dwYellowTime; // +0xb8
  uint32_t m_dwBlackTime; // +0xbc
  uint8_t m_byFatiguePt; // +0xc0
  uint8_t m_byFatigueCnt; // +0xc1
  uint8_t _pad2[0x2];
  _PET_INFO_* m_PetActive; // +0xc4 _PET_INFO_
  _PET_INFO_* m_PetInven[0x5]; // +0xc8 _PET_INFO_
  _ITEM_* m_ItemInWear[0xa]; // +0xdc _ITEM_
  _ITEM_* m_ItemInInven[0x1e]; // +0x104 _ITEM_
  uint8_t m_DealItemMap[0x10]; // +0x17c std::map<unsigned char,_ITEM_ *,std::less<unsigned char>,std::allocator<_ITEM_ *> >
  _PET_INFO_* m_arrDealPet[0x2]; // +0x18c _PET_INFO_
  uint32_t m_dwDealMoney; // +0x194
  uint32_t m_dwDealPC; // +0x198
  uint16_t m_wDealHP; // +0x19c
  uint16_t m_wDealMP; // +0x19e
  uint8_t m_bDealOK; // +0x1a0
  uint8_t m_bDealConfirm; // +0x1a1
  _GAME_OPTION_ m_option; // +0x1a2 _GAME_OPTION_
  uint8_t _pad3[0x1];
  uint32_t m_dwStepTime; // +0x1a4
  uint32_t m_dwPreNPCID; // +0x1a8
  uint32_t m_dwPrePCID; // +0x1ac
  uint8_t m_byCurrentStep; // +0x1b0
  uint8_t _pad4[0x3];
  int32_t m_bAskPvp; // +0x1b4
  int32_t m_bNegotiatePvp; // +0x1b8
  CPC_CPCStatChange m_PCStatChange; // +0x1bc CPC::CPCStatChange
  _LASTINGSKILL_MANAGEARRARY_ m_PCSkillCasted; // +0x1d0 _LASTINGSKILL_MANAGEARRARY_
  char m_szAccountName[0x15]; // +0x200
  uint8_t _pad5[0x3];
  uint32_t m_dwLore; // +0x218
  uint16_t m_wLastQuest; // +0x21c
  uint8_t _pad6[0x2];
  uint32_t m_dwLastRTime; // +0x220
  _PC_QUEST_INFO_* m_pQuestInfo; // +0x224 _PC_QUEST_INFO_
  CCheckHACK m_CheckHack; // +0x228 CCheckHACK
  uint32_t m_dwPartyAskID; // +0x24c
  uint32_t m_dwPartyID; // +0x250
  _PARTISAN_ m_arrMyParty[0x3]; // +0x254 _PARTISAN_
  uint8_t m_byStorage_Open; // +0x26c
  uint8_t _pad7[0x3];
  _ITEM_* m_StorageItem[0x50]; // +0x270 _ITEM_
  uint32_t m_dwStorageMoney; // +0x3b0
  CPC_REMEMBER_ENEMY_ m_arrEnemy[0x10]; // +0x3b4 CPC::_REMEMBER_ENEMY_
  char m_szClanName[0x20]; // +0x534
  uint32_t m_dwClanID; // +0x554
  uint16_t m_wAgitID; // +0x558
  uint8_t m_ClanRank; // +0x55a
  uint8_t _pad8[0x1];
  uint32_t m_dwMarkID; // +0x55c
  uint32_t m_dwAppBeingAskedID; // +0x560
  uint32_t m_dwApprenticeID; // +0x564
  _APPRENTICE_INFO_ m_stApprenticePartner; // +0x568 _APPRENTICE_INFO_
  char m_Reserved1[0x21]; // +0x56c
  char m_Reserved2[0x21]; // +0x58d
  uint8_t _pad9[0x2];
  int32_t m_bPayTimeout; // +0x5b0
  char m_szPasswd[0x15]; // +0x5b4
  uint8_t _pad10[0x3];
  int32_t m_DeadLine; // +0x5cc
  int32_t m_wgsPayMode; // +0x5d0
  int32_t m_RemainTime; // +0x5d4
  uint8_t m_PayMode; // +0x5d8
  uint8_t _pad11[0x3];
  int32_t m_PayNo; // +0x5dc
  int32_t m_nLowerLevelRatio; // +0x5e0
}; // size 0x5e4 CPC

static_assert(sizeof(CLoopThread) == 0x10, "CLoopThread size");
static_assert(sizeof(_ITEM_ID_) == 0x8, "_ITEM_ID_ size");
static_assert(sizeof(_ITEM_INFO_) == 0x4, "_ITEM_INFO_ size");
static_assert(sizeof(_ITEM_) == 0x10, "_ITEM_ size");
static_assert(sizeof(_PET_ID_) == 0x8, "_PET_ID_ size");
static_assert(sizeof(_LASTINGSKILL_INFO_) == 0xc, "_LASTINGSKILL_INFO_ size");
static_assert(sizeof(_SKILL_LEVEL_DATA_) == 0x1b, "_SKILL_LEVEL_DATA_ size");
static_assert(sizeof(SKILL_STAT_CHANGE) == 0xb, "SKILL_STAT_CHANGE size");
static_assert(sizeof(_PC_QUEST_INFO_PC_QUEST_DATA_) == 0x3, "_PC_QUEST_INFO_PC_QUEST_DATA_ size");
static_assert(sizeof(_SAVE_QUEST_INFO_SAVE_QUEST_DATA_) == 0x1, "_SAVE_QUEST_INFO_SAVE_QUEST_DATA_ size");
static_assert(sizeof(_SKILL_) == 0xc, "_SKILL_ size");
static_assert(sizeof(_SOCIALINFO_) == 0x4, "_SOCIALINFO_ size");
static_assert(sizeof(_ITEM_IN_WEAR_) == 0x14, "_ITEM_IN_WEAR_ size");
static_assert(sizeof(_ITEM_IN_INVEN_) == 0x14, "_ITEM_IN_INVEN_ size");
static_assert(sizeof(_PET_INFO_) == 0x14, "_PET_INFO_ size");
static_assert(sizeof(_SAVE_QUEST_INFO_) == 0xc, "_SAVE_QUEST_INFO_ size");
static_assert(sizeof(_PC_2STAT_) == 0x1a, "_PC_2STAT_ size");
static_assert(sizeof(_ACCOUNT_ITEM_) == 0x10, "_ACCOUNT_ITEM_ size");
static_assert(sizeof(_CHARACTER_INFO_) == 0xb0, "_CHARACTER_INFO_ size");
static_assert(sizeof(_CLAN_INFO_) == 0x50, "_CLAN_INFO_ size");
static_assert(sizeof(_KNIGHT_INFO_) == 0x1c, "_KNIGHT_INFO_ size");
static_assert(sizeof(_LASTINGSKILL_MANAGEARRARY_) == 0x30, "_LASTINGSKILL_MANAGEARRARY_ size");
static_assert(sizeof(_LASTINGITEM_ARRAY_) == 0x8, "_LASTINGITEM_ARRAY_ size");
static_assert(sizeof(_PARTISAN_) == 0x8, "_PARTISAN_ size");
static_assert(sizeof(_APPRENTICE_INFO_) == 0x4, "_APPRENTICE_INFO_ size");
static_assert(sizeof(CBaseServer) == 0x800078, "CBaseServer size");
static_assert(sizeof(MSG_S2G_HEADER) == 0xa, "MSG_S2G_HEADER size");
static_assert(sizeof(MSG_S2C_HEADER) == 0xc, "MSG_S2C_HEADER size");
static_assert(sizeof(MSG_C2S_OP_CMD) == 0x4e, "MSG_C2S_OP_CMD size");
static_assert(sizeof(MSG_S2C_ERROR) == 0x4e, "MSG_S2C_ERROR size");
static_assert(sizeof(MSG_C2S_UNKNOWN_CHAR) == 0x13, "MSG_C2S_UNKNOWN_CHAR size");
static_assert(sizeof(MSG_S2C_UNKNOWN_CHAR) == 0x14, "MSG_S2C_UNKNOWN_CHAR size");
static_assert(sizeof(_ITEM_APPEAR_) == 0x4, "_ITEM_APPEAR_ size");
static_assert(sizeof(_PET_APPEAR_) == 0x4, "_PET_APPEAR_ size");
static_assert(sizeof(_SKILL_CAST_) == 0x3, "_SKILL_CAST_ size");
static_assert(sizeof(MSG_S2C_PC_APPEAR) == 0x79, "MSG_S2C_PC_APPEAR size");
static_assert(sizeof(MSG_S2C_PC_DISAPPEAR) == 0x10, "MSG_S2C_PC_DISAPPEAR size");
static_assert(sizeof(MSG_S2C_CHAR_LIST) == 0x37c, "MSG_S2C_CHAR_LIST size");
static_assert(sizeof(MSG_S2C_CHAR_LOGIN_OK) == 0x1d, "MSG_S2C_CHAR_LOGIN_OK size");
static_assert(sizeof(_PC_INFO_) == 0x3c, "_PC_INFO_ size");
static_assert(sizeof(_PC_STAT_UPDATE_) == 0x2e, "_PC_STAT_UPDATE_ size");
static_assert(sizeof(MSG_S2C_WORLD_LOGIN) == 0x40e, "MSG_S2C_WORLD_LOGIN size");
static_assert(sizeof(MSG_S2C_WARP_READY) == 0xe, "MSG_S2C_WARP_READY size");
static_assert(sizeof(MSG_C2S_WARP) == 0xe, "MSG_C2S_WARP size");
static_assert(sizeof(MSG_S2C_WARP) == 0x10, "MSG_S2C_WARP size");
static_assert(sizeof(MSG_S2C_WARP_LOGIN) == 0x3a8, "MSG_S2C_WARP_LOGIN size");
static_assert(sizeof(MSG_S2C_ANS_MOVE) == 0x12, "MSG_S2C_ANS_MOVE size");
static_assert(sizeof(MSG_S2C_SEE_MOVE) == 0x19, "MSG_S2C_SEE_MOVE size");
static_assert(sizeof(MSG_S2C_FIX_MOVE) == 0x10, "MSG_S2C_FIX_MOVE size");
static_assert(sizeof(MSG_S2C_SEE_STOP) == 0x14, "MSG_S2C_SEE_STOP size");
static_assert(sizeof(MSG_S2C_CHAR_LOGOUT) == 0xc, "MSG_S2C_CHAR_LOGOUT size");
static_assert(sizeof(_PET_STAT_) == 0x10, "_PET_STAT_ size");
static_assert(sizeof(MSG_S2C_STAT_AUTOUPDATE) == 0x6e, "MSG_S2C_STAT_AUTOUPDATE size");
static_assert(sizeof(MSG_S2C_PET_LEVELUP) == 0x11, "MSG_S2C_PET_LEVELUP size");
static_assert(sizeof(MSG_S2C_PET_BUY) == 0x25, "MSG_S2C_PET_BUY size");
static_assert(sizeof(MSG_S2C_NPC_APPEAR) == 0x34, "MSG_S2C_NPC_APPEAR size");
static_assert(sizeof(MSG_S2C_NPC_DISAPPEAR) == 0x10, "MSG_S2C_NPC_DISAPPEAR size");
static_assert(sizeof(MSG_S2C_NPC_MOVE) == 0x34, "MSG_S2C_NPC_MOVE size");
static_assert(sizeof(MSG_S2C_NPC_STATE) == 0x13, "MSG_S2C_NPC_STATE size");
static_assert(sizeof(MSG_S2C_NPC_ATTACK) == 0x27, "MSG_S2C_NPC_ATTACK size");
static_assert(sizeof(MSG_S2C_SEE_NPC_ATTACK) == 0x22, "MSG_S2C_SEE_NPC_ATTACK size");
static_assert(sizeof(_NPC_SKILL_DAMAGEINFO_) == 0x9, "_NPC_SKILL_DAMAGEINFO_ size");
static_assert(sizeof(MSG_S2C_SEE_NPC_SKILLATTACK) == 0xfb, "MSG_S2C_SEE_NPC_SKILLATTACK size");
static_assert(sizeof(MSG_S2C_ANS_ATTACK) == 0x22, "MSG_S2C_ANS_ATTACK size");
static_assert(sizeof(MSG_S2C_SEE_ATTACK) == 0x20, "MSG_S2C_SEE_ATTACK size");
static_assert(sizeof(MSG_S2C_UPDATE_PKCOUNT) == 0xf, "MSG_S2C_UPDATE_PKCOUNT size");
static_assert(sizeof(MSG_S2C_UPDATE_PCEXP) == 0x12, "MSG_S2C_UPDATE_PCEXP size");
static_assert(sizeof(MSG_S2C_SKILL_DELAY_INFO) == 0x2c, "MSG_S2C_SKILL_DELAY_INFO size");
static_assert(sizeof(MSG_S2C_LEARN_SKILL) == 0x17, "MSG_S2C_LEARN_SKILL size");
static_assert(sizeof(MSG_S2C_ERR_SKILL) == 0xe, "MSG_S2C_ERR_SKILL size");
static_assert(sizeof(_SKILL_DAMAGEINFO_) == 0xa, "_SKILL_DAMAGEINFO_ size");
static_assert(sizeof(MSG_S2C_DONE_SKILL) == 0x116, "MSG_S2C_DONE_SKILL size");
static_assert(sizeof(MSG_S2C_GET_SKILL) == 0x1c, "MSG_S2C_GET_SKILL size");
static_assert(sizeof(MSG_S2C_SEE_SKILL) == 0x112, "MSG_S2C_SEE_SKILL size");
static_assert(sizeof(MSG_S2C_CAST_SKILL) == 0x16, "MSG_S2C_CAST_SKILL size");
static_assert(sizeof(MSG_S2C_LASTING_SKILL) == 0x1f, "MSG_S2C_LASTING_SKILL size");
static_assert(sizeof(MSG_S2C_SEE_LASTING_SKILL) == 0x1c, "MSG_S2C_SEE_LASTING_SKILL size");
static_assert(sizeof(MSG_S2C_PC_LEVELUP) == 0x3c, "MSG_S2C_PC_LEVELUP size");
static_assert(sizeof(MSG_S2C_SEE_LEVELUP) == 0x10, "MSG_S2C_SEE_LEVELUP size");
static_assert(sizeof(MSG_S2C_ALLOT_POINT) == 0x3a, "MSG_S2C_ALLOT_POINT size");
static_assert(sizeof(MSG_S2C_ITEM_APPEAR) == 0x21, "MSG_S2C_ITEM_APPEAR size");
static_assert(sizeof(MSG_S2C_ITEM_DISAPPEAR) == 0x18, "MSG_S2C_ITEM_DISAPPEAR size");
static_assert(sizeof(MSG_S2C_PICKUP_ITEM) == 0x1d, "MSG_S2C_PICKUP_ITEM size");
static_assert(sizeof(MSG_S2C_DROP_ITEM) == 0x19, "MSG_S2C_DROP_ITEM size");
static_assert(sizeof(MSG_S2C_MOVE_ITEM) == 0x1e, "MSG_S2C_MOVE_ITEM size");
static_assert(sizeof(MSG_S2C_SEE_WEAR) == 0x14, "MSG_S2C_SEE_WEAR size");
static_assert(sizeof(MSG_S2C_WEAR_ITEM) == 0x38, "MSG_S2C_WEAR_ITEM size");
static_assert(sizeof(MSG_S2C_SEE_STRIP) == 0x13, "MSG_S2C_SEE_STRIP size");
static_assert(sizeof(MSG_S2C_STRIP_ITEM) == 0x2f, "MSG_S2C_STRIP_ITEM size");
static_assert(sizeof(MSG_S2C_BUY_ITEM) == 0x21, "MSG_S2C_BUY_ITEM size");
static_assert(sizeof(MSG_S2C_SELL_ITEM) == 0x19, "MSG_S2C_SELL_ITEM size");
static_assert(sizeof(MSG_S2C_GIVE_ITEM) == 0x15, "MSG_S2C_GIVE_ITEM size");
static_assert(sizeof(MSG_S2C_GIVEN_ITEM) == 0x2a, "MSG_S2C_GIVEN_ITEM size");
static_assert(sizeof(MSG_S2C_USE_POTION) == 0x11, "MSG_S2C_USE_POTION size");
static_assert(sizeof(MSG_S2C_ASK_DEAL) == 0x10, "MSG_S2C_ASK_DEAL size");
static_assert(sizeof(MSG_S2C_ANS_DEAL) == 0x11, "MSG_S2C_ANS_DEAL size");
static_assert(sizeof(MSG_S2C_PUTIN_ITEM) == 0x24, "MSG_S2C_PUTIN_ITEM size");
static_assert(sizeof(MSG_S2C_PUTOUT_ITEM) == 0x1c, "MSG_S2C_PUTOUT_ITEM size");
static_assert(sizeof(MSG_S2C_DECIDE_DEAL) == 0xc, "MSG_S2C_DECIDE_DEAL size");
static_assert(sizeof(MSG_S2C_SUCCESS_DEAL) == 0x1a4, "MSG_S2C_SUCCESS_DEAL size");
static_assert(sizeof(MSG_S2C_FAIL_DEAL) == 0xd, "MSG_S2C_FAIL_DEAL size");
static_assert(sizeof(MSG_S2C_PEAR_DECIDE) == 0xc, "MSG_S2C_PEAR_DECIDE size");
static_assert(sizeof(MSG_S2C_PUTIN_PET) == 0x20, "MSG_S2C_PUTIN_PET size");
static_assert(sizeof(MSG_S2C_PUTOUT_PET) == 0x10, "MSG_S2C_PUTOUT_PET size");
static_assert(sizeof(MSG_S2C_SUCCESS_DEAL_PET) == 0x34, "MSG_S2C_SUCCESS_DEAL_PET size");
static_assert(sizeof(MSG_S2C_CONFIRM_ITEM) == 0x21, "MSG_S2C_CONFIRM_ITEM size");
static_assert(sizeof(MSG_S2C_REMODEL_ITEM) == 0x1e, "MSG_S2C_REMODEL_ITEM size");
static_assert(sizeof(MSG_S2C_SET_PC2STAT) == 0x27, "MSG_S2C_SET_PC2STAT size");
static_assert(sizeof(MSG_C2S_SAY) == 0x5a, "MSG_C2S_SAY size");
static_assert(sizeof(MSG_S2C_SAY) == 0x5e, "MSG_S2C_SAY size");
static_assert(sizeof(MSG_C2S_QUEST_INFO) == 0x15, "MSG_C2S_QUEST_INFO size");
static_assert(sizeof(MSG_S2C_QUEST_INFO) == 0x1cc, "MSG_S2C_QUEST_INFO size");
static_assert(sizeof(MSG_C2S_QUEST_START) == 0x15, "MSG_C2S_QUEST_START size");
static_assert(sizeof(MSG_S2C_QUEST_START) == 0x15, "MSG_S2C_QUEST_START size");
static_assert(sizeof(MSG_S2C_QUEST_CONTINUE) == 0x1cc, "MSG_S2C_QUEST_CONTINUE size");
static_assert(sizeof(MSG_C2S_QUEST_CANCEL) == 0xc, "MSG_C2S_QUEST_CANCEL size");
static_assert(sizeof(MSG_S2C_QUEST_CANCEL) == 0xd, "MSG_S2C_QUEST_CANCEL size");
static_assert(sizeof(MSG_S2C_QUEST_STATE) == 0xcc, "MSG_S2C_QUEST_STATE size");
static_assert(sizeof(MSG_S2C_QUEST_OK) == 0x10, "MSG_S2C_QUEST_OK size");
static_assert(sizeof(MSG_S2C_ANS_HEAL) == 0x10, "MSG_S2C_ANS_HEAL size");
static_assert(sizeof(MSG_S2C_ASK_PARTY) == 0x10, "MSG_S2C_ASK_PARTY size");
static_assert(sizeof(MSG_S2C_ANS_PARTY) == 0xd, "MSG_S2C_ANS_PARTY size");
static_assert(sizeof(_PARTY_MEMBER_) == 0x1c, "_PARTY_MEMBER_ size");
static_assert(sizeof(MSG_S2C_PARTY_IN) == 0x28, "MSG_S2C_PARTY_IN size");
static_assert(sizeof(MSG_S2C_PARTY_LIST) == 0x7c, "MSG_S2C_PARTY_LIST size");
static_assert(sizeof(MSG_S2C_PARTY_OUT) == 0x10, "MSG_S2C_PARTY_OUT size");
static_assert(sizeof(MSG_S2C_PARTY_WHERE) == 0x16, "MSG_S2C_PARTY_WHERE size");
static_assert(sizeof(MSG_S2C_PARTY_HP) == 0x12, "MSG_S2C_PARTY_HP size");
static_assert(sizeof(MSG_S2C_PC_ATTACK) == 0x1b, "MSG_S2C_PC_ATTACK size");
static_assert(sizeof(MSG_S2C_ACTIVE_PET) == 0x2f, "MSG_S2C_ACTIVE_PET size");
static_assert(sizeof(MSG_S2C_INACTIVE_PET) == 0x2b, "MSG_S2C_INACTIVE_PET size");
static_assert(sizeof(MSG_S2C_SEE_PET) == 0x15, "MSG_S2C_SEE_PET size");
static_assert(sizeof(MSG_S2C_PET_DIE) == 0x2a, "MSG_S2C_PET_DIE size");
static_assert(sizeof(MSG_S2C_PET_SELL) == 0x15, "MSG_S2C_PET_SELL size");
static_assert(sizeof(MSG_S2C_FEED_PET) == 0x1c, "MSG_S2C_FEED_PET size");
static_assert(sizeof(MSG_S2C_USESCROLL) == 0x12, "MSG_S2C_USESCROLL size");
static_assert(sizeof(MSG_S2C_UPDATE_MONEY) == 0x11, "MSG_S2C_UPDATE_MONEY size");
static_assert(sizeof(MSG_S2C_REVIVE_PET) == 0x20, "MSG_S2C_REVIVE_PET size");
static_assert(sizeof(MSG_S2C_SVR_TIME) == 0xe, "MSG_S2C_SVR_TIME size");
static_assert(sizeof(MSG_S2C_GESTURE) == 0x11, "MSG_S2C_GESTURE size");
static_assert(sizeof(_GAME_OPTION_) == 0x1, "_GAME_OPTION_ size");
static_assert(sizeof(MSG_S2C_OPTION) == 0xd, "MSG_S2C_OPTION size");
static_assert(sizeof(MSG_S2C_SUBMAP_INFO) == 0x25, "MSG_S2C_SUBMAP_INFO size");
static_assert(sizeof(MSG_S2C_ENTER) == 0x13, "MSG_S2C_ENTER size");
static_assert(sizeof(MSG_S2C_OTHER_UPDATE) == 0x12, "MSG_S2C_OTHER_UPDATE size");
static_assert(sizeof(MSG_S2C_ITEM_COMBINATION) == 0x1e, "MSG_S2C_ITEM_COMBINATION size");
static_assert(sizeof(MSG_S2C_LOTTO_PURCHASE) == 0x22, "MSG_S2C_LOTTO_PURCHASE size");
static_assert(sizeof(MSG_S2C_LOTTO_QUERY_PRIZE) == 0x10, "MSG_S2C_LOTTO_QUERY_PRIZE size");
static_assert(sizeof(MSG_S2C_LOTTO_QUERY_HISTORY) == 0x29, "MSG_S2C_LOTTO_QUERY_HISTORY size");
static_assert(sizeof(MSG_S2C_LOTTO_SALE) == 0x15, "MSG_S2C_LOTTO_SALE size");
static_assert(sizeof(MSG_S2C_LOTTO_NOTIFY) == 0x1b, "MSG_S2C_LOTTO_NOTIFY size");
static_assert(sizeof(MSG_S2C_DERBY_NOTICE) == 0xf, "MSG_S2C_DERBY_NOTICE size");
static_assert(sizeof(MSG_S2C_DERBY_INDEX_QUERY) == 0xe, "MSG_S2C_DERBY_INDEX_QUERY size");
static_assert(sizeof(_DERBY_MONSTER_INFO_) == 0xa, "_DERBY_MONSTER_INFO_ size");
static_assert(sizeof(MSG_S2C_DERBY_MONSTER_QUERY) == 0x40, "MSG_S2C_DERBY_MONSTER_QUERY size");
static_assert(sizeof(MSG_S2C_DERBY_RATIO_QUERY) == 0x4e, "MSG_S2C_DERBY_RATIO_QUERY size");
static_assert(sizeof(MSG_S2C_DERBY_PURCHASE) == 0x22, "MSG_S2C_DERBY_PURCHASE size");
static_assert(sizeof(MSG_S2C_DERBY_RACE_START) == 0x86, "MSG_S2C_DERBY_RACE_START size");
static_assert(sizeof(_DERBY_HISTORY_INFO_) == 0x10, "_DERBY_HISTORY_INFO_ size");
static_assert(sizeof(MSG_S2C_DERBY_RESULT_QUERY) == 0x1e, "MSG_S2C_DERBY_RESULT_QUERY size");
static_assert(sizeof(MSG_S2C_DERBY_HISTORY_QUERY) == 0xd2, "MSG_S2C_DERBY_HISTORY_QUERY size");
static_assert(sizeof(MSG_S2C_DERBY_EXCHANGE) == 0x19, "MSG_S2C_DERBY_EXCHANGE size");
static_assert(sizeof(MSG_C2S_USE_ITEM) == 0x10, "MSG_C2S_USE_ITEM size");
static_assert(sizeof(MSG_S2C_ASK_APPRENTICE_IN) == 0x10, "MSG_S2C_ASK_APPRENTICE_IN size");
static_assert(sizeof(MSG_S2C_ANS_APPRENTICE_IN) == 0x29, "MSG_S2C_ANS_APPRENTICE_IN size");
static_assert(sizeof(MSG_S2C_APPRENTICE_UPDATE) == 0x12, "MSG_S2C_APPRENTICE_UPDATE size");
static_assert(sizeof(MSG_S2C_APPRENTICE_HP) == 0xe, "MSG_S2C_APPRENTICE_HP size");
static_assert(sizeof(MSG_S2C_ASK_APPRENTICE_OUT) == 0xc, "MSG_S2C_ASK_APPRENTICE_OUT size");
static_assert(sizeof(MSG_S2C_SHUE_COMBINATION) == 0x26, "MSG_S2C_SHUE_COMBINATION size");
static_assert(sizeof(MSG_S2S_HEADER) == 0x2, "MSG_S2S_HEADER size");
static_assert(sizeof(MSG_S2M_SVR_LOGIN) == 0x3, "MSG_S2M_SVR_LOGIN size");
static_assert(sizeof(MSG_S2M_CHAR_LOGIN) == 0x9c, "MSG_S2M_CHAR_LOGIN size");
static_assert(sizeof(MSG_S2M_WORLD_LOGIN) == 0x13, "MSG_S2M_WORLD_LOGIN size");
static_assert(sizeof(_PCDATA_) == 0x414, "_PCDATA_ size");
static_assert(sizeof(MSG_M2S_WORLD_LOGIN) == 0x48d, "MSG_M2S_WORLD_LOGIN size");
static_assert(sizeof(MSG_S2M_CHAR_LOGOUT) == 0x41a, "MSG_S2M_CHAR_LOGOUT size");
static_assert(sizeof(MSG_S2M_DATA_UPDATE) == 0x41a, "MSG_S2M_DATA_UPDATE size");
static_assert(sizeof(_ZONE_WARP_DATA_) == 0x10c, "_ZONE_WARP_DATA_ size");
static_assert(sizeof(MSG_S2M_WARP_ZONE) == 0x527, "MSG_S2M_WARP_ZONE size");
static_assert(sizeof(MSG_M2S_WARP_ZONE) == 0xb, "MSG_M2S_WARP_ZONE size");
static_assert(sizeof(MSG_S2M_WARP_LOGIN) == 0x7, "MSG_S2M_WARP_LOGIN size");
static_assert(sizeof(MSG_M2S_WARP_LOGIN) == 0x537, "MSG_M2S_WARP_LOGIN size");
static_assert(sizeof(MSG_M2S_PASS2GATE) == 0x107, "MSG_M2S_PASS2GATE size");
static_assert(sizeof(MSG_S2M_SAY) == 0x62, "MSG_S2M_SAY size");
static_assert(sizeof(MSG_S2M_PARTY_CREATE) == 0x13, "MSG_S2M_PARTY_CREATE size");
static_assert(sizeof(MSG_S2M_PARTY_JOIN) == 0x13, "MSG_S2M_PARTY_JOIN size");
static_assert(sizeof(MSG_S2M_PARTY_OUT) == 0xa, "MSG_S2M_PARTY_OUT size");
static_assert(sizeof(MSG_M2S_PARTY_OUT) == 0xe, "MSG_M2S_PARTY_OUT size");
static_assert(sizeof(_PARTNER_INFO_) == 0x14, "_PARTNER_INFO_ size");
static_assert(sizeof(MSG_S2M_APPRENTICE_CREATE) == 0x2e, "MSG_S2M_APPRENTICE_CREATE size");
static_assert(sizeof(_APPRENTICE_MEMBER_) == 0x20, "_APPRENTICE_MEMBER_ size");
static_assert(sizeof(MSG_S2M_APPRENTICE_UPDATE) == 0x26, "MSG_S2M_APPRENTICE_UPDATE size");
static_assert(sizeof(MSG_S2M_APPRENTICE_QUIT) == 0xa, "MSG_S2M_APPRENTICE_QUIT size");
static_assert(sizeof(MSG_M2S_ADMIN) == 0x4b, "MSG_M2S_ADMIN size");
static_assert(sizeof(MSG_S2M_CHAR_DISCONNECT) == 0x7, "MSG_S2M_CHAR_DISCONNECT size");
static_assert(sizeof(MSG_S2G_DISCONNECT) == 0xa, "MSG_S2G_DISCONNECT size");
static_assert(sizeof(MSG_S2G_SWITCH_ZONE) == 0xb, "MSG_S2G_SWITCH_ZONE size");
static_assert(sizeof(MSG_S2G_BROADCAST) == 0xa, "MSG_S2G_BROADCAST size");
static_assert(sizeof(_ITEM_IN_STORAGE_) == 0x14, "_ITEM_IN_STORAGE_ size");
static_assert(sizeof(MSG_S2C_ANS_OPEN_STORAGE) == 0x652, "MSG_S2C_ANS_OPEN_STORAGE size");
static_assert(sizeof(MSG_S2C_ANS_INVEN2STORAGE) == 0x1b, "MSG_S2C_ANS_INVEN2STORAGE size");
static_assert(sizeof(MSG_S2C_ANS_STORAGE2INVEN) == 0x17, "MSG_S2C_ANS_STORAGE2INVEN size");
static_assert(sizeof(MSG_S2C_ANS_DEPOSITE_MONEY) == 0x15, "MSG_S2C_ANS_DEPOSITE_MONEY size");
static_assert(sizeof(MSG_S2C_ANS_WITHDRAW_MONEY) == 0x15, "MSG_S2C_ANS_WITHDRAW_MONEY size");
static_assert(sizeof(MSG_S2C_ANS_MOVE_ITEMINSTORAGE) == 0x1f, "MSG_S2C_ANS_MOVE_ITEMINSTORAGE size");
static_assert(sizeof(MSG_S2M_LOAD_STORAGE) == 0xf, "MSG_S2M_LOAD_STORAGE size");
static_assert(sizeof(MSG_M2S_LOAD_STORAGE) == 0x64b, "MSG_M2S_LOAD_STORAGE size");
static_assert(sizeof(MSG_S2M_SAVE_STORAGE) == 0x653, "MSG_S2M_SAVE_STORAGE size");
static_assert(sizeof(MSG_S2M_OP_CMD) == 0x55, "MSG_S2M_OP_CMD size");
static_assert(sizeof(MSG_M2S_OP_CMD) == 0x51, "MSG_M2S_OP_CMD size");
static_assert(sizeof(MSG_S2C_CLAN) == 0x16, "MSG_S2C_CLAN size");
static_assert(sizeof(MSG_S2C_ASK_CLAN) == 0x10, "MSG_S2C_ASK_CLAN size");
static_assert(sizeof(MSG_S2C_JOIN_CLAN) == 0x11, "MSG_S2C_JOIN_CLAN size");
static_assert(sizeof(MSG_S2C_BOLT_CLAN) == 0x11, "MSG_S2C_BOLT_CLAN size");
static_assert(sizeof(MSG_S2C_UPDATE_CLAN) == 0x1a7, "MSG_S2C_UPDATE_CLAN size");
static_assert(sizeof(MSG_S2C_UPDATE_KNIGHT) == 0x29, "MSG_S2C_UPDATE_KNIGHT size");
static_assert(sizeof(MSG_S2C_CLAN_FAIL) == 0x15, "MSG_S2C_CLAN_FAIL size");
static_assert(sizeof(MSG_S2C_CHANGE_NATION) == 0x15, "MSG_S2C_CHANGE_NATION size");
static_assert(sizeof(MSG_S2M_CLAN) == 0x45, "MSG_S2M_CLAN size");
static_assert(sizeof(MSG_M2S_CLAN) == 0xd, "MSG_M2S_CLAN size");
static_assert(sizeof(MSG_S2M_KNIGHT) == 0x19, "MSG_S2M_KNIGHT size");
static_assert(sizeof(MSG_M2S_KNIGHT) == 0xd, "MSG_M2S_KNIGHT size");
static_assert(sizeof(MSG_S2M_CLAN_INFO) == 0x13, "MSG_S2M_CLAN_INFO size");
static_assert(sizeof(MSG_M2S_CLAN_INFO) == 0x1a2, "MSG_M2S_CLAN_INFO size");
static_assert(sizeof(MSG_M2S_KNIGHT_INFO) == 0x24, "MSG_M2S_KNIGHT_INFO size");
static_assert(sizeof(MSG_S2M_CLAN_UPDATE) == 0x6, "MSG_S2M_CLAN_UPDATE size");
static_assert(sizeof(MSG_M2S_CLAN_FAIL) == 0xc, "MSG_M2S_CLAN_FAIL size");
static_assert(sizeof(MSG_S2C_PARTY_QUEST) == 0xf, "MSG_S2C_PARTY_QUEST size");
static_assert(sizeof(MSG_S2C_PARTY_QUEST_TIMER) == 0xe, "MSG_S2C_PARTY_QUEST_TIMER size");
static_assert(sizeof(_BATTLE_WARP_DATA_) == 0x8, "_BATTLE_WARP_DATA_ size");
static_assert(sizeof(MSG_C2S_ASK_WARP_Z2B) == 0x14, "MSG_C2S_ASK_WARP_Z2B size");
static_assert(sizeof(MSG_S2M_ASK_WARP_Z2B) == 0x423, "MSG_S2M_ASK_WARP_Z2B size");
static_assert(sizeof(MSG_M2S_ANS_WARP_Z2B) == 0x9, "MSG_M2S_ANS_WARP_Z2B size");
static_assert(sizeof(MSG_S2C_ANS_WARP_Z2B) == 0xd, "MSG_S2C_ANS_WARP_Z2B size");
static_assert(sizeof(MSG_C2S_ASK_WARP_B2Z) == 0xc, "MSG_C2S_ASK_WARP_B2Z size");
static_assert(sizeof(MSG_S2M_ASK_WARP_B2Z) == 0x7, "MSG_S2M_ASK_WARP_B2Z size");
static_assert(sizeof(MSG_M2S_ANS_WARP_B2Z) == 0x42b, "MSG_M2S_ANS_WARP_B2Z size");
static_assert(sizeof(MSG_S2C_ANS_WARP_B2Z) == 0x3a8, "MSG_S2C_ANS_WARP_B2Z size");
static_assert(sizeof(MSG_C2S_ASK_PVP) == 0x10, "MSG_C2S_ASK_PVP size");
static_assert(sizeof(MSG_S2C_ASK_PVP) == 0x10, "MSG_S2C_ASK_PVP size");
static_assert(sizeof(MSG_C2S_ANS_PVP) == 0x11, "MSG_C2S_ANS_PVP size");
static_assert(sizeof(MSG_S2C_ANS_PVP) == 0x11, "MSG_S2C_ANS_PVP size");
static_assert(sizeof(MSG_M2S_CHANGE_REIGN) == 0x185, "MSG_M2S_CHANGE_REIGN size");
static_assert(sizeof(MSG_C2S_ASK_SHOP_INFO) == 0x10, "MSG_C2S_ASK_SHOP_INFO size");
static_assert(sizeof(MSG_S2C_ANS_SHOP_INFO) == 0x88, "MSG_S2C_ANS_SHOP_INFO size");
static_assert(sizeof(MSG_C2S_ASK_GIVE_MY_TAX) == 0x10, "MSG_C2S_ASK_GIVE_MY_TAX size");
static_assert(sizeof(MSG_S2C_ANS_GIVE_MY_TAX) == 0x15, "MSG_S2C_ANS_GIVE_MY_TAX size");
static_assert(sizeof(MSG_S2C_FORTIFIER) == 0x11, "MSG_S2C_FORTIFIER size");
static_assert(sizeof(MSG_S2C_RETRIEVE_POINT) == 0x3f, "MSG_S2C_RETRIEVE_POINT size");
static_assert(sizeof(MSG_S2C_CAO_MITIGATION) == 0x13, "MSG_S2C_CAO_MITIGATION size");
static_assert(sizeof(MSG_S2C_UPDATE_LORE) == 0x11, "MSG_S2C_UPDATE_LORE size");
static_assert(sizeof(MSG_Z2C_CONFIRM_MARK) == 0x19, "MSG_Z2C_CONFIRM_MARK size");
static_assert(sizeof(MSG_Z2M_REGISTER_MARK) == 0x13, "MSG_Z2M_REGISTER_MARK size");
static_assert(sizeof(MSG_Z2M_CONFIRM_MARK) == 0x18, "MSG_Z2M_CONFIRM_MARK size");
static_assert(sizeof(_AGIT_INFO_) == 0x42, "_AGIT_INFO_ size");
static_assert(sizeof(MSG_S2C_AGIT_INFO) == 0x67f, "MSG_S2C_AGIT_INFO size");
static_assert(sizeof(_AUCTION_INFO) == 0x30, "_AUCTION_INFO size");
static_assert(sizeof(MSG_S2C_AUCTION_INFO) == 0x3cd, "MSG_S2C_AUCTION_INFO size");
static_assert(sizeof(MSG_S2C_AGIT_ENTER) == 0x13, "MSG_S2C_AGIT_ENTER size");
static_assert(sizeof(MSG_S2C_AGIT_PUTUP_AUCTION) == 0xd, "MSG_S2C_AGIT_PUTUP_AUCTION size");
static_assert(sizeof(MSG_S2C_AGIT_BIDON) == 0x11, "MSG_S2C_AGIT_BIDON size");
static_assert(sizeof(MSG_S2C_AGIT_PAY_EXPENSE) == 0x11, "MSG_S2C_AGIT_PAY_EXPENSE size");
static_assert(sizeof(MSG_S2C_AGIT_CHANGE_NAME) == 0x11, "MSG_S2C_AGIT_CHANGE_NAME size");
static_assert(sizeof(MSG_S2C_AGIT_REPAY_MONEY) == 0x11, "MSG_S2C_AGIT_REPAY_MONEY size");
static_assert(sizeof(MSG_S2C_AGIT_OBTAIN_SALEMONEY) == 0x11, "MSG_S2C_AGIT_OBTAIN_SALEMONEY size");
static_assert(sizeof(MSG_S2C_TYR_ERROR) == 0xe, "MSG_S2C_TYR_ERROR size");
static_assert(sizeof(MSG_S2C_TYR_ENTRY) == 0x8f, "MSG_S2C_TYR_ENTRY size");
static_assert(sizeof(_TYR_ENTRY_) == 0x2d, "_TYR_ENTRY_ size");
static_assert(sizeof(MSG_S2C_TYR_INFO) == 0x882, "MSG_S2C_TYR_INFO size");
static_assert(sizeof(MSG_S2M_WGS_PAY) == 0x2c, "MSG_S2M_WGS_PAY size");
static_assert(sizeof(MSG_M2S_WGS_PAY) == 0x2c, "MSG_M2S_WGS_PAY size");
static_assert(sizeof(MSG_S2C_PAYINFO) == 0x11, "MSG_S2C_PAYINFO size");
static_assert(sizeof(CShareObject) == 0x8, "CShareObject size");
static_assert(sizeof(CSyncSection) == 0x1c, "CSyncSection size");
static_assert(sizeof(CLinkedList) == 0x8, "CLinkedList size");
static_assert(sizeof(_ListNODE_) == 0xc, "_ListNODE_ size");
static_assert(sizeof(_ITEM_LEVEL_) == 0x10, "_ITEM_LEVEL_ size");
static_assert(sizeof(_ITEM_TABLE0_DATA) == 0xd0, "_ITEM_TABLE0_DATA size");
static_assert(sizeof(_ITEM_TABLE1_DATA_) == 0x2c, "_ITEM_TABLE1_DATA_ size");
static_assert(sizeof(_ITEM_TABLE2_DATA_) == 0x28, "_ITEM_TABLE2_DATA_ size");
static_assert(sizeof(_ITEM_TABLE3_DATA_) == 0x28, "_ITEM_TABLE3_DATA_ size");
static_assert(sizeof(_ITEM_COUNTER) == 0x8, "_ITEM_COUNTER size");
static_assert(sizeof(_ITEM_COMBINATION_TABLE_) == 0x20, "_ITEM_COMBINATION_TABLE_ size");
static_assert(sizeof(CItemManage) == 0x87e04, "CItemManage size");
static_assert(sizeof(EXCEL_LEVEL_DATA) == 0x12, "EXCEL_LEVEL_DATA size");
static_assert(sizeof(CSkill) == 0xc, "CSkill size");
static_assert(sizeof(CKilledCharManage) == 0x20, "CKilledCharManage size");
static_assert(sizeof(_OBJECT_) == 0x1, "_OBJECT_ size");
static_assert(sizeof(CSimpleSyncSection) == 0x8, "CSimpleSyncSection size");
static_assert(sizeof(CPC_CPCStatChange) == 0x14, "CPC_CPCStatChange size");
static_assert(sizeof(CCheckHACK) == 0x24, "CCheckHACK size");
static_assert(sizeof(CPC_REMEMBER_ENEMY_) == 0x18, "CPC_REMEMBER_ENEMY_ size");
static_assert(sizeof(CPCManage) == 0x484c, "CPCManage size");
static_assert(sizeof(CNPC_NPC_REMEMBER_PC_) == 0xc, "CNPC_NPC_REMEMBER_PC_ size");
static_assert(sizeof(CNPC_CNPCStatChange) == 0xe, "CNPC_CNPCStatChange size");
static_assert(sizeof(CNPC) == 0x5d4, "CNPC size");
static_assert(sizeof(CMemBlk) == 0x4, "CMemBlk size");
static_assert(sizeof(CMemManager) == 0x20, "CMemManager size");
static_assert(sizeof(_CELL_) == 0x4, "_CELL_ size");
static_assert(sizeof(_DROP_ITEM_) == 0xc, "_DROP_ITEM_ size");
static_assert(sizeof(CCell) == 0x24, "CCell size");
static_assert(sizeof(CBlock) == 0x44, "CBlock size");
static_assert(sizeof(CAStar) == 0x460, "CAStar size");
static_assert(sizeof(_WARP_) == 0x8, "_WARP_ size");
static_assert(sizeof(CMap) == 0x48590, "CMap size");
static_assert(sizeof(_NPC_DATA_TABLE_NPC_ATTACK_INFO_) == 0x8, "_NPC_DATA_TABLE_NPC_ATTACK_INFO_ size");
static_assert(sizeof(_NPC_DROPITEM_TABLE_ITEM_DROPRATE_) == 0x8, "_NPC_DROPITEM_TABLE_ITEM_DROPRATE_ size");
static_assert(sizeof(CNPCRecallMemMgr) == 0x8, "CNPCRecallMemMgr size");
static_assert(sizeof(CNPCWaitRecall) == 0x20, "CNPCWaitRecall size");
static_assert(sizeof(CNPCAI) == 0xb8, "CNPCAI size");
static_assert(sizeof(_PET_TABLE_DATA_) == 0x28, "_PET_TABLE_DATA_ size");
static_assert(sizeof(CPetManage) == 0x410c, "CPetManage size");
static_assert(sizeof(_QUEST_HEADER_) == 0x1cc, "_QUEST_HEADER_ size");
static_assert(sizeof(_QUEST_NEEDS_) == 0x18, "_QUEST_NEEDS_ size");
static_assert(sizeof(_QUEST_REWARD_) == 0x34, "_QUEST_REWARD_ size");
static_assert(sizeof(_QUEST_CONTENTS_) == 0xdc, "_QUEST_CONTENTS_ size");
static_assert(sizeof(CQuest) == 0x10, "CQuest size");
static_assert(sizeof(CUDPSock) == 0x40c, "CUDPSock size");
static_assert(sizeof(CSimpleCrypt) == 0x10, "CSimpleCrypt size");
static_assert(sizeof(CGameLog) == 0x84, "CGameLog size");
static_assert(sizeof(CTimeFunc) == 0x1, "CTimeFunc size");
static_assert(sizeof(MSG_HEADER) == 0x2, "MSG_HEADER size");
static_assert(sizeof(MSG_V2S_CMM_KILL) == 0x2, "MSG_V2S_CMM_KILL size");
static_assert(sizeof(MSG_S2V_CMM_KILL) == 0x2, "MSG_S2V_CMM_KILL size");
static_assert(sizeof(MSG_V2S_MAIN_SHOUT) == 0x42, "MSG_V2S_MAIN_SHOUT size");
static_assert(sizeof(MSG_V2S_MAIN_WHISPER) == 0x4f, "MSG_V2S_MAIN_WHISPER size");
static_assert(sizeof(MSG_S2V_CMM_ALIVE) == 0x2, "MSG_S2V_CMM_ALIVE size");
static_assert(sizeof(MSG_S2V_MAIN_SHOUT) == 0x42, "MSG_S2V_MAIN_SHOUT size");
static_assert(sizeof(_MAP_INFO_) == 0x4, "_MAP_INFO_ size");
static_assert(sizeof(MSG_S2V_ZONE_INFO) == 0xa, "MSG_S2V_ZONE_INFO size");
static_assert(sizeof(MSG_S2V_WARNNING) == 0x82, "MSG_S2V_WARNNING size");
static_assert(sizeof(CPartyQuest_CHALLENGER_) == 0x8, "CPartyQuest_CHALLENGER_ size");
static_assert(sizeof(CPartyQuest) == 0x60, "CPartyQuest size");
static_assert(sizeof(_QUEST_PORTAL_NPC_) == 0x14, "_QUEST_PORTAL_NPC_ size");
static_assert(sizeof(_LOTTO_LOG_DATA_) == 0x6c, "_LOTTO_LOG_DATA_ size");
static_assert(sizeof(CLottoManager) == 0x98, "CLottoManager size");
static_assert(sizeof(_AGIT_STORAGE_) == 0x6b8, "_AGIT_STORAGE_ size");
static_assert(sizeof(CAgit) == 0x738, "CAgit size");
static_assert(sizeof(_AGIT_TABLE_INFO_) == 0x18, "_AGIT_TABLE_INFO_ size");
static_assert(sizeof(_REIGNCLAN_) == 0x1c8, "_REIGNCLAN_ size");
static_assert(sizeof(CReignMgr) == 0x1c8, "CReignMgr size");
static_assert(sizeof(CDerbyManager) == 0x2080, "CDerbyManager size");
static_assert(sizeof(CMainServer) == 0x80007c, "CMainServer size");
static_assert(sizeof(_PC_QUEST_INFO_) == 0x1c, "_PC_QUEST_INFO_ size");
static_assert(sizeof(_PC_DIEINFO_) == 0x8, "_PC_DIEINFO_ size");
static_assert(sizeof(_WAIT_RECALL_) == 0x14, "_WAIT_RECALL_ size");
static_assert(sizeof(_AGIT_REPAY_) == 0x14, "_AGIT_REPAY_ size");
static_assert(sizeof(_NPC_DATA_TABLE_) == 0x48, "_NPC_DATA_TABLE_ size");
static_assert(sizeof(_NPC_DROPITEM_TABLE_) == 0x1f4, "_NPC_DROPITEM_TABLE_ size");
static_assert(sizeof(CAStar_NODE) == 0x3c, "CAStar_NODE size");
static_assert(sizeof(CAStar_STACK) == 0x8, "CAStar_STACK size");
static_assert(sizeof(_WARP_WAIT_PC_) == 0xc, "_WARP_WAIT_PC_ size");
static_assert(sizeof(_LOG_DATA_) == 0x804, "_LOG_DATA_ size");
static_assert(sizeof(_QUEST_TABLE_) == 0x99c, "_QUEST_TABLE_ size");
static_assert(sizeof(_AGIT_AUCTION_) == 0x9c, "_AGIT_AUCTION_ size");
static_assert(sizeof(_ITEM_TABLE_FOR_EVENT) == 0x4, "_ITEM_TABLE_FOR_EVENT size");
static_assert(sizeof(CAgitAuctionManager) == 0x30, "CAgitAuctionManager size");
static_assert(sizeof(CAgitManager) == 0x1aee0, "CAgitManager size");
static_assert(sizeof(CLoopSleepMgr) == 0x14, "CLoopSleepMgr size");
static_assert(sizeof(_LAST_CALL_INFO_) == 0x108, "_LAST_CALL_INFO_ size");
static_assert(sizeof(CMsgCrypt) == 0x14, "CMsgCrypt size");
static_assert(sizeof(CGateServer) == 0x80009c, "CGateServer size");
static_assert(sizeof(CTickManage) == 0x38, "CTickManage size");
static_assert(sizeof(MSG_DFLT_HEADER) == 0xa, "MSG_DFLT_HEADER size");
static_assert(sizeof(MSG_G2S_NEW_CLIENT) == 0x1f, "MSG_G2S_NEW_CLIENT size");
static_assert(sizeof(MSG_G2S_DISCONNECT) == 0xb, "MSG_G2S_DISCONNECT size");
static_assert(sizeof(MSG_C2S_ASK_MOVE) == 0x11, "MSG_C2S_ASK_MOVE size");
static_assert(sizeof(MSG_C2S_PC_MOVE) == 0x11, "MSG_C2S_PC_MOVE size");
static_assert(sizeof(MSG_C2S_WORLD_LOGIN) == 0x19, "MSG_C2S_WORLD_LOGIN size");
static_assert(sizeof(MSG_C2S_CHAR_LOGOUT) == 0xc, "MSG_C2S_CHAR_LOGOUT size");
static_assert(sizeof(MSG_C2S_ASK_ATTACK) == 0x12, "MSG_C2S_ASK_ATTACK size");
static_assert(sizeof(MSG_C2S_ASK_SKILL) == 0x12, "MSG_C2S_ASK_SKILL size");
static_assert(sizeof(MSG_C2S_PICKUP_ITEM) == 0x18, "MSG_C2S_PICKUP_ITEM size");
static_assert(sizeof(MSG_C2S_DROP_ITEM) == 0x15, "MSG_C2S_DROP_ITEM size");
static_assert(sizeof(MSG_C2S_USE_POTION) == 0xd, "MSG_C2S_USE_POTION size");
static_assert(sizeof(MSG_C2S_MOVE_ITEM) == 0x16, "MSG_C2S_MOVE_ITEM size");
static_assert(sizeof(MSG_C2S_WEAR_ITEM) == 0x14, "MSG_C2S_WEAR_ITEM size");
static_assert(sizeof(MSG_C2S_STRIP_ITEM) == 0x14, "MSG_C2S_STRIP_ITEM size");
static_assert(sizeof(MSG_C2S_BUY_ITEM) == 0x14, "MSG_C2S_BUY_ITEM size");
static_assert(sizeof(MSG_C2S_SELL_ITEM) == 0x20, "MSG_C2S_SELL_ITEM size");
static_assert(sizeof(MSG_C2S_GIVE_ITEM) == 0x18, "MSG_C2S_GIVE_ITEM size");
static_assert(sizeof(MSG_C2S_ASK_DEAL) == 0x10, "MSG_C2S_ASK_DEAL size");
static_assert(sizeof(MSG_C2S_ANS_DEAL) == 0x11, "MSG_C2S_ANS_DEAL size");
static_assert(sizeof(MSG_C2S_PUTIN_ITEM) == 0x1c, "MSG_C2S_PUTIN_ITEM size");
static_assert(sizeof(MSG_C2S_PUTOUT_ITEM) == 0x1c, "MSG_C2S_PUTOUT_ITEM size");
static_assert(sizeof(MSG_C2S_DECIDE_DEAL) == 0xd, "MSG_C2S_DECIDE_DEAL size");
static_assert(sizeof(MSG_C2S_CONFIRM_DEAL) == 0xd, "MSG_C2S_CONFIRM_DEAL size");
static_assert(sizeof(MSG_C2S_ALLOT_POINT) == 0x11, "MSG_C2S_ALLOT_POINT size");
static_assert(sizeof(MSG_C2S_ASK_HEAL) == 0x10, "MSG_C2S_ASK_HEAL size");
static_assert(sizeof(MSG_C2S_LEARN_SKILL) == 0x15, "MSG_C2S_LEARN_SKILL size");
static_assert(sizeof(MSG_C2S_CONFIRM_ITEM) == 0x19, "MSG_C2S_CONFIRM_ITEM size");
static_assert(sizeof(MSG_C2S_REMODEL_ITEM) == 0x1e, "MSG_C2S_REMODEL_ITEM size");
static_assert(sizeof(MSG_C2S_ASK_PARTY) == 0x10, "MSG_C2S_ASK_PARTY size");
static_assert(sizeof(MSG_C2S_ANS_PARTY) == 0x11, "MSG_C2S_ANS_PARTY size");
static_assert(sizeof(MSG_C2S_OUT_PARTY) == 0xc, "MSG_C2S_OUT_PARTY size");
static_assert(sizeof(MSG_C2S_RETURN2HERE) == 0x12, "MSG_C2S_RETURN2HERE size");
static_assert(sizeof(MSG_C2S_ACTIVE_PET) == 0x10, "MSG_C2S_ACTIVE_PET size");
static_assert(sizeof(MSG_C2S_INACTIVE_PET) == 0xc, "MSG_C2S_INACTIVE_PET size");
static_assert(sizeof(MSG_C2S_PET_BUY) == 0x12, "MSG_C2S_PET_BUY size");
static_assert(sizeof(MSG_C2S_PET_SELL) == 0x14, "MSG_C2S_PET_SELL size");
static_assert(sizeof(MSG_C2S_FEED_PET) == 0x10, "MSG_C2S_FEED_PET size");
static_assert(sizeof(MSG_C2S_USESCROLL) == 0x11, "MSG_C2S_USESCROLL size");
static_assert(sizeof(MSG_C2S_PUTIN_PET) == 0x10, "MSG_C2S_PUTIN_PET size");
static_assert(sizeof(MSG_C2S_PUTOUT_PET) == 0x10, "MSG_C2S_PUTOUT_PET size");
static_assert(sizeof(MSG_C2S_ASK_OPEN_STORAGE) == 0x10, "MSG_C2S_ASK_OPEN_STORAGE size");
static_assert(sizeof(MSG_C2S_ASK_INVEN2STORAGE) == 0x1a, "MSG_C2S_ASK_INVEN2STORAGE size");
static_assert(sizeof(MSG_C2S_ASK_STORAGE2INVEN) == 0x1a, "MSG_C2S_ASK_STORAGE2INVEN size");
static_assert(sizeof(MSG_C2S_ASK_DEPOSITE_MONEY) == 0x14, "MSG_C2S_ASK_DEPOSITE_MONEY size");
static_assert(sizeof(MSG_C2S_ASK_WITHDRAW_MONEY) == 0x14, "MSG_C2S_ASK_WITHDRAW_MONEY size");
static_assert(sizeof(MSG_C2S_ASK_CLOSE_STORAGE) == 0x10, "MSG_C2S_ASK_CLOSE_STORAGE size");
static_assert(sizeof(MSG_C2S_ASK_MOVE_ITEMINSTORAGE) == 0x1a, "MSG_C2S_ASK_MOVE_ITEMINSTORAGE size");
static_assert(sizeof(MSG_C2S_REVIVE_PET) == 0x14, "MSG_C2S_REVIVE_PET size");
static_assert(sizeof(MSG_C2S_GESTURE) == 0xd, "MSG_C2S_GESTURE size");
static_assert(sizeof(MSG_C2S_OPTION) == 0xd, "MSG_C2S_OPTION size");
static_assert(sizeof(MSG_C2S_SUBMAP_INFO) == 0x10, "MSG_C2S_SUBMAP_INFO size");
static_assert(sizeof(MSG_C2S_ENTER) == 0x50, "MSG_C2S_ENTER size");
static_assert(sizeof(MSG_C2S_ITEM_COMBINATION) == 0x60, "MSG_C2S_ITEM_COMBINATION size");
static_assert(sizeof(MSG_C2S_CLAN) == 0x3d, "MSG_C2S_CLAN size");
static_assert(sizeof(MSG_C2S_JOIN_CLAN) == 0x10, "MSG_C2S_JOIN_CLAN size");
static_assert(sizeof(MSG_C2S_ANS_CLAN) == 0x11, "MSG_C2S_ANS_CLAN size");
static_assert(sizeof(MSG_C2S_BOLT_CLAN) == 0x1a, "MSG_C2S_BOLT_CLAN size");
static_assert(sizeof(MSG_C2S_REQ_CLAN_INFO) == 0xc, "MSG_C2S_REQ_CLAN_INFO size");
static_assert(sizeof(MSG_C2S_PARTY_QUEST) == 0x10, "MSG_C2S_PARTY_QUEST size");
static_assert(sizeof(MSG_C2S_OBJECT_NPC) == 0x10, "MSG_C2S_OBJECT_NPC size");
static_assert(sizeof(MSG_C2S_LOTTO_PURCHASE) == 0x19, "MSG_C2S_LOTTO_PURCHASE size");
static_assert(sizeof(MSG_C2S_LOTTO_QUERY_PRIZE) == 0x10, "MSG_C2S_LOTTO_QUERY_PRIZE size");
static_assert(sizeof(MSG_C2S_LOTTO_QUERY_HISTORY) == 0x10, "MSG_C2S_LOTTO_QUERY_HISTORY size");
static_assert(sizeof(MSG_C2S_LOTTO_SALE) == 0x20, "MSG_C2S_LOTTO_SALE size");
static_assert(sizeof(MSG_C2S_CHANGE_NATION) == 0xd, "MSG_C2S_CHANGE_NATION size");
static_assert(sizeof(MSG_C2S_DERBY_INDEX_QUERY) == 0xc, "MSG_C2S_DERBY_INDEX_QUERY size");
static_assert(sizeof(MSG_C2S_DERBY_MONSTER_QUERY) == 0x10, "MSG_C2S_DERBY_MONSTER_QUERY size");
static_assert(sizeof(MSG_C2S_DERBY_RATIO_QUERY) == 0x10, "MSG_C2S_DERBY_RATIO_QUERY size");
static_assert(sizeof(MSG_C2S_DERBY_PURCHASE) == 0x16, "MSG_C2S_DERBY_PURCHASE size");
static_assert(sizeof(MSG_C2S_DERBY_RESULT_QUERY) == 0xc, "MSG_C2S_DERBY_RESULT_QUERY size");
static_assert(sizeof(MSG_C2S_DERBY_HISTORY_QUERY) == 0x11, "MSG_C2S_DERBY_HISTORY_QUERY size");
static_assert(sizeof(MSG_C2S_DERBY_EXCHANGE) == 0x20, "MSG_C2S_DERBY_EXCHANGE size");
static_assert(sizeof(MSG_C2S_ASK_APPRENTICE_IN) == 0x10, "MSG_C2S_ASK_APPRENTICE_IN size");
static_assert(sizeof(MSG_C2S_ANS_APPRENTICE_IN) == 0x11, "MSG_C2S_ANS_APPRENTICE_IN size");
static_assert(sizeof(MSG_C2S_ASK_APPRENTICE_OUT) == 0xc, "MSG_C2S_ASK_APPRENTICE_OUT size");
static_assert(sizeof(MSG_C2S_RETRIEVE_POINT) == 0x11, "MSG_C2S_RETRIEVE_POINT size");
static_assert(sizeof(MSG_C2S_CAO_MITIGATION) == 0xe, "MSG_C2S_CAO_MITIGATION size");
static_assert(sizeof(MSG_C2Z_REGISTER_MARK) == 0xc, "MSG_C2Z_REGISTER_MARK size");
static_assert(sizeof(MSG_C2S_SHUE_COMBINATION) == 0x38, "MSG_C2S_SHUE_COMBINATION size");
static_assert(sizeof(MSG_C2S_PAYINFO) == 0xc, "MSG_C2S_PAYINFO size");
static_assert(sizeof(EXCEL_ITEM_DATA0) == 0xf2, "EXCEL_ITEM_DATA0 size");
static_assert(sizeof(EXCEL_ITEM_DATA1) == 0x34, "EXCEL_ITEM_DATA1 size");
static_assert(sizeof(EXCEL_ITEM_DATA2) == 0x30, "EXCEL_ITEM_DATA2 size");
static_assert(sizeof(EXCEL_ITEM_DATA3) == 0x30, "EXCEL_ITEM_DATA3 size");
static_assert(sizeof(EXCEL_ITEM_COMBINATION_TABLE) == 0x20, "EXCEL_ITEM_COMBINATION_TABLE size");
static_assert(sizeof(_ITEM_COUNTER_HEADER) == 0x28, "_ITEM_COUNTER_HEADER size");
static_assert(sizeof(_ITEM_SERIALKEY_) == 0x4, "_ITEM_SERIALKEY_ size");
static_assert(sizeof(CLargeRand) == 0x9d0, "CLargeRand size");
static_assert(sizeof(CListenServer) == 0x48, "CListenServer size");
static_assert(sizeof(CSvrManage) == 0x38, "CSvrManage size");
static_assert(sizeof(CStandbyServer) == 0x800080, "CStandbyServer size");
static_assert(sizeof(CSystemMgr) == 0x420, "CSystemMgr size");
static_assert(sizeof(CPartyQuestMgr) == 0x7d8, "CPartyQuestMgr size");
static_assert(sizeof(_SKILL_DATA_TABLE_) == 0x5e, "_SKILL_DATA_TABLE_ size");
static_assert(sizeof(_Warp_Postion_) == 0x8, "_Warp_Postion_ size");
static_assert(sizeof(_GAME_MANAGER_) == 0x1d, "_GAME_MANAGER_ size");
static_assert(sizeof(_DOOR_NPC_INFO_) == 0x4, "_DOOR_NPC_INFO_ size");
static_assert(sizeof(_PC_DATA_TABLE_) == 0x1c, "_PC_DATA_TABLE_ size");
static_assert(sizeof(_NPC_SELL_ITEM_INFO_) == 0x400, "_NPC_SELL_ITEM_INFO_ size");
static_assert(sizeof(MSG_M2S_ERROR) == 0x49, "MSG_M2S_ERROR size");
static_assert(sizeof(MSG_M2S_APPRENTICE_QUIT) == 0xb, "MSG_M2S_APPRENTICE_QUIT size");
static_assert(sizeof(MSG_M2Z_CONFIRM_MARK) == 0xc, "MSG_M2Z_CONFIRM_MARK size");
static_assert(sizeof(MSG_M2Z_CHANGE_MARK) == 0xb, "MSG_M2Z_CHANGE_MARK size");
static_assert(sizeof(_MAPHEADER_) == 0x17, "_MAPHEADER_ size");
static_assert(sizeof(_AttackParty_) == 0x8, "_AttackParty_ size");
static_assert(sizeof(_NPC_NATION_INFO_) == 0x8, "_NPC_NATION_INFO_ size");
static_assert(sizeof(_KWAN_POS) == 0x6, "_KWAN_POS size");
static_assert(sizeof(EXCEL_PET_DATA) == 0x30, "EXCEL_PET_DATA size");
static_assert(sizeof(_CHK_HACK_) == 0x8, "_CHK_HACK_ size");
static_assert(sizeof(MSG_G2S_SVR_LOGIN) == 0xb, "MSG_G2S_SVR_LOGIN size");
static_assert(sizeof(MSG_C2S_AGIT_INFO) == 0x10, "MSG_C2S_AGIT_INFO size");
static_assert(sizeof(MSG_C2S_AUCTION_INFO) == 0x10, "MSG_C2S_AUCTION_INFO size");
static_assert(sizeof(MSG_C2S_AGIT_ENTER) == 0x13, "MSG_C2S_AGIT_ENTER size");
static_assert(sizeof(MSG_C2S_AGIT_PUTUP_AUCTION) == 0x1c, "MSG_C2S_AGIT_PUTUP_AUCTION size");
static_assert(sizeof(MSG_C2S_AGIT_BIDON) == 0x16, "MSG_C2S_AGIT_BIDON size");
static_assert(sizeof(MSG_C2S_AGIT_PAY_EXPENSE) == 0xc, "MSG_C2S_AGIT_PAY_EXPENSE size");
static_assert(sizeof(MSG_C2S_AGIT_CHANGE_NAME) == 0x2c, "MSG_C2S_AGIT_CHANGE_NAME size");
static_assert(sizeof(MSG_C2S_AGIT_REPAY_MONEY) == 0x10, "MSG_C2S_AGIT_REPAY_MONEY size");
static_assert(sizeof(MSG_C2S_AGIT_OBTAIN_SALEMONEY) == 0x10, "MSG_C2S_AGIT_OBTAIN_SALEMONEY size");
static_assert(sizeof(MSG_C2S_TYR_ENTRY) == 0x11, "MSG_C2S_TYR_ENTRY size");
static_assert(sizeof(MSG_C2S_TYR_INFO) == 0x11, "MSG_C2S_TYR_INFO size");
static_assert(sizeof(MSG_C2S_TYR_JOIN) == 0x10, "MSG_C2S_TYR_JOIN size");
static_assert(sizeof(CPC) == 0x5e4, "CPC size");

#pragma pack(pop)

