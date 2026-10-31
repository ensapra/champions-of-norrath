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

M2C_UNK ReleaseParticleDefinition__16VIParticleSystemiR12VIDictionary(void *, s32, s32); /* extern */
M2C_UNK ReleaseSprite__7VIScenei(void *, s32, s32); /* extern */
M2C_UNK __builtin_vec_delete(void *);               /* extern */

void Destroy__16VISpellEventList(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_17;
    s32 var_18;
    void *temp_2_4;
    void *temp_4;
    void *var_3;

    temp_4 = M2C_FIELD(arg0, void **, 8);
    if (temp_4 != NULL) {
        var_18 = 0;
        if (M2C_FIELD(arg0, s32 *, 4) > 0) {
            var_17 = 0;
            var_3 = temp_4;
            do {
                temp_2 = M2C_FIELD(var_3, s32 *, 0);
                var_17 += 0x2C;
                switch (temp_2) {                   /* irregular */
                case 9:
                    temp_2_2 = M2C_FIELD(var_3, s32 *, 8);
                    if (temp_2_2 != -1) {
                        ReleaseSprite__7VIScenei(M2C_FIELD(arg0, void **, 0), temp_2_2, M2C_FIELD(arg0, s32 *, 4));
                    }
                    break;
                case 3:
                    temp_2_3 = M2C_FIELD(var_3, s32 *, 8);
                    if (temp_2_3 != -1) {
                        temp_2_4 = M2C_FIELD(arg0, void **, 0);
                        ReleaseParticleDefinition__16VIParticleSystemiR12VIDictionary(temp_2_4 + 0x548, temp_2_3, M2C_FIELD(temp_2_4, s32 *, 0x4B98));
                    }
                    break;
                }
                var_18 += 1;
                var_3 = M2C_FIELD(arg0, void **, 8) + var_17;
            } while (var_18 < M2C_FIELD(arg0, s32 *, 4));
        }
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            __builtin_vec_delete(M2C_FIELD(arg0, void **, 8));
        }
        M2C_FIELD(arg0, void **, 8) = NULL;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, void **, 0) = NULL;
}
