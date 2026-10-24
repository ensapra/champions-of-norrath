s32 func_00108260(void *arg0) {
    s8 *p = (s8 *)arg0;
    if (p[0x1D] != 0) return -1;
    if (p[0x1E] == 6) return 0;
    if (p[0x1E] == 3 && (*(u32 *)(p + 0x20) & 8)) return 1;
    return 2;
}
