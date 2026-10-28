typedef struct { s32 a, b, c; } S3;
typedef struct {
    char pad0[0x10];
    f32 f10, f14, f18;
    char pad1[0x14];
    f32 f30;
    char pad2[4];
    u16 h38;
    char pad3[0xA];
    s32 s44;
    void *vt;
    s32 s4c;
    s32 s50;
    char pad4[0x94];
    s64 e8;
    f32 f_f0, f_f4, f_f8, f_fc, f_100;
    char pad6[4];
    f32 f_108;
    u16 h10c;
} O;
extern char D_0044D018[];
void func_001411F0(O *o, S3 s, s32 a, s32 b);
void func_00143630(O *o, s32 a, s32 b, s32 c);
void func_00147A48(O *o, s32 f);
void func_0016C820(s32 x, s64 z, s32 *a, s32 *b, s32 *c, s32 *d, s32 *e, s32 *f);

void func_001478B0(O *o, S3 s, s32 x, s32 y, s64 z, s32 flags) {
    s32 p, q, r, ss, t, u;
    s32 v, w, m;
    f32 zero = 0;
    func_001411F0(o, s, 0, 0);
    o->vt = D_0044D018;
    o->s44 = o->s44 * 0x19660D + 0x3C6EF35F;
    o->h38 = (u32)o->s44 >> 16;
    o->s50 = y;
    o->s4c = x;
    o->e8 = z;
    o->h10c = 0;
    o->f_100 = zero;
    o->f_fc = zero;
    o->f30 = zero;
    func_0016C820(x, z, &p, &q, &r, &ss, &t, &u);
    v = (p + ss) >> 1;
    w = (q + t) >> 1;
    m = (r + u) >> 1;
    o->f_f8 = m;
    o->f_f0 = v;
    o->f_f4 = w;
    o->f_108 = (f32)m - (f32)r;
    if (flags & 4) {
        o->f10 += v;
        o->f14 += w;
        o->f18 += m;
        func_00143630(o, v, t, ss);
    }
    func_00147A48(o, flags);
}
