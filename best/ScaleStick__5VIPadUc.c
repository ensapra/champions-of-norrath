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

f32 ScaleStick__5VIPadUc(s32 arg1) {
    f32 var_f1;
    s32 var_2;
    u32 temp_5;

    temp_5 = arg1 & 0xFF;
    if (temp_5 < 0x58U) {
        var_f1 = -0.011363636f;
        var_2 = 0x58 - temp_5;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return (f32) var_2 * var_f1;
    }
    var_2 = temp_5 - 0xA7;
    if (temp_5 >= 0xA8U) {
        var_f1 = 0.011363636f;
        return (f32) var_2 * var_f1;
    }
    return 0.0f;
}
