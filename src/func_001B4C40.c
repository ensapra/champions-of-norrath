s32 func_001B06E0(void *, s32, s32);
s32 func_001B08B0(void *, s32, s32, s32, s32, void *, s32, s32, s32);
extern s32 D_004C3FB8;
extern u8 D_0110B3C0[];
extern u8 D_0110B1C0[];
extern u8 D_0110B3E8[];

s32 func_001B4C40(void) {
    u8 *p;
    s32 i;

    if (D_004C3FB8 < 0) {
    retry:
        p = D_0110B3C0;
        if (func_001B06E0(p, 0x80000006, 0) < 0) {
            return -1;
        }
        if (*(s32 *)(p + 0x24) == 0) {
            goto wait;
        }
        D_004C3FB8 = 0;
        if (func_001B08B0(p, 0xFF, 0, 0, 0, D_0110B1C0, 4, 0, 0) < 0) {
            return 0xFFFEFFFF;
        }
        __builtin_memcpy(D_0110B3E8, D_0110B1C0, 4);
        return 0;
    wait:
        for (i = 0x100000; --i != -1;) {
        }
        goto retry;
    }
    return 0;
}
