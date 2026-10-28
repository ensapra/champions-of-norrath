extern const f32 D_004826B4;
extern const f32 D_004826B8;
extern const f32 D_004826BC;
extern const f32 D_004826C0;
typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16;
    s16 f18;
    volatile s16 f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} Obj08B8;

void func_002908B8(Obj08B8 *o) {
    f32 a = D_004826B4;
    f32 b = D_004826B8;
    f32 c = D_004826BC;
    f32 d = 0.25f;
    f32 e = D_004826C0;
    s16 one = 1;
    s16 ten = 10;
    o->f18 = 0x46;
    o->f34 = e;
    o->f24 = a;
    o->f1A = 6;
    o->f28 = b;
    o->f2C = c;
    o->f14 = ten;
    o->f1E = 2;
    o->f30 = d;
    o->f16 = one;
    o->f20 = 0x1C;
    o->f0E = one;
    o->f10 = one;
    o->f12 = ten;
    o->f1C = ten;
}
