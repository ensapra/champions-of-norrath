void func_00144010(void *);

void func_00144638(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 n = *(s32 *)(arg2 + 0xC);
    s32 end = arg1 + n;
    s32 i;
    s32 *src;
    s32 *dst;

    while (*(s32 *)(arg0 + 4) < end) {
        func_00144010(arg0);
    }
    if (n > 0) {
        src = *(s32 **)(arg2 + 0);
        dst = (s32 *)(arg1 * 4 + *(u32 *)arg0);
        for (i = n; i != 0; i--) {
            *dst++ = *src++;
        }
    }
    *(s32 *)(arg0 + 0xC) = end;
}
