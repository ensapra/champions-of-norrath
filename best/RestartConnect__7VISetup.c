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

M2C_UNK Free__12VIWndPatcher(s32);                  /* extern */
M2C_UNK Init__12VIWndPatcher(s32);                  /* extern */
M2C_UNK RestartConnect__11VIWndSplash(s32);         /* extern */
M2C_UNK SetFocus__5VIWndP5VIWndb(s32, s32, M2C_UNK); /* extern */
M2C_UNK SetRoot__15VIWindowManagerP5VIWnd(s32, s32); /* extern */

void RestartConnect__7VISetup(s32 arg0) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_18;

    temp_17 = arg0 + 0xAF64;
    temp_18 = arg0 + 0xAFE8;
    SetRoot__15VIWindowManagerP5VIWnd(temp_17, temp_18);
    temp_16 = arg0 + 0xD5B0;
    SetFocus__5VIWndP5VIWndb(temp_17, temp_18, 1);
    Free__12VIWndPatcher(temp_16);
    Init__12VIWndPatcher(temp_16);
    RestartConnect__11VIWndSplash(temp_18);
}
