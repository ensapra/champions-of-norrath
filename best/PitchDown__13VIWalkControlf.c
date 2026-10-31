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

s32 PitchDown__13VIWalkControlf(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f8;
    f32 temp_f8_2;
    void *temp_3;
    void *temp_5;

    temp_5 = arg0 + 0xE0;
    sp0 = 0.0f;
    temp_3 = arg0 + 0xEC;
    sp4 = 0.0f;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    if (!(M2C_FIELD(arg0, s32 *, 0x180) & 0x10A8)) {
        temp_f8 = M2C_FIELD(arg0, f32 *, 0x128);
        M2C_ERROR(/* unknown instruction: max.s $f12, $f12, $f0 */);
        temp_f12 = M2C_ERROR(/* unknown instruction: min.s $f12, $f12, $f1 */);
        sp14 = 1.0f;
        temp_f0 = sp4 + temp_f8;
        temp_f3 = sp0 + (0.0f * temp_f8);
        sp4 = temp_f0;
        sp0 = temp_f3;
        M2C_FIELD(temp_3, f32 *, 8) = (f32) (M2C_FIELD(temp_3, f32 *, 8) + (sp8 * temp_f12));
        M2C_FIELD(temp_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3, f32 *, 4) + (temp_f0 * temp_f12));
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + (temp_f3 * temp_f12));
    } else {
        sp10 = 0.0f;
        M2C_ERROR(/* unknown instruction: max.s $f12, $f12, $f2 */);
        temp_f8_2 = M2C_FIELD(arg0, f32 *, 0x12C);
        sp18 = 0.0f;
        sp14 = -1.0f;
        temp_f12_2 = M2C_ERROR(/* unknown instruction: min.s $f12, $f12, $f0 */);
        temp_f0_2 = sp4 - temp_f8_2;
        temp_f3_2 = sp0 + (sp10 * temp_f8_2);
        sp4 = temp_f0_2;
        sp0 = temp_f3_2;
        M2C_FIELD(temp_5, f32 *, 8) = (f32) (M2C_FIELD(temp_5, f32 *, 8) + (sp8 * temp_f12_2));
        M2C_FIELD(temp_5, f32 *, 4) = (f32) (M2C_FIELD(temp_5, f32 *, 4) + (temp_f0_2 * temp_f12_2));
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + (temp_f3_2 * temp_f12_2));
    }
    return 0;
}
