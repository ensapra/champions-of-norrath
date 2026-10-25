struct Vec3 { f32 x, y, z; Vec3() {} };
struct Obj2127F0 {
    char pad0[0xC];
    s32 flags;
    Vec3 pos;
    char pad1C[0x2C];
    void *vtbl;
    s16 f4C;
    s16 f4E;
};
extern "C" {
extern char D_004499D8[];
extern char D_0044D0A8[];
extern s32 D_004844A0;
extern char D_00485358[];
extern char D_00485360[];
void func_001411F0(void *, Vec3, s32, s32);
void func_001437E8(void *);
s32 func_00140F60(void *, char *, s32);
s32 func_00143A80(void *, char *, s32);
s16 func_00175440(s32, Vec3);
s32 func_0017D348(s32, s16, s32);
s16 func_0017D3D0(s32, s16);

void func_002127F0(Obj2127F0 *o, Vec3 *pos, s32 arg2) {
    Vec3 q = *pos;
    Vec3 p = q;
    func_001411F0(o, p, 0, arg2);
    o->vtbl = D_0044D0A8;
    o->flags |= 0x100003;
    if (func_00143A80(o, D_00485358, 0)) {
        o->flags &= ~0x100000;
    }
    o->f4C = func_00175440(D_004844A0, o->pos);
    func_0017D348(D_004844A0, o->f4C, 1);
    o->f4E = func_0017D3D0(D_004844A0, o->f4C);
    if (o->f4C < 0) {
        func_001437E8(o);
    }
    o->vtbl = D_004499D8;
    func_0017D348(D_004844A0, o->f4C, 1);
    if (func_00140F60(o, D_00485360, 0)) {
        func_001437E8(o);
    }
}
}
