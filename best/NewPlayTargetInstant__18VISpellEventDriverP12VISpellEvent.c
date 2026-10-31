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

M2C_UNK AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(s32 *, s32, s32); /* extern */

s32 NewPlayTargetInstant__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    s32 *temp_2;
    s32 *temp_4;
    s32 *temp_4_2;
    s32 *var_2;
    s32 var_16;
    s32 var_17;

    if (M2C_FIELD(arg1, s32 *, 4) & 1) {
        temp_2 = M2C_FIELD(arg0, s32 **, 0x10);
        AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(temp_2, M2C_FIELD(temp_2, s32 *, 0) + 0x18, M2C_FIELD(temp_2, s32 *, 0xC));
    }
    if (M2C_FIELD(arg1, s32 *, 4) & 2) {
        temp_4 = M2C_FIELD(arg0, s32 **, 0x10);
        var_17 = 0;
        if (M2C_FIELD(temp_4, s32 *, 0x10) > 0) {
            var_16 = 0x10;
            var_2 = temp_4 + 0x10;
            do {
                var_16 += 4;
                var_17 += 1;
                AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(M2C_FIELD(arg0, s32 **, 0x10), M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x10), s32 *, 0) + 0x24, M2C_FIELD(var_2, s32 *, 4));
                temp_4_2 = M2C_FIELD(arg0, s32 **, 0x10);
                var_2 = temp_4_2 + var_16;
            } while (var_17 < M2C_FIELD(temp_4_2, s32 *, 0x10));
        }
    }
    return 0;
}
