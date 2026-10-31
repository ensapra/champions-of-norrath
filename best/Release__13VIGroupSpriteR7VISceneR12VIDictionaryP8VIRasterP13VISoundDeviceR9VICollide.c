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

M2C_UNK ReleaseSprite__7VIScenei(s32, s32);         /* extern */
s32 Remove__12VIDictionaryR10VIResource(s32, void *); /* extern */

s32 Release__13VIGroupSpriteR7VISceneR12VIDictionaryP8VIRasterP13VISoundDeviceR9VICollide(void *arg0, s32 arg1, s32 arg2) {
    s32 *var_16;
    s32 var_18;
    s32 var_5;

    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (Remove__12VIDictionaryR10VIResource(arg2, arg0) < 0)) {
        return -1;
    }
    var_18 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x40) > 0) {
        var_16 = arg0 + 0x44;
        var_5 = M2C_FIELD(arg0, s32 *, 0x44);
loop_6:
        var_16 += 0x20;
        var_18 += 1;
        ReleaseSprite__7VIScenei(arg1, var_5);
        if (var_18 < M2C_FIELD(arg0, s32 *, 0x40)) {
            var_5 = *var_16;
            goto loop_6;
        }
    }
    return 0;
}
