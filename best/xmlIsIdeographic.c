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

s32 xmlIsIdeographic(s32 arg0) {
    s32 var_3;

    if (arg0 >= 0x100) {
        var_3 = 0;
        if ((u32) (arg0 - 0x4E00) >= 0x51A6U) {
            if ((u32) (arg0 + 0xFFFF0700) < 0x12EU) {
                var_3 = 1;
            } else if ((u32) (arg0 - 0x3021) < 9U) {
                var_3 = 1;
            } else if (arg0 == 0x3007) {
                goto block_9;
            }
        } else {
block_9:
            var_3 = 1;
        }
    } else {
        var_3 = 0;
    }
    return var_3;
}
