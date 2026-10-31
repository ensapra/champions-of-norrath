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

s32 OrbitRight__12VIWalkCameraf(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f12;
    f32 temp_f1;
    s32 temp_5;
    void *temp_3;

    temp_5 = M2C_FIELD(arg0, s32 *, 0x27C);
    sp0 = 0.0f;
    sp4 = 0.0f;
    temp_3 = arg0 + 0x1C4;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    if ((temp_5 == 1) || (temp_5 == 3)) {
        sp10 = 1.0f;
        sp18 = 0.0f;
        M2C_ERROR(/* unknown instruction: max.s $f12, $f12, $f0 */);
        sp14 = 0.0f;
        temp_f12 = M2C_ERROR(/* unknown instruction: min.s $f12, $f12, $f1 */);
        temp_f1 = sp0 + (sp10 * M2C_FIELD(arg0, f32 *, 0x1F0));
        sp0 = temp_f1;
        M2C_FIELD(temp_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3, f32 *, 4) + (sp4 * temp_f12));
        M2C_FIELD(temp_3, f32 *, 8) = (f32) (M2C_FIELD(temp_3, f32 *, 8) + (sp8 * temp_f12));
        M2C_FIELD(arg0, f32 *, 0x1C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C4) + (temp_f1 * temp_f12));
    }
    return 0;
}
