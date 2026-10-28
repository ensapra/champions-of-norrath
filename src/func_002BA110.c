extern const f32 D_00482EE8;
typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E;
    char pad1[4];
    volatile f32 f24, f28, f2C, f30;
} Obj4;
void func_002BA110(Obj4 *a) {
    f32 two = 2.0f;
    f32 three = 3.0f;
    f32 g = D_00482EE8;
    f32 q = 0.25f;
    s16 one = 1;
    a->f18 = 0x32;
    a->f30 = q;
    a->f24 = two;
    a->f1A = 0x23;
    a->f28 = three;
    a->f1C = 3;
    a->f2C = g;
    a->f14 = one;
    a->f1E = 2;
    a->f0E = one;
    a->f10 = one;
    a->f12 = one;
}
