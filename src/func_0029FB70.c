f32 D_00482950;
f32 D_00482954;
f32 D_00482958;
f32 D_0048295C;
f32 D_00482988;
f32 D_0048298C;
f32 D_00482990;
f32 D_00482994;
f32 D_00482998;
f32 D_004829B4;
f32 D_004829B8;
f32 D_004829BC;
f32 D_004829C0;
f32 D_004829C4;
f32 D_004829C8;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u16 unkC;
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42;
    u8 pad0[0x4C - 0x44];
    volatile f32 f4C;
} WepObj;

void func_0029E2F8(WepObj *a) {
    a->f18 = 0x1F;
    a->f4C = 2.0f;
    a->f24 = D_00482950;
    a->f1A = 0x18B;
    a->f28 = D_00482954;
    a->f1C = 8;
    a->f2C = D_00482958;
    a->f20 = 0x19;
    a->f34 = D_0048295C;
    a->f38 = 1;
    a->f42 = 2;
    a->f0E = 1;
    a->f10 = 1;
    a->f12 = 1;
    a->f16 = 1;
}

void func_0029FB70(WepObj *a) {
    a->f18 = 0x28;
    a->f4C = 2.0f;
    a->f24 = D_00482988;
    a->f1A = 0x1F2;
    a->f28 = D_0048298C;
    a->f1C = 6;
    a->f2C = D_00482990;
    a->f1E = 3;
    a->f30 = D_00482994;
    a->f20 = 0xE;
    a->f34 = D_00482998;
    a->f38 = 1;
    a->f42 = 2;
    a->f0E = 1;
    a->f10 = 1;
    a->f12 = 1;
    a->f14 = 1;
    a->f16 = 1;
}

void func_002A0BB0(WepObj *a) {
    a->f18 = 0x28;
    a->f4C = D_004829C8;
    a->f24 = D_004829B4;
    a->f1A = 0x16E;
    a->f28 = D_004829B8;
    a->f2C = D_004829BC;
    a->f1E = 3;
    a->f30 = D_004829C0;
    a->f20 = 0x25;
    a->f34 = D_004829C4;
    a->f38 = 1;
    a->f42 = 2;
    a->f0E = 1;
    a->f10 = 1;
    a->f12 = 1;
    a->f1C = 1;
    a->f14 = 1;
    a->f16 = 1;
}
