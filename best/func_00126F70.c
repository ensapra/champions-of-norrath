typedef struct { s32 x; f32 y, z; } V3;
typedef struct X X;
typedef struct { s32 a, b; u8 rest[0x3C - 8]; } B3C;
typedef struct {
    s32 f0, f4, f8, fC;
    V3 p10;
    f32 f1C, f20;
    s32 f24;
    u8 f28, f29;
    void *f2C;
    f32 f30;
    X *f34;
    u16 f38;
    f32 f3C, f40;
    s32 f44;
    void *vt;
    B3C g;
    s32 f88;
    f32 f8C, f90, f94, f98, f9C, fA0, fA4, fA8, fAC, fB0;
    s32 fB4, fB8;
} Obj;
extern void *func_001441B8(s32);
extern void *func_00194498(void *, void *);
extern void ovl_ntgui2_func_0013D230(void *);
extern u8 D_0044D498[], D_00449A70[];
Obj *func_00126F70(Obj *src) {
    Obj *o = func_001441B8(0xBC);
    Obj *r;
    if (o) {
        B3C *g;
        o->vt = D_0044D498;
        func_00194498(o, src);
        func_00194498(&o->f4, &src->f4);
        func_00194498(&o->f8, &src->f8);
        o->fC = src->fC;
        o->p10 = src->p10;
        o->f1C = src->f1C;
        o->f24 = src->f24;
        o->f20 = src->f20;
        o->f28 = src->f28;
        o->f29 = src->f29;
        o->vt = D_00449A70;
        o->f30 = src->f30;
        o->f3C = src->f3C;
        o->f38 = src->f38;
        o->f2C = src->f2C;
        o->f34 = src->f34;
        o->f40 = src->f40;
        o->f44 = src->f44;
        g = &o->g;
        *g = src->g;
        if (g->a || g->b) {
            g->a = 0;
            g->b = 0;
            ovl_ntgui2_func_0013D230(g);
        }
        func_00194498(&o->f88, &src->f88);
        o->f8C = src->f8C;
        o->fB4 = src->fB4;
        o->f90 = src->f90;
        o->fB8 = src->fB8;
        o->f94 = src->f94;
        o->f98 = src->f98;
        o->f9C = src->f9C;
        o->fA0 = src->fA0;
        o->fA4 = src->fA4;
        o->fA8 = src->fA8;
        o->fAC = src->fAC;
        o->fB0 = src->fB0;
        r = o;
    } else {
        r = 0;
    }
    return r;
}
