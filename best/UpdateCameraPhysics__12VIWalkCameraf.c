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

f32 fmodf(s32, s32, f32, M2C_UNK);                  /* extern */
f32 powf(s32, f32, f32);                            /* extern */

s32 UpdateCameraPhysics__12VIWalkCameraf(void *arg0, f32 fparg0) {
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f5;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f2;
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_5;
    s32 var_4;
    s32 var_condition_bit;
    s32 var_condition_bit_2;
    void *temp_2;
    void *temp_3;

    sp8 = 0.0f;
    sp4 = 0.0f;
    temp_f0 = powf(M2C_FIELD(arg0, s32 *, 0x258), fparg0, 0.0f);
    temp_3 = arg0 + 0x1C4;
    temp_2 = arg0 + 0x1B8;
    temp_5 = M2C_FIELD(arg0, s32 *, 0x1A8);
    var_4 = temp_5 & 1;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1AC) + (M2C_FIELD(arg0, f32 *, 0x1C4) * temp_f0 * (fparg0 * fparg0));
    M2C_FIELD(arg0, f32 *, 0x1AC) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x1AC) = (f32) (temp_f2 + (M2C_FIELD(arg0, f32 *, 0x1B8) * fparg0 * temp_f0));
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x1B8) + (M2C_FIELD(arg0, f32 *, 0x1C4) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x1B8) = temp_f2_2;
    temp_f3 = M2C_FIELD(temp_2, f32 *, 4) + (M2C_FIELD(temp_3, f32 *, 4) * fparg0);
    M2C_FIELD(temp_2, f32 *, 4) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0x1B8) = (f32) (temp_f2_2 * temp_f0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) (temp_f3 * sp4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) ((M2C_FIELD(temp_2, f32 *, 8) + (M2C_FIELD(temp_3, f32 *, 8) * fparg0)) * sp8);
    if (var_4 != 0) {
        var_f2 = M2C_FIELD(arg0, f32 *, 0x1E8);
        temp_f3_2 = var_f2 - M2C_FIELD(arg0, f32 *, 0x1AC);
        if (temp_f3_2 > 3.1415925f) {
            var_f2 -= 6.283185f;
        } else if (temp_f3_2 < -3.1415925f) {
            var_f2 += 6.283185f;
        }
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x1AC);
        if (temp_f1 < var_f2) {
            var_f0 = temp_f1 + (M2C_FIELD(arg0, f32 *, 0x280) * fparg0);
            var_condition_bit = var_f2 < var_f0;
            goto block_10;
        }
        if (var_f2 <= temp_f1) {
            var_f0 = temp_f1 - (M2C_FIELD(arg0, f32 *, 0x280) * fparg0);
            var_condition_bit = var_f0 <= var_f2;
block_10:
            M2C_FIELD(arg0, f32 *, 0x1AC) = var_f0;
            if (var_condition_bit) {
                var_4 = -0x201;
                M2C_FIELD(arg0, f32 *, 0x1AC) = var_f2;
                M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) (temp_5 & ~1);
                M2C_FIELD(arg0, s32 *, 0xF8) = (s32) (M2C_FIELD(arg0, s32 *, 0xF8) & ~0x200);
            }
        }
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x1A8);
    M2C_FIELD(arg0, f32 *, 0x1AC) = fmodf(var_4, temp_5, M2C_FIELD(arg0, f32 *, 0x1AC), 0x40C90FDA);
    if (temp_4 & 8) {
        temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x1EC);
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x1B0);
        if (temp_f1_2 < temp_f2_3) {
            var_f0_2 = temp_f1_2 + (M2C_FIELD(arg0, f32 *, 0x280) * fparg0);
            var_condition_bit_2 = temp_f2_3 < var_f0_2;
            goto block_17;
        }
        if (temp_f2_3 <= temp_f1_2) {
            var_f0_2 = temp_f1_2 - (M2C_FIELD(arg0, f32 *, 0x280) * fparg0);
            var_condition_bit_2 = var_f0_2 <= temp_f2_3;
block_17:
            M2C_FIELD(arg0, f32 *, 0x1B0) = var_f0_2;
            if (var_condition_bit_2) {
                M2C_FIELD(arg0, f32 *, 0x1B0) = temp_f2_3;
                M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) (temp_4 & ~8);
            }
        }
    }
    temp_f0_2 = powf(temp_4, M2C_FIELD(arg0, f32 *, 0x25C), fparg0);
    temp_f3_3 = M2C_FIELD(arg0, f32 *, 0x1D4);
    temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x1D8) * fparg0;
    temp_3_2 = M2C_FIELD(arg0, s32 *, 0x1A8);
    M2C_FIELD(arg0, f32 *, 0x1D4) = (f32) ((temp_f3_3 + temp_f2_4) * temp_f0_2);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x1D0) + (temp_f2_4 * fparg0 * temp_f0_2) + (temp_f3_3 * fparg0 * temp_f0_2);
    M2C_FIELD(arg0, f32 *, 0x1D0) = temp_f5;
    if (temp_3_2 & 2) {
        temp_f0_3 = temp_f5 - (M2C_FIELD(arg0, f32 *, 0x284) * fparg0);
        M2C_FIELD(arg0, f32 *, 0x1D0) = temp_f0_3;
        if (temp_f0_3 <= M2C_FIELD(arg0, f32 *, 0x260)) {
            M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) (temp_3_2 & ~2);
        }
    } else if ((temp_3_2 & 4) && (temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x288), temp_f0_4 = temp_f5 - (M2C_FIELD(arg0, f32 *, 0x284) * fparg0), M2C_FIELD(arg0, f32 *, 0x1D0) = temp_f0_4, (temp_f0_4 <= temp_f1_3))) {
        M2C_FIELD(arg0, f32 *, 0x1D0) = temp_f1_3;
        M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) (temp_3_2 & ~4);
    }
    M2C_ERROR(/* unknown instruction: max.s $f0, $f0, $f2 */);
    M2C_FIELD(arg0, f32 *, 0x1D0) = (f32) M2C_ERROR(/* unknown instruction: min.s $f0, $f0, $f1 */);
    return 0;
}
