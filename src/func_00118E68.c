void func_00118E68(s32 w, s32 h, s32 sh, s32 n, u8 *src, u8 *dst, s32 ss, s32 off) {
    s32 y, x, k;
    s32 b, g, r;
    u8 *p, *q;
    for (y = 0; y < h; y++) {
        p = src;
        q = src + off;
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
            *dst++ = r >> sh;
            *dst++ = g >> sh;
            *dst++ = b >> sh;
        }
        src += ss;
    }
}
