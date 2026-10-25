struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub {
    char p0[8];
    s8 f8, f9;
    s16 fA, fC, fE, f10, f12, f14, f16, f18;
    char p1[2];
    f32 f1C, f20, f24, f28, f2C;
};
struct O {
    char p0[0xC];
    s32 flags;
    Vec3 v10;
    f32 f1C;
    char p2[0x38 - 0x20];
    s16 s38;
    char p3[0x48 - 0x3A];
    char *f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    Vec3 v58;
    Sub sub;
    Vec3 v94;
    s32 fA0, fA4, fA8;
};
extern "C" {
extern char D_0044E4C0[];
f32 D_00481084;
f32 D_00481088;
s32 D_004844A4;
void func_0013EB28(void *);
void func_00143830(void *);
s32 func_00153FA8(void *);
void func_00153FD0(void *, Vec3, s32, s32);
s32 func_001828D8(s32, s32, s32, s32, s32, s32, s32, f32);
void func_00183DD0(s32, Vec3);
void ovl_ntgui2_func_0013D230(void *, s32, s32, s32);

void func_001FEAF8(O *o, Vec3 a, Vec3 b, s32 s, s32 unused, s32 a5) {
    Vec3 t;
    Sub *sub = &o->sub;
    f32 z = 0.0f;
    func_00153FD0(o, a, 0, 0);
    t = a;
    o->f48 = D_0044E4C0;
    sub->f9 = 0;
    o->v94 = t;
    sub->f1C = 120.0f;
    sub->f20 = D_00481084;
    sub->fC = 30;
    sub->f10 = -32;
    sub->f12 = 200;
    sub->fA = 200;
    sub->f24 = 120.0f;
    sub->f28 = D_00481084;
    sub->f14 = 30;
    sub->f18 = -32;
    sub->f2C = z;
    sub->fE = 0;
    sub->f16 = 0;
    sub->f8 = 0;
    ovl_ntgui2_func_0013D230(sub, 200, 30, -32);
    o->f1C = z;
    o->s38 = s;
    o->v58 = b;
    s32 r = func_00153FA8(o);
    o->fA4 = a5;
    o->fA0 = r & 1;
    o->flags |= 0x4003;
    o->f54 = D_004844A4;
    func_00143830(o);
    o->fA8 = func_001828D8(8, 0x23, 4, 0xFF, 0x87, 0x64, 0xAB, D_00481088);
    func_00183DD0(o->fA8, o->v10);
    if (o->fA0 == 1 && o->fA4 == 0) func_0013EB28(sub);
}
}
