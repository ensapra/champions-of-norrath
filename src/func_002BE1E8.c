typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    volatile f32 f48, f4C, f50, f54;
} WepObj2;
extern f32 D_00482F9C, D_00482FA0;
extern f32 D_00482F8C, D_00482F90, D_00482F94;
void func_002BE1E8(WepObj2 *a) {
    f32 x = D_00482F9C;
    f32 y = D_00482FA0;
    a->f18 = 10;
    a->f28 = y;
    a->f24 = x;
    a->f10 = 1;
    a->f1A = 15;
    a->f0E = 1;
}
void func_002BE038(WepObj2 *a) {
    a->f18 = 0x1E;
    a->f54 = 2.0f;
    a->f24 = D_00482F8C;
    a->f28 = 0.25f;
    a->f12 = 5;
    a->f1C = 0x1B;
    a->f2C = 4.0f;
    a->f42 = 3;
    a->f4C = D_00482F90;
    a->f44 = 1;
    a->f50 = D_00482F94;
    a->f3C = 10;
    a->f46 = 14;
    a->f0E = 1;
    a->f10 = 5;
    a->f1A = 3;
    a->f38 = 1;
    a->f3A = 10;
}
