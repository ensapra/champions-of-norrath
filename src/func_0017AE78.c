extern s32 func_001AD770(s32);
extern void func_001AD740(s32);
extern s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern void func_0017A088(void);

extern char D_010EB640[];
extern char D_010EB6C0[];
extern char D_010ECC00[];
extern s32 D_001D0480[];
extern s32 D_001D0484[];

s32 func_0017AE78(s32 arg0, s32 arg1) {
    char *q = D_010EB640;
    if (*(s32 *)(q + 0x24) == 0) {
        return -0x64;
    }
    if (func_001AD770(D_001D0484[0]) < 0) {
        return -0xC8;
    }
    {
        char *buf = D_010EB6C0;
        *(s32 *)(buf + 4) = arg0;
        *(s32 *)(buf + 8) = arg1;
        {
            s32 r = func_001B08B0(q, 0x10, 1, buf, 0x30, D_010ECC00, 4, (void *)func_0017A088, 0);
            if (r == 0) {
                D_001D0480[0] = 0x10;
            } else {
                func_001AD740(D_001D0484[0]);
            }
            return r;
        }
    }
}
