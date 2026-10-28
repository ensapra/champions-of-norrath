typedef struct { f32 x, y, z; } V3;
void func_00182AC0(f32 t, V3 *pts, s32 n, V3 *pos, V3 *tan) {
    f32 f;
    s32 i;
    if (t < 0.0f) t = 0.0f;
    if (t > 1.0f) t = 1.0f;
    t *= (f32)(n - 1);
    i = (s32)t;
    f = t - (f32)i;
    if (pos) {
        pos->x = pts[i].x * f;
        pos->y = pts[i].y * f;
        pos->z = pts[i].z * f;
    }
}
