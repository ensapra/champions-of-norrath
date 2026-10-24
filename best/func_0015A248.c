typedef struct { f32 a, b, c; } T12;
typedef struct { f32 f0; s32 x4, x8, xC; f32 f10; s32 x14, x18, x1C; f32 f20, f24, f28, f2C; } S248;

void func_0015A248(S248 *p, T12 *q) {
    T12 tmp = *q;
    p->f0 = 1.0f;
    p->x4 = 0;
    p->x8 = 0;
    p->xC = 0;
    p->f10 = 1.0f;
    p->x14 = 0;
    p->x18 = 0;
    p->x1C = 0;
    p->f20 = 1.0f;
    p->f24 = tmp.a;
    p->f28 = tmp.b;
    p->f2C = tmp.c;
}
