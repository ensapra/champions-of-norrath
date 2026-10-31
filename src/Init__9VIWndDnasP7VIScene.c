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

M2C_UNK AddChild__5VIWndP5VIWnd(void *, void *);    /* extern */
M2C_UNK Init__12VIWndMessage(void *);               /* extern */

s32 Init__9VIWndDnasP7VIScene(void *arg0, s32 arg1) {
    void *temp_17;

    temp_17 = arg0 + 0x498;
    M2C_FIELD(arg0, s32 *, 0x308) = arg1;
    Init__12VIWndMessage(temp_17);
    M2C_FIELD(temp_17, s32 *, 0x1C) = 0;
    AddChild__5VIWndP5VIWnd(arg0, temp_17);
    M2C_FIELD(arg0, s32 *, 0x30C) = -1;
    return 0;
}
