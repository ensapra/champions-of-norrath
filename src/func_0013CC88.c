typedef struct {
    s32 status;
    void *entry;
    void *stack;
    s32 stackSize;
    void *gpReg;
    s32 initPriority;
    s32 currentPriority;
    u32 attr;
    u32 option;
    s32 waitType;
    s32 waitId;
    s32 wakeupCount;
} TParam;
extern s32 func_00140020(void);
extern s32 func_001404D0(void);
extern void *func_001A2660(void *, s32, s32);
extern void *func_0011B908(s32, s32);
extern s32 CreateThread(TParam *);
extern s32 StartThread(s32, void *);
extern void func_0013CC58(void);
extern void func_0013CD88(void);
extern s32 D_010CE5FC[];
extern TParam D_010CE638[];
extern s32 D_001C54F0[];
extern u8 D_0050F9F0[];

s32 func_0013CC88(void *arg0)
{
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010CE5FC[0] > 0) {
        D_010CE5FC[0]--;
        return 0;
    }
    if (D_001C54F0[0] == 0) {
        func_001A2660(D_010CE638, 0, sizeof(TParam));
        D_010CE638[0].entry = func_0013CC58;
        D_010CE638[0].stack = func_0011B908(0x10, 0x2000);
        D_010CE638[0].stackSize = 0x2000;
        D_010CE638[0].gpReg = D_0050F9F0;
        D_010CE638[0].initPriority = 10;
        StartThread(CreateThread(D_010CE638), 0);
        D_001C54F0[0] = 1;
    } else if (D_001C54F0[0] == 2) {
        *(void **)((u8 *)arg0 + 0x18) = func_0013CD88;
    }
    return 0;
}
