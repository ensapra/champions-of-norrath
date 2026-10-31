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

M2C_UNK SetType__14VIEffectVolume18VIEffectVolumeTypef(M2C_UNK, void *, void *, M2C_UNK); /* extern */

s32 Init__14VIEffectVolumeRC6VIBBox(void *arg0, void *arg1) {
    void *temp_2;
    void *temp_6;
    void *temp_7;

    temp_2 = arg0 + 8;
    temp_7 = arg1 + 0xC;
    temp_6 = arg0 + 0x14;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    SetType__14VIEffectVolume18VIEffectVolumeTypef(0, temp_6, temp_7, 0xBF800000);
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    M2C_FIELD(arg0, f32 *, 0x2C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x30) = 20.0f;
    M2C_FIELD(arg0, s64 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    return 0;
}
