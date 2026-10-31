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

s32 SwimUp__13VIWalkControlf(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    void *temp_3;

    temp_3 = arg0 + 0xE0;
    if (M2C_FIELD(arg0, s64 *, 0xF8) & 0x18FC) {
        M2C_ERROR(/* unknown instruction: max.s $f12, $f12, $f0 */);
        sp4 = 1.0f;
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(arg0, f32 *, 0xE0);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
        sp8 = 0.0f;
        sp0 = 0.0f;
        M2C_FIELD(temp_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 0x12C) * M2C_ERROR(/* unknown instruction: min.s $f12, $f12, $f1 */)));
    }
    return 0;
}
