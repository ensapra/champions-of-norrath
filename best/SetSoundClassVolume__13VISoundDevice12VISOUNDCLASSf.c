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
void *NextPlayback__13VISoundDeviceP10VIPlayback(s32, void *); /* extern */
M2C_UNK SetVolume__13VISoundDeviceif(s32, s32, f32); /* extern */

void SetSoundClassVolume__13VISoundDevice12VISOUNDCLASSf(s32 arg0, s32 arg1, f32 fparg0) {
    s32 var_2;
    void *var_16;

    M2C_FIELD(((arg1 * 4) + arg0), f32 *, 0xD60) = fparg0;
    var_16 = FirstPlayback__13VISoundDevice();
    if (var_16 != NULL) {
        var_2 = M2C_FIELD(var_16, s32 *, 0x34);
loop_2:
        if (var_2 == arg1) {
            SetVolume__13VISoundDeviceif(arg0, M2C_FIELD(var_16, s32 *, 0x20), M2C_FIELD(var_16, f32 *, 0x28));
        }
        var_16 = NextPlayback__13VISoundDeviceP10VIPlayback(arg0, var_16);
        if (var_16 != NULL) {
            var_2 = M2C_FIELD(var_16, s32 *, 0x34);
            goto loop_2;
        }
    }
}
