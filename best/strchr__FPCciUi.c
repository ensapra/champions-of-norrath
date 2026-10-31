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

s8 *strchr__FPCciUi(s8 *arg0, s32 arg1, u32 arg2) {
    s8 *var_2;
    s8 temp_3;
    u32 var_8;

    var_8 = 0;
    if (arg2 != 0) {
        var_2 = arg0;
loop_2:
        var_8 += 1;
        temp_3 = *var_2;
        if (temp_3 != arg1) {
            var_2 = NULL;
            if (temp_3 != 0) {
                if (var_8 < arg2) {
                    var_2 = arg0 + var_8;
                    goto loop_2;
                }
                goto block_7;
            }
        }
    } else {
block_7:
        var_2 = NULL;
    }
    return var_2;
}
