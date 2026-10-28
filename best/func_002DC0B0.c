extern s32 D_00444A0C;
extern u8 D_008E1CC0[];
s32 func_002D80A0(void *, s32, s32);

s32 func_002DC0B0(void) {
    s32 i;
    for (;;) {
        if (func_002D80A0(D_008E1CC0, 0x80000003, 0) < 0) return -1;
        if (*(s32 *)(D_008E1CC0 + 0x24) != 0) break;
        for (i = 0x100000; i != -1; i--) ;
    }
    D_00444A0C = 0;
    return 0;
}
