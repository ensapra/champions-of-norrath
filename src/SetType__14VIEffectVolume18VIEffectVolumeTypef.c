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

M2C_UNK DetachAllResources__14VIEffectVolume();     /* extern */
M2C_UNK FreeParticles__14VIEffectVolume(void *);    /* extern */

void SetType__14VIEffectVolume18VIEffectVolumeTypef(void *arg0, s32 arg1, f32 fparg0) {
    DetachAllResources__14VIEffectVolume();
    FreeParticles__14VIEffectVolume(arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    if (fparg0 >= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x2C) = fparg0;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
}
