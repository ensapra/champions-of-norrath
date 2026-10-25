struct Vec3_297658 {
    f32 x, y, z;
    Vec3_297658() {}
    Vec3_297658(f32 ax, f32 ay, f32 az) { x = ax; y = ay; z = az; }
    void operator*=(f32 s) { x *= s; y *= s; z *= s; }
    Vec3_297658 operator+(const Vec3_297658 &o) const { return Vec3_297658(x + o.x, y, z + o.z); }
};
struct Obj_297658 { char pad[0x10]; Vec3_297658 pos; };
extern "C" {
extern f32 D_004827B4;
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void *func_001441B8(s32);
void func_00297790(void *, Vec3_297658, Vec3_297658 *, s32, s32, Obj_297658 *);
s32 func_00297658(s32 arg0, s32 arg1, Obj_297658 *arg2, Vec3_297658 v, s16 ang);
}

s32 func_00297658(s32 arg0, s32 arg1, Obj_297658 *arg2, Vec3_297658 v, s16 ang)
{
    Vec3_297658 dir(func_0015A070(ang), func_0015A100(ang), 0.0f);
    void *p;

    dir *= D_004827B4;
    p = func_001441B8(0xB0);
    if (p) {
        func_00297790(p, arg2->pos + Vec3_297658(0.0f, 0.0f, 36.0f), &dir, arg0, arg1, arg2);
    }
    return 0;
}
