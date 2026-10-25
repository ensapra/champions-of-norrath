typedef struct { s32 status; void *entry; void *stack; s32 stackSize; void *gp; s32 prio; s32 cur; s32 attr; s32 option; s32 pad; } ThreadParam;
typedef struct { u8 b0; u8 p1[7]; s32 f8; char p2[0x2008]; s32 f2014; s32 f2018; } Big;
extern Big D_003642D0;
s32 D_004804D0;
s32 D_00480908;
s32 D_0048090C;
extern char D_0050A1C0[];
extern char func_01000000[];
extern char func_0019BCF8[];
s32 CreateThread(ThreadParam *);
void StartThread(s32, s32);
s32 func_0019C050(void *, void *, s32);
void func_0019C158(void *);
void func_001A2660(void *, s32, s32);

s32 func_0019AF04(s32 arg0, s32 arg1, s32 arg2) {
    ThreadParam tp;
    char *base = (char *)&D_003642D0;
    char *a = base + 0x2040;
    s32 r;
    func_001A2660(&D_003642D0, 0, 0xA3B8);
    D_004804D0 = arg0;
    D_003642D0.f8 = 1;
    D_00480908 = -1;
    r = func_0019C050(a, base + 0x2064, 0x800);
    if (r < 0) return r;
    r = func_0019C050(base + 0x2864, base + 0x2888, 0x800);
    if (r < 0) {
        func_0019C158(a);
        return r;
    }
    tp.entry = func_0019BCF8;
    tp.stack = func_01000000 + 0xF6FD0;
    tp.stackSize = 0x10000;
    tp.prio = arg2;
    tp.gp = D_0050A1C0 + 0x5830;
    D_0048090C = CreateThread(&tp);
    if (D_0048090C < 0) {
        func_0019C158(a);
        func_0019C158(base + 0x2864);
        return D_0048090C;
    }
    D_003642D0.b0 = 0;
    D_003642D0.f2014 = 0;
    D_003642D0.f2018 = 0;
    StartThread(D_0048090C, 0);
    return 0;
}
