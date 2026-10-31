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

void *FirstPlayback__19VISpellEffectSystem();       /* extern */
void *NextPlayback__19VISpellEffectSystemPQ219VISpellEffectSystem16VISpellEffectPbi(void *, void *); /* extern */
M2C_UNK ReleaseAllSpellEffects__19VISpellEffectSystemR12VIDictionary(void *, s32); /* extern */
M2C_UNK Stop__19VISpellEffectSystemi(void *, s32);  /* extern */

s32 Clear__19VISpellEffectSystem(void *arg0) {
    s32 temp_5;
    void *var_16;

    if (M2C_FIELD(arg0, s32 *, 0x444) != 0) {
        var_16 = FirstPlayback__19VISpellEffectSystem();
        if (var_16 != NULL) {
            do {
                temp_5 = M2C_FIELD(var_16, s32 *, 0x1C);
                var_16 = NextPlayback__19VISpellEffectSystemPQ219VISpellEffectSystem16VISpellEffectPbi(arg0, var_16);
                Stop__19VISpellEffectSystemi(arg0, temp_5);
            } while (var_16 != NULL);
        }
        ReleaseAllSpellEffects__19VISpellEffectSystemR12VIDictionary(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x4B98));
        M2C_FIELD(arg0, s32 *, 0x444) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x450) = 0;
    return 0;
}
