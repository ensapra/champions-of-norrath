extern u8 func_001C8098[];
void func_0015C46C(void)
{
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xD68);
    ((void (*)(void))p)();
}
void func_0015C4FC(void)
{
    u8 *p = func_001C8098;
    p = *(u8 **)(p + 0xDAC);
    ((void (*)(void))p)();
}
s32 func_0014BA30(u8 *, u8 *);
s32 func_0015C520(u8 *a, u8 *b, u8 *c)
{
    u8 *p = func_001C8098;
    s32 r;
    p = *(u8 **)(p + 0xDB8);
    r = ((s32 (*)(void))p)();
    if (func_0014BA30(b + 0x5C0, c + 0x5C0) == 0) {
        *(s32 *)(a + 0x98) = 2;
        r = 1;
    }
    return r;
}
void func_0015175C(void *, s32, s32, s32);
void func_0015C2EC(void *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    ((void (*)(void *, s32))func_0015175C)((char *)p + 0xD30, 1);
}
