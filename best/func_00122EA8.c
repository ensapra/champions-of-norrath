typedef struct { u8 b[8]; } B8;
typedef struct { s32 a, b; u8 rest[0x3C - 8]; } B3C;
typedef struct {
    s32 f0, f4, f8, fC;
    B8 p10;
    s32 f18;
    f32 f1C, f20;
    s32 f24;
    u8 f28, f29;
    s32 f2C;
    f32 f30;
    s32 f34;
    u16 f38;
    f32 f3C, f40;
    s32 f44;
    void *vt;
    B3C g;
    u8 f88, f89, f8A;
} Obj;
extern void *func_001441B8(s32);
extern void func_00194498(void *, void *);
extern void ovl_ntgui2_func_0013D230(void *);
extern u8 D_0044D498[], D_0044AB70[];
Obj *func_00122EA8(Obj *src) {
    Obj *o = func_001441B8(0x8C);
    Obj *r = 0;
    if (o) {
        o->vt = D_0044D498;
        func_00194498(o, src);
        func_00194498(&o->f4, &src->f4);
        func_00194498(&o->f8, &src->f8);
        o->fC = src->fC;
        o->p10 = src->p10;
        o->f18 = src->f18;
        o->f1C = src->f1C;
        o->f20 = src->f20;
        o->f24 = src->f24;
        o->f28 = src->f28;
        o->f29 = src->f29;
        o->vt = D_0044AB70;
        o->f2C = src->f2C;
        o->f30 = src->f30;
        o->f34 = src->f34;
        o->f38 = src->f38;
        o->f3C = src->f3C;
        o->f40 = src->f40;
        o->f44 = src->f44;
        o->g = src->g;
        if (o->g.a || o->g.b) {
            o->g.a = 0;
            o->g.b = 0;
            ovl_ntgui2_func_0013D230(&o->g);
        }
        o->f88 = src->f88;
        o->f89 = src->f89;
        o->f8A = src->f8A;
        r = o;
    }
    return r;
}
