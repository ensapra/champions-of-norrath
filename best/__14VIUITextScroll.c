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

M2C_UNK __10VIUIWindow();                           /* extern */

void __14VIUITextScroll(void *arg0) {
    __10VIUIWindow();
    M2C_FIELD(arg0, s32 *, 0x17C) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x184) = 1;
    M2C_FIELD(arg0, s32 *, 0x170) = 1;
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x178) = 1;
    M2C_FIELD(arg0, s32 *, 0x180) = 0;
}
