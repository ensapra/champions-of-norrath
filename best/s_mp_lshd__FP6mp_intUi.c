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

s32 s_mp_pad__FP6mp_intUi(s32);                     /* extern */

s32 s_mp_lshd__FP6mp_intUi(void *arg0, s32 arg1) {
    s16 *var_4;
    s32 var_2;
    s32 var_5;
    s32 var_5_2;
    u16 *var_3;
    u16 *var_6;
    u16 temp_2;

    var_2 = 0;
    if (arg1 != 0) {
        var_2 = s_mp_pad__FP6mp_intUi(M2C_FIELD(arg0, s32 *, 8) + arg1);
        if (var_2 == 0) {
            var_5 = (M2C_FIELD(arg0, s32 *, 8) - 1) - arg1;
            var_4 = M2C_FIELD(arg0, s16 **, 0xC);
            if (var_5 >= 0) {
                var_3 = (var_5 * 2) + var_4;
                var_6 = ((arg1 + var_5) * 2) + var_4;
                do {
                    temp_2 = *var_3;
                    var_3 -= 2;
                    var_5 -= 1;
                    *var_6 = temp_2;
                    var_6 -= 2;
                } while (var_5 >= 0);
            }
            var_2 = 0;
            if (arg1 > 0) {
                var_5_2 = arg1;
                do {
                    var_5_2 -= 1;
                    *var_4 = 0;
                    var_4 += 2;
                } while (var_5_2 != 0);
                var_2 = 0;
            }
        }
    }
    return var_2;
}
