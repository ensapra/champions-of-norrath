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

s32 AsWave__7VISound(s32);                          /* extern */
M2C_UNK AsXm__7VISound(s32);                        /* extern */
s32 FirstChannel__13VISoundDeviceUl(s32, s64);      /* extern */
s32 NextChannel__13VISoundDeviceUli(s32, s64, s32); /* extern */
void *Playback__13VISoundDevicei();                 /* extern */
s32 SampleRate__C6VIWave(s32);                      /* extern */
M2C_UNK SetIopFunction__FUii(M2C_UNK, M2C_UNK);     /* extern */
s32 Type__C7VISound(s32);                           /* extern */
extern M2C_UNK D_011EDF08;

void SetPitch__13VISoundDeviceii(s32 arg0, s32 arg2) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 var_20;
    s64 temp_5;
    void *temp_2;

    temp_2 = Playback__13VISoundDevicei();
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, s32 *, 0x1C);
        var_20 = 0;
        M2C_FIELD(temp_2, s32 *, 0x24) = arg2;
        if (temp_2_2 != -1) {
            var_20 = M2C_FIELD(((temp_2_2 * 4) + arg0), s32 *, 0xA18);
        }
        if (var_20 != 0) {
            if (Type__C7VISound(var_20) == 0) {
                temp_16 = ((s32) (SampleRate__C6VIWave(AsWave__7VISound(var_20)) << 0xC) / 48000) * M2C_FIELD(temp_2, s32 *, 0x24);
                temp_16_2 = (temp_16 < 0) ? (temp_16 + 0xFFF) : temp_16;
                temp_2_3 = FirstChannel__13VISoundDeviceUl(arg0, M2C_FIELD(temp_2, s64 *, 0x10));
                M2C_FIELD(&D_011EDF08, s32 *, 0) = temp_2_3;
                temp_2_4 = NextChannel__13VISoundDeviceUli(arg0, M2C_FIELD(temp_2, s64 *, 0x10), temp_2_3);
                M2C_FIELD(&D_011EDF08, s32 *, 8) = (s32) (temp_16_2 >> 0xC);
                M2C_FIELD(&D_011EDF08, s32 *, 4) = temp_2_4;
                SetIopFunction__FUii(5, 3);
            }
            if (Type__C7VISound(var_20) == 1) {
                AsXm__7VISound(var_20);
                temp_5 = M2C_FIELD(temp_2, s64 *, 0x10);
                M2C_FIELD(&D_011EDF08, s32 *, 4) = (s32) ((s64) (temp_5 << 8) >> 0x20);
                M2C_FIELD(&D_011EDF08, s32 *, 8) = arg2;
                M2C_FIELD(&D_011EDF08, s32 *, 0) = (s32) ((s64) ((temp_5 & 0xFFFFFF) << 0x20) >> 0x20);
                SetIopFunction__FUii(0xB, 3);
            }
        }
    }
}
