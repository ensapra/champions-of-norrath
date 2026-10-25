typedef struct { f32 x, y, z; } Vec3;

f32 func_00159920(Vec3 *out, f32 *m, Vec3 *v) {
    Vec3 t = *v;
    out->x = m[0] * t.x + m[4] * t.y + m[8] * t.z + m[12];
    out->y = m[1] * t.x + m[5] * t.y + m[9] * t.z + m[13];
    out->z = m[2] * t.x + m[6] * t.y + m[10] * t.z + m[14];
    return m[3] * t.x + m[7] * t.y + m[11] * t.z + m[15];
}
