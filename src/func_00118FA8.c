void func_00118FA8(s32 w, s32 h, s32 shift, s32 n, u8 *src, u8 *dst, s32 stride, s32 off) {
    u8 *pa, *pb, *pc, *pd;
    s32 y, x, i, r, g, b;
    if (h > 0) {
        y = h;
        do {
            pc = src + off;
            pa = src;
            pb = pc;
            pd = pc;
            if (w > 0) {
                x = w;
                do {
                    r = *pa++;
                    g = *pa++;
                    b = *pa++;
                    r += *pb++;
                    g += *pb++;
                    b += *pb++;
                    r += *pc++;
                    g += *pc++;
                    b += *pc++;
                    r += *pd++;
                    g += *pd++;
                    b += *pd++;
                    for (i = 1; i < n; i++) {
                        r += *pa++;
                        g += *pa++;
                        b += *pa++;
                        r += *pb++;
                        g += *pb++;
                        b += *pb++;
                        r += *pc++;
                        g += *pc++;
                        b += *pc++;
                        r += *pd++;
                        g += *pd++;
                        b += *pd++;
                    }
                    *dst++ = r >> shift;
                    *dst++ = g >> shift;
                    *dst++ = b >> shift;
                    x--;
                } while (x != 0);
            }
            src += stride;
            y--;
        } while (y != 0);
    }
}
