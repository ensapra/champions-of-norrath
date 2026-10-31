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

s32 Process__18VISpellEventDriver(M2C_UNK *);       /* extern */
M2C_UNK Remove__7VILNode(M2C_UNK *);                /* extern */
M2C_UNK ___18VISpellEventDriver(M2C_UNK *, M2C_UNK); /* extern */

s32 Process__19VISpellEffectDriver(void *arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *var_16;
    M2C_UNK *var_17;

    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0x48);
    var_17 = *temp_2;
    var_16 = temp_2;
    if (var_17 != NULL) {
        do {
            if (Process__18VISpellEventDriver(var_16) == 0) {
                Remove__7VILNode(var_16);
                ___18VISpellEventDriver(var_16, 3);
            }
            var_16 = var_17;
            temp_2_2 = *var_16;
            var_17 = temp_2_2;
        } while (temp_2_2 != NULL);
    }
    return *M2C_FIELD(arg0, M2C_UNK **, 0x48) != NULL;
}
