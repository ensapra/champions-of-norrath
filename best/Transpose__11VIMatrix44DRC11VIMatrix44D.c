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

void Transpose__11VIMatrix44DRC11VIMatrix44D(s32 arg0, s32 arg1) {
    s32 var_10;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    s64 *var_3;
    s64 *var_6;
    s64 temp_2;

    var_10 = 0;
    var_9 = 0;
    var_8 = 0;
    do {
        var_6 = arg0 + var_8;
        var_3 = arg1 + var_9;
        var_7 = 3;
loop_2:
        temp_2 = *var_3;
        var_3 += 8;
        var_7 -= 1;
        *var_6 = temp_2;
        var_6 += 0x20;
        if (var_7 >= 0) {
            goto loop_2;
        }
        var_10 += 1;
        var_9 += 0x20;
        var_8 += 8;
    } while (var_10 < 4);
}
