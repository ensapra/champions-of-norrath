typedef struct V3 { s32 a, b, c; } V3;
typedef struct Caster { char pad[0x60]; void *vt; } Caster;
typedef struct Sub {
    char p0[8]; s8 f8; s8 f9; s16 fA; s16 fC; s16 fE; s16 f10; s16 f12; s16 f14; s16 f16; s16 f18;
    char p1[2]; f32 f1C; f32 f20; f32 f24; f32 f28; f32 f2C;
} Sub;
typedef struct Obj {
    char p0[0x1C]; f32 f1C; char p1[0x28]; void *f48; char p2[0x08]; f32 f54; f32 f58; f32 f5C; s32 f60; s16 f64; char p3[2]; s32 f68; s32 f6C;
    Sub sub; V3 fA0; Caster *fAC;
} Obj;
void func_00143830(Obj *);
void func_00153FD0(Obj *, V3, s32, s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void ovl_ntgui2_func_0013D230(Sub *);
s32 func_00165DC0(char *, char *);
void func_0024D308(s32, Obj *, f32);
extern char D_00451370[];
extern char D_004781B0[];
extern char D_00486260[];
extern const f32 D_0048293C;

void func_0029DB90(Obj *o, V3 pos, s16 ang, s32 a3, s32 a4, Caster *c) {
    f32 z = 0.0f;
    volatile Sub *s;
    f32 k, d;

    func_00153FD0(o, pos, a3, 0);
    V3 u = pos;
    s = &o->sub;
    o->f48 = D_00451370;
    s->f9 = 0;
    o->fA0 = u;
    s->f24 = 96.0f;
    s->f16 = 0x4C;
    s->f1C = 96.0f;
    s->fE = 0x4C;
    d = D_0048293C; s->f28 = d;
    s->f14 = 0x64;
    s->f20 = d;
    s->fC = 0x64;
    s->f12 = 0x6D;
    s->f2C = z;
    s->fA = 0x6D;
    s->f10 = 0;
    s->f18 = 0;
    s->f8 = 0;
    ovl_ntgui2_func_0013D230((Sub *)s);
    o->fAC = c;
    o->f64 = ang;
    o->f6C = a4;
    {char *e=(char *)c->vt+0x58; o->f1C = (f32)(*(s32 (**)(void *,s32,s32))(e+4))((char *)c+*(s16 *)e,2,a4);}
    {Caster *c2=o->fAC; char *e=(char *)c2->vt+0x58; k = (f32)(*(s32 (**)(void *,s32,s32))(e+4))((char *)c2+*(s16 *)e,1,o->f6C);}
    o->f54 = func_0015A070(o->f64) * k;
    o->f58 = func_0015A100(o->f64) * k;
    o->f5C = z;
    o->f68 = 0;
    o->f60 = 0;
    func_00143830(o);
    func_0024D308(func_00165DC0(D_00486260, D_004781B0), o, 1.0f);
}
