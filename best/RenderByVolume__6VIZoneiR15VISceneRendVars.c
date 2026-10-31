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

s32 RenderLeaf__6VIZoneiR15VISceneRendVars(s32);    /* extern */

s32 RenderByVolume__6VIZoneiR15VISceneRendVars(s32 arg0, s32 arg1, void *arg2) {
    f32 *var_4;
    f32 var_f0;
    s32 temp_5;
    s32 var_16;
    s32 var_18;
    s32 var_21;
    s32 var_22;
    s32 var_2;
    s32 var_2_2;
    s32 var_5;
    s32 var_6;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4;
    void *var_19;

    var_16 = arg1;
    if (var_16 & 0xF0000000) {
        if (var_16 & 0x40000000) {
            return RenderLeaf__6VIZoneiR15VISceneRendVars(var_16 & 0x0FFFFFFF);
        }
        var_16 &= 0x0FFFFFFF;
        goto block_5;
    }
block_5:
    temp_5 = M2C_FIELD(arg2, s32 *, 0x18);
    var_22 = 0;
    var_6 = 0;
    var_21 = 0;
    if (temp_5 > 0) {
        var_19 = arg0 + 0x44;
        var_18 = var_16 * 2;
        temp_3 = M2C_FIELD(var_19, s32 *, 4) + (var_16 * 0x18);
        var_4 = M2C_FIELD(arg2, f32 **, 0x1C);
        var_f0 = *var_4;
loop_7:
        var_4 += 0xC;
        if (((var_f0 * M2C_FIELD(temp_3, f32 *, 0)) + (M2C_FIELD(var_4, f32 *, 4) * M2C_FIELD(temp_3, f32 *, 4)) + (M2C_FIELD(var_4, f32 *, 8) * M2C_FIELD(temp_3, f32 *, 8)) + M2C_FIELD(temp_3, f32 *, 0xC)) > 0.0f) {
            var_21 = 1;
            if (var_22 != 0) {

            } else {
                goto block_12;
            }
        } else {
            var_22 = 1;
            if (var_21 == 0) {
block_12:
                var_6 += 1;
                if (var_6 < temp_5) {
                    var_f0 = *var_4;
                    goto loop_7;
                }
            }
        }
    } else {
        var_19 = arg0 + 0x44;
        var_18 = var_16 * 2;
    }
    temp_3_2 = M2C_FIELD(arg2, void **, 0xC);
    temp_4 = M2C_FIELD(var_19, s32 *, 4) + ((var_18 + var_16) * 8);
    temp_3_3 = temp_3_2 + 0x1C;
    var_2_2 = 0;
    if (((M2C_FIELD(temp_3_2, f32 *, 0x1C) * M2C_FIELD(temp_4, f32 *, 0)) + (M2C_FIELD(temp_3_3, f32 *, 4) * M2C_FIELD(temp_4, f32 *, 4)) + (M2C_FIELD(temp_3_3, f32 *, 8) * M2C_FIELD(temp_4, f32 *, 8)) + M2C_FIELD(temp_4, f32 *, 0xC)) < 0.0f) {
        var_2_2 = 1;
    }
    if (var_2_2 != 0) {
        if ((var_21 == 0) || (var_2 = -1, (RenderByVolume__6VIZoneiR15VISceneRendVars(arg0, M2C_FIELD(temp_4, s32 *, 0x10), arg2) >= 0))) {
            if (var_22 != 0) {
                var_5 = M2C_FIELD((M2C_FIELD(var_19, s32 *, 4) + ((var_18 + var_16) * 8)), s32 *, 0x14);
                goto block_29;
            }
            goto block_31;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return var_2;
    }
    if ((var_22 == 0) || (var_2 = -1, (RenderByVolume__6VIZoneiR15VISceneRendVars(arg0, M2C_FIELD(temp_4, s32 *, 0x14), arg2) >= 0))) {
        if (var_21 != 0) {
            var_5 = M2C_FIELD((M2C_FIELD(var_19, s32 *, 4) + ((var_18 + var_16) * 8)), s32 *, 0x10);
block_29:
            if (RenderByVolume__6VIZoneiR15VISceneRendVars(arg0, var_5, arg2) < 0) {
                return -1;
            }
            goto block_31;
        }
block_31:
        var_2 = 0;
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
