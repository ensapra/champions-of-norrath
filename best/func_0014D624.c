s32 func_001517DC(s32, void *, s32 *);

void func_0014D624(u8 *p, s32 unused, s32 x, s32 y)
{
    struct { s32 a[2]; s32 s; } fr;
    s32 n;
    fr.a[0] = x;
    fr.a[1] = y;
    n = *(s32 *)(p + 0x568);
    if (n != 0) {
        fr.s = 0;
        func_001517DC(n, p, &fr.s);
    }
}
