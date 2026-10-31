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

s32 mp_read_unsigned_bin(s32, s32);                 /* extern */

s32 mp_read_signed_bin(s8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_2;
    s32 var_2;

    if (arg0 != NULL) {
        var_2 = -4;
        if (arg1 != NULL) {
            if (arg2 > 0) {
                temp_2 = mp_read_unsigned_bin(arg1 + 1, arg2 - 1);
                var_2 = temp_2;
                if (temp_2 == 0) {
                    if (*arg1 != 0) {
                        *arg0 = 1;
                    } else {
                        *arg0 = 0;
                    }
                    var_2 = temp_2;
                }
                /* Duplicate return node #12. Try simplifying control flow for better match */
                return var_2;
            }
            goto block_5;
        }
        return var_2;
    }
block_5:
    return -4;
}
