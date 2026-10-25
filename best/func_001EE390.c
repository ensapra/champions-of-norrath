struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub24 { char pad0[0x74]; s32 a74; char pad78[0xC]; s32 a84; };
struct Obj {
    char pad0[0x1C]; f32 f1C;
    char pad20[4]; Sub24 *f24;
    char pad28[0x20]; void *f48;
    char pad4C[0x5C];
    f32 fA8; s32 padAC; f32 fB0; char padB4[0xC]; s32 fC0;
    char padC4[0x1C]; f32 fE0; char padE4[8]; s32 fEC; char padF0[8]; s32 fF8;
    char padFC[0x24]; char f120[0x11C];
    s16 f23C; char pad23E[0x182];
    u32 f3C0; s32 f3C4; s32 f3C8; s32 f3CC;
};
extern "C" {
void ovl_ntgui2_func_00108E58(Obj *, Vec3, s16, char *, s32, f32);
void func_001092F0(Obj *, s32, f32, f32, f32, f32, f32);
u32 func_00153FA8(Obj *);
s32 func_00140F60(Obj *, char *, s32);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
void func_001438A0(Obj *);
extern char D_0042B118[];
extern char D_0044C170[];
extern char D_00485150[];
extern s32 D_004844A4;

void func_001EE390(Obj *o, Vec3 pos, s16 a2, s32 a3)
{
    ovl_ntgui2_func_00108E58(o, pos, a2, D_0042B118, a3, 1000.0f);
    o->f48 = D_0044C170;
    o->fF8 = D_004844A4;
    o->fB0 = 20.0f;
    o->f1C = 10.0f;
    o->fA8 = 0.5f;
    o->fC0 = 0;
    o->fEC = 0;
    func_001092F0(o, 1, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    o->f3C0 = func_00153FA8(o) % 9;
    o->f3C8 = 0;
    o->f3CC = 0;
    o->fE0 = (f32)(s32)func_00153FA8(o) * (1.0f / 65536.0f) * 0.5f + 1.5f;
    o->f3C4 = func_00140F60(o, D_00485150, 0);
    func_001637A8(o->f120);
    if (o->f3C4 == 0) {
        o->f23C = 0;
        func_00163830(o->f120, o->f24->a74, 1);
    } else {
        o->f23C = 0xD;
        func_00163830(o->f120, o->f24->a84, 1);
    }
    func_001438A0(o);
}
}
