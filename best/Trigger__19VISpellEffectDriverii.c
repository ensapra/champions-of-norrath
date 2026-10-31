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

M2C_UNK AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(void *, s32, s32); /* extern */
s64 GetTime__7VIScene(s32);                         /* extern */

s32 Trigger__19VISpellEffectDriverii(void *arg0, s32 arg1, s32 arg2) {
    s32 var_2;
    s64 temp_2;

    var_2 = -1;
    if ((*M2C_FIELD(arg0, s32 **, 0x48) == 0) && (M2C_FIELD(arg0, s32 *, 8) != -1)) {
        temp_2 = GetTime__7VIScene(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x40) = arg1;
        M2C_FIELD(arg0, s32 *, 0x44) = arg2;
        M2C_FIELD(arg0, s64 *, 0x38) = temp_2;
        AddSpellEventDriver__19VISpellEffectDriverP16VISpellEventListi(arg0, M2C_FIELD(arg0, s32 *, 0) + 0xC, M2C_FIELD(arg0, s32 *, 8));
        var_2 = 0;
    }
    return var_2;
}
