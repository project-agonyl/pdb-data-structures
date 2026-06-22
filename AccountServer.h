#pragma once

#include <cstddef>
#include <cstdint>

// Recovered from AccountServer.pdb / AccountServer.map / AccountServer.exe.
// Target binary is 32-bit MSVC; pointer and handle members are stored as 32-bit RVAs/addresses.
using as_u8 = std::uint8_t;
using as_u16 = std::uint16_t;
using as_u32 = std::uint32_t;
using as_i32 = std::int32_t;
using as_ptr = std::uint32_t;

#pragma pack(push, 1)

enum _QUERY_TYPE_ : as_u32 {
    QUERY_INSERT = 0,
    QUERY_DELETE = 1,
};

struct _WSANETWORKEVENTS {
    as_i32 lNetworkEvents;       // 0x00
    as_i32 iErrorCode[10];       // 0x04
};

struct _RTL_CRITICAL_SECTION {
    as_ptr DebugInfo;            // 0x00 _RTL_CRITICAL_SECTION_DEBUG*
    as_i32 LockCount;            // 0x04
    as_i32 RecursionCount;       // 0x08
    as_ptr OwningThread;         // 0x0c
    as_ptr LockSemaphore;        // 0x10
    as_u32 SpinCount;            // 0x14
};

struct in_addr {
    as_u32 S_addr;               // 0x00
};

struct sockaddr_in {
    std::int16_t sin_family;     // 0x00
    as_u16 sin_port;             // 0x02
    in_addr sin_addr;            // 0x04
    char sin_zero[8];            // 0x08
};

struct _ITEM_ID_ {
    as_u32 id;                   // 0x00
    as_u32 code : 14;            // 0x04 bit 0
    as_u32 subcode : 18;         // 0x04 bit 14
};
using ITEM_ID_ = _ITEM_ID_;
using PITEM_ID_ = _ITEM_ID_*;

union _ITEM_INFO_ {
    as_u32 info;                 // 0x00
    as_u16 money;                // 0x00
    as_u16 quantity;             // 0x00
    struct {
        as_u32 level : 4;
        as_u32 option : 1;
        as_u32 confirm : 1;
        as_u32 subtype : 4;
        as_u32 wearIdx : 4;
        as_u32 iceAttr : 6;
        as_u32 fireAttr : 6;
        as_u32 lightAttr : 6;
    };
};
using ITEM_INFO_ = _ITEM_INFO_;
using PITEM_INFO_ = _ITEM_INFO_*;

union _ITEM_SERIALKEY_ {
    as_u32 serialKey;            // 0x00
    struct {
        as_u32 year : 4;
        as_u32 month : 4;
        as_u32 day : 4;
        as_u32 origin : 4;
        as_u32 count : 16;
    };
};
using ITEM_SERIALKEY_ = _ITEM_SERIALKEY_;
using PITEM_SERIALKEY_ = _ITEM_SERIALKEY_*;

struct _SKILL_ {
    as_u32 skill_low;            // 0x00
    as_u32 skill_high;           // 0x04
};
using SKILL_ = _SKILL_;
using PSKILL_ = _SKILL_*;

struct _SOCIALINFO_ {
    as_u32 nation : 8;           // 0x00 bit 0
    as_u32 rank : 8;             // 0x00 bit 8
    as_u32 knight_index : 16;    // 0x00 bit 16
};
using SOCIALINFO_ = _SOCIALINFO_;
using PSOCIALINFO_ = _SOCIALINFO_*;

struct _ITEM_ {
    _ITEM_ID_ ItemID;            // 0x00
    _ITEM_INFO_ ItemInfo;        // 0x08
    as_u32 ItemKey;              // 0x0c
};
using ITEM_ = _ITEM_;
using PITEM_ = _ITEM_*;

struct _ACCOUNT_ITEM_ {
    _ITEM_ID_ ItemID;            // 0x00
    _ITEM_INFO_ ItemInfo;        // 0x08
    as_u8 byWearIndex;           // 0x0c
    as_u8 _pad_0d[3];
};
using ACCOUNT_ITEM_ = _ACCOUNT_ITEM_;
using PACCOUNT_ITEM_ = _ACCOUNT_ITEM_*;

union _ITEM_IN_WEAR_ {
    struct {
        union {
            _ITEM_ item;         // 0x00
            struct {
                _ITEM_ID_ ItemID;
                _ITEM_INFO_ ItemInfo;
                _ITEM_SERIALKEY_ ItemKey;
            };
        };
        as_u8 byWearIndex;       // 0x10
        as_u8 _pad_11[3];
    };
};
using ITEM_IN_WEAR_ = _ITEM_IN_WEAR_;
using PITEM_IN_WEAR_ = _ITEM_IN_WEAR_*;

union _ITEM_IN_INVEN_ {
    struct {
        union {
            _ITEM_ item;         // 0x00
            struct {
                _ITEM_ID_ ItemID;
                _ITEM_INFO_ ItemInfo;
                _ITEM_SERIALKEY_ ItemKey;
            };
        };
        as_u8 byInvenIndex;      // 0x10
        as_u8 _pad_11[3];
    };
};
using ITEM_IN_INVEN_ = _ITEM_IN_INVEN_;
using PITEM_IN_INVEN_ = _ITEM_IN_INVEN_*;

struct _CHARACTER_INFO_ {
    char szPCName[13];           // 0x00
    as_u8 byType;                // 0x0d
    as_u8 byNationality;         // 0x0e
    as_u8 _pad_0f;
    as_u16 wLevel;               // 0x10
    as_u8 _pad_12[2];
    _ACCOUNT_ITEM_ WearList[10]; // 0x14
};
using CHARACTER_INFO_ = _CHARACTER_INFO_;
using PCHARACTER_INFO_ = _CHARACTER_INFO_*;

struct _ACCOUNT_CHAR_INFO_ {
    _CHARACTER_INFO_ CharInfo[5];// 0x00
};
using ACCOUNT_CHAR_INFO_ = _ACCOUNT_CHAR_INFO_;
using PACCOUNT_CHAR_INFO_ = _ACCOUNT_CHAR_INFO_*;

struct _PCDATA_ {
    char szPCName[13];           // 0x000
    as_u8 byType;                // 0x00d
    as_u16 wLevel;               // 0x00e
    as_u32 dwExp;                // 0x010
    as_u16 wStr;                 // 0x014
    as_u16 wMagic;               // 0x016
    as_u16 wDex;                 // 0x018
    as_u16 wVit;                 // 0x01a
    as_u16 wMana;                // 0x01c
    as_u16 wPoint;               // 0x01e
    as_u16 wHP;                  // 0x020
    as_u16 wMp;                  // 0x022
    as_u16 wStoredHp;            // 0x024
    as_u16 wStoredMp;            // 0x026
    as_u16 wMapIndex;            // 0x028
    as_u8 _pad_02a[2];
    as_u32 dwCellIndex;          // 0x02c
    _SKILL_ SkillList;           // 0x030
    as_u8 byPKCount;             // 0x038
    as_u8 _pad_039;
    as_u16 wRTime;               // 0x03a
    _SOCIALINFO_ SInfo;          // 0x03c
    as_u32 dwMoney;              // 0x040
    _ITEM_IN_WEAR_ WearList[10]; // 0x044
    _ITEM_IN_INVEN_ HaveList[30];// 0x10c
};
using PCDATA_ = _PCDATA_;
using PPCDATA_ = _PCDATA_*;

struct ACCOUNT_INFO {
    as_u8 bUpdate;               // 0x000
    char szAccountName[21];      // 0x001
    as_u8 byCurrentPCIndex;      // 0x016
    as_u8 byCmd;                 // 0x017
    as_u8 byCmdSlot;             // 0x018
    as_u8 _pad_019[3];
    _ACCOUNT_CHAR_INFO_ AccountCharInfo; // 0x01c
    char szPasswd[21];           // 0x3a0
    char szIP[16];               // 0x3b5
    as_u8 _pad_3c5[3];
    as_u32 RemainTime;           // 0x3c8
    char PayMode[4];             // 0x3cc
    as_i32 PayNo;                // 0x3d0
    char Reserved1[33];          // 0x3d4
    char Reserved2[33];          // 0x3f5
    as_u8 _pad_416[2];
};
using PACCOUNT_INFO = ACCOUNT_INFO*;

struct _DB_QUERY_ {
    _QUERY_TYPE_ QueryType;      // 0x00
    char szAccountName[21];      // 0x04
    char szCharacterName[13];    // 0x19
    as_u8 byCharacType;          // 0x26
    as_u8 byNationality;         // 0x27
};
using DB_QUERY_ = _DB_QUERY_;
using PDB_QUERY_ = _DB_QUERY_*;

struct _MAP_INFO_ {
    as_u16 wMapNum;              // 0x00
    as_u16 wCurUser;             // 0x02
};
using MAP_INFO_ = _MAP_INFO_;
using PMAP_INFO_ = _MAP_INFO_*;

struct _ZONE_SERVER_INFO_ {
    _MAP_INFO_ arrMap[10];       // 0x00
};
using ZONE_SERVER_INFO_ = _ZONE_SERVER_INFO_;
using PZONE_SERVER_INFO_ = _ZONE_SERVER_INFO_*;

struct MarkData {
    as_u32 dwClanID;             // 0x000
    as_u32 dwMarkID;             // 0x004
    as_u8 mark[1250];            // 0x008
    as_u8 _pad_4ea[2];
    as_u32 dwPreviousMarkID;     // 0x4ec
    as_u32 dwReserved;           // 0x4f0
};

struct MSG_S2G_HEADER {
    as_u32 dwSize;               // 0x00
    as_u32 dwPCID;               // 0x04
    as_u8 byCtrl;                // 0x08
    as_u8 byCmd;                 // 0x09
};
using PMSG_S2G_HEADER = MSG_S2G_HEADER*;

struct MSG_S2C_HEADER {
    as_u32 dwSize;               // 0x00
    as_u32 dwPCID;               // 0x04
    as_u8 byCtrl;                // 0x08
    as_u8 byCmd;                 // 0x09
    as_u16 wProtocol;            // 0x0a
};
using PMSG_S2C_HEADER = MSG_S2C_HEADER*;

struct MSG_S2S_HEADER {
    as_u16 wProtocol;            // 0x00
};
using PMSG_S2S_HEADER = MSG_S2S_HEADER*;

struct MSG_HEADER {
    as_u16 wProtocol;            // 0x00
};
using PMSG_HEADER = MSG_HEADER*;

struct MSG_DFLT_HEADER {
    as_u32 dwSize;               // 0x00
    as_u32 dwPCID;               // 0x04
    as_u8 byCtrl;                // 0x08
    as_u8 byCmd;                 // 0x09
};
using PMSG_DFLT_HEADER = MSG_DFLT_HEADER*;

struct MSG_S2C_ERROR {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u16 wErrCode;             // 0x0c
    char szErrStr[64];           // 0x0e
};

struct MSG_S2C_PC_DISAPPEAR {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x0c
};

struct MSG_S2C_CHAR_LOGIN_OK {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    char szPCName[13];           // 0x0c
    as_u32 dwPCID;               // 0x19
    as_u16 wMapIndex;            // 0x1d
};

struct MSG_S2C_ANS_MOVE {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u8 bAns;                  // 0x0c
    as_u32 dwDestCell;           // 0x0d
};

struct MSG_S2C_SEE_MOVE {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u32 dwMovePCID;           // 0x0c
    as_u32 dwStartCell;          // 0x10
    as_u32 dwDestCell;           // 0x14
};

struct MSG_S2C_FIX_MOVE {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u32 dwFixCell;            // 0x0c
};

struct MSG_S2C_SEE_STOP {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u32 dwStopPCID;           // 0x0c
    as_u32 dwFixCell;            // 0x10
};

struct MSG_S2M_SVR_LOGIN {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u8 byThisServerID;        // 0x02
};

struct MSG_S2M_CHAR_LOGIN {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x02
    as_u8 byGateSvrID;           // 0x06
    char szAccountName[21];      // 0x07
    char szPasswd[21];           // 0x1c
    char szPCName[13];           // 0x31
    char szIP[16];               // 0x3e
    as_u32 RemainTime;           // 0x4e
    char PayMode[4];             // 0x52
    as_i32 PayNo;                // 0x56
    char Reserved1[33];          // 0x5a
    char Reserved2[33];          // 0x7b
};

struct MSG_S2M_WORLD_LOGIN {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    char szPCName[13];           // 0x02
    as_u32 dwPCID;               // 0x0f
};

struct MSG_S2G_DISCONNECT {
    MSG_S2G_HEADER MsgHeader;    // 0x00
};

struct MSG_S2G_SWITCH_ZONE {
    MSG_S2G_HEADER MsgHeader;    // 0x00
    as_u8 byNewServerID;         // 0x0a
};

struct MSG_S2G_BROADCAST {
    MSG_S2G_HEADER MsgHeader;    // 0x00
};

struct MSG_S2C_ANS_DELETE_PLAYER {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    char szCharacterName[13];    // 0x0c
};

struct MSG_S2M_ASK_CREATE_PLAYER {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x02
    as_u8 byGateSvrID;           // 0x06
    as_u8 byClassIndex;          // 0x07
    as_u8 byNation;              // 0x08
    char szCharacterName[13];    // 0x09
    char szAccountName[21];      // 0x16
};

struct MSG_S2M_ASK_DELETE_PLAYER {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x02
    as_u8 byGateSvrID;           // 0x06
    char szCharacterName[13];    // 0x07
};

struct MSG_A2C_TRANSFER_MARK {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    char szPCName[13];           // 0x0c
    as_u32 dwClanID;             // 0x19
    as_u32 dwMarkID;             // 0x1d
    as_u32 dwRandomNumber;       // 0x21
    as_u8 byResultCode;          // 0x25
};

struct MSG_A2C_ANS_MARK {
    MSG_S2C_HEADER MsgHeader;    // 0x000
    as_u8 byResultCode;          // 0x00c
    as_u32 dwMarkID;             // 0x00d
    as_u16 wClanIndex;           // 0x011
    as_u8 Mark[1250];            // 0x013
};

struct MSG_A2M_CONFIRM_MARK {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    char szPCName[13];           // 0x02
    as_u32 dwClanID;             // 0x0f
    as_u32 dwMarkID;             // 0x13
    as_u8 byResultCode;          // 0x17
};

struct MSG_G2S_NEW_CLIENT {
    MSG_S2G_HEADER MsgHeader;    // 0x00
    char szAccountName[21];      // 0x0a
    char szPasswd[21];           // 0x1f
    char szIP[16];               // 0x34
    as_u32 RemainTime;           // 0x44
    char PayMode[4];             // 0x48
    as_i32 PayNo;                // 0x4c
    char Reserved1[33];          // 0x50
    char Reserved2[33];          // 0x71
};

struct MSG_G2S_DISCONNECT {
    MSG_S2G_HEADER MsgHeader;    // 0x00
    as_u8 byReason;              // 0x0a
};

struct MSG_C2S_CHAR_LOGIN {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    char szPCName[13];           // 0x0c
    as_i32 CurVersion;           // 0x19
};

struct MSG_C2S_ASK_CREATE_PLAYER {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u8 byClassIndex;          // 0x0c
    as_u8 byNation;              // 0x0d
    char szCharacterName[13];    // 0x0e
};

struct MSG_C2S_ASK_DELETE_PLAYER {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    char szCharacterName[13];    // 0x0c
};

struct MSG_C2A_TRANSFER_MARK {
    MSG_S2C_HEADER MsgHeader;    // 0x000
    char szPCName[13];           // 0x00c
    as_u32 dwClanID;             // 0x019
    as_u32 dwMarkID;             // 0x01d
    as_u32 dwRandomNumber;       // 0x021
    as_u8 Mark[1250];            // 0x025
};

struct MSG_C2A_ASK_MARK {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u32 dwMarkID;             // 0x0c
};

struct MSG_M2S_ERROR {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x02
    as_u8 byGateSvrID;           // 0x06
    as_u16 wErrCode;             // 0x07
    char szErrStr[64];           // 0x09
};

struct MSG_M2S_CHAR_LOGIN {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x02
    as_u8 byGateSvrID;           // 0x06
    as_u8 byNewZoneSvrID;        // 0x07
    as_u16 wMapIndex;            // 0x08
};

struct MSG_M2S_ANS_CREATE_PLAYER {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x02
    as_u8 byGateSvrID;           // 0x06
    char CharacterName[13];      // 0x07
};

struct MSG_M2S_ANS_DELETE_PLAYER {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x02
    as_u8 byGateSvrID;           // 0x06
    char CharacterName[13];      // 0x07
};

struct MSG_M2A_REGISTER_MARK {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    char szPCName[13];           // 0x02
    as_u32 dwPCID;               // 0x0f
    as_u8 byGateSvrID;           // 0x13
    as_u32 dwClanID;             // 0x14
    as_u32 dwMarkID;             // 0x18
};

struct MSG_G2S_SVR_LOGIN {
    MSG_S2G_HEADER MsgHeader;    // 0x00
    as_u8 byThisServerID;        // 0x0a
};

struct MSG_V2S_CMM_KILL {
    MSG_HEADER MsgHeader;        // 0x00
};

struct MSG_S2V_CMM_KILL {
    MSG_HEADER MsgHeader;        // 0x00
};

struct MSG_V2S_MAIN_SHOUT {
    MSG_HEADER MsgHeader;        // 0x00
    char szMsg[64];              // 0x02
};

struct MSG_V2S_MAIN_WHISPER {
    MSG_HEADER MsgHeader;        // 0x00
    char szID[16];               // 0x02
    char szMsg[64];              // 0x12
};

struct MSG_S2V_CMM_ALIVE {
    MSG_HEADER MsgHeader;        // 0x00
};

struct MSG_S2V_MAIN_SHOUT {
    MSG_HEADER MsgHeader;        // 0x00
    char szMsg[64];              // 0x02
};

struct MSG_S2V_ZONE_INFO {
    MSG_HEADER MsgHeader;        // 0x00
    _ZONE_SERVER_INFO_ Info;     // 0x02
};

struct MSG_S2C_ANS_CREATE_PLAYER {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u8 byClassIndex;          // 0x0c
    char szCharacterName[13];    // 0x0d
    _ACCOUNT_ITEM_ WearList[10]; // 0x1a
};

struct MSG_S2C_PC_APPEAR {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x0c
    _CHARACTER_INFO_ CharInfo;   // 0x10
};

struct MSG_S2C_CHAR_LIST {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    _CHARACTER_INFO_ CharInfo[5];// 0x0c
};

struct MSG_M2S_CHAR_UPDATE {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    char szAccountName[21];      // 0x02
    _CHARACTER_INFO_ CharInfo;   // 0x17
};

struct MSG_S2C_WORLD_LOGIN {
    MSG_S2C_HEADER MsgHeader;    // 0x00
    _PCDATA_ PCData;             // 0x0c
};

struct MSG_M2S_WORLD_LOGIN {
    MSG_S2S_HEADER MsgHeader;    // 0x000
    as_u32 dwPCID;               // 0x002
    _PCDATA_ PCData;             // 0x006
    char szPasswd[21];           // 0x36a
    char szIP[16];               // 0x37f
    as_u32 RemainTime;           // 0x38f
    char PayMode[4];             // 0x393
    as_i32 PayNo;                // 0x397
    char Reserved1[33];          // 0x39b
    char Reserved2[33];          // 0x3bc
};

struct MSG_S2M_CHAR_LOGOUT {
    MSG_S2S_HEADER MsgHeader;    // 0x00
    as_u32 dwPCID;               // 0x02
    _PCDATA_ PCData;             // 0x06
};

struct CFDB {
    _ACCOUNT_CHAR_INFO_ m_AccountCharInfo; // 0x000
    as_u16 m_wSize;             // 0x384
    as_u8 _pad_386[2];
};
using PCFDB = CFDB*;

struct CShareObject {
    as_i32 m_lockFlag;           // 0x00
    as_i32 m_refCnt;             // 0x04
};

struct CLoopThread {
    as_ptr vftable;              // 0x00
    as_i32 m_bRunThread;         // 0x04
    as_ptr m_hThread;            // 0x08
    as_u32 m_dwThreadID;         // 0x0c
};

struct CODBC {
    as_ptr vftable;              // 0x00
    as_ptr m_hEnv;               // 0x04
    as_ptr m_hDbc;               // 0x08
};

struct CSimpleCrypt {
    as_ptr vftable;              // 0x00
    as_i32 m_ConstKey1;          // 0x04
    as_i32 m_ConstKey2;          // 0x08
    as_i32 m_DynamicKey;         // 0x0c
};

struct CMsgCrypt {
    CSimpleCrypt SimpleCrypt;    // 0x00
    as_i32 m_iMsgHeaderSize;     // 0x10
};

struct CLoopSleepMgr {
    as_ptr vftable;              // 0x00
    as_i32 m_iInterval;          // 0x04
    as_u32 m_dwLongSleep;        // 0x08
    as_u32 m_dwShortSleep;       // 0x0c
    as_i32 m_iCounter;           // 0x10
};

struct CSyncSection {
    _RTL_CRITICAL_SECTION m_cs;  // 0x00
    as_u8 m_bLocked;             // 0x18
    as_u8 _pad_19[3];
};

struct StdList_DB_QUERY_ptr {
    as_u8 allocator;             // 0x00
    as_u8 _pad_01[3];
    as_ptr _Head;                // 0x04 std::list<...>::_Node*
    as_u32 _Size;                // 0x08
};

struct StdMap_u32_ACCOUNT_INFO_ptr {
    as_u8 bytes[16];             // VC6 std::map<unsigned long, ACCOUNT_INFO*>
};

struct StdPair_iter_bool {
    as_u8 bytes[8];
};

struct CAccntCharacDB {
    CLoopThread LoopThread;      // 0x00
    CODBC Odbc;                  // 0x10
    as_i32 m_bConnect;           // 0x1c
    as_u8 m_byWorldIndex;        // 0x20
    char m_szDBServer[64];       // 0x21
    char m_szLogin[32];          // 0x61
    char m_szPasswd[32];         // 0x81
    as_u8 _pad_0a1[3];
    as_i32 m_iRetry;             // 0x0a4
    StdList_DB_QUERY_ptr m_DBQueryQ; // 0x0a8
    CSyncSection m_SyncDBQueryQ; // 0x0b4
};

struct CUDPSock {
    as_ptr vftable;              // 0x000
    as_u32 m_hSocket;            // 0x004
    as_ptr m_wsaEvent;           // 0x008
    char m_ReadBuf[1024];        // 0x00c
};

struct CSystemMgr {
    CUDPSock UdpSock;            // 0x000
    sockaddr_in m_peerAddr;      // 0x40c
    as_i32 m_lShutDownTime;      // 0x41c
};

struct CBaseServer {
    CLoopThread LoopThread;      // 0x000000
    as_i32 m_bConnect;           // 0x000010
    as_u32 m_sSocket;            // 0x000014
    as_ptr m_wsaEvent;           // 0x000018
    _WSANETWORKEVENTS m_netEvent;// 0x00001c
    char m_RecvBuf[0x400000];    // 0x000048
    as_i32 m_nRecvStartPos;      // 0x400048
    as_i32 m_nRecvEndPos;        // 0x40004c
    char m_SendBuf[0x400000];    // 0x400050
    as_i32 m_nSendStartPos;      // 0x800050
    as_i32 m_nSendEndPos;        // 0x800054
    _RTL_CRITICAL_SECTION m_csSend; // 0x800058
};

struct CBaseServerEx {
    CBaseServer BaseServer;
};

struct CGateServer {
    CBaseServer BaseServer;      // 0x000000
    as_i32 m_bRunServer;         // 0x800070
    as_u8 m_bySvrID;             // 0x800074
    as_u8 _pad_800075[3];
};

struct CStandbyServer {
    CBaseServer BaseServer;      // 0x000000
    as_i32 m_iIndex;             // 0x800070
    as_i32 m_bLogin;             // 0x800074
};

struct CMainServer {
    CBaseServer BaseServer;      // 0x000000
    as_i32 m_bRunServer;         // 0x800070
};

struct CSvrManage {
    as_ptr m_GateServer;         // 0x00 CGateServer*
    as_i32 m_iGateServerNum;     // 0x04
    as_i32 m_bSocketActive;      // 0x08
    as_ptr m_pStandbyServer[5];  // 0x0c CStandbyServer*
    as_i32 m_iStandbyServerNum;  // 0x20
};

struct CTickManage {
    as_i32 m_lNowTick;           // 0x00
    as_i32 m_lSecondNewDate;     // 0x04
    as_i32 m_lSecondOClock;      // 0x08
    as_i32 m_lSecond120;         // 0x0c
    as_i32 m_lSecond60;          // 0x10
    as_i32 m_lSecond30;          // 0x14
    as_i32 m_lSecond10;          // 0x18
    as_i32 m_lSecond2;           // 0x1c
};

struct CMarkFDB {
    as_u32 dwLatestIssuedMarkID; // 0x00
    as_u8 ID2Data[16];           // 0x04 VC6 std::map<unsigned long, MarkData>
};

struct CAccountManage {
    StdMap_u32_ACCOUNT_INFO_ptr m_AccMap; // 0x00
    StdPair_iter_bool m_pair;             // 0x10
};

struct CListenServer {
    CLoopThread LoopThread;      // 0x00
    as_u32 m_sSocket;            // 0x10
    as_i32 m_bConnect;           // 0x14
    as_ptr m_wsaEvent;           // 0x18
    _WSANETWORKEVENTS m_netEvent;// 0x1c
};

#pragma pack(pop)

static_assert(sizeof(_WSANETWORKEVENTS) == 0x2c, "bad _WSANETWORKEVENTS size");
static_assert(sizeof(_RTL_CRITICAL_SECTION) == 0x18, "bad _RTL_CRITICAL_SECTION size");
static_assert(sizeof(_ITEM_ID_) == 0x08, "bad _ITEM_ID_ size");
static_assert(sizeof(_ITEM_INFO_) == 0x04, "bad _ITEM_INFO_ size");
static_assert(sizeof(_ITEM_SERIALKEY_) == 0x04, "bad _ITEM_SERIALKEY_ size");
static_assert(sizeof(_ACCOUNT_ITEM_) == 0x10, "bad _ACCOUNT_ITEM_ size");
static_assert(sizeof(_CHARACTER_INFO_) == 0xb4, "bad _CHARACTER_INFO_ size");
static_assert(sizeof(_ACCOUNT_CHAR_INFO_) == 0x384, "bad _ACCOUNT_CHAR_INFO_ size");
static_assert(sizeof(_PCDATA_) == 0x364, "bad _PCDATA_ size");
static_assert(sizeof(ACCOUNT_INFO) == 0x418, "bad ACCOUNT_INFO size");
static_assert(sizeof(_DB_QUERY_) == 0x28, "bad _DB_QUERY_ size");
static_assert(sizeof(MarkData) == 0x4f4, "bad MarkData size");

static_assert(sizeof(MSG_S2G_HEADER) == 0x0a, "bad MSG_S2G_HEADER size");
static_assert(sizeof(MSG_S2C_HEADER) == 0x0c, "bad MSG_S2C_HEADER size");
static_assert(sizeof(MSG_S2S_HEADER) == 0x02, "bad MSG_S2S_HEADER size");
static_assert(sizeof(MSG_S2C_ERROR) == 0x4e, "bad MSG_S2C_ERROR size");
static_assert(sizeof(MSG_S2C_CHAR_LOGIN_OK) == 0x1f, "bad MSG_S2C_CHAR_LOGIN_OK size");
static_assert(sizeof(MSG_S2M_CHAR_LOGIN) == 0x9c, "bad MSG_S2M_CHAR_LOGIN size");
static_assert(sizeof(MSG_A2C_ANS_MARK) == 0x4f5, "bad MSG_A2C_ANS_MARK size");
static_assert(sizeof(MSG_G2S_NEW_CLIENT) == 0x92, "bad MSG_G2S_NEW_CLIENT size");
static_assert(sizeof(MSG_C2S_CHAR_LOGIN) == 0x1d, "bad MSG_C2S_CHAR_LOGIN size");
static_assert(sizeof(MSG_C2A_TRANSFER_MARK) == 0x507, "bad MSG_C2A_TRANSFER_MARK size");
static_assert(sizeof(MSG_M2S_ERROR) == 0x49, "bad MSG_M2S_ERROR size");
static_assert(sizeof(MSG_S2V_ZONE_INFO) == 0x2a, "bad MSG_S2V_ZONE_INFO size");
static_assert(sizeof(MSG_S2C_ANS_CREATE_PLAYER) == 0xba, "bad MSG_S2C_ANS_CREATE_PLAYER size");
static_assert(sizeof(MSG_S2C_PC_APPEAR) == 0xc4, "bad MSG_S2C_PC_APPEAR size");
static_assert(sizeof(MSG_S2C_CHAR_LIST) == 0x390, "bad MSG_S2C_CHAR_LIST size");
static_assert(sizeof(MSG_M2S_CHAR_UPDATE) == 0xcb, "bad MSG_M2S_CHAR_UPDATE size");
static_assert(sizeof(MSG_S2C_WORLD_LOGIN) == 0x370, "bad MSG_S2C_WORLD_LOGIN size");
static_assert(sizeof(MSG_M2S_WORLD_LOGIN) == 0x3dd, "bad MSG_M2S_WORLD_LOGIN size");
static_assert(sizeof(MSG_S2M_CHAR_LOGOUT) == 0x36a, "bad MSG_S2M_CHAR_LOGOUT size");

static_assert(sizeof(CFDB) == 0x388, "bad CFDB size");
static_assert(sizeof(CLoopThread) == 0x10, "bad CLoopThread size");
static_assert(sizeof(CODBC) == 0x0c, "bad CODBC size");
static_assert(sizeof(CSimpleCrypt) == 0x10, "bad CSimpleCrypt size");
static_assert(sizeof(CMsgCrypt) == 0x14, "bad CMsgCrypt size");
static_assert(sizeof(CSyncSection) == 0x1c, "bad CSyncSection size");
static_assert(sizeof(CAccntCharacDB) == 0xd0, "bad CAccntCharacDB size");
static_assert(sizeof(CUDPSock) == 0x40c, "bad CUDPSock size");
static_assert(sizeof(CSystemMgr) == 0x420, "bad CSystemMgr size");
static_assert(sizeof(CBaseServer) == 0x800070, "bad CBaseServer size");
static_assert(sizeof(CGateServer) == 0x800078, "bad CGateServer size");
static_assert(sizeof(CStandbyServer) == 0x800078, "bad CStandbyServer size");
static_assert(sizeof(CMainServer) == 0x800074, "bad CMainServer size");
static_assert(sizeof(CSvrManage) == 0x24, "bad CSvrManage size");
static_assert(sizeof(CTickManage) == 0x20, "bad CTickManage size");
static_assert(sizeof(CMarkFDB) == 0x14, "bad CMarkFDB size");
static_assert(sizeof(CAccountManage) == 0x18, "bad CAccountManage size");
static_assert(sizeof(CListenServer) == 0x48, "bad CListenServer size");

static_assert(offsetof(ACCOUNT_INFO, AccountCharInfo) == 0x1c, "bad ACCOUNT_INFO::AccountCharInfo offset");
static_assert(offsetof(ACCOUNT_INFO, RemainTime) == 0x3c8, "bad ACCOUNT_INFO::RemainTime offset");
static_assert(offsetof(_PCDATA_, WearList) == 0x44, "bad _PCDATA_::WearList offset");
static_assert(offsetof(CBaseServer, m_nRecvEndPos) == 0x40004c, "bad CBaseServer::m_nRecvEndPos offset");
static_assert(offsetof(CBaseServer, m_nSendEndPos) == 0x800054, "bad CBaseServer::m_nSendEndPos offset");
