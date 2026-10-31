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

void *AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(void *, s32, s32); /* extern */
s64 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK __18VISpellActiveEventP12VISpellEventP7VIScene(void *, void *, s32); /* extern */
void *__builtin_new(M2C_UNK);                       /* extern */

s32 NewPlayTargetLightning__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    s32 var_19;
    s32 var_21;
    void *temp_2;
    void *temp_4;
    void *var_17;

    var_19 = 0;
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x10) + 1) > 0) {
        var_21 = 0xC;
        do {
            var_17 = NULL;
            if ((M2C_FIELD(arg1, s32 *, 4) & 1) && (var_19 == 0)) {
                var_17 = AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(M2C_FIELD(arg0, void **, 0x10), M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0) + 0x18, M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0xC));
            }
            if ((M2C_FIELD(arg1, s32 *, 4) & 2) && (var_19 != 0)) {
                temp_4 = M2C_FIELD(arg0, void **, 0x10);
                var_17 = AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(temp_4, M2C_FIELD(temp_4, s32 *, 0) + 0x24, M2C_FIELD((temp_4 + var_21), s32 *, 4));
            }
            if ((M2C_FIELD(arg0, s32 *, 0x18) != -1) && (var_17 != NULL) && (M2C_FIELD(var_17, void **, 0x30) == NULL)) {
                temp_2 = __builtin_new(0xB8);
                if (temp_2 != NULL) {
                    __18VISpellActiveEventP12VISpellEventP7VIScene(temp_2, arg1, M2C_FIELD(arg0, s32 *, 0x14));
                }
                M2C_FIELD(var_17, void **, 0x30) = temp_2;
                M2C_FIELD(temp_2, s32 *, 0x8C) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
                M2C_FIELD(M2C_FIELD(var_17, void **, 0x30), s64 *, 0xB0) = GetTime__7VIScene(M2C_FIELD(arg0, s32 *, 0x14));
            }
            var_19 += 1;
            var_21 += 4;
        } while (var_19 < (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x10) + 1));
    }
    return 0;
}
