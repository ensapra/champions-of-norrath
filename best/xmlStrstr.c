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

s32 xmlStrlen(u8 *);                                /* extern */

u8 *xmlStrstr(u8 *arg0, u8 *arg1) {
    s32 temp_2;
    s32 var_2_3;
    s32 var_5;
    u8 *var_16;
    u8 *var_2;
    u8 *var_4;
    u8 *var_6;
    u8 temp_3;
    u8 var_2_2;

    var_2 = NULL;
    var_16 = arg0;
    if ((var_16 != NULL) && (arg1 != NULL)) {
        temp_2 = xmlStrlen(arg1);
        if (temp_2 != 0) {
            var_2_2 = *var_16;
            if (var_2_2 != 0) {
loop_9:
                if (var_2_2 == *arg1) {
                    var_5 = temp_2;
                    var_6 = var_16;
                    var_4 = arg1;
                    var_2_3 = 0;
                    if ((var_5 > 0) && (var_16 != var_4)) {
                        var_2_3 = 1;
                        if (var_4 != NULL) {
loop_13:
                            temp_3 = *var_4;
                            var_4 += 1;
                            var_2_3 = *var_6 - temp_3;
                            var_6 += 1;
                            if (var_2_3 == 0) {
                                var_5 -= 1;
                                if (var_5 != 0) {
                                    if (temp_3 == 0) {
                                        var_2_3 = 0;
                                    } else {
                                        goto loop_13;
                                    }
                                }
                            }
                        }
                    }
                    var_2 = var_16;
                    if (var_2_3 != 0) {
                        goto block_18;
                    }
                } else {
block_18:
                    var_16 += 1;
                    var_2_2 = *var_16;
                    if (var_2_2 == 0) {
                        goto block_19;
                    }
                    goto loop_9;
                }
            } else {
block_19:
                var_2 = NULL;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_2;
        }
        return var_16;
    }
    return var_2;
}
