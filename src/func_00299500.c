extern const f32 D_0048281C, D_00482820, D_00482824;
typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjParam;

void func_00299500(ObjParam *a) {
    f32 g1 = D_0048281C;
    f32 g2 = D_00482820;
    f32 c = 2.0f;
    f32 g3 = D_00482824;
    s16 one = 1;
    a->f24 = g1;
    a->f34 = g3;
    a->f1A = 0xF;
    a->f28 = g2;
    a->f1C = 0x28;
    a->f2C = c;
    a->f16 = one;
    a->f20 = 0x68;
    a->f0E = one;
    a->f18 = one;
    a->f10 = one;
    a->f12 = one;
}
