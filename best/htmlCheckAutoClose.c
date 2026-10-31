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

s32 xmlStrEqual(s32, s32);                          /* extern */
extern s32 D_0118F970;
extern s32 D_0118FE30;
extern s32 *D_011E7D90;

s32 htmlCheckAutoClose(s32 arg0, s32 arg1) {
    s32 **var_16;
    s32 **var_2;
    s32 **var_4;
    s32 *temp_2;
    s32 *var_16_2;
    s32 *var_18;
    s32 *var_5_2;
    s32 *var_6;
    s32 temp_4;
    s32 var_17;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_3;
    s32 var_5;
    s32 var_7;
    s32 var_7_2;

    var_18 = NULL;
    if (D_0118FE30 == 0) {
        var_7 = 0x63;
        var_2 = &D_011E7D90 + 0x18C;
        do {
            var_7 -= 1;
            *var_2 = NULL;
            var_2 -= 4;
        } while (var_7 >= 0);
        var_7_2 = 0;
        var_5 = 0;
        if (D_0118F970 != 0) {
            var_3 = 0 * 4;
            var_4 = &D_011E7D90;
            var_6 = &(&D_0118F970)[0];
            var_2_2 = *var_6;
loop_5:
            var_7_2 += 1;
            *var_4 = var_6;
            var_4 += 4;
            if (var_2_2 != 0) {
                var_5_2 = var_5 + &D_0118F970;
                do {
                    var_5_2 += 4;
                    var_3 += 4;
                    var_6 += 4;
                } while (*var_5_2 != 0);
            }
            var_6 += 4;
            var_3 += 4;
            var_5 = var_3;
            if (*var_6 != 0) {
                if (var_7_2 < 0x63) {
                    var_2_2 = *var_6;
                    goto loop_5;
                }
            }
        }
        D_0118FE30 = 1;
    }
    var_17 = 0;
    var_16 = &D_011E7D90;
    var_2_3 = 0 < 0x64;
loop_14:
    var_17 += 1;
    if (var_2_3 != 0) {
        var_18 = *var_16;
        var_16 += 4;
        if (var_18 != NULL) {
            var_2_3 = var_17 < 0x64;
            if (xmlStrEqual(*var_18, arg0) != 0) {
                goto block_17;
            }
            goto loop_14;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
        return 0;
    }
block_17:
    temp_2 = &(&D_0118F970)[((s32) (var_18 - &D_0118F970) >> 2) + 1];
    var_16_2 = temp_2;
    if (*temp_2 != 0) {
loop_18:
        temp_4 = *var_16_2;
        var_16_2 += 4;
        if (xmlStrEqual(temp_4, arg1) == 0) {
            if (*var_16_2 == 0) {
                goto block_24;
            }
            goto loop_18;
        }
        return 1;
    }
block_24:
    return 0;
}
