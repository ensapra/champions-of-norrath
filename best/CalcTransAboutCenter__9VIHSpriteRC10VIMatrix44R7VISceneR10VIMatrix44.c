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

s32 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK Mul__10VIMatrix44RC10VIMatrix44T1(s32, void *, s32); /* extern */
M2C_UNK UpdateCenterTransform__9VIHSpriteR7VIScene(void *, s32); /* extern */

s32 CalcTransAboutCenter__9VIHSpriteRC10VIMatrix44R7VISceneR10VIMatrix44(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (GetTime__7VIScene(arg2) != M2C_FIELD(arg0, s64 *, 0xC0)) {
        UpdateCenterTransform__9VIHSpriteR7VIScene(arg0, arg2);
    }
    Mul__10VIMatrix44RC10VIMatrix44T1(arg3, arg0 + 0x140, arg1);
    return 0;
}
