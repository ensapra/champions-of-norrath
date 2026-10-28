typedef struct { f32 x, y, z; } FVECTOR;
extern f32 D_0047FEE4, D_0047FEE8, D_0047FEEC, D_0047FEF0;
static inline f32 cs(s32 a, f32 scale) {
    f32 sign = 1.0f, x, x2, x3, x5, x7, s;
    s32 b = (s16)(a - 0x4000);
    if ((b ^ (b << 1)) & 0x8000) { sign = -1.0f; b = (b << 17) >> 17; }
    x = (f32)b * D_0047FEE4;
    x2 = x * x; x3 = x * x2; x5 = x3 * x2; x7 = x5 * x2;
    s = x - x3 * D_0047FEE8 + x5 * D_0047FEEC - x7 * D_0047FEF0;
    return sign * (1.0f - 2.0f * s * s) * scale;
}
void func_001577D0(f32 *m, FVECTOR *v, s16 angle, f32 scale) {
    FVECTOR t = *v;
    f32 c = cs(angle + 0x4000, scale);
    f32 sn = cs(angle, scale);
    m[0] = c; m[4] = c; m[8] = scale; m[2] = 0; m[5] = 0; m[6] = 0; m[7] = 0;
    m[11] = t.z; m[9] = t.x; m[10] = t.y; m[1] = sn; m[3] = -sn;
}
