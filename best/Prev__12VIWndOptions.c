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

M2C_UNK ResetTickPulse__10VIUIWindow(void *);       /* extern */
M2C_UNK SoundPlay__4VIUI11VIUISoundId(s32, M2C_UNK); /* extern */
extern s32 D_01192C70;

void Prev__12VIWndOptions(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;

    if (M2C_FIELD(arg0, s32 *, 0x478) != -1) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x47C);
        if (temp_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (temp_2 - 1);
            ResetTickPulse__10VIUIWindow(arg0 + 0x28);
            SoundPlay__4VIUI11VIUISoundId(D_01192C70, 0xB);
            return;
        }
        SoundPlay__4VIUI11VIUISoundId(D_01192C70, 9);
        return;
    }
    temp_2_2 = M2C_FIELD(arg0, s32 *, 0x49C);
    if (temp_2_2 > 0) {
        M2C_FIELD(arg0, s32 *, 0x49C) = (s32) (temp_2_2 - 1);
        ResetTickPulse__10VIUIWindow(arg0 + 0x28);
        SoundPlay__4VIUI11VIUISoundId(D_01192C70, 0xB);
        return;
    }
    SoundPlay__4VIUI11VIUISoundId(D_01192C70, 9);
}
