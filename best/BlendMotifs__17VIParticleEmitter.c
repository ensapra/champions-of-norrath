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

M2C_UNK BlendMotifs__22VIParticleDefinitionExP20VIParticleAttributes(void *, void *); /* extern */
void *FirstMotif__C22VIParticleDefinitionEx(void *); /* extern */
void *NextMotif__C22VIParticleDefinitionExP15VIParticleMotif(void *, void *); /* extern */
M2C_UNK RecomputeStaticBBox__17VIParticleEmitter(void *); /* extern */

void BlendMotifs__17VIParticleEmitter(void *arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *var_3;
    M2C_UNK *var_4;
    s32 temp_17;
    s32 var_17;
    s32 var_18;
    void *temp_2_2;
    void *temp_4;
    void *var_2;

    var_17 = 0;
    var_18 = 0;
    var_2 = FirstMotif__C22VIParticleDefinitionEx(M2C_FIELD(arg0, void **, 0x54));
    if (var_2 != NULL) {
        M2C_FIELD(var_2, s32 *, 0x2C8) = 0;
loop_2:
        var_2 = NextMotif__C22VIParticleDefinitionExP15VIParticleMotif(M2C_FIELD(arg0, void **, 0x54), var_2);
        if (var_2 != NULL) {
            M2C_FIELD(var_2, s32 *, 0x2C8) = 0;
            goto loop_2;
        }
    }
    var_3 = M2C_FIELD(arg0, M2C_UNK **, 0xB0);
    var_4 = *var_3;
    if (var_4 != NULL) {
        do {
            if (M2C_FIELD(var_3, s32 *, 0x18) != 0) {
                M2C_FIELD(var_3, s32 *, 0x18) = 0;
                var_18 = 1;
            }
            temp_2_2 = M2C_FIELD(var_3, void **, 0x10);
            M2C_FIELD(temp_2_2, f32 *, 0x2C8) = (f32) M2C_FIELD(var_3, f32 *, 0x14);
            var_3 = var_4;
            if (M2C_FIELD(var_3, f32 *, 0x14) != 0.0f) {
                var_17 += M2C_FIELD(temp_2_2, s32 *, 0x2CC);
            }
            temp_2 = *var_3;
            var_4 = temp_2;
        } while (temp_2 != NULL);
    }
    temp_4 = M2C_FIELD(arg0, void **, 0x54);
    temp_17 = var_17 + M2C_FIELD(temp_4, s32 *, 0x2CC);
    if ((var_18 != 0) || (temp_17 != M2C_FIELD(arg0, s32 *, 0x390))) {
        BlendMotifs__22VIParticleDefinitionExP20VIParticleAttributes(temp_4, arg0 + 0xBC);
        RecomputeStaticBBox__17VIParticleEmitter(arg0);
        M2C_FIELD(arg0, s32 *, 0x390) = temp_17;
    }
}
