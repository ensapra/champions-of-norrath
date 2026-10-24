extern s32 D_00446090[];
extern s32 D_00447C34[];
extern char D_0047BD60[];
extern char D_0047BD78[];
extern char D_0047BD90[];
extern u8 D_008E83D8[];

extern s32 func_002E4458(s32, s32, s32, s32, void *);

s64 func_002E4368(void) {
    D_00447C34[0] = 0;
    if (D_00446090[0] > 0) {
        func_002D70D0(D_0047BD60);
    }
    return func_002E4458(0, 0, 0, 7, D_008E83D8);
}

void func_002E43B8(void) {
    s32 (*fp)(s32, s32, s32, s32, void *);
    D_00447C34[0] = 1;
    if (D_00446090[0] > 0) {
        func_002D70D0(D_0047BD78);
    }
    fp = func_002E4458;
    fp(0, 0, 0, 8, D_008E83D8);
}

void func_002E4410(void) {
    if (D_00446090[0] > 0) {
        func_002D70D0(D_0047BD90);
    }
    func_002E4458(0, 0, 0, 6, D_008E83D8);
    return;
}
