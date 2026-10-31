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

s32 ParticleCount__C18VISpellActiveEvent(void *arg0) {
    s32 temp_2;
    s32 temp_4;
    s32 var_16;
    s32 var_2;

    var_16 = 0;
    temp_2 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_2 != 0) {
        var_16 = ParticleCount__C17VIParticleEmitter(temp_2);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x7C);
    var_2 = var_16;
    if (temp_4 != 0) {
        var_2 = var_16 + ParticleCount__C17VIParticleEmitter(temp_4);
    }
    return var_2;
}
