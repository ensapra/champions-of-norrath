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

M2C_UNK DestroyMotif__22VIParticleDefinitionExP15VIParticleMotif(void *, s32); /* extern */
s32 FirstMotif__C22VIParticleDefinitionEx(void *);  /* extern */
s32 Material__8VIRasteri(s32, s32);                 /* extern */
M2C_UNK ReleaseMaterial__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */
M2C_UNK SetLayerTexture__10VIMaterialiiR8VIRasterR12VIDictionary(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void Destroy__20VIParticleDefinitionR8VIRasterR12VIDictionary(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x308);
    if (temp_3 != -1) {
        SetLayerTexture__10VIMaterialiiR8VIRasterR12VIDictionary(Material__8VIRasteri(arg1, temp_3), 0, -1, arg1, arg2);
        ReleaseMaterial__8VIRasteriR12VIDictionary(arg1, M2C_FIELD(arg0, s32 *, 0x308), arg2);
    }
loop_3:
    temp_2 = FirstMotif__C22VIParticleDefinitionEx(arg0);
    if (temp_2 != 0) {
        DestroyMotif__22VIParticleDefinitionExP15VIParticleMotif(arg0, temp_2);
        goto loop_3;
    }
}
