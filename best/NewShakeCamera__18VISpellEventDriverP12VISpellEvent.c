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

M2C_UNK ShakeTerp__14VICameraEffectff(s32, f32, f32); /* extern */
M2C_UNK Shake__14VICameraEffectQ214VICameraEffect5SPEEDf(s32, M2C_UNK, void *, void *, M2C_UNK, f32); /* extern */

s32 NewShakeCamera__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_16;
    s32 temp_2;
    u8 temp_5;
    void *temp_6;

    temp_6 = M2C_FIELD(arg0, void **, 0x10);
    if (M2C_FIELD(temp_6, s32 *, 0x60) == M2C_FIELD(arg0, s32 *, 0x18)) {
        temp_16 = M2C_FIELD(temp_6, s32 *, 0x5C);
        if (temp_16 != 0) {
            M2C_FIELD(temp_6, s32 *, 0x64) = 1;
            temp_f21 = M2C_FIELD(arg1, f32 *, 0x1C);
            temp_2 = M2C_FIELD(arg1, s32 *, 4);
            temp_5 = M2C_FIELD(arg1, u8 *, 8);
            temp_f12 = M2C_FIELD(arg1, f32 *, 0x14);
            temp_f20 = M2C_FIELD(arg1, f32 *, 0x18);
            if (temp_2 & 0x10000) {
                switch (temp_5) {                   /* irregular */
                case 0:
                    Shake__14VICameraEffectQ214VICameraEffect5SPEEDf(temp_16, 0, temp_6, arg1, 1, 0.0f);
                    break;
                case 1:
                    Shake__14VICameraEffectQ214VICameraEffect5SPEEDf(temp_16, 1, temp_6, arg1, 1, temp_f12);
                    break;
                case 2:
                    Shake__14VICameraEffectQ214VICameraEffect5SPEEDf(temp_16, 2, temp_6, arg1, 1, temp_f12);
                    break;
                case 3:
                    Shake__14VICameraEffectQ214VICameraEffect5SPEEDf(temp_16, 3, temp_6, arg1, 1, temp_f12);
                    break;
                }
            }
            if (temp_2 & 0x20000) {
                ShakeTerp__14VICameraEffectff(temp_16, temp_f20, temp_f21);
            }
        }
    }
    return 0;
}
