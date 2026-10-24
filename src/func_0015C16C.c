s32 func_0014B41C(s32, s32);
s32 func_001517DC(s32, void *, s32);
void func_00155104(s32, void *, s32);
s32 D_0047FD48;

void func_0015C1EC(u8 *p, s32 v)
{
    s32 t;
    if (*(s32 *)(p + 0x918) == v)
        return;
    t = *(s32 *)(p + 0x91C);
    *(s32 *)(p + 0x918) = v;
    if (t != 0)
        func_001517DC(t, p, 0);
    if (*(s32 *)(p + 0x92C) != 0)
        return;
    switch (v) {
    case 0:
        return;
    case 1:
        if (*(s32 *)(p + 0x50) == 0)
            return;
        if (func_0014B41C(*(s32 *)(p + 0x50), D_0047FD48) == 0)
            return;
        func_00155104(*(s32 *)(p + 0x50), p, 0);
        return;
    }
}

extern u8 func_001C8098[];

s32 func_0015C16C(u8 *p, u16 *msg)
{
    void *f = func_001C8098;
    s32 r;
    s32 id;
    f = *(void **)((u8 *)f + 0xDAC);
    r = ((s32 (*)(void *, void *))f)(p, msg);
    id = *msg;
    if (id >= 5) {
        if (id < 8) {
            void *g = *(void **)(p + 0x4C);
            s32 x = *(s32 *)(p + 0x918);
            g = *(void **)((u8 *)g + 0x128);
            if (g != 0)
                ((void (*)(void *, s32))g)(p, x == 0);
        }
    }
    return r;
}
