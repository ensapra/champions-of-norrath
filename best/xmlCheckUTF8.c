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

s32 xmlCheckUTF8(u8 *arg0) {
    s32 temp_3;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_2;
    s32 var_2_2;
    s32 var_8;
    u8 var_6;
    void *temp_7;

    var_6 = *arg0;
    var_8 = 0;
    if (var_6 != 0) {
        var_2_2 = var_6 & 0x80;
loop_2:
        temp_7 = arg0 + var_8;
        if (var_2_2 != 0) {
            temp_5 = M2C_FIELD(temp_7, u8 *, 1) & 0xC0;
            var_2 = 0;
            if (temp_5 == 0x80) {
                if ((var_6 & 0xE0) != 0xE0) {
                    var_8 += 2;
                    goto block_16;
                }
                temp_3 = M2C_FIELD(temp_7, u8 *, 2) & 0xC0;
                var_2 = 0;
                if (temp_3 == temp_5) {
                    temp_5_2 = var_6 & 0xF0;
                    if (temp_5_2 != 0xF0) {
                        var_8 += 3;
                        goto block_16;
                    }
                    if (((var_6 & 0xF8) != temp_5_2) || (var_8 += 4, ((M2C_FIELD(temp_7, u8 *, 3) & 0xC0) != temp_3))) {
                        return 0;
                    }
                    goto block_16;
                }
                /* Duplicate return node #20. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_2;
        }
        var_8 += 1;
block_16:
        var_6 = *(arg0 + var_8);
        if (var_6 != 0) {
            var_2_2 = var_6 & 0x80;
            goto loop_2;
        }
        goto block_19;
    }
block_19:
    var_2 = 1;
    return var_2;
}
