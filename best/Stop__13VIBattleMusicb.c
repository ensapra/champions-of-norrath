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

M2C_UNK StopBgm__13VISoundDevicei(s32, M2C_UNK);    /* extern */
s32 VIGetFeatureFlags__Fv(void *);                  /* extern */

void Stop__13VIBattleMusicb(void *arg0, s32 arg1) {
    s32 temp_17;
    void *temp_4;

    temp_4 = M2C_FIELD(arg0, void **, 0);
    if ((temp_4 != NULL) && (temp_17 = M2C_FIELD(temp_4, s32 *, 0x4BA0), (temp_17 != 0))) {
        if (VIGetFeatureFlags__Fv(temp_4) & 0x100) {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            StopBgm__13VISoundDevicei(temp_17, 0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x14) = arg1;
        if (M2C_FIELD(arg0, s32 *, 0x1C) == -1) {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 8) = 2;
    }
}
