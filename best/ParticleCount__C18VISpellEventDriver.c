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

s32 ParticleCount__C18VISpellEventDriver(void *arg0) {
    M2C_UNK *var_16;
    M2C_UNK *var_16_2;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_17;
    s32 var_17_2;
    s32 var_17_3;
    s32 var_18;
    s32 var_2;
    void *temp_16;

    var_16 = M2C_FIELD(arg0, s32 **, 0x4C);
    var_18 = 0;
    if (*var_16 != 0) {
        do {
            temp_2 = M2C_FIELD(var_16, s32 *, 0x78);
            var_17 = 0;
            if (temp_2 != 0) {
                var_17 = ParticleCount__C17VIParticleEmitter(temp_2);
            }
            temp_2_2 = M2C_FIELD(var_16, s32 *, 0x7C);
            if (temp_2_2 != 0) {
                var_17 += ParticleCount__C17VIParticleEmitter(temp_2_2);
            }
            var_16 = M2C_FIELD(var_16, M2C_UNK **, 0);
            var_18 += var_17;
        } while (*var_16 != 0);
    }
    var_16_2 = M2C_FIELD(arg0, s32 **, 0x58);
    if (*var_16_2 != 0) {
        do {
            temp_2_3 = M2C_FIELD(var_16_2, s32 *, 0x78);
            var_17_2 = 0;
            if (temp_2_3 != 0) {
                var_17_2 = ParticleCount__C17VIParticleEmitter(temp_2_3);
            }
            temp_2_4 = M2C_FIELD(var_16_2, s32 *, 0x7C);
            if (temp_2_4 != 0) {
                var_17_2 += ParticleCount__C17VIParticleEmitter(temp_2_4);
            }
            var_16_2 = M2C_FIELD(var_16_2, M2C_UNK **, 0);
            var_18 += var_17_2;
        } while (*var_16_2 != 0);
    }
    temp_16 = M2C_FIELD(arg0, void **, 0x24);
    var_2 = var_18;
    if (temp_16 != NULL) {
        temp_4 = M2C_FIELD(temp_16, s32 *, 0x78);
        var_17_3 = 0;
        if (temp_4 != 0) {
            var_17_3 = ParticleCount__C17VIParticleEmitter(temp_4);
        }
        temp_4_2 = M2C_FIELD(temp_16, s32 *, 0x7C);
        if (temp_4_2 != 0) {
            var_17_3 += ParticleCount__C17VIParticleEmitter(temp_4_2);
        }
        var_2 = var_18 + var_17_3;
    }
    return var_2;
}
