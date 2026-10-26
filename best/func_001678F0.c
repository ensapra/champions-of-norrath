typedef struct {
    u8 p0[8];
    s32 btn, f0C, f10;
    f32 x14, y18, x1C, y20, pad24, b28, b2C, b30, b34, f38, f3C, b40, b44, b48, b4C, f50, f54;
} Pad;
typedef struct { u16 btn; u8 b2, b3, b4, b5, b6, b7; } Raw;
typedef struct { s32 last; s32 cnt; } Hist;
void func_00168378(u8, u8, f32 *, f32 *);
f32 D_0047FFA4, D_0047FFA8, D_0047FFAC;
s32 D_00484048, D_0048404C, D_00484050, D_00484074;
#define FLAG(dst, m) { f32 t = 1.0f; if (!(b & (m))) t = 0.0f; p->dst = t; }
void func_001678F0(Pad *p, Raw *r, Hist *h) {
    s32 old = h->last;
    s32 b, v6;
    p->btn = r->btn;
    if (D_00484050) {
        p->btn = r->btn & 0xF7FF;
        D_00484050--;
    }
    v6 = p->btn;
    b = v6;
    FLAG(b28, 0x2000)
    FLAG(b2C, 0x8000)
    FLAG(b30, 0x1000)
    FLAG(b34, 0x4000)
    FLAG(b40, 0x20)
    FLAG(b44, 0x80)
    FLAG(b48, 0x10)
    FLAG(b4C, 0x40)
    {
        f32 t = 1.0f;
        p->f38 = r->b6 * D_0047FFA4;
        p->f3C = b & 1;
        p->f50 = r->b7 * D_0047FFA4;
        if (!(b & 2)) t = 0.0f;
        p->f54 = t;
    }
    func_00168378(r->b4, r->b5, &p->x1C, &p->y20);
    func_00168378(r->b2, r->b3, &p->x14, &p->y18);
    {
        f32 x = p->x14, y;
        if (x > D_0047FFA8) p->btn |= 0x800000;
        if (x < D_0047FFAC) p->btn |= 0x400000;
        y = p->y18;
        if (y > D_0047FFA8) p->btn |= 0x200000;
        if (y < D_0047FFAC) p->btn |= 0x100000;
    }
    b = p->btn;
    p->f0C = p->f10 = (b ^ old) & b;
    if (b != 0 && b == h->last) {
        h->cnt++;
        if (h->cnt >= 0x15 && !(h->cnt & 3)) {
            p->f10 = p->btn;
        }
    } else {
        h->cnt = 0;
    }
    v6 = p->btn;
    if (D_00484074) {
        s32 m = D_0048404C | D_00484048;
        s32 nb = v6 & m;
        p->f10 &= m;
        p->b28 = 0.0f;
        p->f0C &= m;
        p->y18 = 0.0f; p->x14 = 0.0f; p->y20 = 0.0f; p->x1C = 0.0f;
        p->f54 = 0.0f; p->f3C = 0.0f; p->f50 = 0.0f; p->f38 = 0.0f;
        p->b4C = 0.0f; p->b48 = 0.0f; p->b44 = 0.0f; p->b40 = 0.0f;
        p->b34 = 0.0f; p->b30 = 0.0f; p->b2C = 0.0f;
        v6 = nb;
        p->btn = nb;
    }
    h->last = v6;
}
