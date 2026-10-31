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

void *FirstPlayback__13VISoundDevice();             /* extern */
void *NextPlayback__13VISoundDeviceP10VIPlayback(void *, void *); /* extern */
M2C_UNK SetPan__13VISoundDeviceif(void *, s32, f32); /* extern */

void SetOutputMode__13VISoundDevicei(void *arg0, s32 arg1) {
    s32 var_5;
    void *var_16;

    M2C_FIELD(arg0, s32 *, 0xD68) = arg1;
    var_16 = FirstPlayback__13VISoundDevice();
    if (var_16 != NULL) {
        var_5 = M2C_FIELD(var_16, s32 *, 0x20);
loop_2:
        SetPan__13VISoundDeviceif(arg0, var_5, M2C_FIELD(var_16, f32 *, 0x2C));
        var_16 = NextPlayback__13VISoundDeviceP10VIPlayback(arg0, var_16);
        if (var_16 != NULL) {
            var_5 = M2C_FIELD(var_16, s32 *, 0x20);
            goto loop_2;
        }
    }
}
