extern const f32 D_00482D54, D_00482D58, D_00482D5C, D_00482D60, D_00482D64, D_00482D68, D_00482D6C;
typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46, f48, f4A;
    volatile f32 f4C, f50, f54, f58;
} WepObj3;
void func_002B31A0(WepObj3 *a) {
    a->f58 = 1.0f;
    a->f18 = 0xA2;
    a->f24 = D_00482D54;
    a->f1A = 0x2D;
    a->f28 = D_00482D58;
    a->f2C = D_00482D5C;
    a->f30 = D_00482D60;
    a->f20 = 0x51;
    a->f34 = D_00482D64;
    a->f42 = 3;
    a->f4C = D_00482D68;
    a->f44 = 5;
    a->f3C = 0xA;
    a->f46 = 2;
    a->f54 = D_00482D6C;
    a->f3E = 1;
    a->f48 = 0xF3;
    a->f0E = 1;
    a->f10 = 5;
    a->f12 = 5;
    a->f1C = 2;
    a->f14 = 1;
    a->f1E = 0xF3;
    a->f16 = 1;
    a->f38 = 1;
    a->f3A = 5;
    a->f50 = 1.0f;
}
