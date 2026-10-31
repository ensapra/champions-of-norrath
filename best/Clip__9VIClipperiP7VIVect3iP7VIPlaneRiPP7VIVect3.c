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

s32 Clip__9VIClipperiP7VIVect3iP7VIPlaneRiPP7VIVect3(void *arg0, s32 arg1, f32 *arg2, s32 arg3, void *arg4, s32 *arg5, f32 **arg6) {
    f32 *temp_12;
    f32 *var_2;
    f32 *var_3;
    f32 *var_6;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f7;
    f32 var_f5;
    f32 var_f6;
    s32 var_11;
    s32 var_13;
    s32 var_5;
    s32 var_7;
    void *temp_4;
    void *var_8;

    var_5 = arg1;
    var_6 = arg2;
    var_7 = arg3;
    var_8 = arg4;
    var_11 = 0;
    var_3 = M2C_FIELD(arg0, f32 **, 4);
    var_13 = 1;
    if (var_7 != 0) {
        temp_4 = arg0 + 8;
        temp_12 = var_3;
loop_2:
        var_2 = (var_6 + (var_5 * 0xC)) - 0xC;
        var_f6 = (M2C_FIELD(var_2, f32 *, 0) * M2C_FIELD(var_8, f32 *, 0)) + (M2C_FIELD(var_2, f32 *, 4) * M2C_FIELD(var_8, f32 *, 4)) + (M2C_FIELD(var_2, f32 *, 8) * M2C_FIELD(var_8, f32 *, 8)) + M2C_FIELD(var_8, f32 *, 0xC);
        if (var_5 != 0) {
            var_f5 = *var_6;
loop_6:
            temp_f7 = (var_f5 * M2C_FIELD(var_8, f32 *, 0)) + (M2C_FIELD(var_6, f32 *, 4) * M2C_FIELD(var_8, f32 *, 4)) + (M2C_FIELD(var_6, f32 *, 8) * M2C_FIELD(var_8, f32 *, 8)) + M2C_FIELD(var_8, f32 *, 0xC);
            if (temp_f7 < 0.0f) {
                if (!(var_f6 > 0.0f)) {
                    M2C_FIELD(var_3, f32 *, 0) = var_f5;
                } else {
                    M2C_FIELD(var_3, f32 *, 0) = var_f5;
                    var_11 += 1;
                    temp_f2 = M2C_FIELD(var_6, f32 *, 4);
                    M2C_FIELD(var_3, f32 *, 4) = temp_f2;
                    temp_f4 = var_f6 / (var_f6 - temp_f7);
                    temp_f3 = M2C_FIELD(var_6, f32 *, 8);
                    M2C_FIELD(var_3, f32 *, 8) = temp_f3;
                    temp_f1 = var_f5 - M2C_FIELD(var_2, f32 *, 0);
                    M2C_FIELD(var_3, f32 *, 0) = temp_f1;
                    temp_f1_2 = temp_f1 * temp_f4;
                    temp_f2_2 = temp_f2 - M2C_FIELD(var_2, f32 *, 4);
                    M2C_FIELD(var_3, f32 *, 4) = temp_f2_2;
                    temp_f2_3 = temp_f2_2 * temp_f4;
                    M2C_FIELD(var_3, f32 *, 0) = temp_f1_2;
                    M2C_FIELD(var_3, f32 *, 4) = temp_f2_3;
                    temp_f3_2 = (temp_f3 - M2C_FIELD(var_2, f32 *, 8)) * temp_f4;
                    M2C_FIELD(var_3, f32 *, 8) = temp_f3_2;
                    M2C_FIELD(var_3, f32 *, 0) = temp_f1_2 + M2C_FIELD(var_2, f32 *, 0);
                    M2C_FIELD(var_3, f32 *, 4) = (f32) (temp_f2_3 + M2C_FIELD(var_2, f32 *, 4));
                    M2C_FIELD(var_3, f32 *, 8) = (f32) (temp_f3_2 + M2C_FIELD(var_2, f32 *, 8));
                    var_3 += 0xC;
                    *var_3 = M2C_FIELD(var_6, f32 *, 0);
                }
                goto block_16;
            }
            if (!(temp_f7 > 0.0f)) {
                M2C_FIELD(var_3, f32 *, 0) = var_f5;
block_16:
                var_11 += 1;
                M2C_FIELD(var_3, f32 *, 4) = (f32) M2C_FIELD(var_6, f32 *, 4);
                M2C_FIELD(var_3, f32 *, 8) = (f32) M2C_FIELD(var_6, f32 *, 8);
                goto block_17;
            }
            if (var_f6 < 0.0f) {
                M2C_FIELD(var_3, f32 *, 0) = var_f5;
                var_11 += 1;
                temp_f2_4 = M2C_FIELD(var_6, f32 *, 4);
                M2C_FIELD(var_3, f32 *, 4) = temp_f2_4;
                temp_f4_2 = var_f6 / (var_f6 - temp_f7);
                temp_f3_3 = M2C_FIELD(var_6, f32 *, 8);
                M2C_FIELD(var_3, f32 *, 8) = temp_f3_3;
                temp_f1_3 = var_f5 - M2C_FIELD(var_2, f32 *, 0);
                M2C_FIELD(var_3, f32 *, 0) = temp_f1_3;
                temp_f1_4 = temp_f1_3 * temp_f4_2;
                temp_f2_5 = temp_f2_4 - M2C_FIELD(var_2, f32 *, 4);
                M2C_FIELD(var_3, f32 *, 4) = temp_f2_5;
                temp_f2_6 = temp_f2_5 * temp_f4_2;
                M2C_FIELD(var_3, f32 *, 0) = temp_f1_4;
                M2C_FIELD(var_3, f32 *, 4) = temp_f2_6;
                temp_f3_4 = (temp_f3_3 - M2C_FIELD(var_2, f32 *, 8)) * temp_f4_2;
                M2C_FIELD(var_3, f32 *, 8) = temp_f3_4;
                M2C_FIELD(var_3, f32 *, 0) = temp_f1_4 + M2C_FIELD(var_2, f32 *, 0);
                M2C_FIELD(var_3, f32 *, 4) = (f32) (temp_f2_6 + M2C_FIELD(var_2, f32 *, 4));
                M2C_FIELD(var_3, f32 *, 8) = (f32) (temp_f3_4 + M2C_FIELD(var_2, f32 *, 8));
block_17:
                var_3 += 0xC;
            }
            var_5 -= 1;
            var_2 = var_6;
            var_f6 = temp_f7;
            var_6 += 0xC;
            if (var_5 != 0) {
                var_f5 = *var_6;
                goto loop_6;
            }
        }
        if (var_11 == 0) {
            *arg5 = 0;
            *arg6 = NULL;
            return 0;
        }
        var_6 = temp_12;
        if (var_13 != 0) {
            var_3 = M2C_FIELD(temp_4, f32 **, 4);
        } else {
            var_6 = M2C_FIELD(temp_4, f32 **, 4);
            var_3 = temp_12;
        }
        var_7 -= 1;
        var_5 = var_11;
        var_11 = 0;
        var_13 = 1 - var_13;
        var_8 += 0x10;
        if (var_7 == 0) {
            /* Duplicate return node #25. Try simplifying control flow for better match */
            *arg5 = var_5;
            *arg6 = var_6;
            return 1;
        }
        goto loop_2;
    }
    *arg5 = var_5;
    *arg6 = var_6;
    return 1;
}
