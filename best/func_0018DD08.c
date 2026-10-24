u64 *func_0018D7A8(void);

s16 func_0018DD08(s16 flags, s16 w, s16 h) {
    u64 *p = func_0018D7A8();
    s32 bw = (w + 63) / 64;
    s32 bh;
    s16 n;
    if (flags & 2)
        bh = (h + 63) / 64;
    else
        bh = (h + 31) / 32;
    if ((*p & 0xFFFF0000FFFFULL) == 1)
        n = bw * bh;
    else
        n = bw * bh * 2;
    return n;
}
