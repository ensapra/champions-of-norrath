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
void *NextPlayback__19VISpellEffectSystemPQ219VISpellEffectSystem16VISpellEffectPbi(s32, void *); /* extern */
M2C_UNK NotifyActorWasDestroyed__19VISpellEffectDriveri(s32, s32); /* extern */

void NotifyActorWasDestroyed__19VISpellEffectSystemi(s32 arg0, s32 arg1) {
    s32 temp_2;
    void *var_16;

    var_16 = FirstPlayback__19VISpellEffectSystem();
    if (var_16 != NULL) {
        do {
            temp_2 = M2C_FIELD(var_16, s32 *, 0x20);
            if (temp_2 != 0) {
                NotifyActorWasDestroyed__19VISpellEffectDriveri(temp_2, arg1);
            }
            var_16 = NextPlayback__19VISpellEffectSystemPQ219VISpellEffectSystem16VISpellEffectPbi(arg0, var_16);
        } while (var_16 != NULL);
    }
}
