extern char func_001C8098[];
void func_0014D370(s32, s32);
void func_0014D328(s32, s32);

void func_0015DC54(void *arg0, s32 arg1)
{
    ((void (*)(void *, s32))(*(void **)(func_001C8098 + 0xDF8)))(arg0, arg1);
    func_0014D370(*(s32 *)((u8 *)arg0 + 0x910), arg1);
}

void func_0015DC14(void *arg0, s32 arg1)
{
    ((void (*)(void *, s32))(*(void **)(func_001C8098 + 0xDF0)))(arg0, arg1);
    func_0014D328(*(s32 *)((u8 *)arg0 + 0x910), arg1);
}

void func_0015175C(void *, s32);
void func_0015DCF4(void *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    func_0015175C((char *)p + 0xE70, 1);
}

void func_0015D7C0(void *arg0)
{
    char *t = (char *)arg0 + 0x910;
    *(s8 *)(t + *(s32 *)((char *)arg0 + 0x4EC) * 0x1D0 + 0x143) =
        (*(s32 *)((char *)arg0 + 0x618) * *(s32 *)(t + 0x424)) / 255;
}
