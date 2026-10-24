u8 *func_001884C8(u8 *, s32);

u8 *func_001885D0(u8 *a, s32 n)
{
    u8 cnt = a[0x11];
    u8 *r = 0;
    if (n < cnt) {
        r = a + *(u16 *)(a + 0xC);
        if (cnt != 1 && n > 0) {
            s32 *q = (s32 *)(a + 0x40);
            do {
                r += *q++;
            } while (--n);
        }
    }
    return r;
}

u8 *func_00188580(u8 *a)
{
    u8 *p = func_001884C8(a, 0);
    u8 *r = p;
    if (p != 0) {
        r = 0;
        if (*(s32 *)p == 0x745865) {
            s32 off = *(s32 *)(p + 8);
            if (*(s32 *)(p + 4) != off + 0x10) {
                r = p + off + 0x10;
            }
        }
    }
    return r;
}

u8 *func_00188528(u8 *a, s32 *out)
{
    u8 *p = func_001884C8(a, 0);
    if (p != 0 && *(s32 *)p == 0x745865) {
        if (out != 0) {
            *out = *(s32 *)(p + 8);
        }
        return p + 0x10;
    }
    return p;
}
