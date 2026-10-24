f32 D_004829B4;
f32 D_004829B8;
f32 D_004829BC;
f32 D_004829C0;
f32 D_004829C4;
const f32 D_004829C8;

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
