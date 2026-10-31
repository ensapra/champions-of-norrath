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

s64 GetTime__7VITimer();                            /* extern */
M2C_UNK OnMessage__5VIWndP5VIWndiii();              /* extern */
extern M2C_UNK D_01192B80;
extern s32 D_01192BC8;

void OnMessage__9VIWndEditP5VIWndiii(void *arg0, s32 arg2, s32 arg4) {
    s64 temp_2;
    s8 var_3;

    if (arg2 == 0x127) {
        if (arg4 == arg0) {
            temp_2 = GetTime__7VITimer();
            M2C_FIELD(arg0, s32 *, 0x170) = 1;
            var_3 = 6;
            M2C_FIELD((arg0 + 0x158), s32 *, 4) = 0;
            M2C_FIELD(arg0, s32 *, 0x158) = 0;
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
            M2C_FIELD(arg0, s32 *, 0x180) = 0;
            M2C_FIELD((arg0 + 0x148), s32 *, 4) = 0;
            M2C_FIELD(arg0, s32 *, 0x148) = 0;
            M2C_FIELD(arg0, s64 *, 0x178) = temp_2;
            M2C_FIELD(arg0, s32 *, 0x168) = 0;
            M2C_FIELD(arg0, s32 *, 0x16C) = 0;
            M2C_FIELD(arg0, s32 *, 0x160) = 0;
            M2C_FIELD(arg0, s32 *, 0x184) = 0;
            if (M2C_FIELD(arg0, s32 *, 0x1B8) == 0) {
                var_3 = 0;
            }
            M2C_FIELD(&D_01192B80, s8 *, 0x40) = var_3;
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            D_01192BC8 = 1;
        }
    } else {
        OnMessage__5VIWndP5VIWndiii();
    }
}
