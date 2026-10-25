struct Vec3 {
    f32 x, y, z;
    Vec3() {}
    Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
    Vec3 operator*(f32 s) const { return Vec3(x * s, y * s, z * s); }
    Vec3 &operator+=(const Vec3 &v) { x += v.x; y += v.y; z += v.z; return *this; }
};

inline void Cross(Vec3 &out, const Vec3 &a, const Vec3 &b)
{
    Vec3 t;
    t.x = a.y * b.z - a.z * b.y;
    t.y = a.z * b.x - a.x * b.z;
    t.z = a.x * b.y - a.y * b.x;
    out = t;
}

struct Mat3 { f32 m[9]; };

struct Body {
    char pad0[0x45C];
    Mat3 rot;           /* 0x45C */
    char pad480[0x7C8 - 0x480];
    Vec3 f7C8;
    Vec3 f7D4;
    Vec3 f7E0;
    Vec3 f7EC;
};

extern "C" {
extern f32 D_00482198;
void mat3x3_mul_vec3(Vec3 *out, Mat3 *m, Vec3 *v);

void func_00271C90(Body *o, Vec3 *a1, Vec3 *a2, s32 a3)
{
    Vec3 v;
    Vec3 w;
    Vec3 r;

    r = *a1 * D_00482198;
    mat3x3_mul_vec3(&v, &o->rot, a2);
    Cross(w, r, v);

    if (a3) {
        o->f7E0 += *a2;
        o->f7EC += w;
    } else {
        o->f7D4 += *a2;
        o->f7C8 += w;
    }
}
}
