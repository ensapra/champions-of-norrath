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

s32 ClampScale__19VIStreamAudioSpriteR10VIMatrix44(void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f3;
    f32 temp_f3_2;

    sp8 = 0.0f;
    sp4 = 0.0f;
    sp0 = M2C_ERROR(/* unknown instruction: rsqrt.s $f3, $f7, $f3 */);
    sp4 = M2C_ERROR(/* unknown instruction: rsqrt.s $f7, $f7, $f2 */);
    sp8 = M2C_ERROR(/* unknown instruction: rsqrt.s $f0, $f7, $f0 */);
    if (sp0 < 0.25f) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * sp0 * 4.0f);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * sp0 * 4.0f);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) * sp0 * 4.0f);
    }
    temp_f3 = sp4;
    if (temp_f3 < 0.25f) {
        M2C_FIELD(arg1, f32 *, 0x10) = (f32) (M2C_FIELD(arg1, f32 *, 0x10) * temp_f3 * 4.0f);
        M2C_FIELD(arg1, f32 *, 0x14) = (f32) (M2C_FIELD(arg1, f32 *, 0x14) * temp_f3 * 4.0f);
        M2C_FIELD(arg1, f32 *, 0x18) = (f32) (M2C_FIELD(arg1, f32 *, 0x18) * temp_f3 * 4.0f);
    }
    temp_f3_2 = sp8;
    if (temp_f3_2 < 0.25f) {
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) (M2C_FIELD(arg1, f32 *, 0x20) * temp_f3_2 * 4.0f);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) (M2C_FIELD(arg1, f32 *, 0x24) * temp_f3_2 * 4.0f);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) (M2C_FIELD(arg1, f32 *, 0x28) * temp_f3_2 * 4.0f);
    }
    return 0;
}
