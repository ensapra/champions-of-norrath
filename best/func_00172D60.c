extern s16 *func_0018D7A8(void);
s32 func_00172D60(void) {
    s32 r = 1;
    if (*func_0018D7A8() == 1)
        r = (s32)((*(volatile u64 *)0x12001000 >> 13) & 1);
    return r;
}
