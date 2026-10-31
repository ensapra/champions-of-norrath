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

s32 Attach__9VIHSpriteiiR7VIScene(void *, s32, s32, void *); /* extern */
s32 CopyMaterialPal__8VIRasterii(s32, s32, M2C_UNK); /* extern */
s32 CopySprite__7VISceneii(void *, s32, M2C_UNK);   /* extern */
s32 Detach__9VIHSpriteiR7VIScene(s32, void *);      /* extern */
s32 GetHelm__13VICSpriteCust17VICSpriteArmorSet(s32); /* extern */
void *GetMaterialPalEntry__8VIRasterii(s32, s32, M2C_UNK); /* extern */
s32 GetMaterialPalSize__8VIRasteri(s32, s32);       /* extern */
s32 GetMaterialPal__C14VISimpleSprite(s32);         /* extern */
s32 GetSpriteType__7VIScenei(void *, s32);          /* extern */
s32 GetTintColor__13VICSpriteCust13VICSpriteTint(s32); /* extern */
M2C_UNK MaterialPal__8VIRasteri(s32, s32);          /* extern */
s32 SetHair__9VICSpriteiiiR7VIScene(void *, s32, s32, s32, void *); /* extern */
M2C_UNK SetLayerColor__10VIMaterialiRC9VIColor32(void *, s32, s32); /* extern */
s32 SetMaterialPal__14VISimpleSpriteiR12VIDictionaryR8VIRaster(s32, s32, s32, s32); /* extern */
s32 Sprite__7VIScenei(void *, s32);                 /* extern */

s32 SetHelm__9VICSprite17VICSpriteArmorSet13VICSpriteTintR7VIScene(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 sp0;
    s32 temp_20;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_17;
    s32 var_19;
    s32 var_22;
    s32 var_2;
    void *temp_2_3;

    var_2 = 0;
    temp_20 = M2C_FIELD(arg3, s32 *, 0x4B9C);
    if (M2C_FIELD(arg0, s32 *, 0xF34) != -1) {
        temp_5 = M2C_FIELD(arg0, s32 *, 0x1144);
        if (temp_5 != -1) {
            var_2 = -1;
            if (Detach__9VIHSpriteiR7VIScene(temp_5, arg3) >= 0) {
                M2C_FIELD(arg0, s32 *, 0x1144) = -1;
                goto block_4;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return var_2;
        }
block_4:
        if (arg1 != 0) {
            var_19 = GetHelm__13VICSpriteCust17VICSpriteArmorSet(arg1);
            if (GetSpriteType__7VIScenei(arg3, var_19) != 1) {
                goto block_20;
            }
            var_19 = CopySprite__7VISceneii(arg3, var_19, 0);
            var_2 = -1;
            if (var_19 >= 0) {
                if (temp_20 != 0) {
                    temp_2 = Sprite__7VIScenei(arg3, var_19);
                    sp0 = temp_2;
                    temp_2_2 = CopyMaterialPal__8VIRasterii(temp_20, GetMaterialPal__C14VISimpleSprite(temp_2), 0);
                    var_2 = -1;
                    if (temp_2_2 >= 0) {
                        MaterialPal__8VIRasteri(temp_20, temp_2_2);
                        var_22 = 0;
loop_16:
                        if (var_22 < GetMaterialPalSize__8VIRasteri(temp_20, temp_2_2)) {
                            var_17 = 0;
                            temp_2_3 = GetMaterialPalEntry__8VIRasterii(temp_20, temp_2_2, 0);
                            if (M2C_FIELD(temp_2_3, s32 *, 8) > 0) {
                                do {
                                    temp_5_2 = var_17;
                                    var_17 += 1;
                                    SetLayerColor__10VIMaterialiRC9VIColor32(temp_2_3, temp_5_2, GetTintColor__13VICSpriteCust13VICSpriteTint(arg2));
                                } while (var_17 < M2C_FIELD(temp_2_3, s32 *, 8));
                            }
                            var_22 += 1;
                            goto loop_16;
                        }
                        if (SetMaterialPal__14VISimpleSpriteiR12VIDictionaryR8VIRaster(sp0, temp_2_2, M2C_FIELD(arg3, s32 *, 0x4B98), temp_20) < 0) {
                            return -1;
                        }
                        goto block_20;
                    }
                    /* Duplicate return node #23. Try simplifying control flow for better match */
                    return var_2;
                }
block_20:
                if ((var_19 == -1) || (temp_2_4 = Attach__9VIHSpriteiiR7VIScene(arg0, var_19, M2C_FIELD(arg0, s32 *, 0xF34), arg3), var_2 = -1, M2C_FIELD(arg0, s32 *, 0x1144) = temp_2_4, (temp_2_4 >= 0))) {
                    goto block_22;
                }
                /* Duplicate return node #23. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return var_2;
        }
block_22:
        var_2 = (SetHair__9VICSpriteiiiR7VIScene(arg0, M2C_FIELD(arg0, s32 *, 0x1100), M2C_FIELD(arg0, s32 *, 0x1104), M2C_FIELD(arg0, s32 *, 0x1108), arg3) >= 0) ? 0 : -1;
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
