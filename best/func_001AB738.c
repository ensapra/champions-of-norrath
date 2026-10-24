typedef union {
    f64 d;
    struct { u32 lo; s32 hi; } w;
} DU;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
} Num;

f64 func_001AB418(Num *n, s32 *e);
void func_001712C8(f64 a, f64 b);

void func_001AB738(Num *a, Num *b) {
    s32 e[2];
    DU x, y;
    s32 d;
    x.d = func_001AB418(a, &e[0]);
    y.d = func_001AB418(b, &e[1]);
    d = (e[0] - e[1]) + (a->f10 - b->f10) * 32;
    if (d > 0) {
        x.w.hi += d << 20;
    } else {
        y.w.hi -= d << 20;
    }
    func_001712C8(x.d, y.d);
}
