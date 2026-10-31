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
s32 s_mp_add_d__FP6mp_intUs(void *, s32);           /* extern */
s32 s_mp_cmp_d__FP6mp_intUs(void *, s32);           /* extern */
s32 s_mp_sub_d__FP6mp_intUs(void *, s32);           /* extern */

s32 mp_add_d(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_18;
    s32 var_17;
    s32 var_2;
    u16 *temp_3;

    temp_18 = arg1 & 0xFFFF;
    if ((arg0 == 0) || (arg2 == NULL)) {
        return -4;
    }
    var_2 = mp_copy(arg2);
    var_17 = var_2;
    if (var_17 == 0) {
        if (M2C_FIELD(arg2, s8 *, 0) == 0) {
            var_17 = s_mp_add_d__FP6mp_intUs(arg2, temp_18);
        } else if (s_mp_cmp_d__FP6mp_intUs(arg2, temp_18) >= 0) {
            var_17 = s_mp_sub_d__FP6mp_intUs(arg2, temp_18);
        } else {
            M2C_FIELD(arg2, s8 *, 0) = 0;
            temp_3 = M2C_FIELD(arg2, u16 **, 0xC);
            *temp_3 = temp_18 - *temp_3;
        }
        var_2 = var_17;
    }
    return var_2;
}
