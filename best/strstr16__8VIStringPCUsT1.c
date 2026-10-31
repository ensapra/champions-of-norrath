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

u16 *strstr16__8VIStringPCUsT1(u16 *arg0, u16 *arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 var_7;
    u16 *var_4;
    u16 temp_2_3;
    u16 temp_3;
    u16 var_2;

    var_4 = arg0;
    if (var_4 != NULL) {
        if (arg1 != NULL) {
            var_2 = *var_4;
            if (var_2 != 0) {
loop_8:
                temp_2 = var_2 & 0xFFFF;
                if ((temp_2 == *arg1) && (temp_2 != 0)) {
                    var_7 = 1;
loop_11:
                    temp_2_2 = var_7 * 2;
                    temp_3 = *(temp_2_2 + arg1);
                    if (temp_3 != 0) {
                        temp_2_3 = *(temp_2_2 + var_4);
                        if (temp_2_3 == temp_3) {
                            if (temp_2_3 != 0) {
                                var_7 += 1;
                                goto loop_11;
                            }
                            goto block_16;
                        }
                        goto block_16;
                    }
                    return var_4;
                }
block_16:
                var_4 += 2;
                var_2 = *var_4;
                if (var_2 == 0) {
                    /* Duplicate return node #17. Try simplifying control flow for better match */
                    return NULL;
                }
                goto loop_8;
            }
            return NULL;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return NULL;
    }
    return NULL;
}
