struct ThreadParam {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    u32 attr;
    u32 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    u32 attr;
    u32 option;
};
int CreateSema(struct SemaParam *);
int DeleteSema(int);
int CreateThread(struct ThreadParam *);
int StartThread(int, void *);
int GetThreadId(void);
int ChangeThreadPriority(int, int);
void func_001AE420(void *);
extern char jtbl_004C006C[];
extern char D_0050A1C0[];
extern char D_01107000[];
extern s32 D_01107400[];
extern s32 D_01107408[];

#define g_tid (*(s32 *)(jtbl_004C006C + 0x3E98))

s32 func_001AE4F8(void) {
    struct ThreadParam tp;
    struct SemaParam sp;

    if (g_tid > 0)
        return -1;
    sp.initCount = 0;
    sp.maxCount = 0xFF;
    D_01107400[0] = CreateSema(&sp);
    if (D_01107400[0] < 0)
        return -1;
    tp.entry = func_001AE420;
    tp.stack = D_01107000;
    tp.stackSize = 0x400;
    tp.gpReg = D_0050A1C0 + 0x5830;
    tp.initPriority = 0;
    g_tid = CreateThread(&tp);
    if (g_tid < 0) {
        DeleteSema(D_01107400[0]);
        return -1;
    }
    D_01107408[0] = 0;
    D_01107408[1] = 0;
    StartThread(g_tid, D_01107408);
    ChangeThreadPriority(GetThreadId(), 1);
    return g_tid;
}
