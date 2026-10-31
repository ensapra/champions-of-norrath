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

s32 IsOtherEmailChar__Fc(s8 arg0) {
    s32 var_2;

    var_2 = 0;
    if (arg0 != 0x24) {
        var_2 = 0;
        if (arg0 != 0x22) {
            var_2 = 0;
            if (arg0 != 0x3C) {
                var_2 = 0;
                if (arg0 != 0x3E) {
                    var_2 = 0;
                    if (arg0 != 0x28) {
                        var_2 = 0;
                        if ((arg0 != 0x29) && ((arg0 == 0x3B) || (var_2 = 1, (arg0 == 0x2D)))) {
                            var_2 = 0;
                        }
                    }
                }
            }
        }
    }
    return var_2;
}
