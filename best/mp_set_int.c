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

s32 s_mp_add_d__FP6mp_intUs(void *, s32);           /* extern */
s32 s_mp_mul_2d__FP6mp_intUs(void *, M2C_UNK);      /* extern */
M2C_UNK s_mp_setz__FPUsUi(s32, s32);                /* extern */

s32 mp_set_int(void *arg0, s64 arg1) {
    s32 temp_5;
    s32 var_17;
    s32 var_2;
    s64 temp_3;
    s64 var_19;

    var_2 = -4;
    temp_3 = (s64) (arg1 << 0x20) >> 0x20;
    var_19 = temp_3;
    if (temp_3 < 0) {
        var_19 = -var_19;
    }
    if (arg0 != NULL) {
        s_mp_setz__FPUsUi(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 8) = 1;
        var_2 = 0;
        M2C_FIELD(arg0, s8 *, 0) = 0;
        if (arg1 != 0) {
            var_17 = 7;
loop_5:
            var_2 = s_mp_mul_2d__FP6mp_intUs(arg0, 8);
            temp_5 = ((u32) var_19 >> (var_17 * 8)) & 0xFF;
            var_17 -= 1;
            if (var_2 == 0) {
                var_2 = s_mp_add_d__FP6mp_intUs(arg0, temp_5);
                if (var_2 == 0) {
                    if ((var_17 < 0) || (var_17 == -1)) {
                        if (arg1 < 0) {
                            M2C_FIELD(arg0, s8 *, 0) = 1;
                        }
                    } else {
                        goto loop_5;
                    }
                }
            }
        }
    }
    return var_2;
}
