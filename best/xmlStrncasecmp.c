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

extern M2C_UNK D_011AFFE8;

s32 xmlStrncasecmp(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_2;
    s32 var_6;
    u8 *var_7;
    u8 *var_8;
    u8 var_9;

    var_6 = arg2;
    var_8 = arg0;
    var_7 = arg1;
    var_2 = 0;
    if ((var_6 > 0) && (var_8 != var_7)) {
        var_2 = -1;
        if (var_8 != NULL) {
            var_2 = 1;
            if (var_7 != NULL) {
                var_9 = *var_7;
loop_5:
                var_7 += 1;
                var_2 = *(*var_8 + &D_011AFFE8) - *(var_9 + &D_011AFFE8);
                var_8 += 1;
                if (var_2 == 0) {
                    var_6 -= 1;
                    if (var_6 != 0) {
                        if (var_9 != 0) {
                            var_9 = *var_7;
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
