extern f32 D_00482734;
extern f32 D_00482738;
extern f32 D_0048273C;
typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    volatile f32 f48, f4C, f50;
} Q;
void func_00293768(Q *p) {
    s16 one = 1;
    p->f18 = 0x17;
    p->f50 = D_0048273C;
    p->f24 = 4.0f;
    p->f10 = 5;
    p->f28 = D_00482734;
    p->f42 = 2;
    p->f4C = D_00482738;
    p->f44 = one;
    p->f0E = one;
    p->f1A = one;
    p->f38 = one;
    p->f3A = one;
}
