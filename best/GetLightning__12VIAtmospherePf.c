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

s32 GetLightning__12VIAtmospherePf(void *arg0, f32 *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x5EC);
    if (temp_3 == 1) {
        if (M2C_FIELD(arg0, s32 *, 0x5F0) == temp_3) {
            temp_f22 = M2C_FIELD(arg0, f32 *, 0x11A0);
            if (temp_f22 == 0.0f) {
                M2C_FIELD(arg0, f32 *, 0xF48) = 0.0f;
                goto block_21;
            }
            temp_f1 = temp_f22 + M2C_FIELD(arg0, f32 *, 0x4A8);
            M2C_FIELD(arg0, f32 *, 0x11A0) = temp_f1;
            if (temp_f1 < 0.19999999f) {
                temp_16 = rand();
                rand();
            } else {
                temp_f20 = (temp_f1 - 0.19999999f) / (M2C_FIELD(arg0, f32 *, 0x11A4) - 0.19999999f);
                temp_16_2 = rand();
                rand();
                if ((rand() & 0xF) < 2) {
                    rand();
                }
            }
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x11A4);
            if (temp_f1_2 <= M2C_FIELD(arg0, f32 *, 0x11A0)) {
                M2C_FIELD(arg0, f32 *, 0x11A0) = 0.0f;
            }
            temp_f1_3 = temp_f1_2 * 0.5f;
            if ((temp_f22 <= temp_f1_3) && (temp_f1_3 < M2C_FIELD(arg0, f32 *, 0x11A0)) && ((rand() & 0xF) < 6)) {
                RecomputeLightningPatches__12VIAtmosphere(arg0);
            }
            M2C_ERROR(/* unknown instruction: max.s $f20, $f20, $f2 */);
            temp_f20_2 = M2C_ERROR(/* unknown instruction: min.s $f20, $f20, $f1 */) * (1.0f - M2C_FIELD(arg0, f32 *, 0x11A8)) * 0.79999995f;
            M2C_FIELD(arg0, f32 *, 0xF48) = temp_f20_2;
            *arg1 = temp_f20_2;
            return 1;
        }
        goto block_4;
    }
block_4:
    M2C_FIELD(arg0, f32 *, 0x11A0) = 0.0f;
block_21:
    return 0;
}
