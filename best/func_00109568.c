typedef struct { s16 x, y, z, w; } SV;
extern s32 D_004844A4;
f32 func_0015A540(s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
void func_0013E818(f32 *, SV *);
void func_0013E8A0(f32 *, SV *);

void func_00109568(s16 a0, s16 a1, s16 x, s16 y, s16 z, s32 flag, f32 t) {
    SV v;
    f32 f;
    f32 r10[3], r20[3], r30[3], r40[3];
    f32 s, c;
    f32 *p30, *p20, *p40;
    f32 zero = 0.0f;
    v.x = x;
    v.y = y;
    v.z = z;
    v.w = 0;
    f = 1.0f - t * func_0015A540(D_004844A4 * 0x10 + 0x7EFE41);
    v.y = (s16)((f32)v.y * f);
    v.z = (s16)((f32)v.z * f);
    v.x = (s16)((f32)v.x * f);
    p30 = r30;
    c = func_0015A070(a0);
    r30[1] = func_0015A100(a0);
    *p30 = c;
    r30[2] = zero;
    s = func_0015A070(a1);
    p20 = r20;
    r20[0] = *p30 * s;
    r20[1] = r30[1] * s;
    r20[2] = r30[2] * s;
    p40 = r40;
    *p40 = zero;
    r40[2] = func_0015A100(a1);
    r40[1] = zero;
    r10[0] = *p20 + *p40;
    r10[1] = r20[1];
    r10[2] = r20[2] + r40[2];
    if (flag != 0) {
        func_0013E8A0(r10, &v);
    } else {
        func_0013E818(r10, &v);
    }
}
