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

s32 CreateMaterial__8VIRasteri(s32, M2C_UNK);       /* extern */
M2C_UNK Init__10VIMateriali(s32, M2C_UNK);          /* extern */
s32 Material__8VIRasteri(s32, s32, M2C_UNK);        /* extern */
M2C_UNK SetBlendMode__20VIParticleDefinitionQ222VIParticleDefinitionEx9BLENDMODE(void *, s32); /* extern */
M2C_UNK SetDither__10VIMateriali(s32, M2C_UNK);     /* extern */
M2C_UNK SetLayerFillType__10VIMateriali18VIMaterialFillType(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetLayerModulate__10VIMaterialii(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetZTest__20VIParticleDefinitionb(void *, s32); /* extern */
M2C_UNK SetZWrite__20VIParticleDefinitionb(void *, s32); /* extern */

s32 Create__20VIParticleDefinitionR8VIRaster(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 var_2;

    var_2 = CreateMaterial__8VIRasteri(arg1, 0);
    M2C_FIELD(arg0, s32 *, 0x308) = var_2;
    if (var_2 != -1) {
        temp_2 = Material__8VIRasteri(arg1, var_2, -1);
        Init__10VIMateriali(temp_2, 1);
        SetLayerFillType__10VIMateriali18VIMaterialFillType(temp_2, 0, 0);
        SetLayerModulate__10VIMaterialii(temp_2, 0, 1);
        SetDither__10VIMateriali(temp_2, 0);
        M2C_FIELD(arg0, s32 *, 0x304) = arg1;
        SetBlendMode__20VIParticleDefinitionQ222VIParticleDefinitionEx9BLENDMODE(arg0, M2C_FIELD(arg0, s32 *, 0x2EC));
        SetZWrite__20VIParticleDefinitionb(arg0, M2C_FIELD(arg0, s32 *, 0x2F0));
        SetZTest__20VIParticleDefinitionb(arg0, M2C_FIELD(arg0, s32 *, 0x2F4));
        var_2 = 0;
    }
    return var_2;
}
