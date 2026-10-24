s32 func_002D80A0(void *, s32, s32);
s32 func_002D8270(void *, s32, s32, s32, s32, void *, s32, s32, s32);
extern s32 D_00444A10;
extern u8 D_008E2080[];
extern u8 D_008E1E80[];
extern u8 D_008E20A8[];

s32 func_002DC600(void) {
    u8 *p;
    s32 i;

    if (D_00444A10 < 0) {
    retry:
        p = D_008E2080;
        if (func_002D80A0(p, 0x80000006, 0) < 0) {
            return -1;
        }
        if (*(s32 *)(p + 0x24) == 0) {
            goto wait;
        }
        D_00444A10 = 0;
        if (func_002D8270(p, 0xFF, 0, 0, 0, D_008E1E80, 4, 0, 0) < 0) {
            return 0xFFFEFFFF;
        }
        __builtin_memcpy(D_008E20A8, D_008E1E80, 4);
        return 0;
    wait:
        for (i = 0x100000; --i != -1;) {
        }
        goto retry;
    }
    return 0;
}
