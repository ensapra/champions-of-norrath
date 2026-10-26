typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0xC]; u32 flags; } Q;
typedef struct { char pad[0xC]; Q *q; } R;
typedef struct Obj {
    char p0[0xC];
    u32 flags;
    V3 pos;
    char p1[0x38 - 0x1C];
    s16 ang;
    char p2[0x48 - 0x3A];
    void *vt;
    char p3[4];
    s32 i50;
    char p4[4];
    R *r58;
    R *r5C;
    s16 h60, h62, h64, h66;
    f32 f68;
    R *r6C;
} Obj;
typedef struct Fx {
    char p0[0xC];
    u32 flags;
    V3 pos;
    f32 f1C, f20;
    char p1[0x48 - 0x24];
    void *vt;
    V3 v4C;
    char p2[4];
    s32 i58;
    s8 b5C;
    char p3[3];
    R *r60;
} Fx;
extern char D_004495E0[];
extern char D_00449670[];
f32 D_00481584;
s32 D_004844A4;
void func_001411F0(void *, V3 *, s32, s32);
void func_00143630(void *);
void func_00143830(void *);
Fx *func_001441B8(s32);
void func_00194390(void *, void *, void *);

void func_002143F8(Obj *o, V3 *pp, s16 ang, R *a3, R *t0, s16 t1, s16 t2, f32 f0, f32 f1, f32 f2, f32 f3) {
    V3 pos, a, b;
    Fx *n, *res;
    f32 g;
    s32 flag;
    V3 *bp = &b;
    R **q60;
    R **p6C = &o->r6C;
    R **p58 = &o->r58;
    R **p5C = &o->r5C;
    pos = *pp;
    func_001411F0(o, &pos, 0, 0);
    *p58 = 0;
    *p5C = 0;
    o->vt = D_004495E0;
    o->flags |= 0x480B;
    *p6C = 0;
    func_00143630(o);
    o->ang = ang;
    if (a3) func_00194390(p58, a3, a3);
    if (t0) func_00194390(p5C, t0, t0);
    o->h66 = t2;
    o->f68 = f3;
    o->h62 = t1;
    o->i50 = (s32)((f32)D_004844A4 + f0 * 60.0f);
    o->h64 = (s16)(f1 * 65536.0f * D_00481584);
    o->h60 = (s16)(f2 * 65536.0f * D_00481584);
    func_00143830(o);
    n = func_001441B8(0x64);
    if (n) {
        a = o->pos;
        flag = *p58 != 0;
        q60 = &n->r60;
        *bp = o->pos;
        func_001411F0(n, &a, 0, 0);
        g = o->f68;
        *q60 = 0;
        n->vt = D_00449670;
        n->flags |= 0x421A;
        if (t0) func_00194390(q60, t0, t0);
        n->f1C = 12.0f;
        n->f20 = 12.0f;
        if (*q60 && ((*q60)->q->flags & 0x40)) {
            n->flags |= 0x800;
            func_00143630(n);
            n->f1C = 28.0f;
        }
        n->v4C = *bp;
        n->b5C = flag;
        n->i58 = D_004844A4 + (s32)(g * 60.0f);
        func_00143830(n);
        res = n;
    } else {
        res = 0;
    }
    if (res) func_00194390(p6C, res, res);
}
