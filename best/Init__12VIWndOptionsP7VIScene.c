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
M2C_UNK Init__13VIBattleMusicP7VIScene(void *);     /* extern */
M2C_UNK RemoveChild__5VIWndP5VIWnd(void *, s32);    /* extern */
extern s32 D_011E8BD0;

s32 Init__12VIWndOptionsP7VIScene(void *arg0) {
    s32 temp_2;
    void *temp_16;
    void *temp_18;

    temp_16 = arg0 + 0x4B0;
    temp_18 = arg0 + 0x4D0;
    M2C_FIELD(arg0, s32 *, 0x49C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    D_011E8BD0 = 0;
    Init__13VIBattleMusicP7VIScene(temp_16);
    temp_2 = M2C_FIELD(arg0, s32 *, 0x4AC);
    M2C_FIELD(temp_16, f32 *, 0x10) = 0.02f;
    if (temp_2 != 0) {
        RemoveChild__5VIWndP5VIWnd(arg0, temp_2);
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
    }
    Init__12VIWndMessage(temp_18);
    M2C_FIELD(temp_18, s32 *, 0x1C) = 0;
    AddChild__5VIWndP5VIWnd(arg0, temp_18);
    return 0;
}
