extern u8 D_008EBDD8[];
extern u8 D_00447C60[];
s32 func_002E7A38(void *, s32, s32);
s32 func_002E7600(u8 *a, s32 b) {
    u8 bit = b;
    s32 m = 1 << (bit & 7);
    return (a[bit >> 3] & m) != 0;
}
s32 func_002E7628(s32 a0, s32 a1) {
    u8 *g;
    if (a0 == 0 || a1 == 0) return 0x80000004;
    g = D_008EBDD8;
    *(s32 *)(g + 0x7C) = a0;
    *(s32 *)(g + 0x84) = a1;
    func_002E7A38((void *)a0, 0, a1 - 1);
    return 0;
}
s32 func_002E7678(void) {
    u8 *g;
    if (D_00447C60 != 0) {
        g = D_008EBDD8;
        *(s32 *)(g + 0x84) = 0x4B;
        *(void **)(g + 0x7C) = D_00447C60;
        func_002E7A38(D_00447C60, 0, 0x4A);
    }
    return 0;
}
