struct Vec3 { f32 x, y, z; Vec3() {} };
extern "C" {
extern char D_00448A70[];
extern f32 D_0047FDB4;
void func_001411F0(void *, Vec3, s32, s32);
s32 func_00165DC0(s32, s32);
void func_0015BCD0(void *, f32, f32, f32, f32, f32);
void func_00143830(void *);
}
struct Obj {
    char pad0[0xC];
    s32 flags;
    Vec3 pos;
    f32 f1C, f20;
    char pad2[0x48 - 0x24];
    void *vt;
    s32 f4C;
    char pad3[0x60 - 0x50];
    Vec3 pos2;
    char pad4[0xE8 - 0x6C];
    Vec3 pos3;
    f32 fF4, fF8, fFC;
    f32 dt;
    s32 i104, i108, i10C, i110, i114;
    void func_00150280(Vec3 p, s32 u, f32 d, s32 a, s32 b, s32 c);
};

void Obj::func_00150280(Vec3 p, s32 u, f32 d, s32 a, s32 b, s32 c) {
    func_001411F0(this, p, 0, 0);
    dt = d;
    vt = D_00448A70;
    i114 = c;
    void *m = (char *)this + 0x50;
    i10C = a;
    i110 = b;
    Vec3 *q = &pos;
    i104 = func_00165DC0(a, b);
    i108 = func_00165DC0(i10C, i114);
    flags |= 0x10;
    f4C = 0;
    f20 = dt + dt;
    f1C = dt * D_0047FDB4;
    func_0015BCD0(m, 1.0f, 1.0f, dt + dt, dt + dt, dt + dt);
    pos.z += dt;
    pos2 = *q;
    pos.z -= dt;
    func_00143830(this);
    pos3 = *q;
    fF4 = 0; fF8 = 0; fFC = 0;
}
