extern u8 D_008EBDD8[];
extern u8 D_00447C60[];
s32 func_002E7A38(void *, s32, s32);
s32 func_002E7678(void) {
    u8 *g;
    u8 *p = D_00447C60;
    s32 n = 0x4B;
    if (p != 0) {
        g = D_008EBDD8;
        *(s32 *)(g + 0x84) = n;
        *(void **)(g + 0x7C) = p;
        func_002E7A38(p, 0, n - 1);
    }
    return 0;
}
