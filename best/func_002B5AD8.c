typedef struct { f32 x, y, z; } V3;
typedef struct { s16 delta; s16 idx; s32 (*fn)(void *, ...); } VEnt;
typedef struct { s8 c; u8 pad[7]; u8 *p8; u8 *pC; } O;
extern f32 D_00482E20, D_00482E24, D_00482E28, D_00482E2C, D_00482E30, D_00482E34;
extern s32 D_004844A4;
extern u8 D_008D7B30[], D_008D7B80[], D_008D7BD0[], D_004864A0[], D_00479498[];
s32 func_0015A100(s32);
f32 func_0015A070(s32);
s32 func_0015E948(void *);
void func_00180DA0(f32, void *, void *, void *);
s32 func_00165DC0(void *, void *);
void func_0024D4F8(s32, void *, f32);

static inline f32 rn(void *o) { return (f32)func_0015E948(o) * (1.0f/65536.0f) * 2.0f - 1.0f; }
static inline void rv(void *o, V3 *out) {
    V3 t;
    do { t.x = rn(o); t.y = rn(o); t.z = rn(o); } while (t.x*t.x + t.y*t.y + t.z*t.z > 1.0f);
    *out = t;
}

void func_002B5AD8(O *o, V3 *pos, s32 a2) {
    s32 i, k, base, rng;
    f32 s;
    V3 r, u, w, q, p;
    f32 f;
    a2 = (s16)a2;
    p = *pos;
    f = (f32)func_0015A100(D_004844A4 * 0xDAC) + (f32)func_0015A100(D_004844A4 * 0x6D6);
    f = f * 10.0f;
    s = (f32)((s32)f + 0x50);
    *(f32*)(o->p8 + 0) = 0;
    ((f32*)o)[13] = s; ((f32*)o)[15] = s;
    ((f32*)o)[16] = 1.0f/(s*s); ((f32*)o)[14] = 1.0f/(s*s);
    {
        VEnt *e = (VEnt *)(*(u8 **)(o->p8 + 0x60) + 0x68);
        k = e->fn(o->p8 + e->delta, 1, o->c, o->pC);
    }
    base = a2 - k * 0x5B;
    rng = k * 0xB6;
    for (i = 0; i < 20; i++) {
        rv(o, &q);
        r.x = q.x * D_00482E20; r.y = q.y * D_00482E20; r.z = q.z * D_00482E20;
        r.x += p.x; r.y += p.y; r.z += p.z;
        rv(o, &u);
        u.x += func_0015A070((s32)((f32)base + rn(o)*0 + (f32)func_0015E948(o) * (1.0f/65536.0f) * (f32)rng)) * D_00482E24;
        u.y += func_0015A100((s32)((f32)base + (f32)func_0015E948(o) * (1.0f/65536.0f) * (f32)rng)) * D_00482E24;
        func_00180DA0(0.0f, D_008D7B30, &r, &u);
    }
}
