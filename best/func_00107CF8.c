void func_00107CF8(s32 amt, u8 *dst, u8 *src) {
    s32 i = 0;
    u8 *pd = dst + 3;
    u8 *ps = src + 3;
    do {
        u8 a;
        dst[i * 4] = src[i * 4];
        dst[i * 4 + 1] = src[i * 4 + 1];
        dst[i * 4 + 2] = src[i * 4 + 2];
        i++;
        a = *ps;
        if ((u32)(amt + 5) > 10 || amt == 0) {
            *pd = a;
        } else if (amt < 0) {
            *pd = a + (a >> 3) * amt;
        } else {
            s32 t = a + ((a + 0x10) >> 3) * amt;
            if (t >= 0x100) t = 255;
            *pd = t;
        }
        pd += 4;
        ps += 4;
    } while (i < 4);
}
