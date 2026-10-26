typedef struct { f32 x, y, z; } V3;
typedef struct { V3 v; f32 p0; V3 w; f32 p1; V3 cp; f32 p2; V3 res; f32 p3; V3 a; f32 p4; V3 b; } Loc;
typedef struct { s16 off; s16 pad; void (*fn)(void *, s32); } VEnt;
typedef struct Obj {
    char p0[0x10]; V3 pos; char p1c[0x1C]; s16 ang; char p3a[0xE]; char *vt; char p4c[8]; s32 time;
    V3 v58; char p64[0x30]; V3 v94; s32 pad; s32 fA4; s32 fA8; s32 hAC;
} Obj;
extern void func_0013EB60(void *);
extern void func_00144CB8(Obj *, V3 *);
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern void func_00183DD0(s32, V3 *);
extern s32 func_002FBA98(s32);
extern s32 func_002FBA48(s32, s64);
f32 D_00481608;
s32 D_004844A4;

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

void func_00219858(Obj *o) {
    Loc L;
    V3 *p;
    V3 *pa, *pb, *po;
    f32 dx, dy, k, zero, r;
    s32 m;
    if (o->fA4 == 0) {
        o->ang = o->ang + 500;
        p = &o->v58;
        dx = func_0015A070(o->ang) * 240.0f;
        dy = func_0015A100(o->ang) * 240.0f;
        L.v.x = dx;
        L.v.y = dy;
        L.v.z = 50.0f;
        *p = L.v;
    } else {
        if (func_002FBA48(func_002FBA98(o->time - D_004844A4), (s64)0x807C << 47) < 0)
            o->v58.z += 50.0f;
        p = &o->v58;
    }
    po = &o->pos;
    m = 0x1AE0;
    L.cp = *p;
    k = D_00481608;
    func_00144CB8(o, &L.cp);
    pa = &L.a;
    pb = &L.b;
    zero = 0.0f;
    pa->x = o->v58.y;
    pa->y = -o->v58.x;
    pa->z = zero;
    pb->x = zero;
    pb->y = zero;
    pb->z = 1.0f;
    r = 1.0f;
    Scale(pa, r);
    Scale(pa, func_0015A070(D_004844A4 * m) * k);
    Scale(pb, func_0015A100(D_004844A4 * m) * k);
    Add(&L.res, pa, pb);
    Add(&L.res, &L.res, po);
    func_00183DD0(o->hAC, &L.res);
    if (o->fA8 != 0) {
        o->v94 = *po;
        func_0013EB60((char *)o + 0x64);
    }
    if (D_004844A4 >= o->time && o) {
        VEnt *e = (VEnt *)(o->vt + 8);
        e->fn((char *)o + e->off, 3);
    }
}
