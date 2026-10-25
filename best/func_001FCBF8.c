struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub68 {
    char pad0[8];
    s8 f8; s8 f9;
    s16 fA, fC, fE, f10, f12, f14, f16, f18;
    s16 pad1A;
    f32 f1C, f20, f24, f28;
    s32 f2C;
    Vec3 pos;
};
struct Obj {
    char pad0[0xC]; s32 flags;
    char pad10[0x38]; void *vtbl;
    s32 f4C;
    char pad50[0x18];
    Sub68 sub;
    s32 fA4; s32 fA8; s32 fAC;
};
extern "C" {
extern char D_0044E430[];
extern f32 D_00481044;
extern s32 D_004844A4;
void func_001411F0(void *, Vec3, s32, s32);
void ovl_ntgui2_func_0013D230(Sub68 *, Vec3);
void func_00194390(void *, s32, s32);
void func_00143830(void *);
}

extern "C" void func_001FCBF8(Obj *o, s32 a1, Vec3 pos, Vec3 rot, s32 a4, s32 a5) {
    s32 *list = &o->f4C;
    Sub68 *s;
    func_001411F0(o, pos, 0, 0);
    o->vtbl = D_0044E430;
    *list = 0;
    s = &o->sub;
    Vec3 p = pos;
    s->f9 = 0;
    s->pos = p;
    s->f12 = 0x73;
    s->fA = 0x73;
    s->f24 = 156.0f;
    s->f28 = D_00481044;
    s->f14 = 10;
    s->f18 = -0x20;
    s->f1C = 156.0f;
    s->f20 = D_00481044;
    s->f2C = 0;
    s->fC = 10;
    s->fE = 0;
    s->f10 = -0x20;
    s->f16 = 0;
    s->f8 = 0;
    ovl_ntgui2_func_0013D230(s, p);
    o->fA8 = a1;
    o->flags |= 0x421B;
    if (a4) {
        func_00194390(list, a4, a4);
    }
    o->fA4 = a5;
    o->fAC = D_004844A4 + 0xB4;
    func_00143830(o);
}
