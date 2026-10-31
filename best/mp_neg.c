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

s32 mp_copy();                                      /* extern */
s32 s_mp_cmp_d__FP6mp_intUs(s8 *, M2C_UNK);         /* extern */

s32 mp_neg(s32 arg0, s8 *arg1) {
    s32 var_2;

    if ((arg0 == 0) || (arg1 == NULL)) {
        return -4;
    }
    var_2 = mp_copy();
    if (var_2 == 0) {
        if (s_mp_cmp_d__FP6mp_intUs(arg1, 0) != 0) {
            *arg1 = *arg1 != 1;
        } else {
            *arg1 = 0;
        }
        var_2 = 0;
    }
    return var_2;
}
