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

M2C_UNK RecomputeLightningPatches__12VIAtmosphere(void *); /* extern */
s32 rand();                                         /* extern */

void ResetLightning__12VIAtmosphere(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;

    temp_f0 = (f32) ((rand() * 0x83) & 0xFF);
    M2C_FIELD(arg0, f32 *, 0x1198) = 8.0f;
    M2C_ERROR(/* unknown instruction: max.s $f0, $f0, $f4 */);
    temp_f0_2 = M2C_ERROR(/* unknown instruction: min.s $f0, $f0, $f3 */);
    M2C_FIELD(arg0, f32 *, 0x11A8) = temp_f0_2;
    M2C_FIELD(arg0, f32 *, 0x119C) = (f32) (temp_f0_2 * 6.0f);
    M2C_FIELD(arg0, f32 *, 0x11A4) = (f32) (((f32) ((rand() * 0x83) & 0xFF) * 0.0039215684f * 0.59999996f) + 0.59999996f);
    RecomputeLightningPatches__12VIAtmosphere(arg0);
}
