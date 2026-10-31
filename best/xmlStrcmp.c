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

s32 xmlStrcmp(u8 *arg0, u8 *arg1) {
    s32 temp_3_2;
    s32 var_2;
    u8 *var_4;
    u8 *var_5;
    u8 temp_3;
    u8 var_6;

    var_4 = arg0;
    var_5 = arg1;
    var_2 = 0;
    if (var_4 != var_5) {
        var_2 = -1;
        if (var_4 != NULL) {
            if (var_5 != NULL) {
                var_6 = *var_5;
loop_6:
                var_5 += 1;
                temp_3 = *var_4;
                var_4 += 1;
                temp_3_2 = temp_3 - var_6;
                var_2 = temp_3_2;
                if (temp_3_2 == 0) {
                    if (var_6 != 0) {
                        var_6 = *var_5;
                        goto loop_6;
                    }
                    var_2 = 0;
                }
                /* Duplicate return node #11. Try simplifying control flow for better match */
                return var_2;
            }
            return 1;
        }
    }
    return var_2;
}
