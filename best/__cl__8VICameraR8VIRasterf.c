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

M2C_UNK Init__8VICameraR8VIRasterRC7VIVect3T2ffff(s32, void *, f32, f32, f32, f32); /* extern */

void __cl__8VICameraR8VIRasterf(void *arg0, f32 fparg0) {
    Init__8VICameraR8VIRasterRC7VIVect3T2ffff(arg0 + 0x1C, arg0 + 8, M2C_FIELD(arg0, f32 *, 0x14), M2C_FIELD(arg0, f32 *, 0x18), M2C_FIELD(arg0, f32 *, 0), fparg0);
}
