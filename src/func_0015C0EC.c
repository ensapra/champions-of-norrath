extern char D_001C8E88[];
void func_0014D328(s32, s32);

void func_0015DC14(void *arg0, s32 arg1)
{
    ((void (*)(void *, s32))(*(void **)D_001C8E88))(arg0, arg1);
    func_0014D328(*(s32 *)((u8 *)arg0 + 0x910), arg1);
}

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
        break;
    case 1:
        if (*(s32 *)(p + 0x50) != 0 && func_0014B41C(*(s32 *)(p + 0x50), D_0047FD48) != 0)
            func_00155104(*(s32 *)(p + 0x50), p, 0);
        break;
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
    if (id >= 5 && id < 8) {
        void *g = *(void **)(p + 0x4C);
        g = *(void **)((u8 *)g + 0x128);
        if (g != 0)
            ((void (*)(void *, s32))g)(p, *(s32 *)(p + 0x918) == 0);
    }
    return r;
}

void func_0014D418(void *);

s32 func_0015C0EC(u8 *a0, u8 *a1, u8 *a2)
{
    void *f = func_001C8098;
    s32 r;
    s32 v;
    f = *(void **)((u8 *)f + 0xDB8);
    r = ((s32 (*)(void *, void *, void *))f)(a0, a1, a2);
    v = *(s32 *)(a1 + 0x918);
    if (v != *(s32 *)(a2 + 0x918)) {
        void *g = *(void **)(a0 + 0x4C);
        g = *(void **)((u8 *)g + 0x128);
        if (g != 0)
            ((void (*)(void *, s32))g)(a0, v);
        else
            *(s32 *)(a0 + 0x918) = v;
        func_0014D418(a0);
        r = 1;
    }
    return r;
}
