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

s32 Allocate__t7VIArray1Zc(s32 *);                  /* extern */
s32 Clear__t7VIArray1Zc();                          /* extern */

s32 Init__t7VIArray1Zci(s32 *arg0, s32 arg1) {
    if (Clear__t7VIArray1Zc() < 0) {
        return -1;
    }
    *arg0 = arg1;
    return (Allocate__t7VIArray1Zc(arg0) >= 0) ? 0 : -1;
}
