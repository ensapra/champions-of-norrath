extern s32 func_0013D2F8(void *);
s64 func_002251B0(u8 *a) {
    if (*(s32 *)(a + 0xFC) == 0) *(s32 *)(a + 0xFC) = 1;
    if (*(s32 *)(a + 0x54) != 0) return func_0013D2F8(a + 0x100);
}
