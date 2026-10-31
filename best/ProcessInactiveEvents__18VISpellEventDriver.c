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

s32 ParticleCount__C17VIParticleEmitter(s32);       /* extern */
M2C_UNK ProcessCreateEmitter__18VISpellEventDriverP18VISpellActiveEventb(void *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK ReleaseActor__7VIScenei(s32, s32);          /* extern */
M2C_UNK Remove__7VILNode(M2C_UNK *);                /* extern */
M2C_UNK ___14VIMotifBlender(s32, M2C_UNK);          /* extern */
M2C_UNK ___17VIParticleEmitter(s32, M2C_UNK);       /* extern */
M2C_UNK __builtin_delete(M2C_UNK *);                /* extern */

s32 ProcessInactiveEvents__18VISpellEventDriver(void *arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *var_16;
    M2C_UNK *var_18;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_5;
    s32 temp_5_2;

    var_16 = M2C_FIELD(arg0, M2C_UNK **, 0x58);
    var_18 = *var_16;
    if (var_18 != NULL) {
        do {
            temp_4 = M2C_FIELD(var_16, s32 *, 0x78);
            if ((temp_4 != 0) && (ParticleCount__C17VIParticleEmitter(temp_4) > 0)) {
                if (*M2C_FIELD(var_16, s32 **, 0x74) == 3) {
                    ProcessCreateEmitter__18VISpellEventDriverP18VISpellActiveEventb(arg0, var_16, 0);
                }
            } else {
                Remove__7VILNode(var_16);
                if (var_16 != NULL) {
                    temp_5 = M2C_FIELD(var_16, s32 *, 0x8C);
                    if (temp_5 != -1) {
                        ReleaseActor__7VIScenei(M2C_FIELD(var_16, s32 *, 0x10), temp_5);
                    }
                    temp_5_2 = M2C_FIELD(var_16, s32 *, 0x90);
                    if (temp_5_2 != -1) {
                        ReleaseActor__7VIScenei(M2C_FIELD(var_16, s32 *, 0x10), temp_5_2);
                    }
                    temp_4_2 = M2C_FIELD(var_16, s32 *, 0x78);
                    if (temp_4_2 != 0) {
                        ___17VIParticleEmitter(temp_4_2, 3);
                    }
                    temp_4_3 = M2C_FIELD(var_16, s32 *, 0x7C);
                    if (temp_4_3 != 0) {
                        ___17VIParticleEmitter(temp_4_3, 3);
                    }
                    temp_4_4 = M2C_FIELD(var_16, s32 *, 0x80);
                    if (temp_4_4 != 0) {
                        ___14VIMotifBlender(temp_4_4, 3);
                    }
                    __builtin_delete(var_16);
                }
            }
            var_16 = var_18;
            temp_2 = *var_16;
            var_18 = temp_2;
        } while (temp_2 != NULL);
    }
    return 0;
}
