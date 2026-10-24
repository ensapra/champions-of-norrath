extern u8 func_001C8098[];
void func_00160784(void *);
void func_00161438(void *);
void func_001605E0(void *);
void func_00171AE0(void *);
s32 func_0014BA30(u8 *, u8 *);

void func_0015FD3C(u8 *arg0)
{
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xD68);
    ((void (*)(void))p)();
    func_00171AE0(arg0 + 0x910 + (*(s32 *)(arg0 + 0x4EC) ^ 1) * 0x19C0);
}

void func_0015FD80(void)
{
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xD68);
    ((void (*)(void))p)();
}

void func_0015FDA4(void *arg0)
{
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xD70);
    ((void (*)(void))p)();
    func_00160784(arg0);
    func_00161438(arg0);
    func_001605E0(arg0);
}

s32 func_0015FDE4(u8 *a, u8 *b, u8 *c)
{
    u8 *p = func_001C8098;
    s32 r;
    p = *(u8 **)(p + 0xDB8);
    r = ((s32 (*)(void))p)();
    if (func_0014BA30(b + 0x3CB0, c + 0x3CB0) == 0) {
        *(s32 *)(a + 0x98) = 2;
        r = 1;
        *(u64 *)(a + 0x3CB0) = *(u64 *)(b + 0x3CB0);
        *(u64 *)(a + 0x3CB8) = *(u64 *)(b + 0x3CB8);
    }
    return r;
}
