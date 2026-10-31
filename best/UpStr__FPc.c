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

s8 *UpStr__FPc(s8 *arg0) {
    s32 var_6;
    s8 *var_2;
    s8 *var_5;
    u8 var_3;

    var_2 = NULL;
    if (arg0 != NULL) {
        var_6 = 0;
        if (*arg0 != 0) {
            var_5 = arg0;
            var_3 = (u8) *var_5;
loop_3:
            if ((u32) (var_3 - 0x61) < 0x1AU) {
                *var_5 = var_3 - 0x20;
            }
            var_6 += 1;
            var_5 = arg0 + var_6;
            if (*var_5 != 0) {
                var_3 = (u8) *var_5;
                goto loop_3;
            }
        }
        var_2 = arg0;
    }
    return var_2;
}
