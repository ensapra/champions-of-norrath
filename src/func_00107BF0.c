extern s32 D_010C1EA0[];
extern void func_001B6328(s32);

s32 func_00107BF0(void) {
    return D_010C1EA0[0] != 0;
}

void func_00107C00(u8 *dst, u8 *src) {
    s32 i;
    for (i = 0; i < 4; i++) {
        dst[i * 4] = src[i * 4];
        dst[i * 4 + 1] = src[i * 4 + 1];
        dst[i * 4 + 2] = src[i * 4 + 2];
        dst[i * 4 + 3] = 0;
    }
}

void func_00107C70(u8 *dst, u8 *src) {
    s32 i;
    for (i = 0; i < 4; i++) {
        dst[i * 4] = src[i * 4];
        dst[i * 4 + 1] = src[i * 4 + 1];
        dst[i * 4 + 2] = src[i * 4 + 2];
        dst[i * 4 + 3] = 0x80;
    }
}

void func_001001C8(void) {
    func_001B6328(0);
}
