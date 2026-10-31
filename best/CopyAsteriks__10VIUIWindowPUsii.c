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

void CopyAsteriks__10VIUIWindowPUsii(s16 *arg1, s32 arg2, s32 arg3) {
    s16 *var_5;
    s32 var_2;

    var_5 = arg1;
    var_2 = (arg3 >= arg2) ? arg2 : arg3;
    if (var_2 > 0) {
        do {
            var_2 -= 1;
            *var_5 = 0x2A;
            var_5 += 2;
        } while (var_2 != 0);
    }
}
