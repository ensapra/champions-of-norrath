extern s8 func_001D1C80[];
extern u8 D_010EE084[];
extern u8 jtbl_004C006C[];
void func_0017DC80(void);

s32 func_0017DCF0(void)
{
    s8 *p = func_001D1C80 + 0x450;
    if (p[0] == 0)
        func_0017DC80();
    return p[4] == 0x54;
}

u8 func_0017DFE8(u8 a)
{
    return a - (a >> 4) * 6;
}

s32 func_0017F3F8(s32 idx, volatile u16 *out)
{
    u8 *e = *(u8 **)D_010EE084 + idx * 0x38;
    u8 *q = e + 0x10;
    volatile s32 *cnt = (volatile s32 *)(e + 0x30);
    s32 r;
    if (*(s32 *)(q + 0x24) <= 0)
        return -1;
    r = *cnt;
    *out = *(u16 *)(e + r * 2 + 0x22);
    *cnt = r + 1;
    if (*(s32 *)(q + 0x20) >= 4)
        *(s32 *)(q + 0x20) = 0;
    *(s32 *)(q + 0x24) = *(s32 *)(q + 0x24) - 1;
    return 0;
}

u32 func_0017F708(u32 sel, u32 ch)
{
    u8 *tab = jtbl_004C006C + 0xD43C + (sel & 1) * 0x54;
    u32 i;
    ch &= 0xFF;
    for (i = 0; i < 0x15; i++) {
        if (tab[i * 4] == ch)
            return *(u16 *)(tab + i * 4 + 2) | 0x4000;
    }
    return ch;
}
