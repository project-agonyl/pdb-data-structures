#pragma once

#include <stdint.h>

// Recovered from MainServer.exe, MainServer.map, and MainServer.pdb.
//
// The VC6/NB10 PDB preserves public symbols and type names, but Ghidra and DIA
// do not recover complete UDT member records from it. Struct definitions below
// are therefore partial layouts inferred from x86 memory accesses in MainServer.exe.
// Field names are synthetic placeholders. Offsets, widths, and evidence comments
// are the useful recovered data; trailing sizeof values are only minimum observed sizes.

#if defined(_MSC_VER)
#pragma pack(push, 1)
#endif

// Partial application/game struct layouts inferred from executable field accesses.
struct _APPRENTICE_INFO_
{
    uint32_t field_0000; // write; 1 func(s): GetApprenticeInfo; evidence: 0x0040651e, 0x00406540
    // Minimum observed size: 0x4 bytes.
};

struct _APPRENTICE_MEMBER_
{
    uint32_t field_0000; // read; 1 func(s): UpdateMemberInfo; evidence: 0x00406151, 0x0040616c
    uint8_t _pad_0004[0x18];
    uint32_t field_001C; // read; 1 func(s): UpdateMemberInfo; evidence: 0x004061a9
    // Minimum observed size: 0x20 bytes.
};

struct _CLAN_BATTLE_INFO_
{
    uint32_t field_0000; // read; 2 func(s): FillInfoMsg, UpdateClanBattle; evidence: 0x0040b5d3, 0x0040bd20
    uint32_t field_0004; // read; 3 func(s): FillInfoMsg, FillNoticeMsg, BroadcastBattleScore; evidence: 0x0040b2d6, 0x0040b703
    uint32_t field_0008; // read; 1 func(s): FillInfoMsg; evidence: 0x0040b3c8
    uint32_t field_000C; // read; 1 func(s): FillInfoMsg; evidence: 0x0040b3d4
    uint32_t field_0010; // read/write; 1 func(s): BroadcastBattleScore; evidence: 0x0040d6b4, 0x0040d6ce
    uint32_t field_0014; // read; 1 func(s): UpdateClanBattle; evidence: 0x0040bcbf, 0x0040be86
    uint32_t field_0018; // read; 1 func(s): UpdateClanBattle; evidence: 0x0040bcd0, 0x0040be97
    uint32_t field_001C; // read; 3 func(s): FillInfoMsg, UpdateClanBattle, BroadcastMsg2AllMembersIn; evidence: 0x0040b2f2, 0x0040b32e
    uint32_t field_0020; // read; 3 func(s): FillInfoMsg, UpdateClanBattle, BroadcastMsg2AllMembersIn; evidence: 0x0040b30f, 0x0040b34f
    uint32_t field_0024; // read; 3 func(s): FillInfoMsg, UpdateClanBattle, BroadcastMsg2AllMembersIn; evidence: 0x0040b2fe, 0x0040b33a
    uint32_t field_0028; // read; 3 func(s): FillInfoMsg, UpdateClanBattle, BroadcastMsg2AllMembersIn; evidence: 0x0040b31b, 0x0040b35b
    uint32_t field_002C; // read; 1 func(s): BroadcastBattleScore; evidence: 0x0040d6df
    uint32_t field_0030; // read; 1 func(s): BroadcastBattleScore; evidence: 0x0040d6eb
    // Minimum observed size: 0x34 bytes.
};

struct _HS_DATA_
{
    uint32_t field_0000; // read; 1 func(s): SaveHSInfo; evidence: 0x004300a3
    uint8_t _pad_0004[0x2D];
    uint32_t field_0031; // read; 1 func(s): SaveHSInfo; evidence: 0x004300b7
    uint8_t _pad_0035[0xE];
    uint32_t field_0043; // read; 1 func(s): SaveHSInfo; evidence: 0x00430042
    uint32_t field_0047; // read; 1 func(s): SaveHSInfo; evidence: 0x0043003b
    // Minimum observed size: 0x4B bytes.
};

struct _HS_STONE_INFO_
{
    uint32_t field_0000; // read/write; 3 func(s): ParseQueryStoneSlot, SaveHSStoneInfo, InsertNewHSStoneInfo; evidence: 0x0042ec88, 0x0042fa8b
    uint8_t field_0004; // write; 1 func(s): ParseQueryStoneSlot; evidence: 0x0042ec74
    uint8_t field_0005; // write; 1 func(s): ParseQueryStoneSlot; evidence: 0x0042ec60
    uint16_t field_0006; // write; 1 func(s): ParseQueryStoneSlot; evidence: 0x0042ec9b
    uint8_t _pad_0008[0x14];
    uint8_t field_001C; // write; 1 func(s): ParseQueryStoneSlot; evidence: 0x0042ecb9
    uint32_t field_001D; // read; 2 func(s): SaveHSStoneInfo, InsertNewHSStoneInfo; evidence: 0x0042fac8, 0x00431874
    uint8_t _pad_0021[0x19];
    uint32_t field_003A; // read; 2 func(s): SaveHSStoneInfo, InsertNewHSStoneInfo; evidence: 0x0042fb06, 0x004318b2
    uint8_t _pad_003E[0x19];
    uint32_t field_0057; // read; 2 func(s): SaveHSStoneInfo, InsertNewHSStoneInfo; evidence: 0x0042fb44, 0x004318f0
    // Minimum observed size: 0x5B bytes.
};

struct _ITEM_IN_WEAR_
{
    uint32_t field_0000; // write; 1 func(s): MakeWearItemData; evidence: 0x00430f60, 0x00450aab
    uint32_t field_0004; // read/write; 1 func(s): MakeWearItemData; evidence: 0x00430f78, 0x00430f85
    uint32_t field_0008; // read/write; 1 func(s): MakeWearItemData; evidence: 0x00430f9f, 0x00430fb7
    uint32_t field_000C; // write; 1 func(s): MakeWearItemData; evidence: 0x004310cd, 0x00450c18
    // Minimum observed size: 0x10 bytes.
};

struct _KNIGHT_INFO_
{
    uint8_t _pad_0000[0x1C];
    uint16_t field_001C; // write; 1 func(s): InsertKnight; evidence: 0x00412b93
    // Minimum observed size: 0x1E bytes.
};

struct _LEAGUE_INFO_
{
    uint8_t _pad_0000[0x4];
    uint32_t field_0004; // read; 1 func(s): FDBLoad; evidence: 0x00431eeb
    // Minimum observed size: 0x8 bytes.
};

struct _PCDATA_
{
    uint32_t field_0000; // read; 1 func(s): SaveFullPCData; evidence: 0x0042249b, 0x004224b5
    uint8_t _pad_0004[0x25];
    uint8_t field_0029; // write; 1 func(s): SaveFullPCData; evidence: 0x00422bdb
    uint8_t _pad_002A[0x6];
    uint32_t field_0030; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x00421988, 0x00422747
    uint8_t _pad_0034[0x10];
    uint32_t field_0044; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x00421c71, 0x00422c47
    uint32_t field_0048; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x00421c6a, 0x00422c40
    uint16_t field_004C; // write; 1 func(s): Func_M2S_CHAR_LOGIN; evidence: 0x004520b9
    uint8_t _pad_004E[0x2];
    uint32_t field_0050; // read/write; 3 func(s): CreateNewPCData, SaveFullPCData, Func_M2S_CHAR_LOGIN; evidence: 0x00421c59, 0x00422c2f
    uint32_t field_0054; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x0042197f, 0x0042273e
    uint32_t field_0058; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x00421978, 0x00422737
    uint32_t field_005C; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x00421971, 0x00422730
    uint32_t field_0060; // read; 1 func(s): SaveFullPCData; evidence: 0x00422579
    uint32_t field_0064; // read; 1 func(s): SaveFullPCData; evidence: 0x00422572
    uint32_t field_0068; // read; 1 func(s): SaveFullPCData; evidence: 0x0042256b
    uint32_t field_006C; // read; 1 func(s): SaveFullPCData; evidence: 0x0042245f
    uint32_t field_0070; // read; 1 func(s): SaveFullPCData; evidence: 0x00422458
    uint32_t field_0074; // read; 1 func(s): SaveFullPCData; evidence: 0x00422451
    uint32_t field_0078; // read; 1 func(s): SaveFullPCData; evidence: 0x0042244a
    uint32_t field_007C; // read; 1 func(s): SaveFullPCData; evidence: 0x00422443
    uint32_t field_0080; // read; 1 func(s): SaveFullPCData; evidence: 0x00422439
    uint8_t _pad_0084[0x4];
    uint32_t field_0088; // read; 3 func(s): CreateNewPCData, SaveFullPCData, Func_M2S_CHAR_LOGIN; evidence: 0x00421915, 0x00421926
    uint32_t field_008C; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x00421c4f, 0x00422c25
    uint32_t field_0090; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x0042172b, 0x0042178e
    uint8_t _pad_0094[0x4];
    uint32_t field_0098; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x00421709, 0x0042176c
    uint32_t field_009C; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x004216fd, 0x00421760
    uint8_t _pad_00A0[0x324];
    uint32_t field_03C4; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x004217b8, 0x004226ab
    uint32_t field_03C8; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x004217ae, 0x004226a1
    uint32_t field_03CC; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x004217a4, 0x00422697
    uint32_t field_03D0; // read; 2 func(s): CreateNewPCData, SaveFullPCData; evidence: 0x0042179a, 0x0042268d
    uint8_t _pad_03D4[0x64];
    uint32_t field_0438; // read; 1 func(s): SaveFullPCData; evidence: 0x0042226f, 0x00422305
    uint8_t _pad_043C[0x10];
    uint32_t field_044C; // read; 1 func(s): SaveFullPCData; evidence: 0x00422371
    // Minimum observed size: 0x450 bytes.
};

struct _PCINFO_
{
    uint8_t _pad_0000[0x29];
    uint8_t field_0029; // write; 1 func(s): SaveFullPCData; evidence: 0x00422bd4
    uint8_t _pad_002A[0x2];
    uint32_t field_002C; // read; 12 func(s): SendClanInfo, CreateNewPCData, SaveFullPCData, CreateNewStorage, UpdateStorage, InitByHSDB, ...; evidence: 0x00413510, 0x00421d2f
    uint8_t _pad_0030[0x4];
    uint32_t field_0034; // read/write; 4 func(s): PushPCTable, PopPCTable, PayLog4Warp, SendGameEnd; evidence: 0x00446c15, 0x00446cd0
    uint8_t _pad_0038[0x2C];
    uint32_t field_0064; // read; 2 func(s): PopPCTable, PayLog4Warp; evidence: 0x00446cbf, 0x00446d0f
    uint32_t field_0068; // read; 2 func(s): PopPCTable, PayLog4Warp; evidence: 0x00446cb8, 0x00446d08
    // Minimum observed size: 0x6C bytes.
};

struct _PCSTAT_EX_
{
    uint32_t field_0000; // read/write; 2 func(s): SetPCStatEX, GetPCStatEX; evidence: 0x00448c7f, 0x00448e2b
    // Minimum observed size: 0x4 bytes.
};

struct _PET_INFO_
{
    uint8_t _pad_0000[0x4];
    uint32_t field_0004; // read; 2 func(s): SetPetFood, WriteLogPet; evidence: 0x004242e0, 0x0042ce21
    uint32_t field_0008; // read; 1 func(s): WriteLogPet; evidence: 0x0042ce1a
    uint32_t field_000C; // read; 1 func(s): WriteLogPet; evidence: 0x0042cece, 0x0042cedb
    uint32_t field_0010; // read/write; 2 func(s): SetPetFood, WriteLogPet; evidence: 0x004242f5, 0x0042430a
    // Minimum observed size: 0x14 bytes.
};

struct _QUERY_DATA_
{
    uint8_t _pad_0000[0x1818];
    uint32_t field_1818; // read; 4 func(s): Func_M2S_ANS_CREATE_PLAYER, Func_DB_REPLY_SSI, Func_M2S_ANS_DELETE_PLAYER, Func_M2S_CHAR_LOGIN; evidence: 0x004515d1, 0x0045165b
    // Minimum observed size: 0x181C bytes.
};

struct _REC_DATA_
{
    uint8_t _pad_0000[0x63F];
    uint8_t field_063F; // read; 1 func(s): Func_DB_REPLY_SSI; evidence: 0x0045186b, 0x0045187a
    // Minimum observed size: 0x640 bytes.
};

struct _REC_DATA_ERR_
{
    uint8_t _pad_0000[0x8];
    uint32_t field_0008; // read; 6 func(s): Func_M2S_ANS_CREATE_PLAYER, Func_DB_REPLY_SSI, Func_M2S_ANS_DELETE_PLAYER, Func_M2S_CHAR_LOGIN, DBReplyCreateNewStorage, DBReplyLoadStorage; evidence: 0x00451624, 0x0045198d
    // Minimum observed size: 0xC bytes.
};

struct _SKILL_
{
    uint32_t field_0000; // read/write; 1 func(s): SetSkillOn; evidence: 0x00450e18, 0x00450e20
    // Minimum observed size: 0x4 bytes.
};

struct _STORAGE_DATA_
{
    uint8_t _pad_0000[0x18];
    uint32_t field_0018; // read; 2 func(s): UpdateStorage, Func_M2S_LOAD_STORAGE; evidence: 0x004270e4, 0x00427344
    // Minimum observed size: 0x1C bytes.
};

struct _Warp_Postion_
{
    uint16_t field_0000; // write; 1 func(s): GetReturnPos; evidence: 0x00450cd2
    uint8_t _pad_0002[0x2];
    uint32_t field_0004; // write; 1 func(s): GetReturnPos; evidence: 0x00450ced
    // Minimum observed size: 0x8 bytes.
};

#if defined(_MSC_VER)
#pragma pack(pop)
#endif

// Type names recovered from symbols but without enough executable evidence for a member layout.
struct _APPRENTICE_GROUP_;
struct _BATTLE_WARP_DATA_;
struct _BLOCK_PC_;
struct _CHAR_REBORN_;
struct _ITEM_DEFAULT_WEAR_;
struct _KNIGHT_MEMBER_INFO_;
struct _LETTER_ALL_INFO_;
struct _LOG_DATA_;
struct _LOGIN_DATA_;
struct _PARTISAN_;
struct _PARTNER_INFO_;
struct _Party_Info_;
struct _REIGNCLAN_VERSION_2_;
struct _SSP_DATA_;
struct _UNIQUE_ITEM_COUNTER_;
struct _WARP_DATA_;
struct _WGS_DATA_;
struct _ZONE_WARP_DATA_;
struct MSG_A2M_CONFIRM_MARK;
struct MSG_B2M_ASK_TMMSG_BROADCAST;
struct MSG_B2M_ASK_WARP_B2Z;
struct MSG_B2M_ASK_WARP_Z2B;
struct MSG_B2M_CLAN_RANK_UPDATE;
struct MSG_B2M_TM_RESULT;
struct MSG_HEADER;
struct MSG_M2A_REGISTER_MARK;
struct MSG_M2B_ANS_WARP_B2Z;
struct MSG_M2B_ANS_WARP_Z2B;
struct MSG_M2S_ADMIN;
struct MSG_M2S_AGIT_ENTER;
struct MSG_M2S_ANS_BLOCK;
struct MSG_M2S_ANS_CHANGE_CHARNAME;
struct MSG_M2S_ANS_CLAN_BATTLE;
struct MSG_M2S_ANS_CLAN_BATTLE_END;
struct MSG_M2S_ANS_CREATE_PLAYER;
struct MSG_M2S_ANS_DELETE_PLAYER;
struct MSG_M2S_ANS_DESTROY_CONNECTION;
struct MSG_M2S_ANS_LEAGUE_CLAN_INFO;
struct MSG_M2S_ANS_PREWEEK_MASTERS;
struct MSG_M2S_ANS_UNBLOCK;
struct MSG_M2S_ANS_WARP_B2Z;
struct MSG_M2S_ANS_WARP_Z2B;
struct MSG_M2S_APPRENTICE_QUIT;
struct MSG_M2S_ASK_CLAN_BATTLE;
struct MSG_M2S_ASK_CLAN_BATTLE_END;
struct MSG_M2S_ASK_CLAN_BATTLE_SCORE;
struct MSG_M2S_AUTHE_INFO;
struct MSG_M2S_BUY_CASH_ITEM;
struct MSG_M2S_CASH_INFO;
struct MSG_M2S_CHANGE_CLAN_MASTER;
struct MSG_M2S_CHANGE_REIGN;
struct MSG_M2S_CHAR_LOGIN;
struct MSG_M2S_CHAR_UPDATE;
struct MSG_M2S_CLAN;
struct MSG_M2S_CLAN_BATTLE_INFO;
struct MSG_M2S_CLAN_BATTLE_NOTICE;
struct MSG_M2S_CLAN_FAIL;
struct MSG_M2S_CLAN_INFO;
struct MSG_M2S_END_CLAN_BATTLE;
struct MSG_M2S_ERROR;
struct MSG_M2S_FRIEND;
struct MSG_M2S_FRIEND_GROUP;
struct MSG_M2S_FRIEND_INFO;
struct MSG_M2S_FRIEND_STATE;
struct MSG_M2S_GET_CLAN_BY_RANK;
struct MSG_M2S_HS_RECALL;
struct MSG_M2S_HS_STONE_INFO;
struct MSG_M2S_HSSTONE_BUY;
struct MSG_M2S_KNIGHT;
struct MSG_M2S_KNIGHT_INFO;
struct MSG_M2S_LEAGUE;
struct MSG_M2S_LEAGUE_INFO;
struct MSG_M2S_LEAGUE_LOGINOUT;
struct MSG_M2S_LETTER_ALL_INFO;
struct MSG_M2S_LETTER_BASE_INFO;
struct MSG_M2S_LETTER_DEL;
struct MSG_M2S_LETTER_KEEPING;
struct MSG_M2S_LETTER_SEND;
struct MSG_M2S_LETTER_SIMPLE_INFO;
struct MSG_M2S_LOAD_STORAGE;
struct MSG_M2S_OP_CMD;
struct MSG_M2S_PARTY_OUT;
struct MSG_M2S_PASS2GATE;
struct MSG_M2S_SAY;
struct MSG_M2S_SET_LEAGUE_ID;
struct MSG_M2S_SET_STATEX;
struct MSG_M2S_SQUEST_CLAN_MEMBER_LIST;
struct MSG_M2S_SSP_PAY;
struct MSG_M2S_TYR_MESSAGE;
struct MSG_M2S_TYR_RESULT;
struct MSG_M2S_UPDATE_SVR_DATA;
struct MSG_M2S_WARP_LOGIN;
struct MSG_M2S_WARP_ZONE;
struct MSG_M2S_WGS_PAY;
struct MSG_M2S_WORLD_LOGIN;
struct MSG_M2Z_CHANGE_MARK;
struct MSG_M2Z_CONFIRM_MARK;
struct MSG_N2M_CLAN_CREATE;
struct MSG_N2M_CLAN_DEL_MEMBER;
struct MSG_N2M_CLAN_DELETE;
struct MSG_N2M_CLAN_INFO;
struct MSG_N2M_CLAN_INS_MEMBER;
struct MSG_N2M_CLAN_SAY;
struct MSG_N2M_UPDATE_CLAN;
struct MSG_N2M_UPDATE_MEMBER;
struct MSG_S2C_HEADER;
struct MSG_S2C_SAY;
struct MSG_S2M_AGIT_ENTER;
struct MSG_S2M_ANS_CLAN_BATTLE;
struct MSG_S2M_ANS_CLAN_BATTLE_END;
struct MSG_S2M_ANS_CLAN_BATTLE_SCORE;
struct MSG_S2M_APPRENTICE_CREATE;
struct MSG_S2M_APPRENTICE_QUIT;
struct MSG_S2M_APPRENTICE_UPDATE;
struct MSG_S2M_ASK_BLOCK;
struct MSG_S2M_ASK_CHANGE_CHARNAME;
struct MSG_S2M_ASK_CLAN_BATTLE;
struct MSG_S2M_ASK_CLAN_BATTLE_END;
struct MSG_S2M_ASK_CREATE_PLAYER;
struct MSG_S2M_ASK_DELETE_PLAYER;
struct MSG_S2M_ASK_DESTROY_CONNECTION;
struct MSG_S2M_ASK_PREWEEK_MASTERS;
struct MSG_S2M_ASK_UNBLOCK;
struct MSG_S2M_ASK_WARP_B2Z;
struct MSG_S2M_ASK_WARP_Z2B;
struct MSG_S2M_AUTHE_INFO;
struct MSG_S2M_BEGIN_CLAN_BATTLE;
struct MSG_S2M_BUY_CASH_ITEM;
struct MSG_S2M_CASH_INFO;
struct MSG_S2M_CHANGE_CLAN_MASTER;
struct MSG_S2M_CHAR_DISCONNECT;
struct MSG_S2M_CHAR_LOGIN;
struct MSG_S2M_CHAR_LOGOUT;
struct MSG_S2M_CLAN;
struct MSG_S2M_CLAN_BATTLE_CHEAT;
struct MSG_S2M_CLAN_INFO;
struct MSG_S2M_DATA_UPDATE;
struct MSG_S2M_END_CLAN_BATTLE;
struct MSG_S2M_FRIEND;
struct MSG_S2M_FRIEND_GROUP;
struct MSG_S2M_FRIEND_INFO;
struct MSG_S2M_FRIEND_STATE;
struct MSG_S2M_GET_CLAN_BY_RANK;
struct MSG_S2M_HS_RECALL;
struct MSG_S2M_HS_SAVE_DEL_HSDATA;
struct MSG_S2M_HS_SAVE_HSDATA;
struct MSG_S2M_HS_SAVE_HSSTONE;
struct MSG_S2M_HSSTONE_BUY;
struct MSG_S2M_KNIGHT;
struct MSG_S2M_LEAGUE;
struct MSG_S2M_LETTER_BASE_INFO;
struct MSG_S2M_LETTER_DEL;
struct MSG_S2M_LETTER_KEEPING;
struct MSG_S2M_LETTER_SEND;
struct MSG_S2M_LETTER_SIMPLE_INFO;
struct MSG_S2M_LOAD_STORAGE;
struct MSG_S2M_OP_CMD;
struct MSG_S2M_PARTY_CREATE;
struct MSG_S2M_PARTY_JOIN;
struct MSG_S2M_PARTY_OUT;
struct MSG_S2M_REQ_LEAGUE_CLAN_INFO;
struct MSG_S2M_SAVE_STORAGE;
struct MSG_S2M_SAY;
struct MSG_S2M_SET_STATEX;
struct MSG_S2M_SHOUT2ALLZONE;
struct MSG_S2M_SQUEST_CLAN_MEMBER_LIST;
struct MSG_S2M_SSP_PAY;
struct MSG_S2M_SVR_LOGIN;
struct MSG_S2M_TYR_MESSAGE;
struct MSG_S2M_TYR_RESULT;
struct MSG_S2M_UPDATE_SVR_DATA;
struct MSG_S2M_WARP_LOGIN;
struct MSG_S2M_WARP_ZONE;
struct MSG_S2M_WGS_PAY;
struct MSG_S2M_WORLD_LOGIN;
struct MSG_S2S_CHARINFO_UPDATE;
struct MSG_S2S_HEADER;
struct MSG_S2V_CMM_ALIVE;
struct MSG_V2S_MAIN_SHOUT;
struct MSG_V2S_MAIN_WHISPER;
struct MSG_Z2M_CONFIRM_MARK;
struct MSG_Z2M_REGISTER_MARK;

// Application classes observed as method scopes in MainServer.map.
class CCashDB;
class CClan;
class CClanBattleSystem;
class CClanMainMgr;
class CCommuneServer;
class CDB;
class CDBCharac;
class CDBManage;
class CDBStorage;
class CGameLog;
class CHSDB;
class CLeague;
class CLeagueMgr;
class CListenServer;
class CLoginManage;
class CLoopSleepMgr;
class CLoopThread;
class CMember;
class CODBC;
class COpServer;
class CPartyManage;
class CPCManage;
class CServerConsolidate;
class CShareObject;
class CSSP;
class CSSPServer;
class CStandbyServer;
class CStorageMgr;
class CSvrManage;
class CSyncSection;
class CSystemMgr;
class CTickManage;
class CTimeFunc;
class CUDPSock;
class CWGS;
class CWGSServer;
class CZoneServer;

