extern char func_001C8098[];
extern char D_001C8E88[];
void func_0014D370(s32, s32);
void func_0014D328(s32, s32);

void func_0015DC54(void *arg0, s32 arg1)
{
    ((void (*)(void *, s32))(*(void **)(func_001C8098 + 0xDF8)))(arg0, arg1);
    func_0014D370(*(s32 *)((u8 *)arg0 + 0x910), arg1);
}

void func_0015DC14(void *arg0, s32 arg1)
{
    ((void (*)(void *, s32))(*(void **)D_001C8E88))(arg0, arg1);
    func_0014D328(*(s32 *)((u8 *)arg0 + 0x910), arg1);
}

void func_0015D7C0(void *arg0)
{
    char *t = (char *)arg0 + 0x910;
    s32 v = (*(s32 *)((char *)arg0 + 0x618) * *(s32 *)(t + 0x424)) / 255;
    t += *(s32 *)((char *)arg0 + 0x4EC) * 0x1D0;
    *(s8 *)(t + 0x143) = v;
}
