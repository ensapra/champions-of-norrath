typedef struct __attribute__((packed, aligned(4))) { f32 x, y, z; } V3p;
f32 func_00176378(s32, V3p *, f32);
f32 func_001766C8(s32, V3p *, f32);
extern f32 D_00482284;
extern s32 D_004844A0;
f32 func_002781D8(s32 arg0, V3p *pos, s32 arg2, V3p *out, f32 scale) {
    s32 a[8];
    s32 b[8];
    f32 h;
    f32 r;
    h = func_001766C8(D_004844A0, (*(V3p *)&a[4] = *pos, (V3p *)&a[4]), 16.0f);
    r = D_00482284;
    if (h != 1.0f) {
        h = func_00176378(D_004844A0, (*(V3p *)&b[4] = *pos, (V3p *)&b[4]), 16.0f);
        h = pos->z - h;
        out->z = 1.0f;
        out->y = 0;
        out->x = 0;
        return h / scale;
    }
    return r;
}
