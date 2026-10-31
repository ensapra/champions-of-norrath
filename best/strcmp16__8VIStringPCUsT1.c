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

s32 strcmp16__8VIStringPCUsT1(u16 *arg0, u16 *arg1) {
    s32 var_3;
    u16 *var_4;
    u16 *var_5;
    u16 temp_3;

    var_4 = arg0;
    var_5 = arg1;
    var_3 = 0;
    if (*var_4 != 0) {
loop_1:
        temp_3 = *var_4;
        var_4 += 2;
        var_3 = temp_3 - *var_5;
        var_5 += 2;
        if (var_3 == 0) {
            if (*var_4 != 0) {
                goto loop_1;
            }
        }
    }
    return var_3;
}
