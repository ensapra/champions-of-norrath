f32 D_00482BB0;
f32 D_00482BB4;
f32 D_00482AB8;
f32 D_00482ABC;
f32 D_00482AC0;
f32 D_00482AC4;

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

void func_002AB3C0(WepObj *a) {
    a->f4C = D_00482BB4;
    a->f18 = 0x15;
    a->f28 = 2.0f;
    a->f1C = 2;
    a->f2C = D_00482BB0;
    a->f14 = 6;
    a->f1E = 0xF;
    a->f30 = 1.0f;
    a->f38 = 1;
    a->f42 = 4;
    a->f0E = 1;
    a->f24 = 2.0f;
    a->f10 = 1;
    a->f1A = 0xF;
    a->f12 = 6;
}

void func_002A5D58(WepObj *a) {
    a->f18 = 0x32;
    a->f34 = D_00482AC4;
    a->f24 = D_00482AB8;
    a->f1A = 0x14;
    a->f28 = D_00482ABC;
    a->f1C = 4;
    a->f2C = D_00482AC0;
    a->f30 = 0.25f;
    a->f16 = 1;
    a->f20 = 0x10;
    a->f0E = 1;
    a->f10 = 1;
    a->f12 = 1;
    a->f14 = 1;
    a->f1E = 1;
}
