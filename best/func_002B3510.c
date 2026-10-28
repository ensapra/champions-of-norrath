extern const f32 D_00482D70, D_00482D74, D_00482D78, D_00482D7C, D_00482D80, D_00482D84, D_00482D88;
typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16;
    s16 f18;
    volatile s16 f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46, f48, f4A;
    volatile f32 f4C, f50, f54, f58;
} WepObj3;
void func_002B3510(WepObj3 *a) {
    a->f18 = 0x14;
    a->f58 = 1.0f;
    a->f24 = D_00482D70;
    a->f28 = D_00482D74;
    a->f2C = D_00482D78;
    a->f30 = D_00482D7C;
    a->f20 = 0x28;
    a->f34 = D_00482D80;
    a->f4C = 2.0f;
    a->f44 = 2;
    a->f50 = D_00482D84;
    a->f46 = 3;
    a->f54 = D_00482D88;
    a->f3E = 1;
    a->f48 = 0x1F;
    a->f0E = 1;
    a->f10 = 1;
    a->f1A = 2;
    a->f12 = 1;
    a->f1C = 2;
    a->f14 = 1;
    a->f1E = 0x1F;
    a->f16 = 1;
    a->f38 = 1;
    a->f42 = 2;
    a->f3A = 1;
    a->f3C = 1;
}
