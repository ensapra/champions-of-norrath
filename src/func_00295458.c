typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C;
    char pad1[6];
    volatile f32 f24, f28, f2C;
} Obj3;
extern const f32 D_00482754;
void func_00295458(Obj3 *a) {
    f32 x = 2.0f;
    a->f18 = 10;
    a->f28 = D_00482754;
    a->f24 = x;
    a->f10 = 1;
    a->f1A = 3;
    a->f0E = 1;
}
