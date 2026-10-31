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

s32 mp_add(s32);                                    /* extern */
s32 mp_mod(s32, s32, s32);                          /* extern */

s32 mp_addmod(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_2;

    if (arg0 != 0) {
        var_2 = -4;
        if ((arg1 != 0) && (arg2 != 0)) {
            if (arg3 == 0) {
                goto block_4;
            }
            var_2 = mp_add(arg3);
            if (var_2 == 0) {
                var_2 = mp_mod(arg3, arg2, arg3);
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    }
block_4:
    return -4;
}
