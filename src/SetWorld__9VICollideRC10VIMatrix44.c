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

M2C_UNK InvertAffine__10VIMatrix44RC10VIMatrix44(s32, s32); /* extern */
M2C_UNK sceVu0CopyMatrix(s32);                      /* extern */

s32 SetWorld__9VICollideRC10VIMatrix44(s32 arg0) {
    s32 temp_17;

    temp_17 = arg0 + 0x10;
    sceVu0CopyMatrix(temp_17);
    InvertAffine__10VIMatrix44RC10VIMatrix44(arg0 + 0x50, temp_17);
    return 0;
}
