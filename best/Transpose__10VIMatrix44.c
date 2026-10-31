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

void Transpose__10VIMatrix44(s32 arg0) {
    f32 *var_3_2;
    f32 *var_5;
    f32 temp_f0;
    s32 temp_2;
    s32 var_3;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s32 var_9;

    var_9 = 0;
    var_3 = 1;
    var_8 = 0;
    var_7 = 0;
    do {
        var_6 = var_9;
        if (var_3 != 0) {
            var_5 = var_7 + (arg0 + var_8);
            var_3_2 = var_8 + (arg0 + var_7);
            do {
                temp_f0 = *var_3_2;
                var_6 += 1;
                *var_3_2 = *var_5;
                var_3_2 += 4;
                *var_5 = temp_f0;
                var_5 += 0x10;
            } while (var_6 < 4);
        }
        var_9 += 1;
        var_8 += 4;
        temp_2 = var_9 < 4;
        var_7 += 0x10;
        var_3 = temp_2;
    } while (temp_2 != 0);
}
