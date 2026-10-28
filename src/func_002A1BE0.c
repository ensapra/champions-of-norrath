extern const f32 D_004829F0, D_004829F4, D_004829F8, D_004829FC, D_00482A00;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u16 unkC;
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    u8 pad0[0x4C - 0x48];
    volatile f32 f4C, f50, f54;
} WepObj2;

void func_002A1BE0(WepObj2 *a) {
    f32 g1 = D_004829F0, g2 = D_004829F4, g3 = D_004829F8, g4 = D_004829FC;
    f32 two = 2.0f, four = 4.0f;
    f32 g5 = D_00482A00;
    s16 one = 1, two_s = 2;
    a->f18 = 0x78;
    a->f54 = g5;
    a->f24 = g1;
    a->f1A = 0x1DE;
    a->f28 = g2;
    a->f2C = g3;
    a->f20 = 5;
    a->f34 = g4;
    a->f4C = two;
    a->f44 = 0x1C2;
    a->f50 = four;
    a->f3C = one;
    a->f46 = two_s;
    a->f0E = one;
    a->f10 = one;
    a->f12 = one;
    a->f1C = two_s;
    a->f16 = one;
    a->f38 = one;
    a->f42 = two_s;
    a->f3A = one;
}
