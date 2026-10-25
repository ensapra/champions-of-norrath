struct Vec3 { f32 x, y, z; Vec3() {} };
struct Obj215A78 {
    char pad0[0xC];
    s32 flags;
    Vec3 pos;
    char pad1C[0xC];
    s8 f28, f29;
    char pad2A[0xE];
    s16 f38;
    char pad3A[0xE];
    void *vtbl;
    s16 f4C;
    s16 f4E;
};
extern "C" {
extern char D_0042C630[];
extern char D_00449940[];
extern char D_0044D0A8[];
extern s32 D_004844A0;
extern char D_00485358[];
void func_001411F0(void *, Vec3, char *, s32);
void func_001437E8(void *);
s32 func_00143A80(void *, char *, s32);
s16 func_00175440(s32, Vec3);
s32 func_0017D348(s32, s16, s32);
s16 func_0017D3D0(s32, s16);

void func_00215A78(Obj215A78 *o, Vec3 *pos, s16 x, s32 a3) {
    Vec3 q = *pos;
    Vec3 p = q;
    func_001411F0(o, p, D_0042C630, a3);
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
    o->f28 = 0x48;
    o->f29 = 0x54;
    o->f38 = x;
    o->vtbl = D_00449940;
    o->flags &= ~2;
    func_0017D348(D_004844A0, o->f4C, 1);
}
}
