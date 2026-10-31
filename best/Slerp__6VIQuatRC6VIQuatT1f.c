/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

f32 acosf(f32);                                     /* extern */
f32 sinf(f32);                                      /* extern */

void Slerp__6VIQuatRC6VIQuatT1f(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 var_f12;
    f32 var_f20;

    var_f12 = fparg0;
    temp_f3 = (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg2, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg2, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(arg2, f32 *, 8)) + (M2C_FIELD(arg1, f32 *, 0xC) * M2C_FIELD(arg2, f32 *, 0xC));
    if (temp_f3 > 0.0f) {
        if (!((1.0f - temp_f3) > 0.0001f)) {
            var_f20 = 1.0f - var_f12;
        } else {
            temp_f0 = acosf(temp_f3);
            temp_f21 = 1.0f / sinf(temp_f0);
            var_f20 = sinf((1.0f - var_f12) * temp_f0) * temp_f21;
            var_f12 = sinf(var_f12 * temp_f0) * temp_f21;
        }
    } else {
        temp_f3_2 = -temp_f3;
        if ((1.0f - temp_f3_2) > 0.0001f) {
            temp_f0_2 = acosf(temp_f3_2);
            temp_f21_2 = 1.0f / sinf(temp_f0_2);
            var_f20 = sinf((1.0f - var_f12) * temp_f0_2) * temp_f21_2;
            var_f12 = -sinf(var_f12 * temp_f0_2) * temp_f21_2;
        } else {
            var_f20 = 1.0f - var_f12;
            var_f12 = -var_f12;
        }
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * var_f20) + (M2C_FIELD(arg2, f32 *, 0) * var_f12));
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) * var_f20) + (M2C_FIELD(arg2, f32 *, 4) * var_f12));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((M2C_FIELD(arg1, f32 *, 8) * var_f20) + (M2C_FIELD(arg2, f32 *, 8) * var_f12));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) ((M2C_FIELD(arg1, f32 *, 0xC) * var_f20) + (M2C_FIELD(arg2, f32 *, 0xC) * var_f12));
}
