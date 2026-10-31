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

void Transpose__11VIMatrix44D(s32 arg0) {
    s32 temp_2;
    s32 var_10;
    s32 var_3;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    s64 *var_5;
    s64 *var_6;
    s64 temp_2_2;

    var_10 = 0;
    var_3 = 1;
    var_9 = 0;
    var_8 = 0;
    do {
        var_7 = var_10;
        if (var_3 != 0) {
            var_6 = var_8 + (arg0 + var_9);
            var_5 = var_9 + (arg0 + var_8);
            do {
                temp_2_2 = *var_5;
                var_7 += 1;
                *var_5 = *var_6;
                var_5 += 8;
                *var_6 = temp_2_2;
                var_6 += 0x20;
            } while (var_7 < 4);
        }
        var_10 += 1;
        var_9 += 8;
        temp_2 = var_10 < 4;
        var_8 += 0x20;
        var_3 = temp_2;
    } while (temp_2 != 0);
}
