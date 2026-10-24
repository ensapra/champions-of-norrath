s32 func_001084E0(void *a0, void *a1) {
    s32 n = *(s32 *)a1;
    if (n != 0 && *(s64 *)((char *)a0 + 8) == *(s64 *)((char *)a1 + 8) && *(s32 *)a0 == n) {
        u64 x = *(u32 *)((char *)a0 + 0x20);
        u64 y = *(u32 *)((char *)a1 + 0x20);
        if (x == y) return 1;
    }
    return 0;
}
