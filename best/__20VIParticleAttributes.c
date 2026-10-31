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

M2C_UNK SetBirthrateVar__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetBirthrate__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetDeltaSpawn__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetEndColorVar__20VIParticleAttributesRC10VIColor32F(void *, f32 *); /* extern */
M2C_UNK SetEndSizeVar__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetEndSize__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetFriction__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetGradientColor__20VIParticleAttributesiRC10VIColor32F(void *, s32, f32 *); /* extern */
M2C_UNK SetGradientRepeat__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetGravityOn__20VIParticleAttributesi(void *, M2C_UNK); /* extern */
M2C_UNK SetInheritVelocity__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetLifespanVar__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetLifespan__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetNozzleAxis__20VIParticleAttributesRC7VIVect3(void *, f32 *); /* extern */
M2C_UNK SetNozzleHprVar__20VIParticleAttributesRC7VIVect3(void *, f32 *); /* extern */
M2C_UNK SetStartColorVar__20VIParticleAttributesRC10VIColor32F(void *, f32 *); /* extern */
M2C_UNK SetStartSizeVar__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetStartSize__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetVelocityVar__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK SetVelocity__20VIParticleAttributesf(void *, M2C_UNK); /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK, void *, void *, void *, void *, void *); /* extern */

void __20VIParticleAttributes(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp80;
    f32 sp84;
    s32 sp88;
    f32 sp8C;
    f32 temp_f0;
    f32 temp_f0_2;
    s32 temp_5;
    s32 var_18;
    s32 var_4;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_7;
    void *temp_8;
    void *temp_9;
    void *var_3;

    temp_2 = arg0 + 0x1C;
    var_3 = arg0 + 0x38;
    var_4 = 0x1F;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    do {
        var_4 -= 1;
        M2C_FIELD(var_3, f32 *, 0) = 0.0f;
        M2C_FIELD(var_3, f32 *, 4) = 0.0f;
        M2C_FIELD(var_3, f32 *, 8) = 0.0f;
        M2C_FIELD(var_3, f32 *, 0xC) = 0.0f;
        var_3 += 0x10;
    } while (var_4 != -1);
    temp_3 = arg0 + 0x248;
    temp_7 = arg0 + 0x264;
    temp_8 = arg0 + 0x270;
    temp_9 = arg0 + 0x27C;
    temp_10 = arg0 + 0x288;
    temp_11 = arg0 + 0x294;
    temp_12 = arg0 + 0x2A0;
    temp_2_2 = arg0 + 0x238;
    M2C_FIELD(temp_2_2, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x238) = 0.0f;
    M2C_FIELD(temp_2_2, f32 *, 4) = 0.0f;
    var_18 = 0;
    M2C_FIELD(temp_2_2, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x248) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x264) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x270) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x27C) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_10, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x288) = 0.0f;
    M2C_FIELD(temp_10, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_11, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x294) = 0.0f;
    M2C_FIELD(temp_11, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_12, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x2A0) = 0.0f;
    M2C_FIELD(temp_12, f32 *, 4) = 0.0f;
    memset(arg0, 0, 0x2D4, temp_7, temp_8, temp_9, temp_10, temp_11);
    SetFriction__20VIParticleAttributesf(arg0, 0);
    SetBirthrate__20VIParticleAttributesf(arg0, 0x42C80000);
    SetBirthrateVar__20VIParticleAttributesf(arg0, 0);
    SetLifespan__20VIParticleAttributesf(arg0, 0x3F000000);
    SetLifespanVar__20VIParticleAttributesf(arg0, 0);
    SetVelocity__20VIParticleAttributesf(arg0, 0x40000000);
    SetVelocityVar__20VIParticleAttributesf(arg0, 0);
    SetStartSize__20VIParticleAttributesf(arg0, 0x3E4CCCCC);
    SetStartSizeVar__20VIParticleAttributesf(arg0, 0);
    SetEndSize__20VIParticleAttributesf(arg0, 0x3E4CCCCC);
    SetEndSizeVar__20VIParticleAttributesf(arg0, 0);
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    sp1C = 0.0f;
    SetStartColorVar__20VIParticleAttributesRC10VIColor32F(arg0, &sp10);
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp38 = 0.0f;
    sp3C = 0.0f;
    SetEndColorVar__20VIParticleAttributesRC10VIColor32F(arg0, &sp30);
    SetInheritVelocity__20VIParticleAttributesf(arg0, 0);
    SetDeltaSpawn__20VIParticleAttributesf(arg0, 0);
    sp50 = 0.0f;
    sp58 = 0.0f;
    sp54 = 1.0f;
    SetNozzleAxis__20VIParticleAttributesRC7VIVect3(arg0, &sp50);
    sp70 = 1.0f;
    sp74 = 1.0f;
    sp78 = 1.0f;
    SetNozzleHprVar__20VIParticleAttributesRC7VIVect3(arg0, &sp70);
    SetGradientRepeat__20VIParticleAttributesf(arg0, 0x3F800000);
    SetGravityOn__20VIParticleAttributesi(arg0, 0);
    do {
        temp_f0 = (f32) var_18;
        temp_5 = var_18;
        var_18 += 1;
        sp80 = 1.0f;
        sp88 = 0;
        temp_f0_2 = 1.0f - (temp_f0 * 0.032258064f);
        sp8C = temp_f0_2;
        sp84 = temp_f0_2;
        SetGradientColor__20VIParticleAttributesiRC10VIColor32F(arg0, temp_5, &sp80);
    } while (var_18 < 0x20);
}
