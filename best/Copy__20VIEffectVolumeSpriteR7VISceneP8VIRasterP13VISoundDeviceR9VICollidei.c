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

M2C_UNK AttachSurface__14VIEffectVolumeii(void *, M2C_UNK, s32); /* extern */
s32 CreateSprite__7VIScene12VISpriteTypei(s32, s32, s32); /* extern */
f32 Density__C14VIEffectVolume(void *);             /* extern */
s32 Flags__C14VIEffectVolume(void *);               /* extern */
M2C_UNK Init__14VIEffectVolumeRC6VIBBox(void *, s32); /* extern */
M2C_UNK Init__20VIEffectVolumeSpriteRC6VIBBox(void *, s32); /* extern */
M2C_UNK SetFlags__14VIEffectVolumeUi(void *, s32);  /* extern */
M2C_UNK SetType__14VIEffectVolume18VIEffectVolumeTypef(void *, s32, f32); /* extern */
void *Sprite__7VIScenei(s32, s32);                  /* extern */
s32 Surface__C14VIEffectVolumei(void *, M2C_UNK);   /* extern */
s32 Type__C14VIEffectVolume(void *);                /* extern */

s32 Copy__20VIEffectVolumeSpriteR7VISceneP8VIRasterP13VISoundDeviceR9VICollidei(void *arg0, s32 arg1, s32 arg5) {
    s32 temp_16;
    s32 temp_20;
    s32 temp_2;
    s32 var_2;
    void *temp_17;
    void *temp_19;
    void *temp_2_2;

    temp_19 = arg0 + 0x58;
    temp_20 = arg0 + 8;
    temp_2 = CreateSprite__7VIScene12VISpriteTypei(arg1, M2C_FIELD(arg0, s32 *, 0x34), arg5);
    var_2 = -1;
    if (temp_2 >= 0) {
        temp_2_2 = Sprite__7VIScenei(arg1, temp_2);
        temp_17 = temp_2_2 + 0x58;
        Init__20VIEffectVolumeSpriteRC6VIBBox(temp_2_2, temp_20);
        M2C_FIELD(temp_2_2, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
        M2C_FIELD(temp_2_2, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        Init__14VIEffectVolumeRC6VIBBox(temp_17, temp_20);
        temp_16 = Type__C14VIEffectVolume(temp_19);
        SetType__14VIEffectVolume18VIEffectVolumeTypef(temp_17, temp_16, Density__C14VIEffectVolume(temp_19));
        M2C_FIELD(temp_17, f32 *, 0x34) = (f32) M2C_FIELD(temp_19, f32 *, 0x34);
        M2C_FIELD(temp_17, f32 *, 0x38) = (f32) M2C_FIELD(temp_19, f32 *, 0x38);
        SetFlags__14VIEffectVolumeUi(temp_17, Flags__C14VIEffectVolume(temp_19));
        M2C_FIELD(temp_17, f32 *, 0x30) = (f32) M2C_FIELD(temp_19, f32 *, 0x30);
        M2C_FIELD(temp_17, f32 *, 0x28) = (f32) M2C_FIELD(temp_19, f32 *, 0x28);
        AttachSurface__14VIEffectVolumeii(temp_17, 0, Surface__C14VIEffectVolumei(temp_19, 0));
        AttachSurface__14VIEffectVolumeii(temp_17, 1, Surface__C14VIEffectVolumei(temp_19, 1));
        var_2 = temp_2;
    }
    return var_2;
}
