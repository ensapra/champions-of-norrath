extern u16 D_00362CE0[];
extern u32 D_00362CE4[];
extern u16 *D_00362CF0[];
void func_00189E08(u8 **out, u32 c);

static u32 utf8_decode(u8 **ps)
{
    u8 *s = *ps;
    u32 c = *s++;
    if (c & 0x80) {
        if ((u8)(c + 0x3E) < 0x33) {
            u32 m = 0x40;
            c &= 0x7F;
            do {
                c = ((c & (m - 1)) << 6) | (*s++ & 0x3F);
                m <<= 5;
            } while (c >= m);
        } else {
            c = D_00362CE4[0];
        }
    }
    *ps = s;
    return c;
}

static u16 conv(u32 c)
{
    u16 r;
    if (c > 0xFFFF) {
        r = 0;
    } else {
        r = D_00362CF0[0][c];
    }
    return r ? r : D_00362CE0[0];
}

s32 func_0018A138(u8 *dst, u32 size, u8 *src)
{
    s32 count = 0;
    u8 buf[16];
    u8 *q;
    u32 c;
    u16 w;
    u32 len;
    u8 *p;

    if (size == 0) {
        return 0;
    }
    size--;
    while ((c = utf8_decode(&src)) != 0) {
        w = conv(c);
        if (w == 0) {
            break;
        }
        q = buf;
        func_00189E08(&q, w);
        len = q - buf;
        if (size < len) {
            break;
        }
        size -= len;
        count++;
        p = buf;
        while (len--) {
            *dst++ = *p++;
        }
    }
    *dst = 0;
    return count;
}
