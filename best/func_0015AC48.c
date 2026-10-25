struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
    Vec3 operator-(const Vec3 &b) const { return Vec3(x - b.x, y - b.y, z - b.z); }
    void cross(const Vec3 &a, const Vec3 &b) {
        Vec3 r;
        r.x = a.y * b.z - a.z * b.y;
        r.y = a.z * b.x - a.x * b.z;
        r.z = a.x * b.y - a.y * b.x;
        *this = r;
    }
    f32 dot(const Vec3 &b) const { return x * b.x + y * b.y + z * b.z; }
};

struct S15AC48 {
    f32 unk0;
    u8 pad4[0xC];
    Vec3 pos;
    u8 pad1C[0x68 - 0x1C];
    f32 mat[3][4];
};

extern "C" void mat3x3_mul_vec3(Vec3 *out, void *m, Vec3 *v);

extern "C" f32 func_0015AC48(S15AC48 *o, Vec3 *p, Vec3 *dir) {
    Vec3 d = *dir;
    Vec3 rel = *p - o->pos;
    f32 m = o->unk0;
    Vec3 c;
    Vec3 t;
    Vec3 c2;
    c.cross(rel, d);
    mat3x3_mul_vec3(&t, o->mat, &c);
    c2.cross(t, rel);
    return 1.0f / (m + c2.dot(d));
}
