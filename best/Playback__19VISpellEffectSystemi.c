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

void *Playback__19VISpellEffectSystemi(s32 arg0, s32 arg1) {
    void *temp_3;
    void *var_2;

    temp_3 = M2C_FIELD((arg0 + (((s32) (arg1 & 0xFF) % 24) * 4)), void **, 4);
    var_2 = temp_3;
    if ((temp_3 == NULL) || (M2C_FIELD(temp_3, s32 *, 0x1C) != arg1)) {
        var_2 = NULL;
    }
    return var_2;
}
