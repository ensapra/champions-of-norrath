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

s32 OrbitIn__12VIWalkCameraf(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x27C);
    sp18 = 0.0f;
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    if ((temp_3 == 1) || (temp_3 == 3)) {
        M2C_ERROR(/* unknown instruction: max.s $f0, $f12, $f0 */);
        M2C_FIELD(arg0, f32 *, 0x1D8) = (f32) (M2C_FIELD(arg0, f32 *, 0x1D8) + (M2C_FIELD(arg0, f32 *, 0x1F4) * -M2C_ERROR(/* unknown instruction: min.s $f0, $f0, $f3 */)));
    }
    return 0;
}
