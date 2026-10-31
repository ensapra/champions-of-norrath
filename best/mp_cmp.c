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

s32 s_mp_cmp__FP6mp_intT0(s8);                      /* extern */

s32 mp_cmp(s8 *arg0, s8 *arg1) {
    s32 var_2;
    s8 temp_6;

    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_6 = *arg0;
            if (temp_6 == *arg1) {
                var_2 = s_mp_cmp__FP6mp_intT0(temp_6);
                if (var_2 != 0) {
                    if (*arg0 != 0) {
                        return -var_2;
                    }
                    return var_2;
                }
                /* Duplicate return node #13. Try simplifying control flow for better match */
                return var_2;
            }
            var_2 = (temp_6 != 0) ? -1 : 1;
            return var_2;
        }
        goto block_4;
    }
block_4:
    return 0;
}
