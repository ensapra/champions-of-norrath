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

M2C_UNK Clear__22VISceneSoundTrackState(s32);       /* extern */
M2C_UNK ReleaseSound__13VISoundDeviceiR12VIDictionary(s32, s32, s32); /* extern */
M2C_UNK Release__8VILoaderiR7VIScene(s32, s32, void *); /* extern */
M2C_UNK Stop__13VISoundDevicei(s32, s32);           /* extern */

s32 StopSoundTrack__7VISceneR8VILoaderi(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 var_18;
    s32 var_19;
    s32 var_2;
    void *var_16;

    var_16 = arg0 + 0x1AD0;
    var_18 = arg0 + 0x1AC8;
    var_19 = 1;
    var_2 = M2C_FIELD(var_16, s32 *, 0x14);
loop_1:
    if (var_2 != -1) {
        Stop__13VISoundDevicei(M2C_FIELD(arg0, s32 *, 0x4BA0), var_2);
    }
    temp_5 = M2C_FIELD(var_16, s32 *, 0x10);
    if (temp_5 != -1) {
        Release__8VILoaderiR7VIScene(arg1, temp_5, arg0);
    }
    temp_5_2 = M2C_FIELD(var_16, s32 *, 0x1C);
    var_16 += 0x28;
    if (temp_5_2 != -1) {
        ReleaseSound__13VISoundDeviceiR12VIDictionary(M2C_FIELD(arg0, s32 *, 0x4BA0), temp_5_2, M2C_FIELD(arg0, s32 *, 0x4B98));
    }
    temp_4 = var_18;
    var_18 += 0x28;
    var_19 -= 1;
    Clear__22VISceneSoundTrackState(temp_4);
    if (var_19 >= 0) {
        var_2 = M2C_FIELD(var_16, s32 *, 0x14);
        goto loop_1;
    }
    temp_5_3 = M2C_FIELD(arg0, s32 *, 0x1AB4);
    if (temp_5_3 != -1) {
        Stop__13VISoundDevicei(M2C_FIELD(arg0, s32 *, 0x4BA0), temp_5_3);
        M2C_FIELD(arg0, s32 *, 0x1AB4) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x1A90) = 1;
    return 0;
}
