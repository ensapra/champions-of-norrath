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

s32 xmlStrEqual(u8 *arg0, u8 *arg1) {
    s32 var_2;
    u8 *var_4;
    u8 *var_5;
    u8 temp_3;
    u8 var_2_2;

    var_4 = arg0;
    var_5 = arg1;
    var_2 = 1;
    if (var_4 != var_5) {
        var_2 = 0;
        if (var_4 != NULL) {
            if (var_5 != NULL) {
                var_2_2 = *var_4;
loop_6:
                var_4 += 1;
                temp_3 = *var_5;
                var_5 += 1;
                var_2 = 0;
                if (var_2_2 == temp_3) {
                    if (var_2_2 != 0) {
                        var_2_2 = *var_4;
                        goto loop_6;
                    }
                    return 1;
                }
                /* Duplicate return node #5. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return var_2;
        }
    }
    return var_2;
}
