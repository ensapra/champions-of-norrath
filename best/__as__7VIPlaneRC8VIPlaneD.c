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

M2C_UNK __as__7VIVect3RC8VIVect3D();                /* extern */
f32 dptofp(s64);                                    /* extern */

void *__as__7VIPlaneRC8VIPlaneD(void *arg0, void *arg1) {
    __as__7VIVect3RC8VIVect3D();
    M2C_FIELD(arg0, f32 *, 0xC) = dptofp(M2C_FIELD(arg1, s64 *, 0x18));
    return arg0;
}
