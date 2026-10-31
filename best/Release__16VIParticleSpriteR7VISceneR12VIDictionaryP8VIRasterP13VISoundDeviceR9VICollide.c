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

M2C_UNK ReleaseParticleDefinition__16VIParticleSystemiR12VIDictionary(s32, s32, s32); /* extern */
s32 Remove__12VIDictionaryR10VIResource(s32, void *); /* extern */

s32 Release__16VIParticleSpriteR7VISceneR12VIDictionaryP8VIRasterP13VISoundDeviceR9VICollide(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 var_4;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        var_4 = arg1 + 0x548;
        if (Remove__12VIDictionaryR10VIResource(arg2, arg0) < 0) {
            return -1;
        }
        goto block_4;
    }
    var_4 = arg1 + 0x548;
block_4:
    if (var_4 != 0) {
        temp_2 = M2C_FIELD(arg0, s32 *, 0x40);
        if (temp_2 != -1) {
            ReleaseParticleDefinition__16VIParticleSystemiR12VIDictionary(var_4, temp_2, arg2);
        }
    }
    return 0;
}
