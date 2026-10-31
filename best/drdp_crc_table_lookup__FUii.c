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

extern M2C_UNK D_0118E960;

s32 drdp_crc_table_lookup__FUii(s32 arg0, s32 arg1) {
    s32 *var_3;
    s32 temp_6;
    s32 temp_7;
    s32 temp_7_2;
    s32 var_2;
    s32 var_4;

    temp_6 = arg1 - 4;
    temp_7 = arg1 + 4;
    temp_7_2 = (temp_7 >= 0x100) ? 0xFF : temp_7;
    if (*((arg1 * 4) + &D_0118E960) == arg0) {
        return arg1;
    }
    var_4 = (temp_6 < 0) ? 0 : temp_6;
    if (var_4 < temp_7_2) {
        var_3 = (var_4 * 4) + &D_0118E960;
        var_2 = *var_3;
loop_6:
        var_3 += 4;
        if (var_2 != arg0) {
            var_4 += 1;
            if (var_4 < temp_7_2) {
                var_2 = *var_3;
                goto loop_6;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return -1;
        }
        return var_4;
    }
    return -1;
}
