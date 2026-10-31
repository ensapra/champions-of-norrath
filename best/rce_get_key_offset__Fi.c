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

s32 rce_get_key_offset__Fi(s32 arg0) {
    s32 var_5;

    if (arg0 != 1) {
        if (arg0 < 2) {
            if (arg0 == 0) {
                var_5 = 0x28;
                /* Duplicate return node #11. Try simplifying control flow for better match */
                return var_5;
            }
            return -1;
        }
        if (arg0 == 2) {
            var_5 = 0x34;
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return var_5;
        }
        return -1;
    }
    var_5 = 0x2E;
    return var_5;
}
