struct Vec3 { f32 x, y, z; Vec3() {} };
struct Sub { char pad[5]; s8 f5; };
struct Ent { s32 a; s32 b; };
struct Obj20FBE0 {
    char pad0[0xC];
    s32 flags;
    char pad10[0x14];
    Ent *tbl;
    char pad28[0x10];
    s16 f38;
    char pad3A[0xE];
    void *vtbl;
    char pad4C[8];
    s32 f54, f58, f5C, f60;
    Sub sub;
    char pad6A[0x22];
    Vec3 p8C;
    s32 f98;
    s32 f9C;
    f32 fA0;
    f32 fA4;
};
extern "C" {
extern char D_0044E790[];
extern s32 D_004844A4;
void func_00143830(void *);
void func_00153FD0(void *, Vec3, s32, s32);
void func_001601F8(void *);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);

void func_0020FBE0(Obj20FBE0 *o, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, Vec3 *p6, Vec3 *p7, f32 f, s32 s0, s32 s8) {
    Sub *sb = &o->sub;
    Vec3 q = *p6;
    Vec3 r = *p7;
    func_00153FD0(o, q, s8, a1);
    o->vtbl = D_0044E790;
    sb->f5 = 1;
    o->fA0 = f;
    o->f54 = a2;
    o->f58 = a3;
    o->f5C = a4;
    o->f60 = a5;
    func_001637A8(sb);
    func_00163830(sb, o->tbl[o->f5C].b, 1);
    func_001601F8(sb);
    func_00143830(o);
    o->fA4 = q.z;
    o->p8C = r;
    o->f38 = s0;
    o->f98 = 0;
    o->flags |= 1;
    o->f9C = D_004844A4 + 0x12C;
}
}
