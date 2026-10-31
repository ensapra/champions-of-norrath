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

u16 *strcat16__8VIStringPUsUiPCUs(u16 *arg0, u32 arg1, u16 *arg2) {
    s32 var_7;
    s32 var_8;
    u16 *var_4;
    u16 *var_6;
    u16 var_7_2;
    u32 var_2;

    var_6 = arg2;
    if (*arg0 != 0) {
        var_7 = 1;
loop_2:
        var_8 = var_7 * 2;
        if (*(var_8 + arg0) != 0) {
            var_7 += 1;
            goto loop_2;
        }
    } else {
        var_8 = 0;
    }
    var_7_2 = *var_6;
    var_4 = arg0 + var_8;
    if ((var_7_2 != 0) && ((u32) ((var_4 - arg0) + 2) < arg1)) {
        var_2 = (var_4 - arg0) + 2;
loop_11:
        *var_4 = var_7_2;
        var_4 += 2;
        var_6 += 2;
        var_2 += 2;
        var_7_2 = *var_6;
        if (var_7_2 != 0) {
            if (var_2 < arg1) {
                goto loop_11;
            }
        }
    }
    *var_4 = 0;
    return arg0;
}
