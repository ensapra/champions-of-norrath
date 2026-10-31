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

void Transpose__10VIMatrix33RC10VIMatrix33(s32 arg0, s32 arg1) {
    f32 *var_2;
    f32 *var_3;
    f32 temp_f0;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s32 var_9;

    var_7 = 0;
    var_9 = 0;
    var_8 = 0;
    do {
        var_3 = arg0 + var_8;
        var_6 = 2;
        var_2 = ((var_9 + var_7) * 4) + arg1;
loop_2:
        temp_f0 = *var_2;
        var_2 += 4;
        var_6 -= 1;
        *var_3 = temp_f0;
        var_3 += 0xC;
        if (var_6 >= 0) {
            goto loop_2;
        }
        var_7 += 1;
        var_9 += 2;
        var_8 += 4;
    } while (var_7 < 3);
}
