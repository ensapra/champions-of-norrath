typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    volatile f32 f48, f4C, f50, f54;
} WepObj2;
extern f32 D_00482F8C, D_00482F90, D_00482F94;
void func_002BE038(WepObj2 *a) {
    f32 x = D_00482F8C;
    s16 one = 1;
    f32 q = 0.25f;
    s16 five = 5;
    f32 four = 4.0f;
    s16 three = 3;
    f32 y = D_00482F90;
    s16 ten = 10;
    f32 z = D_00482F94;
    s16 thirty = 0x1E;
    f32 two = 2.0f;
    a->f18 = thirty;
    a->f54 = two;
    a->f24 = x;
    a->f28 = q;
    a->f12 = five;
    a->f1C = 0x1B;
    a->f2C = four;
    a->f42 = three;
    a->f4C = y;
    a->f44 = one;
    a->f50 = z;
    a->f3C = ten;
    a->f46 = 14;
    a->f0E = one;
    a->f10 = five;
    a->f1A = three;
    a->f38 = one;
    a->f3A = ten;
}
