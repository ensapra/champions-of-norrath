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

s32 s_mp_ispow2__FP6mp_int(void *arg0) {
    s32 temp_4;
    s32 temp_5;
    s32 var_3_2;
    s32 var_6;
    u16 *var_4;
    u16 var_3;

    temp_5 = M2C_FIELD(arg0, s32 *, 8);
    temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
    var_3 = M2C_FIELD((temp_4 + (temp_5 * 2)), u16 *, -2);
    var_6 = 0;
    if (var_3 != 0) {
        if (!(var_3 & 1 & 0xFFFF)) {
loop_2:
            var_3 = (u16) (var_3 >> 1);
            var_6 += 1;
            if (var_3 != 0) {
                if (!(var_3 & 1 & 0xFFFF)) {
                    goto loop_2;
                }
            }
        }
    }
    var_3_2 = temp_5 - 2;
    if (var_3 == 1) {
        var_4 = temp_4 + (var_3_2 * 2);
        if (var_3_2 >= 0) {
loop_7:
            var_4 -= 2;
            if (*var_4 == 0) {
                var_3_2 -= 1;
                if (var_3_2 < 0) {
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return ((temp_5 - 1) * 0x10) + var_6;
                }
                goto loop_7;
            }
            return -1;
        }
        return ((temp_5 - 1) * 0x10) + var_6;
    }
    return -1;
}
