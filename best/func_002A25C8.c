extern f32 D_00482A18, D_00482A1C, D_00482A20, D_00482A24;
extern f32 D_004829F0, D_004829F4, D_004829F8, D_004829FC, D_00482A00;
extern f32 D_00482A10, D_00482A14;
extern u8 D_008D7090[];

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

void func_002A2678(WepObj2 *a) {
    f32 g1 = D_00482A18, g2 = D_00482A1C, g3 = D_00482A20, g4 = D_00482A24;
    f32 two = 2.0f, five = 5.0f, one = 1.0f;
    a->f54 = one;
    a->f18 = 0x7D;
    a->f24 = g1;
    a->f1A = 0x1A1;
    a->f28 = g2;
    a->f12 = 5;
    a->f1C = 0x32;
    a->f2C = g3;
    a->f20 = 0x44;
    a->f34 = g4;
    a->f42 = 2;
    a->f4C = two;
    a->f44 = 0x190;
    a->f50 = five;
    a->f3C = 1;
    a->f46 = 0x2D;
    a->f0E = 1;
    a->f10 = 1;
    a->f16 = 1;
    a->f38 = 1;
    a->f3A = 1;
}

void func_002A1BE0(WepObj2 *a) {
    f32 g1 = D_004829F0, g2 = D_004829F4, g3 = D_004829F8, g4 = D_004829FC;
    f32 two = 2.0f, four = 4.0f;
    f32 g5 = D_00482A00;
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
    a->f3C = 1;
    a->f46 = 2;
    a->f0E = 1;
    a->f10 = 1;
    a->f12 = 1;
    a->f1C = 2;
    a->f16 = 1;
    a->f38 = 1;
    a->f42 = 2;
    a->f3A = 1;
}

void func_00180D78(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32);

void func_002A25C8(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        func_00180D78((void *)D_008D7090, 0xC1, 0x70, 0x27, 0x3D, 0x36, 0x33, 0x21, 16.0f, D_00482A10, D_00482A14, 0xE, arg0, 2, 2, 0);
    }
}
