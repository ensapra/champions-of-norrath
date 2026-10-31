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

s32 IsPlaying__13VISoundDevicei(s32, s32);          /* extern */
M2C_UNK ReleaseSound__13VISoundDeviceiR12VIDictionary(s32, s32, s32); /* extern */
s32 Remove__12VIDictionaryR10VIResource(s32, void *); /* extern */
M2C_UNK Stop__13VISoundDevicei(s32, s32);           /* extern */

s32 Release__13VISoundSpriteR7VISceneR12VIDictionaryP8VIRasterP13VISoundDeviceR9VICollide(void *arg0, s32 arg2, s32 arg4) {
    s32 temp_2;

    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (Remove__12VIDictionaryR10VIResource(arg2, arg0) < 0)) {
        return -1;
    }
    temp_2 = M2C_FIELD(arg0, s32 *, 0x44);
    if ((temp_2 != -1) && (IsPlaying__13VISoundDevicei(arg4, temp_2) != 0)) {
        Stop__13VISoundDevicei(arg4, M2C_FIELD(arg0, s32 *, 0x44));
        M2C_FIELD(arg0, s32 *, 0x44) = -1;
    }
    if (arg4 != 0) {
        ReleaseSound__13VISoundDeviceiR12VIDictionary(arg4, M2C_FIELD(arg0, s32 *, 0x40), arg2);
    }
    return 0;
}
