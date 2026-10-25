struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
    void Normalize() {
        f32 r = 1.0f / __builtin_sqrtf(x * x + y * y + z * z);
        x *= r; y *= r; z *= r;
    }
    Vec3 operator+(const Vec3 &o) const { return Vec3(x + o.x, y + o.y, z + o.z); }
    Vec3 &operator+=(const Vec3 &o) { x += o.x; y += o.y; z += o.z; return *this; }
};

struct Obj {
    char pad0[0x10];
    Vec3 pos;
    char pad1[0x6C - 0x1C];
    f32 f6C;
    f32 f70;
};

extern "C" {
f32 func_0015A100(s32);
void func_001815C8(Vec3 *, s32, s32, s32, s32, s32, s16, s32, f32, f32);
extern f32 D_00482D28;
extern s32 D_004844A4;
extern s32 D_00484F74;
}

extern "C" void func_002B27C8(Obj *o) {
    Vec3 res;
    Vec3 dir(o->f70, -o->f6C, 0.0f);
    Vec3 up(0.0f, 0.0f, 1.0f);
    dir.Normalize();
    res = dir + up;
    res += o->pos;
    func_001815C8(&res, 0xFA, 0xC8, 0x64, 0x80, D_00484F74, (s16)((u16)D_004844A4 << 9), 3, 5.0f,
                  func_0015A100(D_004844A4 << 10) * 250.0f + D_00482D28);
}
