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
M2C_UNK Init__12VIWndConnect(void *);               /* extern */
M2C_UNK Init__12VIWndMessage(void *);               /* extern */
M2C_UNK Init__12VIWndOptionsP7VIScene(void *, s32); /* extern */

s32 Init__11VIWndSplashP7VIScene(void *arg0, s32 arg1) {
    void *temp_17;
    register void *temp_18;
    void *temp_19;

    temp_17 = arg0 + 0x1A0;
    temp_18 = arg0 + 0x12A8;
    temp_19 = arg0 + 0x968;
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x25C0) = 0;
    Init__12VIWndConnect(temp_17);
    M2C_FIELD(temp_17, s32 *, 0x1C) = 0;
    AddChild__5VIWndP5VIWnd(arg0, temp_17);
    Init__12VIWndMessage(temp_18);
    M2C_FIELD(temp_18, s32 *, 0x1C) = 0;
    AddChild__5VIWndP5VIWnd(arg0, temp_18);
    Init__12VIWndOptionsP7VIScene(temp_19, arg1);
    M2C_FIELD(temp_19, s32 *, 0x1C) = 0;
    AddChild__5VIWndP5VIWnd(arg0, temp_19);
    M2C_FIELD(arg0, s32 *, 0x25AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x25A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x25BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x25B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x25B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x25B8) = 0;
    return 0;
}
