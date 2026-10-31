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

M2C_UNK DeallocateChannels__13VISoundDeviceUl(s32, s64); /* extern */
M2C_UNK DeletePlayback__13VISoundDeviceP10VIPlayback(s32, void *); /* extern */
void *Playback__13VISoundDevicei();                 /* extern */
M2C_UNK SetIopFunction__FUii(M2C_UNK, M2C_UNK, s64, M2C_UNK *); /* extern */
M2C_UNK StopChannels__13VISoundDeviceUl(s32, s64);  /* extern */
s32 Type__C7VISound(s32);                           /* extern */
extern M2C_UNK D_011EDF08;

void Stop__13VISoundDevicei(s32 arg0) {
    s32 temp_2_2;
    s32 var_17;
    s64 temp_2_3;
    s64 temp_6;
    void *temp_2;

    temp_2 = Playback__13VISoundDevicei();
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, s32 *, 0x1C);
        var_17 = 0;
        if (temp_2_2 != -1) {
            var_17 = M2C_FIELD(((temp_2_2 * 4) + arg0), s32 *, 0xA18);
        }
        if ((var_17 != 0) && (Type__C7VISound(var_17) != 0) && (Type__C7VISound(var_17) == 1)) {
            temp_2_3 = M2C_FIELD(temp_2, s64 *, 0x10);
            temp_6 = (s64) (temp_2_3 << 8) >> 0x20;
            M2C_FIELD(&D_011EDF08, s32 *, 4) = (s32) temp_6;
            M2C_FIELD(&D_011EDF08, s32 *, 0) = (s32) ((s64) ((temp_2_3 & 0xFFFFFF) << 0x20) >> 0x20);
            SetIopFunction__FUii(9, 2, temp_6, &D_011EDF08);
        }
        StopChannels__13VISoundDeviceUl(arg0, M2C_FIELD(temp_2, s64 *, 0x10));
        DeallocateChannels__13VISoundDeviceUl(arg0, M2C_FIELD(temp_2, s64 *, 0x10));
        M2C_FIELD(((((s32) M2C_FIELD(temp_2, u8 *, 0x20) % 46) * 4) + arg0), s32 *, 0xC1C) = 0;
        DeletePlayback__13VISoundDeviceP10VIPlayback(arg0, temp_2);
    }
}
