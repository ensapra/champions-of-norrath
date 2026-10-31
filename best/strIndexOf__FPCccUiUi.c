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

u32 strIndexOf__FPCccUiUi(s32 arg0, s8 arg1, u32 arg2, u32 arg3) {
    s8 *var_3;
    u32 var_2;
    u32 var_6;

    var_6 = arg2;
    if (var_6 < arg3) {
        var_3 = arg0 + var_6;
loop_2:
        var_2 = var_6;
        var_6 += 1;
        if (*var_3 != arg1) {
            var_3 = arg0 + var_6;
            if (var_6 >= arg3) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_2 = -1U;
    }
    return var_2;
}
