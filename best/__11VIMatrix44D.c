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

M2C_UNK Zero__11VIMatrix44D(s32, M2C_UNK);          /* extern */

void __11VIMatrix44D(void *arg0) {
    s32 var_5;
    void *var_2;

    var_5 = 3;
    var_2 = arg0;
    do {
        var_5 -= 1;
        M2C_FIELD(var_2, s64 *, 0) = 0;
        M2C_FIELD(var_2, s64 *, 8) = 0;
        M2C_FIELD(var_2, s64 *, 0x10) = 0;
        M2C_FIELD(var_2, s64 *, 0x18) = 0;
        var_2 += 0x20;
    } while (var_5 != -1);
    Zero__11VIMatrix44D(var_5, -1);
}
