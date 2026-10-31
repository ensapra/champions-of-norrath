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

M2C_UNK func_0011AC40(s32, s32, M2C_UNK, s32, void *); /* extern */
M2C_UNK func_0011ACB0(s32, s32, M2C_UNK, s32, void *); /* extern */
extern M2C_UNK Decrement__12VIWndOptions;

void func_0011AD90(void) {
    s32 temp_4;
    s32 var_5;
    s32 var_7;
    s8 *temp_2_2;
    void *temp_2;

    temp_2 = &Decrement__12VIWndOptions + 0x78;
    var_7 = 0;
    var_5 = 0;
    do {
        temp_2_2 = var_5 + temp_2;
        var_5 += 1;
        temp_4 = var_5 < 0x100;
        var_7 = ((*temp_2_2 ^ 1) == 0) ? 1 : var_7;
    } while (temp_4 != 0);
    if (var_7 != 0) {
        func_0011AC40(temp_4, var_5, 1, var_7, temp_2);
        return;
    }
    func_0011ACB0(temp_4, var_5, 1, var_7, temp_2);
}
