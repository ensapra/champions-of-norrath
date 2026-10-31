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

s32 mp_unsigned_bin_size(void *arg0) {
    s32 temp_3;
    s32 var_2;
    s32 var_3;
    u16 *temp_4;
    u16 var_2_2;

    var_2 = 0;
    if (arg0 != NULL) {
        temp_3 = M2C_FIELD(arg0, s32 *, 8);
        temp_4 = M2C_FIELD(arg0, u16 **, 0xC);
        if ((temp_3 == 1) && (*temp_4 == 0)) {
            return 1;
        }
        var_2_2 = M2C_FIELD((temp_4 + (temp_3 * 2)), u16 *, -2);
        var_3 = (temp_3 - 1) * 2;
        if (var_2_2 != 0) {
            do {
                var_2_2 = (u16) (var_2_2 >> 8);
                var_3 += 1;
            } while (var_2_2 != 0);
        }
        var_2 = var_3;
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
