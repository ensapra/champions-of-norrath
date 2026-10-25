typedef struct { char pad[0xE]; u16 lim; u8 pad2[2]; u8 mode; u8 type; } Tex;
extern u8 *func_00188628(Tex *);
u32 func_00188650(Tex *o, s32 idx, s32 base)
{
    u8 *pal = func_00188628(o);
    s32 n, fmt, v;
    u32 a, r, g, b;
    u8 *p;
    if (pal == 0) return 0;
    if (o->type == 4) n = idx << 4;
    else if (o->type == 5) n = idx << 8;
    else return 0;
    n += base;
    if (o->lim < n) return 0;
    fmt = (o->mode << 8) | o->type;
    switch (fmt) {
    case 0x105: case 0x205: case 0x305:
    case 0x4104: case 0x4204: case 0x4304:
        v = n & 0x1F;
        if (v >= 8) {
            if (v < 0x10) n += 8;
            else if (v < 0x18) n -= 8;
        }
        break;
    }
    switch (o->mode & 0x3F) {
    case 1: {
        s32 c;
        p = pal + n * 2;
        c = (p[1] << 8) | p[0];
        r = (p[0] << 3) & 0xFF;
        a = (c >> 8) & 0x80;
        g = (c >> 2) & 0xF8;
        b = (c >> 7) & 0xF8;
        break;
    }
    case 2:
        a = 0x80;
        p = pal + n * 3;
        r = p[0]; g = p[1]; b = p[2];
        break;
    case 3:
        p = pal + n * 4;
        r = p[0]; g = p[1]; b = p[2]; a = p[3];
        break;
    default:
        r = g = b = a = 0;
        break;
    }
    return (a << 24) | r | (b << 8) | (g << 16);
}
