void func_00107C70(u8 *dst, u8 *src) {
    u8 *d1, *s1, *d2, *s2, *d3;
    s32 i = 0;
    d1 = dst + 1;
    s1 = src + 1;
    d2 = dst + 2;
    s2 = src + 2;
    d3 = dst + 3;
    for (; i < 4; i++) {
        s32 o = i << 2;
        dst[o] = src[o];
        d1[o] = s1[o];
        d2[o] = s2[o];
        d3[o] = 0x80;
    }
}
