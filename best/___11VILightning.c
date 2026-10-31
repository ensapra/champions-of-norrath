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

M2C_UNK ___10VIMatrix44(s32, M2C_UNK);              /* extern */
M2C_UNK __builtin_delete(s32);                      /* extern */

void ___11VILightning(s32 arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_17;
    s32 var_16;

    if (arg0 != -0x70) {
        temp_16 = arg0 + 0x18B0;
        temp_17 = arg0 + 0x70;
        if (temp_17 != temp_16) {
            var_16 = temp_16 - 0x610;
loop_3:
            ___10VIMatrix44(var_16 + 0x5D0, 2);
            if (temp_17 != var_16) {
                var_16 -= 0x610;
                goto loop_3;
            }
        }
    }
    ___10VIMatrix44(arg0 + 0x20, 2);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
