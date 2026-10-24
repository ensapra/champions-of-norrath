extern void func_002D5560(void);
extern s32 D_004460AC[];
extern u8 D_00447280[];
extern u8 D_00447C00[];
extern s32 D_00447C34[];
extern u8 D_008E83D8[];
extern s32 func_002E2FE8(s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, void *);
extern s32 SignalSema_2(s32);
extern s32 func_002E4458(s32, s32, s32, s32, void *);

s32 func_002E3E60(s32 *arg0) {
    s32 r;
    if (func_002E2FE8(0x21) == 0) {
        return 0;
    }
    if (func_002D8270(D_00447C00, 0x21, 0, 0, 0, D_00447280, 8, 0, 0) < 0) {
        SignalSema_2(D_004460AC[0]);
        return 0;
    }
    *arg0 = *(s32 *)((u32)(D_00447280 + 4) | 0x20000000);
    r = *(s32 *)((u32)D_00447280 | 0x20000000);
    SignalSema_2(D_004460AC[0]);
    return r;
}

s64 func_002E40E0(s32 a, s32 b, s32 c) {
    D_00447C34[0] = 0;
    return func_002E4458(a, b, c, 5, D_008E83D8);
}

s64 func_002E4110(s32 a, s32 b) {
    D_00447C34[0] = 1;
    return func_002E4458(a, 0, 0, 1, (void *)b);
}
