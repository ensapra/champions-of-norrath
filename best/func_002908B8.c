f32 D_004826B4;
f32 D_004826B8;
f32 D_004826BC;
f32 D_004826C0;
typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} Obj08B8;

void func_002908B8(Obj08B8 *o) {
    o->f18 = 0x46;
    o->f34 = D_004826C0;
    o->f24 = D_004826B4;
    o->f1A = 6;
    o->f28 = D_004826B8;
    o->f2C = D_004826BC;
    o->f14 = 10;
    o->f1E = 2;
    o->f30 = 0.25f;
    o->f16 = 1;
    o->f20 = 0x1C;
    o->f0E = 1;
    o->f10 = 1;
    o->f12 = 10;
    o->f1C = 10;
}
