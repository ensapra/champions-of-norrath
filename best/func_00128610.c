extern "C" {
typedef struct { s32 x; f32 y, z; } V3;
typedef struct { s32 a, b; u8 rest[0x3C - 8]; } B3C;
typedef struct {
    s32 f0, f4, f8, fC;
    V3 p10;
    f32 f1C, f20;
    s32 f24;
    u8 f28, f29;
    void *f2C;
    f32 f30;
    void *f34;
    u16 f38;
    f32 f3C, f40;
    s32 f44;
    void *vt;
    V3 p4C;
    B3C g;
    s32 f94;
    u8 f98, f99, f9A, f9B, f9C, f9D;
    f32 fA0, fA4;
    u16 fA8, fAA;
    s32 fAC;
    u64 fB0;
} Obj;
extern void *func_001441B8(s32);
extern void *func_00194498(void *, void *);
extern void ovl_ntgui2_func_0013D230(void *);
extern u8 D_0044D498[], D_00450620[];
Obj *func_00128610(Obj *src) {
    Obj *o = (Obj *)func_001441B8(0xB8);
    Obj *r;
    if (o) {
        B3C *g;
        s32 c;
        void *p, *q;
        u64 t;
        o->vt = D_0044D498;
        func_00194498(o, src);
        func_00194498(&o->f4, &src->f4);
        func_00194498(&o->f8, &src->f8);
        o->fC = src->fC;
        o->p10 = src->p10;
        o->f1C = src->f1C;
        o->f20 = src->f20;
        o->f24 = src->f24;
        o->f28 = src->f28;
        o->f29 = src->f29;
        o->vt = D_00450620;
        o->f30 = src->f30;
        c = src->f44;
        q = src->f2C;
        o->f3C = src->f3C;
        p = src->f34;
        o->f44 = c;
        o->f2C = q;
        o->f34 = p;
        o->f38 = src->f38;
        o->f40 = src->f40;
        o->p4C = src->p4C;
        g = &o->g;
        *g = src->g;
        if (g->a || g->b) {
            g->a = 0;
            g->b = 0;
            ovl_ntgui2_func_0013D230(g);
        }
        o->f94 = src->f94;
        o->f98 = src->f98;
        o->f99 = src->f99;
        o->f9A = src->f9A;
        o->f9B = src->f9B;
        o->f9C = src->f9C;
        o->f9D = src->f9D;
        o->fA0 = src->fA0;
        o->fA8 = src->fA8;
        t = src->fB0;
        o->fA4 = src->fA4;
        o->fAA = src->fAA;
        o->fAC = src->fAC;
        o->fB0 = t;
        r = o;
    } else {
        r = 0;
    }
    return r;
}
}
