void func_0015175C(void *, s32);
s32 func_001517DC(s32, void *, s32 *);
s32 func_0014D29C(void *);
void func_0014F288(s32, s32);
void func_00151788(void *, s32);
void func_0014B7F0(s32, s32);

void func_0014D5FC(u8 *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    func_0015175C(p + 0x568, 0xE);
}

void func_0014D624(u8 *p, s32 unused, s32 x, s32 y)
{
    volatile s32 a[2];
    s32 sp8;
    s32 n;
    a[0] = x;
    n = *(s32 *)(p + 0x568);
    a[1] = y;
    if (n != 0) {
        sp8 = 0;
        func_001517DC(n, p, &sp8);
    }
}

void func_0014D7D0(u8 *p, s32 arg1)
{
    s32 sp0;
    if (*(s32 *)(p + 0xC8) != 0) {
        func_0014F288(func_0014D29C(0), *(s32 *)(p + 0xC8));
    }
    if (*(s32 *)(p + 0x560) != 0) {
        func_0014F288(func_0014D29C(p), *(s32 *)(p + 0x560));
    }
    if (*(s32 *)(p + 0x56C) != 0) {
        sp0 = 1;
        func_001517DC(*(s32 *)(p + 0x56C), p, &sp0);
    }
    func_00151788(p + 0x568, 0xE);
    if (*(s32 *)(p + 8) != 0)
        func_0014B7F0(*(s32 *)p, arg1);
}
