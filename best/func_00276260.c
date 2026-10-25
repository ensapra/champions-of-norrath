extern "C" float sqrtf(float);
struct Vec3 {
    f32 x, y, z;
    void Normalize() { f32 r = 1.0f / sqrtf(x * x + y * y + z * z); x *= r; y *= r; z *= r; }
    f32 Dot(const Vec3 &b) const { return x * b.x + y * b.y + z * b.z; }
};
extern "C" {
f32 func_00276260(char *a, s32 idx, Vec3 *dir);
}

f32 func_00276260(char *a, s32 idx, Vec3 *dir)
{
    Vec3 v = *dir;
    f32 k = *(f32 *)(a + 0x2FC);
    double d;
    v.Normalize();
    d = ((Vec3 *)(a + 0x66C))[idx].Dot(v);
    if (d < 0.0) d = -d;
    return k + (1.0f - k) * (f32)d;
}
