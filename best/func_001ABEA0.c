struct Vec3 { f32 x, y, z; Vec3() {} };
struct Obj { char pad0[0x48]; void *vt; char pad1[0x1C4 - 0x4C]; s32 f1C4; s16 f1C8; s8 f1CA; };
extern "C" {
extern char D_00449D48[];
void func_001450E8(Obj *, s32, s32, s32, Vec3, Vec3, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_00194390(void *, s32, s32);
void func_001ABEA0(Obj *o, s32 a1, s32 a2, Vec3 v1, Vec3 v2, s32 a5, s32 a6, s32 a7, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s8 flag, s32 s7) {
    func_001450E8(o, 0, a1, a2, v1, v2, a5, a6, a7, s0, s1, s2, s3, s4, 4 + 0 * flag, s5, s7);
    s32 *p = &o->f1C4;
    *p = 0;
    o->f1C8 = 2000;
    o->vt = D_00449D48;
    o->f1CA = flag;
    if (flag == 0) o->f1C8 = -2000;
    if (a6) func_00194390(p, a6, a6);
}
}
