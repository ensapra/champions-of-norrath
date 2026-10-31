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

M2C_UNK DeletePlayback__19VISpellEffectSystemPQ219VISpellEffectSystem16VISpellEffectPbi(s32, void *, u8); /* extern */
void *Playback__19VISpellEffectSystemi();           /* extern */
M2C_UNK ___19VISpellEffectDriver(s32, M2C_UNK);     /* extern */

void Stop__19VISpellEffectSystemi(s32 arg0) {
    s32 temp_2_2;
    u8 temp_6;
    void *temp_2;

    temp_2 = Playback__19VISpellEffectSystemi();
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, s32 *, 0x20);
        if (temp_2_2 != 0) {
            ___19VISpellEffectDriver(temp_2_2, 3);
        }
        temp_6 = M2C_FIELD(temp_2, u8 *, 0x1C);
        M2C_FIELD((arg0 + (((s32) temp_6 % 24) * 4)), s32 *, 4) = 0;
        DeletePlayback__19VISpellEffectSystemPQ219VISpellEffectSystem16VISpellEffectPbi(arg0, temp_2, temp_6);
    }
}
