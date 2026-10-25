void func_00119298(s32 w, s32 h, s32 sh, s32 n, u8 *src, u8 *dst, s32 ss, s32 ds, s32 ps, s32 off) {
    s32 y, x, k;
    s32 b, g, r;
    u8 *p, *q, *d;
    for (y = 0; y < h; y++) {
        p = src;
        q = src + off;
        d = dst;
        for (x = 0; x < w; x++) {
            r = *p++; g = *p++; b = *p++;
            r += *q++; g += *q++; b += *q++;
            for (k = 1; k < n; k++) {
                r += *p++;
                g += *p++;
                b += *p++;
                r += *q++;
                g += *q++;
                b += *q++;
            }
            r >>= sh;
            g >>= sh;
            b >>= sh;
            d[0] = r;
            d[1] = g;
            d[2] = b;
            d[3] = -1;
            d += ps;
        }
        src += ss;
        dst += ds;
    }
}
