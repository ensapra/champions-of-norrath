extern "C" {
struct V3 { s32 a, b, c; };
struct Caster {
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual s32 Get(s32 i, ...);
};
struct Sub {
    char p0[8]; s8 f8; s8 f9; s16 fA; s16 fC; s16 fE; s16 f10; s16 f12; s16 f14; s16 f16; s16 f18;
    char p1[2]; f32 f1C; f32 f20; f32 f24; f32 f28; f32 f2C;
};
struct Obj {
    char p0[0x1C]; f32 f1C; char p1[0x28]; void *f48; char p2[0x08]; f32 f54; f32 f58; f32 f5C; s32 f60; s16 f64; char p3[2]; s32 f68; s32 f6C;
    Sub sub; V3 fA0; Caster *fAC;
};
void func_00143830(Obj *);
void func_00153FD0(Obj *, V3, s32, s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void ovl_ntgui2_func_0013D230(Sub *, s32, V3 *, s32);
s32 func_00165DC0(char *, char *);
void func_0024D308(s32, Obj *, f32);
extern char D_00451490[];
extern char D_00478260[];
extern char D_00486270[];
f32 D_00482960 = 4.0e-5f;
void func_0029E6A8(Obj *o, V3 pos, s16 ang, s32 a3, s32 a4, Caster *c) {
    f32 z = 0.0f;
    func_00153FD0(o, pos, a3, 0);
    V3 u = pos;
    Sub *s = &o->sub;
    s16 h = 0x59, w = 0x82;
    f32 big = 156.0f;
    f32 d = D_00482960;
    o->f48 = D_00451490;
    s->f9 = 0;
    o->fA0 = u;
    s->f24 = big;
    s->f16 = w;
    s->f1C = big;
    s->fE = w;
    s->f28 = d;
    s->f14 = h;
    s->f20 = d;
    s->f2C = z;
    s->fA = h;
    s->fC = h;
    s->f12 = h;
    s->f10 = 0;
    s->f18 = 0;
    s->f8 = 0;
    ovl_ntgui2_func_0013D230(s, h, &u, w);
    o->fAC = c;
    o->f64 = ang;
    o->f1C = 7.0f;
    o->f68 = a4;
    f32 k = (f32)c->Get(1, a4);
    o->f54 = func_0015A070(o->f64) * k;
    f32 y = func_0015A100(o->f64);
    o->f5C = z;
    o->f6C = 0;
    o->f60 = 0;
    o->f58 = y * k;
    func_00143830(o);
    func_0024D308(func_00165DC0(D_00486270, D_00478260), o, 1.0f);
}
}
