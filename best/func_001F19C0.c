struct Vec3 { f32 x, y, z; Vec3() {} };
struct Obj {
    char p0[0xC]; u32 f0C;
    char p1[0x1C - 0x10]; f32 f1C;
    char p2[0x28 - 0x20]; s8 f28;
    char p3[0x48 - 0x29]; void *f48;
    char p4[0xA0 - 0x4C]; u64 fA0;
    char p5[0xC0 - 0xA8]; s32 fC0;
    char p6[0xEC - 0xC4]; s32 fEC;
    char p7[0xF8 - 0xF0]; s32 fF8;
    char p8[0x23C - 0xFC]; s16 f23C;
    char p9[0x328 - 0x23E]; s32 f328;
    char pA[0x3C0 - 0x32C]; s32 f3C0;
    s32 f3C4, f3C8, f3CC, f3D0, f3D4, f3D8;
};
extern "C" {
void ovl_ntgui2_func_00108E58(void *, Vec3 *, s16, s32, s32, f32);
void func_001092F0(void *, s32, s64, s32, f32, f32, f32, f32, f32);
s32 func_00140F60(void *, char *, s32);
s32 func_00143A80(void *, char *, s32);
void func_001438A0(void *, s32);
s32 func_00304168(s32, char *);
extern char D_0044BBD0[];
extern char D_0046DED0[];
extern char D_0046DEE0[];
extern char D_0046DEF0[];
extern char D_00485230[];
}
s32 D_004844A4;
extern "C" void func_001F19C0(Obj *o, Vec3 *v, s16 a, s32 b);

void func_001F19C0(Obj *o, Vec3 *v, s16 a, s32 b) {
    s32 *p = &o->f3D8;
    Vec3 t = *v;
    u64 fl;
    ovl_ntgui2_func_00108E58(o, &t, a, 0, b, 8.0f);
    *p = 0;
    o->f28 = 20;
    fl = o->fA0 | 0x4000000;
    o->f48 = D_0044BBD0;
    o->f1C = 20.0f;
    o->fF8 = D_004844A4;
    o->f0C |= 9;
    o->fA0 = fl;
    o->fC0 = 0;
    o->fEC = 0;
    func_001092F0(o, 1, fl, D_004844A4, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    o->f23C = 0;
    o->f3C0 = func_00143A80(o, D_0046DED0, 0);
    if (func_00140F60(o, D_0046DEE0, 0)) o->f3D4 |= 1;
    if (func_00140F60(o, D_0046DEF0, 0)) o->f3D4 |= 2;
    o->f3C4 = 600;
    o->f3C8 = o->f328;
    o->f3CC = 4;
    *p = 0;
    o->f3D0 = 0;
    func_001438A0(o, o->f328);
    if (!func_00304168(o->f3C0, D_00485230)) o->f3D4 |= 2;
}
