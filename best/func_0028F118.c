typedef struct { f32 x, y, z; } V3;
typedef struct { s16 a, b, c, d, e; } P;
typedef struct {
    char p0[0x1C]; f32 f1C;
    char p1[0x64 - 0x20]; f32 f64;
    char p2[0x76 - 0x68]; s16 s76, s78, s7A;
    char p3[0x4A4 - 0x7C]; P *pts;
} O;
extern f32 D_00482658;
s32 func_00153FA8(void *);

void func_0028F118(O *o) {
    V3 d, v, r;
    V3 *pv;
    f32 k, sc;
    s32 n, nx;
    P *q;
    do {
        r.x = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f) - 1.0f;
        r.y = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f) - 1.0f;
        r.z = 2.0f * ((f32)func_00153FA8(o) * 0.0000152587890625f) - 1.0f;
    } while (r.x * r.x + r.y * r.y + r.z * r.z > 1.0f);
    pv = &v;
    *pv = r;
    k = o->f1C * o->f64;
    d.x = pv->x * k;
    d.y = v.y * k;
    d.z = v.z * k;
    if (d.z < 0.0f) d.z = -d.z;
    n = o->s78;
    nx = n + 1;
    if (nx == o->s76) nx = 0;
    if (nx != o->s7A) {
        q = (P *)((char *)o->pts + n * 10);
        sc = D_00482658;
        q->a = (s32)(d.x * 16.0f);
        q->b = (s32)(d.y * 16.0f);
        q->c = (s32)(d.z * 16.0f);
        q->d = (s32)(((f32)func_00153FA8(o) * 0.0000152587890625f - 0.5f) * sc * 224.0f);
        q->e = (s32)(((f32)func_00153FA8(o) * 0.0000152587890625f - 0.5f) * sc * 224.0f);
        o->s78 = nx;
    }
}
