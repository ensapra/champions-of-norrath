s32 D_001D0480[4];
s32 D_001D0484[4];
s32 D_010EB640[16];
s32 D_010EB6C0[4];
s32 D_010ECC00[4];

extern s32 func_001AD740(s32);
extern s32 func_001AD770(s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern void func_0017A088(void);

s32 func_0017B068(s32 arg0) {
    s32 *p = D_010EB640;
    s32 r;

    if (p[9] == 0) {
        return -100;
    }
    if (func_001AD770(D_001D0484[0]) < 0) {
        return -200;
    }
    D_010EB6C0[0] = arg0;
    r = func_001B08B0(p, 10, 1, D_010EB6C0, 0x30, D_010ECC00, 4, func_0017A088, 0);
    if (r == 0) {
        D_001D0480[0] = 10;
    } else {
        func_001AD740(D_001D0484[0]);
    }
    return r;
}

s32 D_010EDFC0[4];
s32 D_010EE000[4];
s32 D_010EE018[4];

extern s32 func_001AFF48(s32);
extern s32 func_001AD610(void);
extern s32 func_001B0AE8(void *, s32);
extern s32 func_001B0B80(void *, s32, void *, void *, s32, s32, void *);
extern void func_0017DB88(void);
extern s32 func_001B0F98(void *);

void func_0017DB18(void) {
    func_001AFF48(0);
    func_001B0AE8(D_010EE000, func_001AD610());
    func_001B0B80(D_010EE018, 0x80000704, func_0017DB88, D_010EDFC0, 0, 0, D_010EE000);
    func_001B0F98(D_010EE000);
}
