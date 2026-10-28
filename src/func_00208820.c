s64 func_00109808(void *, s32, s32, s32);
s64 func_00208820(char *a) {
    if (*(s8 *)(a + 0x3C0) == 0) {
        char *p = *(char **)(a + 0x24);
        return func_00109808(a, *(s32 *)(p + 0xC), *(s32 *)(p + 0x14), 0);
    }
    {
    char *p = *(char **)(a + 0x24);
    return ((s32 (*)(void *, s32, s32, s32))func_00109808)(a, *(s32 *)(p + 0xC), *(s32 *)(p + 0x1C), 0);
    }
}
