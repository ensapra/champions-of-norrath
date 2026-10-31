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

void Update__14VICameraEffectf(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 var_condition_bit;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x30);
    if (temp_f2 != 0.0f) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x2C) + (temp_f2 * fparg0);
        M2C_FIELD(arg0, f32 *, 0x2C) = temp_f0;
        if (temp_f2 > 0.0f) {
            if (temp_f0 >= 1.0f) {
                M2C_FIELD(arg0, f32 *, 0x2C) = 1.0f;
                M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
            }
        } else if (temp_f0 <= 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
            M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x10);
        if (temp_f2_2 != 0.0f) {
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 8) + (temp_f2_2 * fparg0);
            M2C_FIELD(arg0, f32 *, 8) = temp_f0_2;
            if (temp_f2_2 > 0.0f) {
                var_condition_bit = M2C_FIELD(arg0, f32 *, 0xC) <= temp_f0_2;
            } else {
                var_condition_bit = temp_f0_2 <= M2C_FIELD(arg0, f32 *, 0xC);
            }
            if (var_condition_bit) {
                M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
                M2C_FIELD(arg0, f32 *, 8) = M2C_FIELD(arg0, f32 *, 0xC);
            }
        }
    }
}
