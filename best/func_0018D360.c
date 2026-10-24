typedef struct {
    u8 pad0[0x2C4];
    s32 x2C4;
    u8 pad2C8[0x38C - 0x2C8];
    u8 *start;
    u8 *cur;
} Txt0018D;

void func_0018C1F0(Txt0018D *);

s32 func_0018D360(Txt0018D *o)
{
    u8 *p = o->cur;
    u32 b = *p++;
    s32 c;
    s32 n;

    if (b == 0) {
        return 0;
    }
    if ((s8)b >= 0) {
        c = b;
    } else {
        if (b < 0xC0) {
            return -1;
        } else if (b < 0xE0) {
            n = 1;
            c = b & 0x1F;
        } else if (b < 0xF0) {
            n = 2;
            c = b & 0xF;
        } else if (b < 0xF8) {
            n = 3;
            c = b & 0x7;
        } else {
            return -1;
        }
        do {
            b = *p++;
            if ((b & 0xC0) != 0x80) {
                return -1;
            }
            c = (c << 6) | (b & 0x3F);
        } while (--n);
    }
    o->cur = p;
    return c;
}

s32 func_0018D400(Txt0018D *o)
{
    u8 *start = o->start;
    u8 *p = o->cur;

    if (start == p) {
        return -1;
    }
    do {
        p--;
        if ((s8)*p >= 0) break;
        if ((u8)(*p + 0x40) < 0x38) break;
    } while (start != p);
    o->cur = p;
    return 0;
}

void func_0018D44C(Txt0018D *o)
{
    s32 t = o->x2C4;
    o->x2C4 = 0;
    func_0018C1F0(o);
    o->x2C4 = t;
}
