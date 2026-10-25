struct Vec3 { f32 x, y, z; Vec3() {} };

extern "C" {
extern char D_0044A270[];
extern char D_004708D0[];
extern char D_00485380[];
extern f32 D_004816DC;
extern s32 D_004844A4;
}

struct Sub {
    char pad0[8];
    u8 unk8;
    u8 unk9;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    s32 unk2C;
    Vec3 pos;
};

struct Obj {
    char pad0[0x48];
    void *vt;
    char pad4C[0x54 - 0x4C];
    s32 unk54;
    Vec3 unk58;
    Sub sub;
    s32 unkA0;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
    s32 unkB4;
};

extern "C" {
void func_00153FD0(Obj *, Vec3, s32, s32);
void ovl_ntgui2_func_0013D230(Sub *, Vec3 &, s32, s32, s32);
void func_00143830(Obj *);
s32 func_00165DC0(char *, char *);
void func_0024D308(s32, Obj *, f32);

void func_0021D2A0(Obj *o, Vec3 a, Vec3 b, s32 c, s32 d, s32 p5, s32 p6, s32 p7, s32 p8, s32 p9)
{
    func_00153FD0(o, a, c, 0);
    o->vt = D_0044A270;
    {
        Sub *s = &o->sub;
        Vec3 p = a;
        s->unk9 = 0;
        s->pos = p;
        s->unk1C = 120.0f;
        s->unk20 = D_004816DC;
        s->unkA = 0x13E;
        s->unkC = 0xC1;
        s->unk10 = -0x20;
        s->unk24 = 120.0f;
        s->unk28 = D_004816DC;
        s->unk12 = 0x13E;
        s->unk14 = 0xC1;
        s->unk18 = -0x20;
        s->unk2C = 0;
        s->unkE = 0;
        s->unk16 = 0;
        s->unk8 = 0;
        ovl_ntgui2_func_0013D230(s, p, 0x13E, 0xC1, -0x20);
    }
    o->unk58 = b;
    o->unkB0 = p8;
    o->unkB4 = p9;
    o->unk54 = D_004844A4 + 600;
    o->unkA8 = p7;
    o->unkAC = p6;
    func_00143830(o);
    func_0024D308(func_00165DC0(D_00485380, D_004708D0), o, 1.0f);
    o->unkA0 = p5;
}
}
