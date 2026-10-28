struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub {
    char pad0[8]; s8 b8; s8 b9; s16 hA; s16 hC; s16 hE; s16 h10; s16 h12; s16 h14; s16 h16; s16 h18; s16 h1A;
    f32 f1C, f20, f24, f28, f2C;
    Vec3 pos;
    s32 i3C; s8 b40; s8 b41; s8 b42;
};
struct Obj {
    char pad0[0xC]; u32 fC;
    char pad10[0x14]; void *f24;
    s8 f28; char pad29[0xF]; s16 f38; char pad3A[0x0E];
    void *f48; char pad4C[5]; s8 f51;
    char pad52[0x26]; s64 f78; char pad80[4]; s32 f84;
    Sub sub;
};
extern "C" {
extern char D_0042C570[];
extern char D_00449550[];
extern char D_004853B8[];
void func_001411F0(void *, Vec3, void *);
void ovl_ntgui2_func_0013D230(void *, Vec3, s32, s32);
void func_0013EB28(void *);
void func_0015C320(Vec3, s32, char *, s32, s32, s32, s32, s32);
void func_001637A8(void *);
s64 func_0016C970(s32, s64);
void func_00143830(void *);

void func_00214A48(Obj *o, Vec3 pos, s16 mode)
{
    f32 z, one, inf;
    Vec3 q;
    s8 *fld = (s8 *)o + 0x4C;
    Sub *s = &o->sub;
    s32 on = 1;
    func_001411F0(o, pos, D_0042C570);
    z = 0.0f;
    one = 1.0f;
    inf = one / z;
    q = pos;
    o->f48 = D_00449550;
    fld[5] = on;
    s->b9 = 0;
    s->pos = q;
    s->f2C = z;
    s->f28 = inf;
    s->f1C = z;
    s->f24 = z;
    s->f20 = inf;
    s->h16 = 0x12C;
    s->h18 = -0x10;
    s->hE = 0x12C;
    s->h10 = -0x10;
    s->h14 = 0x8C;
    s->hA = 0x8C;
    s->hC = 0x8C;
    s->h12 = 0x8C;
    s->b8 = 0;
    ovl_ntgui2_func_0013D230(s, q, 0x12C, -0x10);
    o->f28 = 0x24;
    o->f84 = 0;
    o->fC |= 0x100008;
    s->b41 = 0;
    s->b42 = 0;
    func_0013EB28(s);
    func_0015C320(pos, 0, D_004853B8, 0, 0, 0, 0, 0);
    func_001637A8(fld);
    o->f78 = func_0016C970(*(s32 *)((char *)o->f24 + 0xC), 0);
    o->f38 = mode;
    func_00143830(o);
    *((s8 *)o + 0xC4) = on;
}
}
