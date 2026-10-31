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

s32 mp_copy(void *);                                /* extern */
M2C_UNK mp_neg(void *, void *);                     /* extern */
s32 s_mp_add_d__FP6mp_intUs(void *, s32);           /* extern */
s32 s_mp_cmp_d__FP6mp_intUs(void *, s32);           /* extern */
s32 s_mp_sub_d__FP6mp_intUs(void *, s32);           /* extern */

s32 mp_sub_d(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_2;
    u16 *temp_3;

    temp_17 = arg1 & 0xFFFF;
    if ((arg0 == 0) || (arg2 == NULL)) {
        return -4;
    }
    var_2 = mp_copy(arg2);
    if (var_2 == 0) {
        if (M2C_FIELD(arg2, s8 *, 0) != 1) {
            if (s_mp_cmp_d__FP6mp_intUs(arg2, temp_17) < 0) {
                mp_neg(arg2, arg2);
                temp_3 = M2C_FIELD(arg2, u16 **, 0xC);
                *temp_3 = temp_17 - *temp_3;
                M2C_FIELD(arg2, s8 *, 0) = 1;
                goto block_17;
            }
            temp_2_2 = s_mp_sub_d__FP6mp_intUs(arg2, temp_17);
            if (temp_2_2 != 0) {
                return temp_2_2;
            }
            goto block_17;
        }
        temp_2 = s_mp_add_d__FP6mp_intUs(arg2, temp_17);
        if (temp_2 != 0) {
            return temp_2;
        }
block_17:
        if (s_mp_cmp_d__FP6mp_intUs(arg2, 0) == 0) {
            M2C_FIELD(arg2, s8 *, 0) = 0;
        }
        var_2 = 0;
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
