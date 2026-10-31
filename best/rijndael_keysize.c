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

s32 rijndael_keysize(s32 *arg0) {
    s32 temp_5;
    s32 var_2;
    s32 var_3;

    temp_5 = *arg0;
    var_2 = 1;
    if (temp_5 >= 0x10) {
        if (temp_5 >= 0x18) {
            if (temp_5 < 0x20) {
                var_3 = 0x18;
                /* Duplicate return node #8. Try simplifying control flow for better match */
                *arg0 = var_3;
                return 0;
            }
            var_2 = 0;
            *arg0 = 0x20;
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return var_2;
        }
        var_3 = 0x10;
        *arg0 = var_3;
        return 0;
    }
    return var_2;
}
