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

f32 CalcFarPlane__7VISceneRC7VIVect3(s32);          /* extern */
M2C_UNK __cl__8VICameraR8VIRasterf(s32, s32, f32);  /* extern */

s32 SetFarPlane__7VISceneR8VICamera(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x4B9C) != 0) {
        __cl__8VICameraR8VIRasterf(arg1, M2C_FIELD(arg0, s32 *, 0x4B9C), CalcFarPlane__7VISceneRC7VIVect3(arg1 + 0x1C));
    }
    return 0;
}
