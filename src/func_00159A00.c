typedef struct { f32 x, y, z; } Vec3;

f32 func_00159A00(Vec3 *out, f32 *m, Vec3 *v) {
    Vec3 t = *v;
    out->x = m[0] * t.x + m[1] * t.y + m[2] * t.z + m[3];
    out->y = m[4] * t.x + m[5] * t.y + m[6] * t.z + m[7];
    out->z = m[8] * t.x + m[9] * t.y + m[10] * t.z + m[11];
    return m[3] * t.x + m[7] * t.y + m[11] * t.z + m[15];
}
