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
M2C_UNK Stop__13VISoundDevicei(s32, s32);           /* extern */
s32 VIGetFeatureFlags__Fv(void *);                  /* extern */

void StopNow__13VIBattleMusic(void *arg0) {
    s32 temp_16;
    s32 temp_2;
    void *temp_4;

    temp_4 = M2C_FIELD(arg0, void **, 0);
    if (temp_4 != NULL) {
        temp_16 = M2C_FIELD(temp_4, s32 *, 0x4BA0);
        if (temp_16 != 0) {
            if (VIGetFeatureFlags__Fv(temp_4) & 0x100) {
                StopBgm__13VISoundDevicei(temp_16, 0);
            } else {
                temp_2 = M2C_FIELD(arg0, s32 *, 0x1C);
                if (temp_2 != -1) {
                    Stop__13VISoundDevicei(temp_16, temp_2);
                    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
                }
            }
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
    }
}
