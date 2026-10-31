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

extern M2C_UNK D_011AFFE8;

s32 xmlStrcasecmp(u8 *arg0, u8 *arg1) {
    s32 temp_3;
    s32 var_2;
    u8 *var_6;
    u8 *var_7;
    u8 temp_2;
    u8 temp_8;

    var_7 = arg0;
    var_6 = arg1;
    var_2 = 0;
    if (var_7 != var_6) {
        var_2 = -1;
        if (var_7 != NULL) {
            if (var_6 == NULL) {
                return 1;
            }
loop_5:
            temp_8 = *var_6;
            var_6 += 1;
            temp_2 = *var_7;
            var_7 += 1;
            temp_3 = *(temp_2 + &D_011AFFE8) - *(temp_8 + &D_011AFFE8);
            var_2 = temp_3;
            if (temp_3 == 0) {
                if (temp_8 == 0) {
                    var_2 = 0;
                } else {
                    goto loop_5;
                }
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_2;
        }
    }
    return var_2;
}
