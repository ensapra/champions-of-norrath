typedef struct E { s32 a, b, c, d; } E;
s32 func_0018D2D8(u8 *);
static u8 *get(u8 *self, s32 i) {
    u8 *ctx = *(u8 **)(self + 0x380);
    if (ctx && i < *(s32 *)(ctx + 0x58))
        return ctx + *(s32 *)(ctx + 0x5C + i * 4);
    return 0;
}
s32 func_0018AEA8(u8 *self, s32 key, s32 *out)
{
    s32 i = 0;
    u8 *s;
    while ((s = get(self, i++)) != 0) {
        E *base = (E *)(s + *(s32 *)(s + 0x34));
        E *found = 0;
        s32 n, lo, hi, h, k, r, v;
        if (key < base->a)
            continue;
        n = *(s32 *)(s + 0x30);
        if (base[n - 1].b < key)
            continue;
        lo = -1;
        hi = n;
        do {
            s32 mid = (lo + hi) / 2;
            E *e = base + mid;
            if (key < e->a)
                hi = mid;
            else {
                lo = mid;
                if (!(e->b < key)) {
                    found = e;
                    break;
                }
            }
        } while (lo + 1 != hi);
        if (!found)
            continue;
        h = *(u16 *)(s + *(s32 *)(s + 0x3C) + (found->c + key - found->a) * 2);
        if (h == 0xFFFF)
            continue;
        k = found->d + h;
        r = func_0018D2D8(s);
        v = *(s16 *)(s + 0x1C) * *(s16 *)(s + 0x1E) * r;
        out[0] = (s32)s;
        out[1] = (s32)(s + *(s32 *)(s + 0x2C)) + ((((v < 0 ? v + 7 : v) >> 3) + 15) & -16) * k;
        if ((*(u32 *)(s + 0x10) >> 3) & 1)
            out[2] = (s32)(s + *(s32 *)(s + 0x44)) + (k << 4);
        else
            out[2] = (s32)(s + *(s32 *)(s + 0x44));
        out[3] = 0;
        return 0;
    }
    return -1;
}
