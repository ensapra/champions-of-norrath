typedef struct { f32 x, y, z, w; } V4;
typedef struct { f32 x, y, z; } V3;

void func_001560F0(V3 *p0, V3 *p1, V3 *m0, V3 *m1, V3 *out, f32 t) {
    V4 v[4];
    f32 t2 = t * t;
    f32 k;
    k = t2 * 6.0f - t * 6.0f;
    v[0].x = p0->x * k; v[0].y = p0->y * k; v[0].z = p0->z * k;
    k = t2 * -6.0f + t * 6.0f;
    v[1].x = p1->x * k; v[1].y = p1->y * k; v[1].z = p1->z * k;
    k = t2 * 3.0f - t * 4.0f + 1.0f;
    v[2].x = m0->x * k; v[2].y = m0->y * k; v[2].z = m0->z * k;
    k = t2 * 3.0f - 2.0f * t;
    v[3].x = m1->x * k; v[3].y = m1->y * k; v[3].z = m1->z * k;
    out->x = v[0].x + v[1].x + v[2].x + v[3].x;
    out->y = v[0].y + v[1].y + v[2].y + v[3].y;
    out->z = v[0].z + v[1].z + v[2].z + v[3].z;
}
