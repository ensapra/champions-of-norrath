struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub24 { char pad0[0xC]; s32 aC; char pad10[0x1C]; s32 a2C; };
struct Obj {
    char pad0[0xC]; s32 fC;
    char pad10[0xC]; f32 f1C;
    char pad20[4]; Sub24 *f24;
    char pad28[0x20]; void *f48;
    char pad4C[0x54]; u64 fA0;
    f32 fA8; s32 padAC; s32 fB0; char padB4[0xC]; s32 fC0;
    char padC4[0x28]; s32 fEC; char padF0[4]; s32 fF4; s32 fF8; char padFC[4]; s32 f100;
    char pad104[0x1C]; char f120[0x108];
    s64 f228; char pad230[0xC]; s16 f23C; char pad23E[0xDA]; s16 f318; char pad31A[0xA6];
    s32 f3C0; s32 f3C4;
};
extern "C" {
void ovl_ntgui2_func_00108E58(Obj *, Vec3, s16, char *, s32, f32);
void func_001092F0(Obj *, s32, f32, f32, f32, f32, f32);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
s64 func_0016C970(s32, s64);
void func_00143830(Obj *);
void func_001128A8(Obj *, s32, s32, s32, f32, f32, f32, s32, f32, s32);
void func_001091B0(Obj *);
extern char D_0042D048[];
extern char D_0044F3D8[];
extern f32 D_004819D8;
extern f32 D_004819DC;
extern s32 D_004844A4;

void func_00232818(Obj *o, Vec3 pos, s16 a2, s32 a3)
{
    ovl_ntgui2_func_00108E58(o, pos, a2, D_0042D048, a3, 10.0f);
    o->f48 = D_0044F3D8;
    o->fC |= 0x1000000;
    o->fA0 |= 0x400040000LL;
    o->fF8 = D_004844A4;
    o->fA8 = D_004819D8;
    o->f1C = 20.0f;
    o->f318 = -1;
    o->f3C0 = 0;
    o->fB0 = 0;
    o->fC0 = 0;
    o->fEC = 0;
    o->f23C = 0;
    o->f100 = 0;
    o->f3C4 = 0;
    func_001092F0(o, 1, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f);
    func_001637A8(o->f120);
    func_00163830(o->f120, o->f24->a2C, 1);
    o->fF4 = 1;
    o->f228 = func_0016C970(o->f24->aC, 1);
    o->fEC = 1;
    func_00143830(o);
    func_001128A8(o, 3, 1, 0, D_004819DC, 0.0f, 0.0f, 0, 0.0f, 0);
    func_001091B0(o);
}
}
