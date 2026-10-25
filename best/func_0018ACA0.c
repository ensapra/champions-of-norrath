extern volatile u32 D_00362CE4;

void func_0018ACA0(u8 **arg0, s32 c) {
    u8 *p = *arg0;
    u32 lim;
    s32 n;
    u32 mask;
    u8 *q;
    s32 m1 = -1;
    if (c > m1) {
    } else c = D_00362CE4;
    if ((u32)c < 0x80) {
        *p = c;
        p++;
    } else {
        lim = 0x800;
        n = 1;
        if ((u32)c >= 0x800) {
            do {
                lim <<= 5;
                n++;
            } while ((u32)c >= lim);
        }
        p += n + 1;
        q = p;
        mask = ((1 << (7 - n)) - 1) & 0xFF;
        n--;
        while (n != m1) {
            q--;
            *q = (c & 0x3F) | 0x80;
            n--;
            c = (u32)c >> 6;
        }
        q[-1] = ~mask | (c & (mask >> 1));
    }
    *arg0 = p;
}
