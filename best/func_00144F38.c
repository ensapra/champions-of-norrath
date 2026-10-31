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

extern M2C_UNK Update__19VIRadialFloraSystemRC7VIVect3;

void func_00144F38(s32 arg0, s32 arg1) {
    M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x388) = arg0;
    M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x374) = arg1;
    M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x378) = 0;
    M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x37C) = 0;
    M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x380) = 0;
    M2C_FIELD(&Update__19VIRadialFloraSystemRC7VIVect3, s32 *, 0x384) = 0;
}
