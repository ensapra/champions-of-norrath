extern s32 D_004C3F9C[];
extern u8 D_0110AF28[];
void func_001A2660(void *, s32, s32);

s32 ovl_ntgui2_func_001B1900(void)
{
    D_004C3F9C[0] = 0;
    func_001A2660(D_0110AF28, 0, 4);
    return 0;
}

typedef struct {
    u8 pad0[0x2C4];
    s32 x2C4;
    u8 pad2C8[0x38C - 0x2C8];
    u8 *start;
    u8 *cur;
} Txt0018D;

void func_0018C1F0(Txt0018D *);

void func_0018D44C(Txt0018D *o)
{
    s32 t = o->x2C4;
    o->x2C4 = 0;
    func_0018C1F0(o);
    o->x2C4 = t;
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

s32 func_0018D360(Txt0018D *o)
{
    u8 *p = o->cur;
    u32 c = *p++;
    u32 b;
    s32 n;

    if (c == 0) {
        return 0;
    }
    if (c & 0x80) {
        if (c < 0xC0) {
            return -1;
        } else if (c < 0xE0) {
            c &= 0x1F;
            n = 1;
        } else if (c < 0xF0) {
            c &= 0xF;
            n = 2;
        } else if (c < 0xF8) {
            c &= 0x7;
            n = 3;
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
