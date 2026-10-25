struct Vec3 { f32 x, y, z; Vec3() {} };
extern "C" {
struct Own { char p0[0xC]; s32 id; char p1[0xC]; s32 f1C; };
struct O {
    char p0[0xC]; s32 flags; char p1[0xC]; f32 f1C; char p2[4]; Own *own; s8 b28;
    char p3[0x1F]; char *vt;
    char p4[0x54]; u64 q0A0; f32 f0A8; s8 b0AC; char p5[3]; s32 f0B0;
    char p6[0xC]; s32 f0C0;
    char p7[0x28]; s32 f0EC; char p8[4]; s32 f0F4; s32 f0F8;
    char p9[0x12C]; s64 q228; char p10[0xC]; s16 h23C;
    char p11[0xDA]; s16 h318; char p12[0xAA]; s32 f3C4; s32 f3C8; s32 f3CC;
};
extern char D_0042BA00[];
extern char D_0044B9F0[];
extern char D_0046F310[];
extern char D_0046F320[];
extern char D_0046F330[];
f32 D_00481110;
f32 D_00481114;
s32 D_004844A4;
void ovl_ntgui2_func_00108E58(void *, Vec3, s16, char *, s32, f32);
void func_001091B0(void *);
void func_001092F0(void *, s32, s64, s32, s32, f32, f32, f32, f32, f32);
void func_001438A0(void *);
u32 func_00153FA8(void *);
s32 func_00155AB8(s32, char *);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
s64 func_0016C970(s32, s32);
void func_002023E8(void *);

void func_002011F8(O *o, Vec3 pos, s16 h, s32 a3, s32 a4) {
    ovl_ntgui2_func_00108E58(o, pos, h, D_0042BA00, a3, 10.0f);
    o->b28 = 0xF;
    o->flags |= 0x1000000;
    o->q0A0 |= 0x400040000LL;
    o->f1C = 15.0f;
    o->b0AC = 9;
    o->h318 = -1;
    o->f0A8 = D_00481110;
    o->vt = D_0044B9F0;
    o->f0F8 = D_004844A4;
    o->f3C8 = 0;
    o->f0B0 = 0;
    o->f0C0 = 0;
    o->f0EC = 0;
    o->h23C = 0;
    o->f3CC = 0;
    func_001092F0(o, 1, o->q0A0, o->flags, -1, D_00481114, D_00481110, 1.0f, 1.0f, 1.0f);
    o->f3C4 = func_00153FA8(o) % 3;
    if (func_00155AB8(a4, D_0046F310) == 0) {
        o->f3C4 = 0;
    } else if (func_00155AB8(a4, D_0046F320) == 0) {
        o->f3C4 = 1;
    } else if (func_00155AB8(a4, D_0046F330) == 0) {
        o->f3C4 = 2;
    }
    func_002023E8(o);
    o->q228 = func_0016C970(o->own->id, o->f0F4);
    func_001637A8((char *)o + 0x120);
    func_00163830((char *)o + 0x120, o->own->f1C, 1);
    func_001438A0(o);
    func_001091B0(o);
}
}
