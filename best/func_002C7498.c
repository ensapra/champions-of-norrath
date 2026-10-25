struct V12 { f32 x, y, z; V12() {} };
struct Owner {
    char pad[0x60];
    virtual s32 v0(); virtual s32 v1(); virtual s32 v2(); virtual s32 v3(); virtual s32 v4();
    virtual s32 v5(); virtual s32 v6(); virtual s32 v7(); virtual s32 v8(); virtual s32 v9();
    virtual s32 Get(s32 i, s32 c);
};
struct Arg { char pad[0x10]; V12 v; };
struct Sub {
    char p0[8]; s8 f8; s8 f9; s16 fA, fC, fE, f10, f12, f14, f16, f18; char p1A[2];
    f32 f1C, f20, f24, f28; s32 f2C;
};
struct Obj {
    s8 type; s32 f4; Owner *owner; Arg *arg; u32 rnd; void *vt; f32 f18;
    Sub sub; V12 pos; s32 f58;
};
extern "C" {
void ovl_ntgui2_func_0013D230(Sub *);
s32 func_00180260();
extern char D_0044E670[], D_004535A0[];
extern f32 D_0048310C;
extern u32 D_00483E5C;
void func_002C7498(Obj *o, s8 t, Arg *a, Owner *ow) {
    Sub *s = &o->sub;
    o->type = t;
    o->vt = D_0044E670;
    o->owner = ow;
    o->f4 = 0;
    o->arg = a;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    o->rnd = D_00483E5C >> 16;
    o->vt = D_004535A0;
    V12 tmp = a->v;
    s->f9 = 0;
    o->pos = tmp;
    s->fA = 0x45;
    s->f1C = 70.0f;
    s->fE = 0x20;
    s->f24 = 70.0f;
    s->f16 = 0x20;
    s->f20 = D_0048310C;
    s->f28 = D_0048310C;
    s->f12 = 0x45;
    s->f2C = 0;
    s->fC = 0;
    s->f10 = 0;
    s->f14 = 0;
    s->f18 = 0;
    s->f8 = 0;
    ovl_ntgui2_func_0013D230(s);
    o->f18 = (f32)o->owner->Get(2, o->type);
    o->f58 = func_00180260();
}
}
