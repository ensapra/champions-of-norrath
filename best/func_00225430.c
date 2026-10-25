extern s32 D_004844A4;
extern s32 func_0021F6D8(u8 *a, s32 a1, s32 a2, u8 *a3);

s64 func_00225430(u8 *a, s32 a1, s32 a2, u8 *a3) {
    if (*(s32 *)(a + 0xD8) == 0) {
        a3 = *(u8 **)(a + 0xF8);
        if (a3 != NULL) {
            s32 t;
            s32 one = 1;
            a2 = *(s32 *)(a3 + 0x90);
            a3[0xA0] = one;
            *(s32 *)(a3 + 0x5C) = one;
            t = D_004844A4;
            *(s32 *)(a3 + 0x60) = one;
            *(s32 *)(a3 + 0x9C) = t + a2;
        }
    }
    return func_0021F6D8(a, a1, a2, a3);
}
