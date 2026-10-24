extern u32 D_00362CE4[];
extern u32 D_00362CE8[];
u32 func_0018AB38(u16 **pp);

s32 func_0018A900(s32 arg0) {
    s32 x = arg0;
    s32 count = 0;
    while (func_0018AB38((u16 **)&x) != 0) {
        count++;
    }
    return count;
}

s32 func_0018AAA0(u16 a) {
    u32 x = a;
    u32 l, h, flag;
    if (x < 0x80 || x - 0xA0 < 0x40) return 1;
    l = x & 0x7F;
    flag = x >> 15;
    h = (x >> 8) & 0x7F;
    if (h - 0x21 >= 0x5E || l < 0x21 || l >= 0x7F) return 0;
    if (flag) {
        if (h == 0x22 || h == 0x26 || h == 0x27 || h - 0x29 < 3 || h - 0x30 < 0x3E) return 0;
    }
    return 1;
}

u32 func_0018AB38(u16 **pp) {
    u16 *p = *pp;
    u32 c = *p++;
    u32 r;
    if ((u16)(c + 0x2800) < 0x400) {
        u32 c2 = *p++;
        if ((u16)(c2 + 0x2400) < 0x400) {
            r = (c << 16) | c2;
        } else {
            r = D_00362CE8[0];
        }
    } else if ((u16)(c + 0x2400) < 0x400) {
        r = D_00362CE8[0];
    } else {
        r = c;
    }
    *pp = p;
    return r;
}

u32 func_0018ABA0(u8 **pp) {
    u8 *p = *pp;
    u8 c = *p++;
    u32 r, m;
    if ((s8)c >= 0) {
        r = c;
    } else if ((u8)(c + 0x3E) >= 0x33) {
        r = D_00362CE4[0];
    } else {
        r = c & 0x7F;
        m = 0x40;
        do {
            r &= m - 1;
            m <<= 5;
            r = (r << 6) | (*p++ & 0x3F);
        } while (r >= m);
    }
    *pp = p;
    return r;
}
