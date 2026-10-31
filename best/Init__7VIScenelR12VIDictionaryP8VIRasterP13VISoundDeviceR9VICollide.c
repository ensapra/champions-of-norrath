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

s32 CreateSprite__7VIScene12VISpriteTypei(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK GlobalInit__14VIEffectVolumeP7VIScene(void *); /* extern */
M2C_UNK Identity__10VIMatrix44(void *);             /* extern */
s32 InitTimeOfDay__7VIScene(void *);                /* extern */
s32 Init__11VIClipStack(void *);                    /* extern */
M2C_UNK Init__12VIAtmospherelR8VIRasteri(void *, s64, s32, M2C_UNK); /* extern */
s32 Init__14VIQueryTriListiRC6VIBBoxRC7VIVect3f(void *, M2C_UNK, f32 *, f32 *, f32 *, M2C_UNK); /* extern */
M2C_UNK Init__16VIParticleSystemlP8VIRasteri(void *, s64, s32, M2C_UNK); /* extern */
M2C_UNK Init__17VISceneSoundTrack(void *);          /* extern */
s32 Init__19VIRadialFloraSystemR7VIScene(void *, void *); /* extern */
M2C_UNK Init__19VISpellEffectSystemP7VIScene(void *, void *); /* extern */
s32 Init__7VIWorldiiiifRC7VIVect3RC6VIBBox(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32 *, f32 *, f32 *, M2C_UNK); /* extern */
s32 Init__t6VIList1Z7VIActor(s32);                  /* extern */
s32 Init__t6VIList1ZQ27VIScene12VISceneOccup(void *); /* extern */
s32 Init__t6VIPool1ZP13VIHSpriteAnimi(void *, M2C_UNK); /* extern */
s32 Init__t6VIPool1ZP16VIStaticLightingi(void *, M2C_UNK); /* extern */
s32 Init__t6VIPool1ZP8VIRefMapi(void *, M2C_UNK);   /* extern */
s32 Init__t6VIPool1ZP8VISpritei(void *, M2C_UNK);   /* extern */
s32 Init__t7VIArray1Zii(void *, M2C_UNK);           /* extern */
M2C_UNK SetPersonalLightMode__7VIScene19VIPersonalLightMode(void *, M2C_UNK); /* extern */
M2C_UNK SetPersonalLight__7VISceneRC7VIVect3fRC10VIColor32F(void *, f32 *, f32 *, M2C_UNK); /* extern */
M2C_UNK VITrailFxInit__FR8VIRasterR12VIDictionary(s32, s32); /* extern */

s32 Init__7VIScenelR12VIDictionaryP8VIRasterP13VISoundDeviceR9VICollide(void *arg0, s64 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 spE0;
    f32 spE4;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 sp120;
    f32 sp124;
    f32 sp128;
    f32 sp130;
    f32 sp134;
    f32 sp138;
    f32 sp13C;
    s32 *var_2_2;
    s32 temp_2;
    s32 temp_4;
    s32 temp_6;
    s32 var_2;
    s32 var_3;

    M2C_FIELD(arg0, s64 *, 0x480) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4B98) = arg2;
    M2C_FIELD(arg0, s32 *, 0x4B9C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x4BA0) = arg4;
    M2C_FIELD(arg0, s32 *, 0x4BA4) = arg5;
    if (Init__t6VIList1Z7VIActor(arg0 + 0x3CC) < 0) {
        return -1;
    }
    if ((Init__t6VIList1ZQ27VIScene12VISceneOccup(arg0 + 0x3D8) >= 0) && (Init__t6VIPool1ZP8VISpritei(arg0 + 0x3E4, 0) >= 0) && (Init__t6VIPool1ZP13VIHSpriteAnimi(arg0 + 0x3FC, 0) >= 0) && (Init__t6VIPool1ZP8VIRefMapi(arg0 + 0x414, 0) >= 0) && (Init__t6VIPool1ZP16VIStaticLightingi(arg0 + 0x42C, 0) >= 0)) {
        sp50 = 0.0f;
        sp54 = 0.0f;
        sp58 = 0.0f;
        sp80 = -1000.0f;
        sp84 = -300.0f;
        sp88 = -1000.0f;
        sp90 = 1000.0f;
        sp98 = 1000.0f;
        sp94 = 300.0f;
        sp60 = 0.0f;
        sp64 = 0.0f;
        sp68 = 0.0f;
        sp6C = 0.0f;
        sp70 = 0.0f;
        sp74 = 0.0f;
        sp60 = sp80;
        sp64 = -300.0f;
        sp68 = sp88;
        sp6C = sp90;
        sp70 = sp94;
        sp74 = sp98;
        if (Init__7VIWorldiiiifRC7VIVect3RC6VIBBox(arg0 + 4, 1, 1, 1, 4, &sp50, &sp60, &sp6C, 0x44FA0000) >= 0) {
            temp_2 = CreateSprite__7VIScene12VISpriteTypei(arg0, 2, 1);
            var_2 = -1;
            M2C_FIELD(arg0, s32 *, 0x464) = temp_2;
            if (temp_2 >= 0) {
                Identity__10VIMatrix44(arg0 + 0x490);
                Identity__10VIMatrix44(arg0 + 0x4D0);
                if ((Init__11VIClipStack(arg0 + 0x510) >= 0) && (Init__t7VIArray1Zii(arg0 + 0x450, 0x1388) >= 0)) {
                    spD0 = 0.0f;
                    spD4 = 0.0f;
                    spD8 = 0.0f;
                    spDC = 0.0f;
                    spE0 = 0.0f;
                    spE4 = 0.0f;
                    spD0 = 0.0f;
                    spD4 = 0.0f;
                    spD8 = 0.0f;
                    spDC = 0.0f;
                    spE0 = 0.0f;
                    spE4 = 0.0f;
                    spF0 = 0.0f;
                    spF4 = 1.0f;
                    spF8 = 0.0f;
                    if (Init__14VIQueryTriListiRC6VIBBoxRC7VIVect3f(arg0 + 0x17F0, 0xC8, &spD0, &spF0, &spF0, 0x42A00000) >= 0) {
                        M2C_FIELD(arg0, s32 *, 0x1A88) = 0;
                        var_3 = 0x1F;
                        var_2_2 = arg0 + 0x634;
                        do {
                            var_3 -= 1;
                            *var_2_2 = -1;
                            var_2_2 -= 4;
                        } while (var_3 >= 0);
                        M2C_FIELD(arg0, s32 *, 0x638) = 0;
                        M2C_FIELD(arg0, s32 *, 0x63C) = -1;
                        Init__16VIParticleSystemlP8VIRasteri(arg0 + 0x548, M2C_FIELD(arg0, s64 *, 0x480), M2C_FIELD(arg0, s32 *, 0x4B9C), 0x7D0);
                        temp_6 = M2C_FIELD(arg0, s32 *, 0x4B9C);
                        if (temp_6 != 0) {
                            Init__12VIAtmospherelR8VIRasteri(arg0 + 0x640, M2C_FIELD(arg0, s64 *, 0x480), temp_6, 0x258);
                        }
                        Init__19VISpellEffectSystemP7VIScene(arg0 + 0x1B70, arg0);
                        temp_4 = M2C_FIELD(arg0, s32 *, 0x4B9C);
                        if (temp_4 != 0) {
                            VITrailFxInit__FR8VIRasterR12VIDictionary(temp_4, M2C_FIELD(arg0, s32 *, 0x4B98));
                        }
                        if (InitTimeOfDay__7VIScene(arg0) >= 0) {
                            SetPersonalLightMode__7VIScene19VIPersonalLightMode(arg0, 0);
                            sp120 = 0.0f;
                            sp128 = 0.0f;
                            sp124 = 0.0f;
                            sp130 = 1.0f;
                            sp13C = 1.0f;
                            sp134 = 1.0f;
                            sp138 = 1.0f;
                            SetPersonalLight__7VISceneRC7VIVect3fRC10VIColor32F(arg0, &sp120, &sp130, 0x41A00000);
                            Init__17VISceneSoundTrack(arg0 + 0x1A90);
                            M2C_FIELD(arg0, f32 *, 0x2A5C) = 950.0f;
                            M2C_FIELD(arg0, f32 *, 0x2A58) = 1050.0f;
                            M2C_FIELD(arg0, f32 *, 0x2A60) = 900.0f;
                            M2C_FIELD(arg0, f32 *, 0x2A64) = 550.0f;
                            M2C_FIELD(arg0, f32 *, 0x2A68) = 500.0f;
                            M2C_FIELD(arg0, f32 *, 0x2A48) = 950.0f;
                            M2C_FIELD(arg0, f32 *, 0x2A4C) = 900.0f;
                            M2C_FIELD(arg0, f32 *, 0x2A50) = 550.0f;
                            M2C_FIELD(arg0, f32 *, 0x2A54) = 500.0f;
                            M2C_FIELD(arg0, s64 *, 0x2A70) = 0;
                            M2C_FIELD(arg0, s32 *, 0x2A78) = 0;
                            if (Init__19VIRadialFloraSystemR7VIScene(arg0 + 0x2A7C, arg0) >= 0) {
                                M2C_FIELD(arg0, s32 *, 0x4B94) = 1;
                                GlobalInit__14VIEffectVolumeP7VIScene(arg0);
                                var_2 = 0;
                                /* Duplicate return node #25. Try simplifying control flow for better match */
                                return var_2;
                            }
                            goto block_23;
                        }
                        goto block_23;
                    }
                }
                goto block_23;
            }
            return var_2;
        }
    }
block_23:
    return -1;
}
