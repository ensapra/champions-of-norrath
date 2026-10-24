extern s8 D_004CE200[];
u8 *func_001884C8(u8 *p, s32 *size) {
    u16 len = *(u16 *)(p + 0xC);
    s32 off = D_004CE200[p[0x11]];
    u8 *q;
    if (len == off) {
        if (size) *size = 0;
        return NULL;
    }
    q = p + off;
    if (size) {
        if (*(s32 *)q == 0x745865) *size = *(s32 *)(q + 4);
        else *size = len - off;
    }
    return q;
}

extern s8 D_004CE1F8[];
u8 *func_00188490(u8 *p, s32 *out) {
    u8 *r = (p[0x11] < 2) ? p + 0x30 : NULL;
    if (out) *out = D_004CE1F8[p[0x11]];
    return r;
}

s32 func_00188400(u8 *p, s32 shift, s32 *pw, s32 *ph) {
    s32 w = *(u16 *)(p + 0x14) >> shift;
    s32 h = *(u16 *)(p + 0x16) >> shift;
    s32 n;
    if (pw) *pw = w;
    if (ph) *ph = h;
    n = w * h;
    switch (p[0x13]) {
    case 1:
        n *= 2;
        break;
    case 2:
        n *= 3;
        break;
    case 3:
        n *= 4;
        break;
    case 4:
        n /= 2;
        break;
    case 5:
        break;
    }
    return (n + 15) & ~15;
}
