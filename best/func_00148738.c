typedef struct { f32 x, y, z; } V3;
extern void func_00157E20(void *, void *, f32);
extern void func_00159F90(void *);
extern void func_0015B440(void *);
extern void func_0015BCD0(void *, f32, f32, f32, f32, f32);
extern void func_0016C820(s32, u64, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *);
extern f32 D_0047FD5C;
extern f32 D_0047FD60;
extern f32 D_0047FD64;

#define F(p, o) (*(f32 *)((u8 *)(p) + (o)))
#define I(p, o) (*(s32 *)((u8 *)(p) + (o)))
#define U(p, o) (*(u32 *)((u8 *)(p) + (o)))
#define Q(p, o) (*(u64 *)((u8 *)(p) + (o)))

void func_00148738(u8 *o, s32 fl) {
    s32 v[6];
    f32 sc, k, g;
    f32 a0, a1, a2, b0, b1, b2;
    u32 r1, r2, r3;
    u64 m;
    s32 n;

    if (*(s8 *)(o + 0x238) != 0) {
        if (Q(o, 0x150) & 0x20000)
            fl |= 0x1000;
    }
    func_0016C820(I(o, 0x4C), Q(o, 0xE8), &v[0], &v[1], &v[2], &v[3], &v[4], &v[5]);
    sc = F(o, 0x240);
    a0 = v[0]; b0 = v[3];
    a1 = v[1]; b1 = v[4];
    a2 = v[2]; b2 = v[5];
    func_0015BCD0(o + 0x190, 1.0f, 1.0f, b0 * sc - a0 * sc, b1 * sc - a1 * sc, b2 * sc - a2 * sc);
    *(V3 *)(o + 0x1A0) = *(V3 *)(o + 0x10);
    g = D_0047FD5C;
    F(o, 0x1BC) = F(o, 0xFC) * g;
    F(o, 0x1C0) = F(o, 0x100) * g;
    F(o, 0x1C4) = F(o, 0x30) * g;
    k = 2.0f;
    if (fl & 0x10) k = 10.0f;
    if (fl & 0x400) k = 10.0f;
    r1 = U(o, 0x44) * 0x19660D + 0x3C6EF35F;
    I(o, 0x22C) = -1;
    m = Q(o, 0xE8);
    r2 = r1 * 0x19660D + 0x3C6EF35F;
    r3 = r2 * 0x19660D + 0x3C6EF35F;
    U(o, 0x44) = r3;
    F(o, 0x1C8) = (2.0f * ((f32)(s32)(r1 >> 16) * 0.0000152587890625f) - 1.0f) * k;
    F(o, 0x1CC) = (2.0f * ((f32)(s32)(r2 >> 16) * 0.0000152587890625f) - 1.0f) * k;
    F(o, 0x1D0) = (2.0f * ((f32)(s32)(r3 >> 16) * 0.0000152587890625f) - 1.0f) * k;
    if (m != 0) {
        n = -1;
        do {
            m >>= 1;
            n++;
        } while (m != 0);
        I(o, 0x22C) = n;
    }
    func_00157E20(o + 0x1AC, o + 0x110, k);
    func_00159F90(o + 0x1AC);
    func_0015B440(o + 0x190);
    if (fl & 0x800) F(o, 0x23C) = D_0047FD60;
    else F(o, 0x23C) = D_0047FD64;
    if (fl & 0x1000) {
        I(o, 0x198) = 0;
        I(o, 0x194) = 0;
        I(o, 0x19C) = 0;
    }
}
