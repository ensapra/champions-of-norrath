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

s32 GetLayerWrapMode__10VIMateriali(s32 arg0, s32 arg1) {
    s32 var_2;
    u32 temp_4;

    var_2 = 1;
    temp_4 = M2C_FIELD(((arg1 * 0x90) + arg0), s32 *, 0x34) & 6;
    if (temp_4 != 2) {
        if (temp_4 >= 3U) {
            var_2 = 2;
            if (temp_4 != 4) {
                var_2 = 3;
                if (temp_4 != 6) {
                    var_2 = 0;
                }
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_2;
        }
        var_2 = 0;
        if (temp_4 != 0) {
            return 0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
