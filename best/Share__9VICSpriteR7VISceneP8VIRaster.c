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

s32 ShareAnimation__7VIScenei(void *, s32);         /* extern */
s32 ShareMaterialPal__8VIRasteri(s32, s32);         /* extern */
M2C_UNK ShareParticleDefinition__16VIParticleSystemi(s32, s32); /* extern */
s32 ShareRefMap__7VIScenei(void *, s32);            /* extern */
s32 ShareSound__13VISoundDevicei(s32, s32);         /* extern */
s32 ShareSprite__7VIScenei(void *, s32);            /* extern */
M2C_UNK ShareSurface__8VIRasteri(s32, s32);         /* extern */

s32 Share__9VICSpriteR7VISceneP8VIRaster(void *arg0, void *arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 *temp_2_4;
    s32 *var_16;
    s32 *var_16_2;
    s32 *var_16_3;
    s32 temp_23;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 var_17;
    s32 var_17_2;
    s32 var_17_3;
    s32 var_18;
    s32 var_18_2;
    s32 var_18_3;
    s32 var_20;
    s32 var_2;
    s32 var_30;
    void *var_21;

    var_18 = 0;
    var_30 = 0;
    var_21 = arg0;
    var_20 = arg0 + 8;
    temp_23 = M2C_FIELD(arg1, s32 *, 0x4BA0);
    sp0 = arg2;
    sp4 = arg1 + 0x548;
    sp8 = 0;
loop_1:
    var_17 = 0;
    var_16 = var_20 + var_30 + 0x1A0;
loop_2:
    temp_2 = *var_16;
    var_16 += 4;
    if ((temp_2 < 0) || (var_2 = -1, (ShareAnimation__7VIScenei(arg1, temp_2) >= 0))) {
        var_17 += 1;
        if (var_17 >= 2) {
            var_17_2 = 0;
            var_16_2 = var_21 + sp8 + 0x1C0;
loop_6:
            if ((temp_23 == 0) || (temp_2_2 = *var_16_2, (temp_2_2 < 0)) || (var_2 = -1, (ShareSound__13VISoundDevicei(temp_23, temp_2_2) >= 0))) {
                var_17_2 += 1;
                var_16_2 += 4;
                if (var_17_2 >= 2) {
                    var_18 += 1;
                    var_21 += 0x20;
                    var_30 += 0x14;
                    sp8 += 0x14;
                    var_20 += 0x20;
                    if (var_18 >= 0x42) {
                        temp_5 = M2C_FIELD(arg0, s32 *, 0xF10);
                        if ((temp_5 == -1) || (ShareSprite__7VIScenei(arg1, temp_5) >= 0)) {
                            if (sp0 != 0) {
                                if (ShareMaterialPal__8VIRasteri(sp0, M2C_FIELD(arg0, s32 *, 0x1A0)) < 0) {
                                    return -1;
                                }
                                var_2 = -1;
                                if (ShareRefMap__7VIScenei(arg1, M2C_FIELD(arg0, s32 *, 0x1A4)) >= 0) {
                                    goto block_18;
                                }
                                /* Duplicate return node #41. Try simplifying control flow for better match */
                                return var_2;
                            }
block_18:
                            temp_5_2 = M2C_FIELD(arg0, s32 *, 0x184);
                            if ((temp_5_2 == -1) || (var_2 = -1, (ShareAnimation__7VIScenei(arg1, temp_5_2) >= 0))) {
                                if (ShareRefMap__7VIScenei(arg1, M2C_FIELD(arg0, s32 *, 0x180)) >= 0) {
                                    if (sp0 != 0) {
                                        var_16_3 = arg0 + 0xF44;
                                        var_18_2 = 0x12;
                                        do {
                                            temp_2_3 = *var_16_3;
                                            var_16_3 += 0x18;
                                            if (temp_2_3 != -1) {
                                                ShareSurface__8VIRasteri(sp0, temp_2_3);
                                            }
                                            var_18_2 -= 1;
                                        } while (var_18_2 >= 0);
                                    }
                                    if (temp_23 != 0) {
                                        temp_5_3 = M2C_FIELD(arg0, s32 *, 0x11F0);
                                        if (temp_5_3 != -1) {
                                            ShareSound__13VISoundDevicei(temp_23, temp_5_3);
                                        }
                                    }
                                    if (sp4 != 0) {
                                        var_18_3 = 0;
                                        if (M2C_FIELD(arg0, s32 *, 0x1208) > 0) {
                                            var_17_3 = 0;
                                            do {
                                                temp_2_4 = M2C_FIELD((arg0 + 0x1208), s32 *, 4) + var_17_3;
                                                var_17_3 += 0x420;
                                                temp_3 = *temp_2_4;
                                                if (temp_3 != -1) {
                                                    ShareParticleDefinition__16VIParticleSystemi(sp4, temp_3);
                                                }
                                                var_18_3 += 1;
                                            } while (var_18_3 < M2C_FIELD(arg0, s32 *, 0x1208));
                                        }
                                    }
                                    var_2 = 0;
                                    /* Duplicate return node #41. Try simplifying control flow for better match */
                                    return var_2;
                                }
                                goto block_23;
                            }
                            /* Duplicate return node #41. Try simplifying control flow for better match */
                            return var_2;
                        }
block_23:
                        return -1;
                    }
                    goto loop_1;
                }
                goto loop_6;
            }
            /* Duplicate return node #41. Try simplifying control flow for better match */
            return var_2;
        }
        goto loop_2;
    }
    return var_2;
}
