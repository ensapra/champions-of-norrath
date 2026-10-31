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

M2C_UNK OnMessage__5VIWndP5VIWndiii(s32);           /* extern */
s32 Selection__C8VIWidget(s32, s32);                /* extern */
M2C_UNK SetListSelection__8VIWidgeti(s32, s32);     /* extern */

void OnMessage__10VIWndComboP5VIWndiii(s32 arg0, s32 arg2, void *arg4) {
    s32 temp_16;

    if (arg2 == 0x127) {
        if (arg4 == arg0) {
            temp_16 = M2C_FIELD(arg4, s32 *, 0x28);
            SetListSelection__8VIWidgeti(temp_16, Selection__C8VIWidget(temp_16, arg0));
        }
    } else {
        OnMessage__5VIWndP5VIWndiii(arg0);
    }
}
