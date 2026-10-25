typedef struct { f32 x, y, z; } V3;

static inline V3 vsub(V3 a, V3 b) { V3 r; r.x = a.x - b.x; r.y = a.y - b.y; r.z = a.z - b.z; return r; }
static inline V3 vadd(V3 a, V3 b) { V3 r; r.x = a.x + b.x; r.y = a.y + b.y; r.z = a.z + b.z; return r; }
static inline V3 vscale(V3 a, f32 s) { V3 r; r.x = a.x * s; r.y = a.y * s; r.z = a.z * s; return r; }

void func_00182AC0(f32 t, V3 *pts, s32 n, V3 *pos, V3 *tan) {
    V3 d0, d1, z;
    f32 f, f2, f3;
    s32 i;
    if (t < 0.0f) t = 0.0f;
    if (t > 1.0f) t = 1.0f;
    t *= (f32)(n - 1);
    i = (s32)t;
    f = t - (f32)i;
    if (i > 0) {
        V3 a = pts[i - 1], b = pts[i], c = pts[i + 1];
        V3 s0 = vsub(b, a), s1 = vsub(c, b);
        d0 = vscale(vadd(s0, s1), 0.5f);
    } else {
        d0.x = d0.y = d0.z = 0.0f;
    }
    if (i < n - 2) {
        V3 a = pts[i], b = pts[i + 1], c = pts[i + 2];
        V3 s0 = vsub(b, a), s1 = vsub(c, b);
        d1 = vscale(vadd(s0, s1), 0.5f);
    } else {
        d1.x = d1.y = d1.z = 0.0f;
    }
    f2 = f * f;
    f3 = f2 * f;
    if (pos) {
        V3 r = vscale(pts[i], 2.0f * f3 - 3.0f * f2 + 1.0f);
        r = vadd(r, vscale(d0, f3 - 2.0f * f2 + f));
        r = vadd(r, vscale(d1, f3 - f2));
        r = vadd(r, vscale(pts[i + 1], -2.0f * f3 + 3.0f * f2));
        *pos = r;
    }
    if (tan) {
        V3 r = vscale(pts[i], 6.0f * f2 - 6.0f * f);
        r = vadd(r, vscale(d0, 3.0f * f2 - 4.0f * f + 1.0f));
        r = vadd(r, vscale(d1, 3.0f * f2 - 2.0f * f));
        r = vadd(r, vscale(pts[i + 1], -6.0f * f2 + 6.0f * f));
        *tan = r;
    }
}
