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

s32 s_mp_cmp_d__FP6mp_intUs(s32, s32);              /* extern */

s32 mp_cmp_d(s8 *arg0, s32 arg1) {
    s32 temp_6;
    s32 var_2;

    temp_6 = arg1 & 0xFFFF;
    var_2 = 0;
    if (arg0 != NULL) {
        var_2 = -1;
        if (*arg0 != 1) {
            return s_mp_cmp_d__FP6mp_intUs(temp_6, temp_6);
        }
    }
    return var_2;
}
