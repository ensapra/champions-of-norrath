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

s32 ClipByTop__11VIClipStackiP7VIVect3RiPP7VIVect3(void *arg0, s32 arg1, f32 *arg2, s32 *arg3, f32 **arg4) {
    f32 *var_2;
    f32 *var_6;
    f32 *var_9;
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
    f32 var_f3;
    f32 var_f5;
    f32 var_f6;
    s32 var_11;
    s32 var_13;
    s32 var_3;
    s32 var_5;
    void *temp_10;
    void *temp_12;
    void *temp_3;
    void *var_4;

    var_5 = arg1;
    var_6 = arg2;
    var_11 = 0;
    temp_12 = arg0 + 0x24;
    var_13 = 1;
    var_9 = M2C_FIELD(temp_12, f32 **, 4);
    temp_3 = M2C_FIELD(arg0, s32 *, 8) + ((M2C_FIELD(arg0, s32 *, 0) - 1) * 0x10);
    var_3 = M2C_FIELD(temp_3, s32 *, 0);
    var_4 = M2C_FIELD(arg0, s32 *, 0x20) + (M2C_FIELD(temp_3, s32 *, 4) * 0x10);
    if (var_3 != 0) {
        temp_10 = arg0 + 0x2C;
loop_2:
        var_2 = (var_6 + (var_5 * 0xC)) - 0xC;
        var_f3 = (M2C_FIELD(var_2, f32 *, 0) * M2C_FIELD(var_4, f32 *, 0)) + (M2C_FIELD(var_2, f32 *, 4) * M2C_FIELD(var_4, f32 *, 4)) + (M2C_FIELD(var_2, f32 *, 8) * M2C_FIELD(var_4, f32 *, 8)) + M2C_FIELD(var_4, f32 *, 0xC);
        if (var_5 != 0) {
            var_f6 = *var_6;
loop_6:
            temp_f7 = (var_f6 * M2C_FIELD(var_4, f32 *, 0)) + (M2C_FIELD(var_6, f32 *, 4) * M2C_FIELD(var_4, f32 *, 4)) + (M2C_FIELD(var_6, f32 *, 8) * M2C_FIELD(var_4, f32 *, 8)) + M2C_FIELD(var_4, f32 *, 0xC);
            var_f5 = var_f6;
            if (temp_f7 < 0.0f) {
                if (var_f3 > 0.0f) {
                    M2C_FIELD(var_9, f32 *, 0) = var_f6;
                    var_11 += 1;
                    temp_f2 = M2C_FIELD(var_6, f32 *, 4);
                    M2C_FIELD(var_9, f32 *, 4) = temp_f2;
                    temp_f4 = var_f3 / (var_f3 - temp_f7);
                    temp_f3 = M2C_FIELD(var_6, f32 *, 8);
                    M2C_FIELD(var_9, f32 *, 8) = temp_f3;
                    temp_f1 = var_f6 - M2C_FIELD(var_2, f32 *, 0);
                    M2C_FIELD(var_9, f32 *, 0) = temp_f1;
                    temp_f1_2 = temp_f1 * temp_f4;
                    temp_f2_2 = temp_f2 - M2C_FIELD(var_2, f32 *, 4);
                    M2C_FIELD(var_9, f32 *, 4) = temp_f2_2;
                    temp_f2_3 = temp_f2_2 * temp_f4;
                    M2C_FIELD(var_9, f32 *, 0) = temp_f1_2;
                    M2C_FIELD(var_9, f32 *, 4) = temp_f2_3;
                    temp_f3_2 = (temp_f3 - M2C_FIELD(var_2, f32 *, 8)) * temp_f4;
                    M2C_FIELD(var_9, f32 *, 8) = temp_f3_2;
                    M2C_FIELD(var_9, f32 *, 0) = temp_f1_2 + M2C_FIELD(var_2, f32 *, 0);
                    M2C_FIELD(var_9, f32 *, 4) = (f32) (temp_f2_3 + M2C_FIELD(var_2, f32 *, 4));
                    M2C_FIELD(var_9, f32 *, 8) = (f32) (temp_f3_2 + M2C_FIELD(var_2, f32 *, 8));
                    var_9 += 0xC;
                    var_f5 = M2C_FIELD(var_6, f32 *, 0);
                }
                M2C_FIELD(var_9, f32 *, 0) = var_f5;
                var_11 += 1;
                M2C_FIELD(var_9, f32 *, 4) = (f32) M2C_FIELD(var_6, f32 *, 4);
                M2C_FIELD(var_9, f32 *, 8) = (f32) M2C_FIELD(var_6, f32 *, 8);
                goto block_14;
            }
            if ((temp_f7 > 0.0f) && (var_f3 < 0.0f)) {
                M2C_FIELD(var_9, f32 *, 0) = var_f6;
                var_11 += 1;
                temp_f2_4 = M2C_FIELD(var_6, f32 *, 4);
                M2C_FIELD(var_9, f32 *, 4) = temp_f2_4;
                temp_f4_2 = var_f3 / (var_f3 - temp_f7);
                temp_f3_3 = M2C_FIELD(var_6, f32 *, 8);
                M2C_FIELD(var_9, f32 *, 8) = temp_f3_3;
                temp_f1_3 = var_f6 - M2C_FIELD(var_2, f32 *, 0);
                M2C_FIELD(var_9, f32 *, 0) = temp_f1_3;
                temp_f1_4 = temp_f1_3 * temp_f4_2;
                temp_f2_5 = temp_f2_4 - M2C_FIELD(var_2, f32 *, 4);
                M2C_FIELD(var_9, f32 *, 4) = temp_f2_5;
                temp_f2_6 = temp_f2_5 * temp_f4_2;
                M2C_FIELD(var_9, f32 *, 0) = temp_f1_4;
                M2C_FIELD(var_9, f32 *, 4) = temp_f2_6;
                temp_f3_4 = (temp_f3_3 - M2C_FIELD(var_2, f32 *, 8)) * temp_f4_2;
                M2C_FIELD(var_9, f32 *, 8) = temp_f3_4;
                M2C_FIELD(var_9, f32 *, 0) = temp_f1_4 + M2C_FIELD(var_2, f32 *, 0);
                M2C_FIELD(var_9, f32 *, 4) = (f32) (temp_f2_6 + M2C_FIELD(var_2, f32 *, 4));
                M2C_FIELD(var_9, f32 *, 8) = (f32) (temp_f3_4 + M2C_FIELD(var_2, f32 *, 8));
block_14:
                var_9 += 0xC;
            }
            var_5 -= 1;
            var_2 = var_6;
            var_f3 = temp_f7;
            var_6 += 0xC;
            if (var_5 != 0) {
                var_f6 = *var_6;
                goto loop_6;
            }
        }
        if (var_11 == 0) {
            *arg3 = 0;
            *arg4 = NULL;
            return 0;
        }
        if (var_13 == 0) {
            var_6 = M2C_FIELD(temp_10, f32 **, 4);
            var_9 = M2C_FIELD(temp_12, f32 **, 4);
        } else {
            var_6 = M2C_FIELD(temp_12, f32 **, 4);
            var_9 = M2C_FIELD(temp_10, f32 **, 4);
        }
        var_3 -= 1;
        var_5 = var_11;
        var_11 = 0;
        var_13 = 1 - var_13;
        var_4 += 0x10;
        if (var_3 == 0) {
            /* Duplicate return node #25. Try simplifying control flow for better match */
            *arg3 = var_5;
            *arg4 = var_6;
            return 1;
        }
        goto loop_2;
    }
    *arg3 = var_5;
    *arg4 = var_6;
    return 1;
}
