typedef struct {
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
} ThreadParam_2E0800;

extern s32 D_00446038[], D_0044603C[], D_00446040[], D_00446044[], D_00446048[];
extern s32 D_0044604C[], D_00446050[], D_00446054[], D_00446058[], D_0044605C[];
extern char D_0047B9D0[];
extern char D_004879F0[];
extern char D_008E5A80[];
void func_002E0A28(void *);
void func_002E0478(s32, s32);
s32 CreateThread_2(ThreadParam_2E0800 *);
s32 StartThread_2(s32, void *);
void func_002D70D0(const char *, ...);

s32 func_002E0800(s32 prio) {
    ThreadParam_2E0800 param;
    s32 tid;

    if (D_0044605C[0] >= 0)
        return -1;
    D_00446038[0] = 0;
    D_0044603C[0] = 0;
    D_00446040[0] = 0;
    D_00446044[0] = 0;
    D_00446048[0] = 0;
    D_0044604C[0] = 0;
    D_00446050[0] = 0;
    D_00446054[0] = 0;
    D_00446058[0] = 0;
    func_002E0478(1, 0xE620);
    param.entry = func_002E0A28;
    param.stack = D_008E5A80;
    param.stackSize = 0x1000;
    param.initPriority = prio;
    param.gpReg = D_004879F0;
    tid = CreateThread_2(&param);
    D_0044605C[0] = tid;
    if (tid < 0)
        return -1;
    param.option = tid;
    if (StartThread_2(tid, NULL) < 0) {
        func_002D70D0(D_0047B9D0);
        return -1;
    }
    return param.option;
}
