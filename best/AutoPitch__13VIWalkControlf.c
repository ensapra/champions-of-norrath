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

s32 AutoPitch__13VIWalkControlf(void *arg0, f32 fparg0) {
    f32 *var_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f3;
    s32 temp_3;
    s32 var_condition_bit;

    temp_3 = M2C_FIELD(arg0, s32 *, 0xF8);
    var_2 = arg0 + 0xC0;
    if (temp_3 & 0x10A8) {
        var_f3 = -0.08726645f;
    } else {
        var_2 = arg0 + 0xC0;
        if (temp_3 & 0x854) {
            var_f3 = M2C_FIELD(arg0, f32 *, 0xC0);
        } else {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x68);
            temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0);
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x6C);
            if (temp_f2 < temp_f1) {
                var_condition_bit = temp_f0 < temp_f1;
            } else {
                var_condition_bit = temp_f0 < temp_f2;
            }
            var_f3 = temp_f0;
            if (!var_condition_bit) {
                temp_f2_2 = M2C_FIELD(arg0, f32 *, 0xC0);
                var_f0 = temp_f1;
                if (!(temp_f2_2 < var_f0)) {
                    var_f0 = temp_f2_2;
                }
                var_f3 = var_f0;
            }
        }
    }
    temp_f0_2 = var_f3 - *var_2;
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x70) * fparg0;
    if (temp_f0_2 >= 0.0f) {
        if (temp_f0_2 <= temp_f1_2) {
            *var_2 = var_f3;
        } else {
            var_f0_2 = M2C_FIELD(arg0, f32 *, 0x148) + temp_f1_2;
            goto block_25;
        }
    } else if (!(temp_f1_2 <= temp_f0_2)) {
        var_f0_2 = M2C_FIELD(arg0, f32 *, 0x148) - temp_f1_2;
block_25:
        *var_2 = var_f0_2;
    } else {
        *var_2 = var_f3;
    }
    return 0;
}
