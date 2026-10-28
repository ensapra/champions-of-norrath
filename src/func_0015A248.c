typedef struct { f32 a, b, c; } T12;
typedef struct { f32 m[12]; } S248;

void func_0015A248(S248 *p, T12 *q) {
    T12 tmp = *q;
    p->m[0] = 1.0f;
    p->m[1] = 0.0f;
    p->m[2] = 0.0f;
    p->m[3] = 0.0f;
    p->m[4] = 1.0f;
    p->m[5] = 0.0f;
    p->m[6] = 0.0f;
    p->m[7] = 0.0f;
    p->m[8] = 1.0f;
    p->m[9] = tmp.a;
    p->m[10] = tmp.b;
    p->m[11] = tmp.c;
}
