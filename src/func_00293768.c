extern const f32 D_00482734;
extern const f32 D_00482738;
extern const f32 D_0048273C;
typedef struct {
    char pad0[0xE];
    volatile s16 f0E, f10, f12, f14, f16;
    s16 f18;
    volatile s16 f1A, f1C, f1E, f20, f22;
    volatile f32 f24, f28, f2C, f30, f34;
    volatile s16 f38, f3A, f3C, f3E, f40, f42, f44, f46;
    volatile f32 f48, f4C, f50;
} Q;
void func_00293768(Q *p) {
    f32 a = 4.0f;
    s16 one = 1;
    f32 b = D_00482734;
    f32 c = D_00482738;
    f32 d = D_0048273C;
    p->f18 = 0x17;
    p->f50 = d;
    p->f24 = a;
    p->f10 = 5;
    p->f28 = b;
    p->f42 = 2;
    p->f4C = c;
    p->f44 = one;
    p->f0E = one;
    p->f1A = one;
    p->f38 = one;
    p->f3A = one;
}
