extern u16 *D_00362CEC;
extern s32 D_00362CE4;
s32 func_00189C90(s32 *);

s32 func_0018A2A8(u8 *dst, u32 n, s32 src) {
    u8 buf[16];
    u8 *p;
    s32 st;
    u8 **pp;
    s32 count = 0;
    s32 i;
    s32 c;
    u32 len;
    if (n == 0) return 0;
    st = src;
    n--;
    while ((i = func_00189C90(&st)) != 0) {
        u32 w = D_00362CEC[i];
        c = w ? w : D_00362CE4;
        if (c == 0) break;
        pp = &p;
        *pp = buf;
        c = (c > -1) ? c : D_00362CE4;
        {
            u8 *t = *pp;
            if ((u32)c < 0x80) {
                *t++ = c;
            } else {
                u32 lim = 0x800;
                s32 k = 1;
                u32 mask;
                while ((u32)c >= lim) {
                    lim <<= 5;
                    k++;
                }
                t += k + 1;
                mask = ((1 << (7 - k)) - 1) & 0xFF;
                {
                    u8 *q = t;
                    for (; k != -1; k--) {
                        *--q = (c & 0x3F) | 0x80;
                        c = (u32)c >> 6;
                    }
                    q[-1] = ~mask | (c & (mask >> 1));
                }
            }
            *pp = t;
        }
        len = *pp - buf;
        if (n < len) break;
        n -= len;
        {
            s32 nc = count + 1;
            s32 m = len - 1;
            u8 *sp2 = buf;
            while (m != -1) {
                *dst++ = *sp2++;
                m--;
            }
            count = nc;
        }
    }
    *dst = 0;
    return count;
}
