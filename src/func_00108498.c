s32 func_00108498(void *arg0) {
    s64 v = *(s64 *)((char *)arg0 + 8);
    s32 r;
    if (v & ((s64)0x8000 << 21)) {
        s64 n = (v >> 11) & 0x1F;
        r = *(s16 *)((char *)*(u32 *)arg0 + 0x34) + n;
    } else {
        r = *(s16 *)((char *)*(u32 *)arg0 + 0x34);
    }
    return r;
}
