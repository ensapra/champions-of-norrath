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

M2C_UNK Free__14VIEffectVolume(s32);                /* extern */
s32 Remove__12VIDictionaryR10VIResource(s32, s32 *); /* extern */

s32 Release__20VIEffectVolumeSpriteR7VISceneR12VIDictionaryP8VIRasterP13VISoundDeviceR9VICollide(s32 *arg0, s32 arg2) {
    Free__14VIEffectVolume(arg0 + 0x58);
    if ((*arg0 != 0) && (Remove__12VIDictionaryR10VIResource(arg2, arg0) < 0)) {
        return -1;
    }
    return 0;
}
