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

void *FirstPlayback__13VISoundDevice(s32);          /* extern */
void *NextPlayback__13VISoundDeviceP10VIPlayback(s32, void *); /* extern */
s32 Remove__12VIDictionaryR10VIResource(s32, void *); /* extern */
M2C_UNK Stop__13VISoundDevicei(s32, s32);           /* extern */

s32 ReleaseSound__13VISoundDeviceiR12VIDictionary(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_21;
    s32 temp_22;
    s32 temp_2;
    s32 var_2;
    void *temp_17;
    void *temp_19;
    void *temp_2_2;
    void *var_16;

    temp_21 = arg0 + 8;
    temp_22 = arg1 * 4;
    temp_19 = M2C_FIELD((temp_22 + temp_21), void **, 0xA10);
    temp_2 = M2C_FIELD(temp_19, s32 *, 4) - 1;
    M2C_FIELD(temp_19, s32 *, 4) = temp_2;
    if (temp_2 <= 0) {
        if ((M2C_FIELD(temp_19, s32 *, 0) == 0) || (var_2 = -1, (Remove__12VIDictionaryR10VIResource(arg2, temp_19) >= 0))) {
            var_16 = FirstPlayback__13VISoundDevice(arg0);
            if (var_16 != NULL) {
loop_5:
                temp_17 = NextPlayback__13VISoundDeviceP10VIPlayback(arg0, var_16);
                if (M2C_FIELD(var_16, s32 *, 0x1C) == arg1) {
                    Stop__13VISoundDevicei(arg0, M2C_FIELD(var_16, s32 *, 0x20));
                }
                var_16 = temp_17;
                if (var_16 != NULL) {
                    goto loop_5;
                }
            }
            temp_2_2 = M2C_FIELD(temp_19, void **, 0xC);
            M2C_FIELD((temp_2_2 + 8), M2C_UNK (**)(void *, M2C_UNK), 4)(temp_19 + M2C_FIELD(temp_2_2, s16 *, 8), 3);
            M2C_FIELD((temp_22 + temp_21), s32 *, 0xA10) = 0;
            goto block_11;
        }
    } else {
block_11:
        var_2 = 0;
    }
    return var_2;
}
