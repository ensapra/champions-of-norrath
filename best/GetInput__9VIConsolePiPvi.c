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

s32 Read__10VIKeyboardR12VIConsoleKey(void *, s32); /* extern */
s32 Read__5VIPadR12VIConsolePad(void *, s32);       /* extern */
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);              /* extern */

s32 GetInput__9VIConsolePiPvi(void *arg0, s32 *arg1, s32 arg2) {
    s32 var_19;
    s32 var_2;

    var_19 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x27C) == 1) {
        if (Read__10VIKeyboardR12VIConsoleKey(arg0 + 0x60, arg2) != 1) {
            M2C_FIELD(arg0, s32 *, 0x27C) = 0;
        } else {
            var_19 = 1;
            *arg1 = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x27C) = 1;
    }
    var_2 = var_19 ^ 1;
    if (var_19 == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x280) != 1) {
            M2C_FIELD(arg0, s32 *, 0x280) = 1;
        } else {
            if (Read__5VIPadR12VIConsolePad(arg0, arg2) != 0) {
                M2C_FIELD(arg0, s32 *, 0x278) = 1;
            } else {
                memset(arg2 + 4, 0, 0x50);
                M2C_FIELD(arg0, s32 *, 0x278) = 0;
            }
            var_19 = 1;
            *arg1 = 4;
            M2C_FIELD(arg0, s32 *, 0x280) = 0;
        }
        var_2 = var_19 ^ 1;
    }
    return var_2;
}
