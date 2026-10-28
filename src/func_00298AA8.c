extern const f32 D_004827F8, D_004827FC, D_00482800;
typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjParam;

void func_00298AA8(ObjParam *a) {
    f32 g1 = D_004827F8;
    f32 c = 1.0f;
    f32 g2 = D_004827FC;
    f32 g3 = D_00482800;
    s16 one = 1;
    a->f24 = g1;
    a->f34 = g3;
    a->f1A = 0xF;
    a->f28 = c;
    a->f1C = 0x28;
    a->f2C = g2;
    a->f16 = one;
    a->f20 = 0x61;
    a->f0E = one;
    a->f18 = one;
    a->f10 = one;
    a->f12 = one;
}
