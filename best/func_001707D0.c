s32 func_001707D0(u8 *src, s32 key, u32 *vp) {
    u32 acc = 0;
    s32 off = -1;
    while (key != 0) {
        if (off == -1 || src[off] != key) {
            u8 n = src[1];
            off = 0;
            if (n) {
                u8 *p = src + 2;
                if (*p != key) {
                    for (;;) {
                        off += 3;
                        p += 3;
                        if (off >= n * 3) break;
                        if (*p == key) break;
                    }
                }
            }
            if (off == src[1] * 3) return 0;
        }
        u8 *p = src + off;
        off += 3;
        u64 word = (u64)*(u32 *)vp;
        vp += 2;
        s32 again = *(s32 *)vp;
        u32 shifted = (u32)(word << p[3]);
        acc |= shifted;
        if (!again) break;
    }
    return acc;
}
