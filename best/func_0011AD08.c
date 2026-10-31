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

M2C_UNK func_0011AC40(s8 *, M2C_UNK);               /* extern */
extern M2C_UNK Decrement__12VIWndOptions;

s32 func_0011AD08(void) {
    s32 var_16;
    s8 *temp_2;
    s8 *var_3;

    temp_2 = &Decrement__12VIWndOptions + 0x78;
    var_16 = 0;
    var_3 = temp_2;
loop_1:
    if (*var_3 != 0) {
        var_16 += 1;
        var_3 = var_16 + temp_2;
        if (var_16 >= 0x100) {
            return 0;
        }
        goto loop_1;
    }
    *var_3 = 1;
    func_0011AC40(temp_2, 1);
    return var_16;
}
