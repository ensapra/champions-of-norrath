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

M2C_UNK ReleaseCollBuffer__9VICollidei(s32, s32);   /* extern */
M2C_UNK ReleaseMaterialPal__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */
M2C_UNK ReleasePrimBuffer__8VIRasteriR12VIDictionary(s32, s32, s32); /* extern */
s32 Remove__12VIDictionaryR10VIResource(s32, void *); /* extern */

s32 Release__14VISimpleSpriteR7VISceneR12VIDictionaryP8VIRasterP13VISoundDeviceR9VICollide(void *arg0, s32 arg2, s32 arg3, s32 arg5) {
    s32 var_2;

    if ((M2C_FIELD(arg0, s32 *, 0) == 0) || (var_2 = -1, (Remove__12VIDictionaryR10VIResource(arg2, arg0) >= 0))) {
        if (arg3 != 0) {
            ReleasePrimBuffer__8VIRasteriR12VIDictionary(arg3, M2C_FIELD(arg0, s32 *, 0x40), arg2);
            ReleaseMaterialPal__8VIRasteriR12VIDictionary(arg3, M2C_FIELD(arg0, s32 *, 0x48), arg2);
        }
        ReleaseCollBuffer__9VICollidei(arg5, M2C_FIELD(arg0, s32 *, 0x44));
        var_2 = 0;
    }
    return var_2;
}
