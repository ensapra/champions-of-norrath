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

s32 ReleaseFont__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */
s32 Remove__12VIDictionaryR10VIResource(s32, void *); /* extern */

s32 Release__12VINameSpriteR7VISceneR12VIDictionaryP8VIRasterP13VISoundDeviceR9VICollide(void *arg0, s32 arg2, s32 arg3) {
    s32 var_2;

    if ((M2C_FIELD(arg0, s32 *, 0) == 0) || (var_2 = -1, (Remove__12VIDictionaryR10VIResource(arg2, arg0) >= 0))) {
        if ((arg3 != 0) && (ReleaseFont__8VIRasteriR12VIDictionary(arg3, M2C_FIELD(arg0, s32 *, 0x40), arg2) < 0)) {
            return -1;
        }
        var_2 = 0;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
