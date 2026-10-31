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

s32 strIndexOf__FPCccUiUi(s32, s8, s32, s32);       /* extern */

s32 nthIndexOf__FPCccUiUi(s32 arg0, s8 arg1, u32 arg2, s32 arg3) {
    s32 var_2;
    s32 var_6;
    u32 var_16;

    var_2 = -1;
    if (arg3 != 0) {
        var_16 = 0;
        var_6 = 0;
loop_2:
        var_2 = strIndexOf__FPCccUiUi(arg0, arg1, var_6, arg3);
        var_16 += 1;
        if (var_2 >= 0) {
            if (var_16 < arg2) {
                var_6 = var_2 + 1;
                goto loop_2;
            }
        }
    }
    return var_2;
}
