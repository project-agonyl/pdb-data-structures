#pragma once

/*
 * Recovered layout declarations for CenterServer.exe.
 *
 * Source artifacts:
 *   - CenterServer.pdb: DIA type records, field offsets, and sizes
 *   - CenterServer.map: application object/function ownership
 *   - CenterServer.exe: original Win32 image matched to the PDB/map timestamp
 *
 * This is a layout header for the original 32-bit binary. Pointer, HANDLE,
 * SOCKET, WSAEVENT, and vftable fields are represented as 32-bit values so the
 * structures keep the same size when inspected from a modern toolchain.
 */

#include <stddef.h>
#include <stdint.h>

#pragma pack(push, 1)

enum CDerbyManager_StatIndex {
    DERBY_STAT_STA = 0,
    DERBY_STAT_SPD = 1,
    DERBY_STAT_ACC = 2,
    DERBY_STAT_END = 3,
    DERBY_STAT_COR = 4,
};

struct MSG_S2S_HEADER {
    uint16_t wProtocol;               /* 0x0000 */
    uint16_t wSize;                   /* 0x0002 */
};
static_assert(sizeof(MSG_S2S_HEADER) == 0x4, "MSG_S2S_HEADER size mismatch");

struct MSG_S2G_HEADER {
    uint32_t dwSize;                  /* 0x0000 */
    uint32_t dwPCID;                  /* 0x0004 */
    uint8_t byCtrl;                   /* 0x0008 */
    uint8_t byCmd;                    /* 0x0009 */
};
static_assert(sizeof(MSG_S2G_HEADER) == 0xa, "MSG_S2G_HEADER size mismatch");

struct MSG_G2S_SVR_LOGIN {
    MSG_S2G_HEADER MsgHeader;         /* 0x0000 */
    uint8_t byThisServerID;           /* 0x000a */
};
static_assert(sizeof(MSG_G2S_SVR_LOGIN) == 0xb, "MSG_G2S_SVR_LOGIN size mismatch");

struct _DERBY_MONSTER_INFO_EX_ {
    uint8_t byMonsterIndex;           /* 0x0000 */
    uint8_t byStamina;                /* 0x0001 */
    uint8_t bySpeed;                  /* 0x0002 */
    uint8_t byAcceleration;           /* 0x0003 */
    uint8_t byEndurance;              /* 0x0004 */
    uint8_t byCornering;              /* 0x0005 */
    uint8_t byElemental;              /* 0x0006 */
    uint8_t _pad0007[1];              /* 0x0007 */
    uint16_t wNumGames;               /* 0x0008 */
    uint16_t wNumWins;                /* 0x000a */
    uint16_t wRecentWins;             /* 0x000c */
};
static_assert(sizeof(_DERBY_MONSTER_INFO_EX_) == 0xe, "_DERBY_MONSTER_INFO_EX_ size mismatch");
static_assert(offsetof(_DERBY_MONSTER_INFO_EX_, wNumGames) == 0x8, "_DERBY_MONSTER_INFO_EX_::wNumGames offset mismatch");

struct _DERBY_HISTORY_INFO_ {
    uint16_t iDerbyIndex;             /* 0x0000 */
    uint8_t byFirstPlace;             /* 0x0002 */
    uint8_t byFirstPlaceIndex;        /* 0x0003 */
    uint8_t bySecondPlace;            /* 0x0004 */
    uint8_t bySecondPlaceIndex;       /* 0x0005 */
    uint8_t _pad0006[2];              /* 0x0006 */
    float fSingleEarningRatio;        /* 0x0008 */
    float fDoubleEarningRatio;        /* 0x000c */
};
static_assert(sizeof(_DERBY_HISTORY_INFO_) == 0x10, "_DERBY_HISTORY_INFO_ size mismatch");
static_assert(offsetof(_DERBY_HISTORY_INFO_, fSingleEarningRatio) == 0x8, "_DERBY_HISTORY_INFO_::fSingleEarningRatio offset mismatch");

struct _RACE_SCHEDULE_ {
    int32_t iDerbyIndex;              /* 0x0000 */
    int32_t iLapCount;                /* 0x0004 */
    int32_t iRaceType;                /* 0x0008 */
    int32_t iEntryNo[5];              /* 0x000c */
};
static_assert(sizeof(_RACE_SCHEDULE_) == 0x20, "_RACE_SCHEDULE_ size mismatch");

struct _LOTTO_LOG_DATA_ {
    int32_t nLottoCnt;                /* 0x0000 */
    int32_t iLuckyNumber[5];          /* 0x0004 */
    int32_t nTotalWinner[4];          /* 0x0018 */
    uint32_t iRemainMoney;            /* 0x0028 */
    char szDateLog[64];               /* 0x002c */
};
static_assert(sizeof(_LOTTO_LOG_DATA_) == 0x6c, "_LOTTO_LOG_DATA_ size mismatch");

struct MSG_Z2CG_ASK_DERBY_INFO {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
};
static_assert(sizeof(MSG_Z2CG_ASK_DERBY_INFO) == 0x4, "MSG_Z2CG_ASK_DERBY_INFO size mismatch");

struct MSG_Z2CG_DERBY_BET {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    uint8_t byBetCase;                /* 0x0004 */
    uint16_t wBetMoney;               /* 0x0005 */
};
static_assert(sizeof(MSG_Z2CG_DERBY_BET) == 0x7, "MSG_Z2CG_DERBY_BET size mismatch");

struct MSG_Z2CG_DERBY_RACE_END {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    int32_t iDerbyIndex;              /* 0x0004 */
};
static_assert(sizeof(MSG_Z2CG_DERBY_RACE_END) == 0x8, "MSG_Z2CG_DERBY_RACE_END size mismatch");

struct MSG_CG2Z_ANS_DERBY_INFO {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    int32_t iDerbyIndex;              /* 0x0004 */
    int32_t iDerbyTickCount;          /* 0x0008 */
    _DERBY_MONSTER_INFO_EX_ dmiEntryList[5]; /* 0x000c */
    uint8_t byRaceType;               /* 0x0052 */
    int32_t nVCurvePoint;             /* 0x0053 */
    float fVCurve[70];                /* 0x0057 */
    _DERBY_HISTORY_INFO_ dhiHistory[480]; /* 0x016f */
    int32_t recentHistoryIndex;       /* 0x1f6f */
    int32_t recentLoggedDerbyIndex;   /* 0x1f73 */
    uint32_t iBetTotal[15];           /* 0x1f77 */
    float fReturnRatio;               /* 0x1fb3 */
};
static_assert(sizeof(MSG_CG2Z_ANS_DERBY_INFO) == 0x1fb7, "MSG_CG2Z_ANS_DERBY_INFO size mismatch");
static_assert(offsetof(MSG_CG2Z_ANS_DERBY_INFO, dhiHistory) == 0x16f, "MSG_CG2Z_ANS_DERBY_INFO::dhiHistory offset mismatch");

struct MSG_CG2Z_DERBY_TICK {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    int32_t iDerbyIndex;              /* 0x0004 */
    uint8_t byDerbyTick;              /* 0x0008 */
};
static_assert(sizeof(MSG_CG2Z_DERBY_TICK) == 0x9, "MSG_CG2Z_DERBY_TICK size mismatch");

struct MSG_CG2Z_DERBY_BET_INFO {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    int32_t iDerbyIndex;              /* 0x0004 */
    uint32_t iBetTotal[15];           /* 0x0008 */
    float fReturnRatio;               /* 0x0044 */
};
static_assert(sizeof(MSG_CG2Z_DERBY_BET_INFO) == 0x48, "MSG_CG2Z_DERBY_BET_INFO size mismatch");

struct MSG_CG2Z_DERBY_ENTRY_INFO {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    int32_t iDerbyIndex;              /* 0x0004 */
    _DERBY_MONSTER_INFO_EX_ dmiEntryList[5]; /* 0x0008 */
    uint8_t byRaceType;               /* 0x004e */
    int32_t nVCurvePoint;             /* 0x004f */
};
static_assert(sizeof(MSG_CG2Z_DERBY_ENTRY_INFO) == 0x53, "MSG_CG2Z_DERBY_ENTRY_INFO size mismatch");

struct MSG_CG2Z_DERBY_RACE_INFO {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    int32_t iDerbyIndex;              /* 0x0004 */
    int32_t nVCurvePoint;             /* 0x0008 */
    float fVCurve[70];                /* 0x000c */
};
static_assert(sizeof(MSG_CG2Z_DERBY_RACE_INFO) == 0x124, "MSG_CG2Z_DERBY_RACE_INFO size mismatch");

struct MSG_CG2Z_DERBY_RACE_END {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    int32_t iDerbyIndex;              /* 0x0004 */
    _DERBY_HISTORY_INFO_ dhiResult;   /* 0x0008 */
};
static_assert(sizeof(MSG_CG2Z_DERBY_RACE_END) == 0x18, "MSG_CG2Z_DERBY_RACE_END size mismatch");

struct MSG_Z2CG_ASK_LOTTO_INFO {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
};
static_assert(sizeof(MSG_Z2CG_ASK_LOTTO_INFO) == 0x4, "MSG_Z2CG_ASK_LOTTO_INFO size mismatch");

struct MSG_Z2CG_LOTTO_BET {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    uint8_t arrLottoNum[5];           /* 0x0004 */
};
static_assert(sizeof(MSG_Z2CG_LOTTO_BET) == 0x9, "MSG_Z2CG_LOTTO_BET size mismatch");

struct MSG_CG2Z_ANS_LOTTO_INFO {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    bool m_bIsAbleToPurchase;         /* 0x0004 */
    int32_t m_nLoadedHistoryNum;      /* 0x0005 */
    _LOTTO_LOG_DATA_ m_stNowLottoStatus; /* 0x0009 */
    _LOTTO_LOG_DATA_ m_arrLottoHistory[9]; /* 0x0075 */
};
static_assert(sizeof(MSG_CG2Z_ANS_LOTTO_INFO) == 0x441, "MSG_CG2Z_ANS_LOTTO_INFO size mismatch");
static_assert(offsetof(MSG_CG2Z_ANS_LOTTO_INFO, m_stNowLottoStatus) == 0x9, "MSG_CG2Z_ANS_LOTTO_INFO::m_stNowLottoStatus offset mismatch");

struct MSG_CG2Z_LOTTO_BET_INFO {
    MSG_S2S_HEADER MsgHeader;         /* 0x0000 */
    bool m_bIsAbleToPurchase;         /* 0x0004 */
    _LOTTO_LOG_DATA_ m_stNowLottoStatus; /* 0x0005 */
};
static_assert(sizeof(MSG_CG2Z_LOTTO_BET_INFO) == 0x71, "MSG_CG2Z_LOTTO_BET_INFO size mismatch");

struct CLoopThread {
    uint32_t __vftable;               /* 0x0000, original void * */
    int32_t m_bRunThread;             /* 0x0004 */
    uint32_t m_hThread;               /* 0x0008, original void * */
    uint32_t m_dwThreadID;            /* 0x000c */
};
static_assert(sizeof(CLoopThread) == 0x10, "CLoopThread size mismatch");

struct CLoopSleepMgr {
    uint32_t __vftable;               /* 0x0000, original void * */
    int32_t m_iInterval;              /* 0x0004 */
    uint32_t m_dwLongSleep;           /* 0x0008 */
    uint32_t m_dwShortSleep;          /* 0x000c */
    int32_t m_iCounter;               /* 0x0010 */
};
static_assert(sizeof(CLoopSleepMgr) == 0x14, "CLoopSleepMgr size mismatch");

struct CTickManage {
    int32_t m_lNowTick;               /* 0x0000 */
    uint32_t m_dwNowMiliTick;         /* 0x0004 */
    uint32_t m_ptmNow;                /* 0x0008, original tm * */
    int32_t m_lSecondNewDate;         /* 0x000c */
    int32_t m_lSecondOClock;          /* 0x0010 */
    int32_t m_lSecond10Min;           /* 0x0014 */
    int32_t m_lSecond180;             /* 0x0018 */
    int32_t m_lSecond120;             /* 0x001c */
    int32_t m_lSecond60;              /* 0x0020 */
    int32_t m_lSecond30;              /* 0x0024 */
    int32_t m_lSecond10;              /* 0x0028 */
    int32_t m_lSecond5;               /* 0x002c */
    int32_t m_lSecond2;               /* 0x0030 */
    int32_t m_lSecond1;               /* 0x0034 */
    uint32_t m_dwMiliSecond500;       /* 0x0038 */
};
static_assert(sizeof(CTickManage) == 0x3c, "CTickManage size mismatch");

struct CDerbyManager {
    int32_t iDerbyIndex;              /* 0x0000 */
    int32_t iDerbyTickCount;          /* 0x0004 */
    _DERBY_MONSTER_INFO_EX_ dmiMonster[32]; /* 0x0008 */
    _DERBY_HISTORY_INFO_ dhiHistory[480]; /* 0x01c8 */
    _DERBY_MONSTER_INFO_EX_ dmiEntryList[5]; /* 0x1fc8 */
    uint8_t _pad200e[2];              /* 0x200e */
    int32_t iRaceType;                /* 0x2010 */
    float fVCurve[70];                /* 0x2014 */
    int32_t nVCurvePoint;             /* 0x212c */
    float fRandomDev;                 /* 0x2130 */
    float fWeight[5][14];             /* 0x2134 */
    int32_t iStaminaDecreaseMin;      /* 0x224c */
    int32_t iStaminaDecreaseMax;      /* 0x2250 */
    int32_t iStaminaIncrease;         /* 0x2254 */
    int32_t iElementalOfWeek;         /* 0x2258 */
    _RACE_SCHEDULE_ arrRaceSchedule[100]; /* 0x225c */
    int32_t recentBackupFileID;       /* 0x2edc */
    int32_t recentBackupStamp;        /* 0x2ee0 */
    int32_t recentHistoryIndex;       /* 0x2ee4 */
    int32_t recentLoggedDerbyIndex;   /* 0x2ee8 */
    uint32_t iBetTotal[15];           /* 0x2eec */
    float fReturnRatio;               /* 0x2f28 */
    float fRatioTable[15];            /* 0x2f2c */
    bool bIsRatioValid;               /* 0x2f68 */
    uint8_t _pad2f69[3];              /* 0x2f69 */
    uint32_t iInitialBet[15];         /* 0x2f6c */
};
static_assert(sizeof(CDerbyManager) == 0x2fa8, "CDerbyManager size mismatch");
static_assert(offsetof(CDerbyManager, arrRaceSchedule) == 0x225c, "CDerbyManager::arrRaceSchedule offset mismatch");
static_assert(offsetof(CDerbyManager, iInitialBet) == 0x2f6c, "CDerbyManager::iInitialBet offset mismatch");

struct CLottoManager {
    uint32_t __vftable;               /* 0x0000, original void * */
    bool m_bIsAbleToPurchase;         /* 0x0004 */
    uint8_t _pad0005[3];              /* 0x0005 */
    int32_t m_nLoadedHistoryNum;      /* 0x0008 */
    _LOTTO_LOG_DATA_ m_stNowLottoStatus; /* 0x000c */
    _LOTTO_LOG_DATA_ m_arrLottoHistory[9]; /* 0x0078 */
};
static_assert(sizeof(CLottoManager) == 0x444, "CLottoManager size mismatch");
static_assert(offsetof(CLottoManager, m_arrLottoHistory) == 0x78, "CLottoManager::m_arrLottoHistory offset mismatch");

struct CBaseServer {
    CLoopThread CLoopThread_base;     /* 0x000000 */
    int32_t m_bConnect;               /* 0x000010 */
    uint32_t m_sSocket;               /* 0x000014, original SOCKET */
    uint32_t m_wsaEvent;              /* 0x000018, original WSAEVENT/void * */
    uint8_t m_netEvent[44];           /* 0x00001c, original _WSANETWORKEVENTS */
    char m_RecvMsgQBuf[0x400000];     /* 0x000048 */
    int32_t m_nRecvStartPos;          /* 0x400048 */
    int32_t m_nRecvEndPos;            /* 0x40004c */
    char m_SendMsgQBuf[0x400000];     /* 0x400050 */
    int32_t m_nSendStartPos;          /* 0x800050 */
    int32_t m_nSendEndPos;            /* 0x800054 */
    int32_t m_iSentCount;             /* 0x800058 */
    int32_t m_iSentSize;              /* 0x80005c */
    uint8_t m_csSend[24];             /* 0x800060, original _RTL_CRITICAL_SECTION */
};
static_assert(sizeof(CBaseServer) == 0x800078, "CBaseServer size mismatch");
static_assert(offsetof(CBaseServer, m_RecvMsgQBuf) == 0x48, "CBaseServer::m_RecvMsgQBuf offset mismatch");
static_assert(offsetof(CBaseServer, m_SendMsgQBuf) == 0x400050, "CBaseServer::m_SendMsgQBuf offset mismatch");

struct CBaseServerEx {
    CBaseServer CBaseServer_base;     /* 0x000000 */
};
static_assert(sizeof(CBaseServerEx) == 0x800078, "CBaseServerEx size mismatch");

struct CZoneServer {
    CBaseServerEx CBaseServerEx_base; /* 0x000000 */
    int32_t m_bRunServer;             /* 0x800078 */
    char m_szZoneServerIP[16];        /* 0x80007c */
    int32_t m_iZoneServerPort;        /* 0x80008c */
    int32_t m_iZoneServerID;          /* 0x800090 */
    int32_t m_bIsDerby;               /* 0x800094 */
    int32_t m_bIsLotto;               /* 0x800098 */
    int32_t m_lTickConnected;         /* 0x80009c */
};
static_assert(sizeof(CZoneServer) == 0x8000a0, "CZoneServer size mismatch");
static_assert(offsetof(CZoneServer, m_szZoneServerIP) == 0x80007c, "CZoneServer::m_szZoneServerIP offset mismatch");

struct _InternalExceptionHandlerClass {
    uint8_t _unused;                  /* PDB size is 1; no data members */
};
static_assert(sizeof(_InternalExceptionHandlerClass) == 0x1, "_InternalExceptionHandlerClass size mismatch");

#pragma pack(pop)
