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

M2C_UNK SetCaretOffset__9VIWndEditi(void *, s32);   /* extern */
M2C_UNK str8to16__8VIStringPUsUiPCc(s32, s32, s32); /* extern */
s32 strlen16__8VIStringPCUs(s32);                   /* extern */

void SetText__9VIWndEditPCc(void *arg0, s32 arg1) {
    str8to16__8VIStringPUsUiPCc(M2C_FIELD(arg0, s32 *, 0x1A8), M2C_FIELD(arg0, s32 *, 0x1AC) * 2, arg1);
    SetCaretOffset__9VIWndEditi(arg0, strlen16__8VIStringPCUs(M2C_FIELD(arg0, s32 *, 0x1A8)));
}
