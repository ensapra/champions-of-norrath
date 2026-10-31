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

s32 xmlStrncmp(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_2;
    s32 var_6;
    u8 *var_4;
    u8 *var_5;
    u8 var_3;

    var_4 = arg0;
    var_5 = arg1;
    var_6 = arg2;
    var_2 = 0;
    if ((var_6 > 0) && (var_4 != var_5)) {
        var_2 = -1;
        if (var_4 != NULL) {
            var_2 = 1;
            if (var_5 != NULL) {
                var_3 = *var_5;
loop_5:
                var_5 += 1;
                var_2 = *var_4 - var_3;
                var_4 += 1;
                if (var_2 == 0) {
                    var_6 -= 1;
                    if (var_6 != 0) {
                        if (var_3 != 0) {
                            var_3 = *var_5;
                            goto loop_5;
                        }
                        var_2 = 0;
                    }
                }
            }
        }
    }
    return var_2;
}
