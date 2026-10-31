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
extern M2C_UNK D_011AFFE8;

u8 *xmlStrcasestr(u8 *arg0, u8 *arg1) {
    s32 temp_2;
    s32 var_2_3;
    s32 var_8;
    u8 *var_16;
    u8 *var_2;
    u8 *var_2_2;
    u8 *var_7;
    u8 *var_9;
    u8 temp_2_2;
    u8 temp_6;

    var_2 = NULL;
    var_16 = arg0;
    if ((var_16 != NULL) && (arg1 != NULL)) {
        temp_2 = xmlStrlen(arg1);
        if (temp_2 != 0) {
            if (*var_16 != 0) {
                var_2_2 = *var_16 + &D_011AFFE8;
loop_9:
                if (*var_2_2 == *(*arg1 + &D_011AFFE8)) {
                    var_8 = temp_2;
                    var_9 = var_16;
                    var_7 = arg1;
                    var_2_3 = 0;
                    if ((var_8 > 0) && (var_16 != var_7)) {
                        var_2_3 = 1;
                        if (var_7 != NULL) {
loop_14:
                            temp_6 = *var_7;
                            var_7 += 1;
                            var_2_3 = *(*var_9 + &D_011AFFE8) - *(temp_6 + &D_011AFFE8);
                            var_9 += 1;
                            if (var_2_3 == 0) {
                                var_8 -= 1;
                                if (var_8 != 0) {
                                    if (temp_6 == 0) {
                                        var_2_3 = 0;
                                    } else {
                                        goto loop_14;
                                    }
                                }
                            }
                        }
                    }
                    var_2 = var_16;
                    if (var_2_3 != 0) {
                        goto block_19;
                    }
                } else {
block_19:
                    var_16 += 1;
                    temp_2_2 = *var_16;
                    var_2_2 = temp_2_2 + &D_011AFFE8;
                    if (temp_2_2 == 0) {
                        goto block_20;
                    }
                    goto loop_9;
                }
            } else {
block_20:
                var_2 = NULL;
            }
            /* Duplicate return node #21. Try simplifying control flow for better match */
            return var_2;
        }
        return var_16;
    }
    return var_2;
}
