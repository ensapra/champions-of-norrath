typedef struct { s32 cur; s32 max; s32 init; s32 wait; s32 attr; s32 opt; } SemaParam;
extern s32 CreateSema(SemaParam *);
extern s32 SignalSema(s32);
extern s32 WaitSema(s32);
extern void func_0017A848(s32, s32, s32);
extern void func_001AFF48(s32);
extern s32 func_001B06E0(void *, u32, s32);
extern void func_001AF710(void *);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_001D0484[];
extern s32 D_001D0488[];
extern u8 jtbl_004C006C[];
extern s32 D_010EB640[];
extern u8 D_010EB6C0[];
extern s32 D_010ECC00[];

s32 func_00179E38(void) {
    SemaParam sp;
    s32 r;
    s32 *p;
    s32 i;
    if (D_001D0484[0] < 0) {
        sp.opt = 0;
        sp.init = 1;
        sp.max = 1;
        D_001D0484[0] = CreateSema(&sp);
        sp.max = 1;
        sp.init = 0;
        sp.opt = 0;
        D_001D0488[0] = CreateSema(&sp);
    }
    func_0017A848(0, 0, 0);
    WaitSema(D_001D0484[0]);
    func_001AFF48(0);
    for (;;) {
        r = func_001B06E0(D_010EB640, 0x80000400, 0);
        if (r < 0) {
            func_001AF710(jtbl_004C006C + 0xC384);
            for (;;) {}
        }
        p = D_010EB640;
        if (p[9] != 0) break;
        i = 0x100000;
        do { i--; } while (i != 0);
    }
    r = func_001B08B0(p, 0xFE, 0, D_010EB6C0, 0x30, D_010ECC00, 0xC, 0, 0);
    SignalSema(D_001D0484[0]);
    if (r < 0) {
        p[9] = 0;
        return r - 100;
    }
    if (D_010ECC00[1] < 0x20A) {
        func_001AF710(jtbl_004C006C + 0xC39C);
        p[9] = 0;
        return -0x78;
    }
    if (D_010ECC00[2] < 0x20E) {
        func_001AF710(jtbl_004C006C + 0xC3C4);
        p[9] = 0;
        return -0x79;
    }
    return D_010ECC00[0];
}
