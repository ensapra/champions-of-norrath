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

s32 SetOrbitDistance__12VIWalkCameraf(void *arg0) {
    f32 temp_f12;

    M2C_ERROR(/* unknown instruction: max.s $f12, $f12, $f0 */);
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    temp_f12 = M2C_ERROR(/* unknown instruction: min.s $f12, $f12, $f1 */);
    M2C_FIELD(arg0, s32 *, 0x1D4) = 0;
    M2C_FIELD(arg0, f32 *, 0x228) = temp_f12;
    M2C_FIELD(arg0, f32 *, 0x1D0) = temp_f12;
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
    return 0;
}
