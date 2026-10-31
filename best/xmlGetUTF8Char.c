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

u8 xmlGetUTF8Char(void *arg0, s32 *arg1) {
    s32 temp_3;
    s32 temp_4;
    s32 temp_8;
    s32 temp_9;
    s32 var_6_2;
    u8 var_2;
    u8 var_6;

    if (arg0 == NULL) {
        *arg1 = 0;
        /* Duplicate return node #40. Try simplifying control flow for better match */
        return -1U;
    }
    if (arg1 == NULL) {
        *arg1 = 0;
        /* Duplicate return node #40. Try simplifying control flow for better match */
        return -1U;
    }
    temp_4 = *arg1;
    if (temp_4 <= 0) {
        *arg1 = 0;
        /* Duplicate return node #40. Try simplifying control flow for better match */
        return -1U;
    }
    var_6 = M2C_FIELD(arg0, u8 *, 0);
    if (var_6 & 0x80) {
        if (temp_4 < 2) {
            *arg1 = 0;
            /* Duplicate return node #40. Try simplifying control flow for better match */
            return -1U;
        }
        temp_8 = M2C_FIELD(arg0, u8 *, 1) & 0xC0;
        if (temp_8 != 0x80) {
            *arg1 = 0;
            /* Duplicate return node #40. Try simplifying control flow for better match */
            return -1U;
        }
        if ((var_6 & 0xE0) == 0xE0) {
            if (temp_4 < 3) {
                *arg1 = 0;
                /* Duplicate return node #40. Try simplifying control flow for better match */
                return -1U;
            }
            temp_9 = M2C_FIELD(arg0, u8 *, 2) & 0xC0;
            if (temp_9 != temp_8) {
                *arg1 = 0;
                /* Duplicate return node #40. Try simplifying control flow for better match */
                return -1U;
            }
            temp_3 = var_6 & 0xF0;
            if (temp_3 == 0xF0) {
                if (temp_4 < 4) {
                    *arg1 = 0;
                    /* Duplicate return node #40. Try simplifying control flow for better match */
                    return -1U;
                }
                if ((var_6 & 0xF8) != temp_3) {
                    *arg1 = 0;
                    /* Duplicate return node #40. Try simplifying control flow for better match */
                    return -1U;
                }
                if ((M2C_FIELD(arg0, u8 *, 3) & 0xC0) != temp_9) {
                    *arg1 = 0;
                    return -1U;
                }
                *arg1 = 4;
                var_2 = M2C_FIELD(arg0, u8 *, 3);
                var_6_2 = ((M2C_FIELD(arg0, u8 *, 0) & 7) << 0x12) | ((M2C_FIELD(arg0, u8 *, 1) & 0x3F) << 0xC) | ((M2C_FIELD(arg0, u8 *, 2) & 0x3F) << 6);
                goto block_36;
            }
            *arg1 = 3;
            var_6 = ((M2C_FIELD(arg0, u8 *, 0) & 0xF) << 0xC) | ((M2C_FIELD(arg0, u8 *, 1) & 0x3F) << 6) | (M2C_FIELD(arg0, u8 *, 2) & 0x3F);
            /* Duplicate return node #38. Try simplifying control flow for better match */
            return var_6;
        }
        *arg1 = 2;
        var_2 = M2C_FIELD(arg0, u8 *, 1);
        var_6_2 = (M2C_FIELD(arg0, u8 *, 0) & 0x1F) << 6;
block_36:
        var_6 = var_6_2 | (var_2 & 0x3F);
        /* Duplicate return node #38. Try simplifying control flow for better match */
        return var_6;
    }
    *arg1 = 1;
    return var_6;
}
