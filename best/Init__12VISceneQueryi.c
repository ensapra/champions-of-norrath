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

s32 Init__t10VIMultiMap2ZfZii(void *, s32);         /* extern */
s32 Init__t8VIVector1Zii(s32);                      /* extern */

s32 Init__12VISceneQueryi(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    if (Init__t8VIVector1Zii(arg0 + 4) < 0) {
        return -1;
    }
    return (Init__t10VIMultiMap2ZfZii(arg0 + 0x10, *arg0 + 1) >= 0) ? 0 : -1;
}
