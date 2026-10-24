void *func_001A2660(void *dst, s32 c, u32 n) {
    u8 *s = dst;
    if (n >= 8 && ((u32)dst & 15) == 0) {
        u64 *d = dst;
        u64 v = c & 0xFF;
        v = (v << 8) | v;
        v = (v << 16) | v;
        v = (v << 32) | v;
        while (n >= 8) {
            *d++ = v;
            n -= 8;
        }
        s = (u8 *)d;
    }
    while (n-- != 0)
        *s++ = c;
    return dst;
}
