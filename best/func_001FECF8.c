typedef struct { f32 x, y, z; } V3;
typedef struct { V3 v; f32 p0; V3 u; f32 p1; V3 w; f32 p2[5]; V3 cp; f32 p3; V3 c; f32 p4; V3 a; f32 p5; V3 b; } Loc;
typedef struct { s16 off; s16 pad; void (*fn)(void *, s32); } VEnt;
typedef struct Obj {
    char p0[0x10]; V3 pos; char p1c[0x1C]; s16 ang; char p3a[0xE]; char *vt; char p4c[8]; s32 time;
    V3 v58; char p64[0x30]; V3 v94; s32 fA0; s32 fA4; s32 hA8;
} Obj;
extern void func_0013EB60(void *, f32);
extern void func_00144CB8(Obj *, V3);
extern u32 func_00153FA8(void);
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern void func_00182A80(s32, s32);
extern void func_00183DD0(s32, V3 *);
f32 D_0048108C;
f32 D_00481090;
s32 D_004844A4;

static inline void Norm(V3 *v) {
    f32 r = 1.0f / __builtin_sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    v->x *= r;
    v->y *= r;
    v->z *= r;
}
static inline void Scale(V3 *v, f32 s) {
    v->x *= s;
    v->y *= s;
    v->z *= s;
}
static inline void Add(V3 *d, V3 *a, V3 *b) {
    d->x = a->x + b->x;
    d->y = a->y + b->y;
    d->z = a->z + b->z;
}

void func_001FECF8(Obj *o) {
    Loc L;
    V3 *p;
    if (D_004844A4 - o->time < 15) {
        func_00182A80(o->hA8, (s32)((f32)(D_004844A4 - o->time) * D_0048108C * 700.0f + 35.0f));
        L.v.x = func_0015A070(o->ang) * 540.0f;
        L.v.y = func_0015A100(o->ang) * 540.0f;
        L.v.z = 50.0f;
        o->v58 = L.v;
    } else {
        if (o->fA0 == 0) {
            p = &L.u;
            o->ang = o->ang + func_00153FA8() % 500 + 500;
        } else {
            p = &L.w;
            o->ang = o->ang - func_00153FA8() % 500 - 500;
        }
        p->x = func_0015A070(o->ang) * 540.0f;
        p->y = func_0015A100(o->ang) * 540.0f;
        p->z = 50.0f;
        o->v58 = *p;
    }
    func_00144CB8(o, o->v58);
    L.a.x = o->v58.y;
    L.a.y = -o->v58.x;
    L.a.z = 0.0f;
    L.b.x = 0.0f;
    L.b.y = 0.0f;
    L.b.z = 1.0f;
    Norm(&L.a);
    Scale(&L.a, func_0015A070(D_004844A4 * 0x1AE0) * D_00481090);
    Scale(&L.b, func_0015A100(D_004844A4 * 0x1AE0) * D_00481090);
    Add(&L.c, &L.a, &L.b);
    Add(&L.c, &L.c, &o->pos);
    func_00183DD0(o->hA8, &L.c);
    if (o->fA4 != 0) {
        o->v94 = o->pos;
        func_0013EB60((char *)o + 0x64, o->pos.z);
    }
    if (D_004844A4 - o->time >= 0x259 && o) {
        VEnt *e = (VEnt *)(o->vt + 8);
        e->fn((char *)o + e->off, 3);
    }
}
