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

M2C_UNK AddTail__7VILListP7VILNode(void *, void *); /* extern */
M2C_UNK Create__17VIParticleEmitterP16VIParticleSystemP20VIParticleDefinition(void *, s32, s32); /* extern */
s64 GetTime__7VIScene(s32);                         /* extern */
s32 ParticleDefinition__16VIParticleSystemi(s32, s32); /* extern */
M2C_UNK __17VIParticleEmitter(void *);              /* extern */
M2C_UNK __18VISpellActiveEventP12VISpellEventP7VIScene(void *, void *, s32); /* extern */
void *__builtin_new(M2C_UNK);                       /* extern */

s32 NewCreateEmitter__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    s32 temp_16;
    void *temp_2;
    void *temp_2_2;

    temp_2 = __builtin_new(0xB8);
    if (temp_2 != NULL) {
        __18VISpellActiveEventP12VISpellEventP7VIScene(temp_2, arg1, M2C_FIELD(arg0, s32 *, 0x14));
    }
    M2C_FIELD(temp_2, s64 *, 0xB0) = GetTime__7VIScene(M2C_FIELD(arg0, s32 *, 0x14));
    temp_2_2 = __builtin_new(0x3E0);
    if (temp_2_2 != NULL) {
        __17VIParticleEmitter(temp_2_2);
    }
    M2C_FIELD(temp_2, void **, 0x78) = temp_2_2;
    temp_16 = M2C_FIELD(arg0, s32 *, 0x14) + 0x548;
    Create__17VIParticleEmitterP16VIParticleSystemP20VIParticleDefinition(M2C_FIELD(temp_2, void **, 0x78), temp_16, ParticleDefinition__16VIParticleSystemi(temp_16, M2C_FIELD(arg1, s32 *, 8)));
    AddTail__7VILListP7VILNode(arg0 + 0x4C, temp_2);
    M2C_FIELD(temp_2, f32 *, 0x9C) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 0xA0) = 0.0f;
    return 0;
}
