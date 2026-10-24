extern s32 func_0017A220(s32, s32, s32, s32);
extern s32 D_001D0480[];
extern s32 D_001D0488[];
extern s32 *D_010EB668[];
extern s32 *D_010EB66C[];
extern s32 *D_010EB670[];
extern s32 iSignalSema(s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern s32 func_001AF710(void *);
extern u8 D_010EB640[];
extern u8 D_010EB6C0[];
extern u8 D_010ECC00[];
extern u8 D_010EBC00[];
extern void func_0017A088(void);
extern u8 jtbl_004CC458[];
extern s32 func_001A444C(void *);
extern void func_001A24AC(void *, void *, s32);

s32 func_0017A348(s32 a, s32 b, s32 c) {
    s32 r = func_0017A220(a, b, c, 0x40);
    if (r == 0) {
        D_001D0480[0] = 0xB;
    }
    return r;
}

void func_0017A910(s32 arg0) {
    u8 *base = (u8 *)(arg0 | 0x20000000);
    if (D_010EB668[0] != NULL) {
        *D_010EB668[0] = *(s32 *)(base + 0);
    }
    if (D_010EB66C[0] != NULL) {
        *D_010EB66C[0] = *(s32 *)(base + 4);
    }
    if (D_010EB670[0] != NULL) {
        *D_010EB670[0] = *(s32 *)(base + 0x90);
    }
    iSignalSema(D_001D0488[0]);
}

s32 func_0017AAE8(void) {
    if (func_001B08B0(D_010EB640, 0x35, 0, D_010EB6C0, 0x30, D_010ECC00, 4, func_0017A088, 0) != 0) {
        func_001AF710(jtbl_004CC458);
        return -1;
    }
    return *(s32 *)D_010ECC00;
}

void func_0017ACA8(char *dst) {
    if (dst != 0) {
        char *src = (char *)((u32)D_010EBC00 | 0x20000000);
        s32 n;
        if ((u32)func_001A444C(src) < 0x400) {
            n = func_001A444C(src);
        } else {
            n = 0x3FF;
        }
        func_001A24AC(dst, (void *)((u32)D_010EBC00 | 0x20000000), n);
        dst[n] = 0;
    }
    iSignalSema(D_001D0488[0]);
}
