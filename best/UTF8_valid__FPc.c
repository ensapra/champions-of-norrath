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

s32 UTF8_charValid__FPc(s8 *);                      /* extern */

s32 UTF8_valid__FPc(s8 *arg0) {
    s32 var_2;
    s8 *var_16;

    var_16 = arg0;
    var_2 = 1;
    if (*var_16 != 0) {
loop_2:
        var_2 = UTF8_charValid__FPc(var_16);
        var_16 = &var_16[var_2];
        if (var_2 != 0) {
            var_2 = 1;
            if (*var_16 != 0) {
                goto loop_2;
            }
        }
    }
    return var_2;
}
