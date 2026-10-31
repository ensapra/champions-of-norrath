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

void Transpose__10VIMatrix33(s32 arg0) {
    f32 *var_3_2;
    f32 *var_5;
    f32 temp_f0;
    s32 temp_2;
    s32 var_10;
    s32 var_3;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s32 var_9;

    var_7 = 0;
    var_3 = 1;
    var_10 = 0;
    var_9 = 0;
    var_8 = 0;
    do {
        var_6 = var_7;
        if (var_3 != 0) {
            var_5 = var_8 + (arg0 + var_10);
            var_3_2 = ((var_9 + var_7 + var_7) * 4) + arg0;
            do {
                temp_f0 = *var_3_2;
                var_6 += 1;
                *var_3_2 = *var_5;
                var_3_2 += 4;
                *var_5 = temp_f0;
                var_5 += 0xC;
            } while (var_6 < 3);
        }
        var_7 += 1;
        var_10 += 4;
        temp_2 = var_7 < 3;
        var_9 += 2;
        var_8 += 0xC;
        var_3 = temp_2;
    } while (temp_2 != 0);
}
