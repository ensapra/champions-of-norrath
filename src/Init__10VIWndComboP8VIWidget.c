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

s32 Selection__C8VIWidget(s32);                     /* extern */
M2C_UNK SetListSelection__8VIWidgeti(s32, s32);     /* extern */

s32 Init__10VIWndComboP8VIWidget(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = Selection__C8VIWidget(arg1);
    SetListSelection__8VIWidgeti(M2C_FIELD(arg0, s32 *, 0x28), Selection__C8VIWidget(M2C_FIELD(arg0, s32 *, 0x28)));
    return 0;
}
