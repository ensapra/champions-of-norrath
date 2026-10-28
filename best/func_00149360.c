s32 func_00149360(u8 **pp) {
    u8 *p = *pp;
    s32 c = *p++;
    s32 m, t, x;
    if ((s8)c < 0) {
        s32 b = c;
        c = -1;
        if ((u8)(b + 0x3e) < 0x33) {
            c = b & 127;
            m = 64;
            do {
                t = m - 1;
                m <<= 5;
                x = *p++ & 63;
                c &= t;
                c = (c << 6) | x;
            } while (c >= m);
        }
    }
    *pp = p;
    return c;
}
