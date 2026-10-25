struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub {
    s8 f0[8];
    s8 f8, f9;
    s16 fA, fC, fE, f10, f12, f14, f16, f18;
    char pad1A[2];
    f32 f1C, f20, f24, f28;
    s32 f2C;
};
struct Obj3 {
    char pad0[0xC];
    s32 flags;
    char pad10[0x38];
    void *vtbl;
    s32 f4C, f50, f54, f58;
    char pad5C[4];
    s32 f60;
    char pad64[0x48];
    char blkAC[0x50];
    s32 fFC;
    Sub sub;
    char padx[0x130 - 0x100 - sizeof(Sub)];
    Vec3 p130;
    char pad13C[4];
    s32 f140;
    s32 f144;
    char pad148[0xC];
    s16 f154;
    char pad156[2];
    s16 f158;
    char pad15A[2];
    s16 f15C;
    char pad15E[2];
    s16 f160;
};
extern "C" {
extern char D_0044EB08[];
void func_001411F0(void *, Vec3, s32, s32);
void func_00180D08(void *);
void func_00222D20(void *, s32);
void func_002233C0(void *, s32);
void ovl_ntgui2_func_0013D230(void *);

void func_00222BB0(Obj3 *o, Vec3 *pos, s32 a2, s32 a3) {
    Vec3 p = *pos;
    volatile Sub *sb;
    func_001411F0(o, p, 0, a2);
    o->f4C = a3;
    o->vtbl = D_0044EB08;
    o->f50 = 0;
    sb = &o->sub;
    o->f54 = 0;
    o->f58 = 0;
    o->f60 = 0;
    func_00180D08(o->blkAC);
    o->fFC = 0;
    sb->f8 = 0;
    sb->f9 = 0;
    o->f140 = 1;
    o->flags |= 0x400F;
    func_00222D20(o, a2);
    func_002233C0(o, a2);
    if (o->f54 != 0) {
        f32 a = (f32)o->f144;
        Vec3 t = p;
        f32 b = 1.0f / (a * a);
        s16 s1 = o->f154;
        s16 s2 = o->f158;
        s16 s3 = o->f15C;
        s16 s4 = o->f160;
        o->p130 = t;
        sb->f12 = s1;
        sb->f14 = s2;
        sb->f16 = s3;
        sb->f18 = s4;
        sb->f1C = a;
        sb->f24 = a;
        sb->f2C = 0;
        sb->f28 = b;
        sb->f20 = b;
        sb->fA = s1;
        sb->fC = s2;
        sb->fE = s3;
        sb->f10 = s4;
        sb->f8 = 0;
        ovl_ntgui2_func_0013D230((void *)sb);
    }
}
}
