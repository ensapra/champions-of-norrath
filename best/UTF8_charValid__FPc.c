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

extern M2C_UNK D_0118ED60;

s8 UTF8_charValid__FPc(u8 *arg0) {
    s32 var_4;
    s8 *var_3;
    s8 var_2;
    s8 var_6;
    u8 temp_5;

    temp_5 = *arg0;
    var_6 = 1;
    if (temp_5 & 0x80) {
        var_6 = *(&D_0118ED60 + ((u32) (temp_5 & 0x3C) >> 2));
    }
    var_2 = 0;
    if (var_6 != 0) {
        if (var_6 != 1) {
            var_2 = 0;
            if ((temp_5 & 0xC0) == 0xC0) {
                var_4 = 1;
                if (((s32) temp_5 >> (7 - var_6)) & 1) {
                    /* Duplicate return node #6. Try simplifying control flow for better match */
                    return 0;
                }
                var_2 = var_6;
                if (var_6 > 1) {
                    var_3 = arg0 + 1;
loop_9:
                    var_4 += 1;
                    if ((*var_3 & 0xC0) == 0x80) {
                        var_3 = arg0 + var_4;
                        if (var_4 >= var_6) {
                            goto block_11;
                        }
                        goto loop_9;
                    }
                    return 0;
                }
                /* Duplicate return node #12. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return var_2;
        }
block_11:
        var_2 = var_6;
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
