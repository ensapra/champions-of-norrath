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

s32 Play__13VISoundDeviceii12VISOUNDCLASS(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetVolume__13VISoundDeviceif(s32, s32, f32); /* extern */
void *Sound__13VISoundDevicei(s32, s32);            /* extern */
M2C_UNK StopNow__13VIBattleMusic(void *, f32);      /* extern */
s32 VIGetFeatureFlags__Fv();                        /* extern */

s32 Process__13VIBattleMusic(void *arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f1;
    f32 var_f12;
    s32 temp_17;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_5;
    s32 var_2;
    void *temp_2;
    void *temp_3_3;
    void *temp_4;

    var_2 = 0;
    if (!(VIGetFeatureFlags__Fv() & 0x100)) {
        temp_4 = M2C_FIELD(arg0, void **, 0);
        if (temp_4 != NULL) {
            temp_17 = M2C_FIELD(temp_4, s32 *, 0x4BA0);
            if ((temp_17 != 0) && (M2C_FIELD(arg0, s32 *, 4) != 0)) {
                temp_3 = M2C_FIELD(arg0, s32 *, 8);
                if (temp_3 != 1) {
                    var_2 = 0;
                    if (temp_3 >= 2) {
                        if (temp_3 != 2) {
                            return 0;
                        }
                        temp_f12 = M2C_FIELD(arg0, f32 *, 0x10) * 0.099999994f;
                        temp_f1 = M2C_FIELD(arg0, f32 *, 0xC);
                        if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                            var_f12 = temp_f1 - (temp_f12 * 10.0f);
                        } else {
                            var_f12 = temp_f1 - temp_f12;
                        }
                        M2C_FIELD(arg0, f32 *, 0xC) = var_f12;
                        if (var_f12 <= 0.0f) {
                            StopNow__13VIBattleMusic(arg0, var_f12);
                            M2C_FIELD(arg0, s32 *, 8) = 0;
                        } else {
                            SetVolume__13VISoundDeviceif(temp_17, M2C_FIELD(arg0, s32 *, 0x1C), var_f12);
                        }
                        goto block_25;
                    }
                    /* Duplicate return node #26. Try simplifying control flow for better match */
                    return var_2;
                }
                temp_3_2 = M2C_FIELD(arg0, s32 *, 0x1C);
                var_2 = -1;
                if (temp_3_2 == -1) {
                    temp_5 = M2C_FIELD(arg0, s32 *, 0x18);
                    if (temp_5 != temp_3_2) {
                        temp_2 = Sound__13VISoundDevicei(temp_17, temp_5);
                        temp_3_3 = M2C_FIELD(temp_2, void **, 0xC);
                        var_2 = M2C_FIELD((temp_3_3 + 0x30), s32 (**)(void *, void *), 4)(temp_2 + M2C_FIELD(temp_3_3, s16 *, 0x30), temp_2);
                        if (var_2 != 0) {
                            temp_2_2 = Play__13VISoundDeviceii12VISOUNDCLASS(temp_17, M2C_FIELD(arg0, s32 *, 0x18), 0, 1);
                            M2C_FIELD(arg0, s32 *, 0x1C) = temp_2_2;
                            SetVolume__13VISoundDeviceif(temp_17, temp_2_2, M2C_FIELD(arg0, f32 *, 0xC));
                            goto block_13;
                        }
                    }
                } else {
block_13:
                    temp_f0 = M2C_FIELD(arg0, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x10);
                    M2C_FIELD(arg0, f32 *, 0xC) = temp_f0;
                    if (temp_f0 >= 1.0f) {
                        M2C_FIELD(arg0, f32 *, 0xC) = 1.0f;
                        M2C_FIELD(arg0, s32 *, 8) = 3;
                    }
                    SetVolume__13VISoundDeviceif(temp_17, M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, f32 *, 0xC));
block_25:
                    var_2 = 0;
                }
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return var_2;
            }
        }
    }
    return var_2;
}
