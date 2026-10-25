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
    s32 f4C;
    u8 f50;
    s32 f54;
    s32 f58;
    V3 p5C;
    B3C g;
    V3 pA4;
    s32 fB0, fB4, fB8, fBC;
} Obj;
extern void *func_001441B8(s32);
extern void *func_00194498(void *, void *);
extern void ovl_ntgui2_func_0013D230(void *);
extern u8 D_0044D498[], D_0044D378[], D_0044A030[];
Obj *func_001257A0(Obj *src) {
    Obj *o = func_001441B8(0xC0);
    Obj *r;
    if (o) {
        B3C *g;
        s32 a, b, c;
        void *p, *q;
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
        o->vt = D_0044D378;
        o->f30 = src->f30;
        q = src->f2C;
        p = src->f34;
        o->f3C = src->f3C;
        c = src->f44;
        o->f2C = q;
        o->f34 = p;
        o->f44 = c;
        o->f38 = src->f38;
        o->f40 = src->f40;
        func_00194498(&o->f4C, &src->f4C);
        o->f50 = src->f50;
        o->vt = D_0044A030;
        o->f54 = src->f54;
        o->f58 = src->f58;
        o->p5C = src->p5C;
        g = &o->g;
        *g = src->g;
        if (g->a || g->b) {
            g->a = 0;
            g->b = 0;
            ovl_ntgui2_func_0013D230(g);
        }
        o->pA4 = src->pA4;
        a = src->fB4;
        b = src->fB0;
        o->fB4 = a;
        o->fB0 = b;
        o->fB8 = src->fB8;
        o->fBC = src->fBC;
        r = o;
    } else {
        r = 0;
    }
    return r;
}
