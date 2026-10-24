u8 *func_001885D0(u8 *a, s32 n)
{
    u8 cnt = a[0x11];
    u8 *r;
    s32 *q;
    if (n >= cnt) return 0;
    r = a + *(u16 *)(a + 0xC);
    if (cnt == 1) return r;
    if (n > 0) {
        q = (s32 *)(a + 0x40);
        do {
            r += *q++;
        } while (--n);
    }
    return r;
}
