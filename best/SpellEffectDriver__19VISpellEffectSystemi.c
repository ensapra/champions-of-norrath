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

void *Playback__19VISpellEffectSystemi();           /* extern */

void *SpellEffectDriver__19VISpellEffectSystemi(void) {
    void *var_2;

    var_2 = Playback__19VISpellEffectSystemi();
    if (var_2 != NULL) {
        var_2 = M2C_FIELD(var_2, void **, 0x20);
    }
    return var_2;
}
