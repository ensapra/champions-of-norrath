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

s32 mp_copy(s8 *);                                  /* extern */
s32 mp_mod(s8 *, s32, s8 *);                        /* extern */
s32 s_mp_sqr__FP6mp_int(s8 *);                      /* extern */

s32 mp_sqrmod(s32 arg0, s32 arg1, s8 *arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 var_2;
    s32 var_3;

    if (arg0 != 0) {
        var_2 = -4;
        if (arg1 != 0) {
            if (arg2 == NULL) {
                goto block_3;
            }
            temp_2 = mp_copy(arg2);
            var_3 = temp_2;
            if (temp_2 == 0) {
                temp_2_2 = s_mp_sqr__FP6mp_int(arg2);
                var_3 = temp_2_2;
                if (temp_2_2 == 0) {
                    *arg2 = 0;
                    var_3 = 0;
                }
            }
            var_2 = var_3;
            if (var_3 == 0) {
                var_2 = mp_mod(arg2, arg1, arg2);
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    }
block_3:
    return -4;
}
