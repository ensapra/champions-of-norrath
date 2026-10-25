void func_001191A8(s32 w, s32 h, s32 shift, s32 n, u8 *src, u8 *dst, s32 sstride, s32 dstride, s32 pstride) {
    s32 y, x, k;
    if (h > 0) {
        y = h;
        do {
            u8 *s = src;
            u8 *d = dst;
            if (w > 0) {
                x = w;
                do {
                    s32 r = *s++;
                    s32 g = *s++;
                    s32 b = *s++;
                    for (k = 1; k < n; k++) {
                        r += *s++;
                        g += *s++;
                        b += *s++;
                    }
                    r >>= shift;
                    g >>= shift;
                    b >>= shift;
                    d[0] = r;
                    d[1] = g;
                    d[2] = b;
                    d[3] = -1;
                    d += pstride;
                } while (--x != 0);
            }
            src += sstride;
            dst += dstride;
        } while (--y != 0);
    }
}
