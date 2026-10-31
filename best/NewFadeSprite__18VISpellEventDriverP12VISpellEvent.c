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

M2C_UNK AddTail__7VILListP7VILNode(void *, void *); /* extern */
M2C_UNK Attach__9VIHSpriteiiR7VIScene(void *, s32, s32, void *); /* extern */
s32 CopyMaterialPal__8VIRasterii(s32, s32, M2C_UNK); /* extern */
s32 CopySprite__7VISceneii(void *, s32, M2C_UNK);   /* extern */
M2C_UNK Detach__9VIHSpriteiR7VIScene(void *, s32, void *); /* extern */
void *GetActorSpritePtr__C7VIScenei(void *, s32);   /* extern */
s32 GetActorSprite__C7VIScenei(void *, s32);        /* extern */
s32 GetAttachNode__C9VIHSpritei(void *, s32);       /* extern */
s32 GetAttachSprite__C9VIHSpritei(void *, s32);     /* extern */
s32 GetFirstAttach__C9VIHSprite(void *, s32);       /* extern */
M2C_UNK GetLayerColor__C10VIMateriali(M2C_UNK *, s32, M2C_UNK); /* extern */
s32 GetMaterialPalEntry__8VIRasterii(s32, s32, M2C_UNK); /* extern */
s32 GetMaterialPal__C14VISimpleSprite(void *);      /* extern */
s64 GetTime__7VIScene(void *);                      /* extern */
M2C_UNK SetActorSprite__7VISceneii(void *, s32, s32); /* extern */
M2C_UNK SetMaterialPal__14VISimpleSpriteiR12VIDictionaryR8VIRaster(void *, s32, s32, s32); /* extern */
void *Sprite__7VIScenei(void *, s32);               /* extern */
M2C_UNK __18VISpellActiveEventP12VISpellEventP7VIScene(void *, void *, void *); /* extern */
void *__builtin_new(M2C_UNK, M2C_UNK *, M2C_UNK *, s32); /* extern */

s32 NewFadeSprite__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1, s32 arg3) {
    s8 sp0;
    s8 sp1;
    s8 sp2;
    u8 sp3;
    M2C_UNK sp10;
    M2C_UNK *temp_2;
    M2C_UNK *var_19;
    M2C_UNK *var_5;
    M2C_UNK *var_6;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_20;
    s32 temp_22;
    s32 temp_2_3;
    s32 temp_2_6;
    s32 temp_2_8;
    s32 var_17;
    s32 var_2;
    s32 var_7;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_7;
    void *temp_3;

    var_7 = arg3;
    var_5 = M2C_FIELD(arg0, M2C_UNK **, 0x4C);
    var_6 = *var_5;
    temp_22 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x4B9C);
    if (var_6 != NULL) {
        var_7 = 9;
loop_2:
        temp_3 = M2C_FIELD(var_5, void **, 0x74);
        if ((M2C_FIELD(temp_3, s32 *, 4) != M2C_FIELD(arg1, s32 *, 4)) || (var_19 = var_5, (M2C_FIELD(temp_3, s32 *, 0) != 9))) {
            var_5 = var_6;
            temp_2 = *var_5;
            var_6 = temp_2;
            if (temp_2 == NULL) {
                goto block_5;
            }
            goto loop_2;
        }
    } else {
block_5:
        var_19 = NULL;
    }
    if (var_19 == NULL) {
        goto block_7;
    }
    temp_2_2 = __builtin_new(0xB8, var_5, var_6, var_7);
    if (temp_2_2 != NULL) {
        __18VISpellActiveEventP12VISpellEventP7VIScene(temp_2_2, arg1, M2C_FIELD(arg0, void **, 0x14));
    }
    M2C_FIELD(temp_2_2, s64 *, 0xB0) = GetTime__7VIScene(M2C_FIELD(arg0, void **, 0x14));
    temp_2_3 = GetActorSprite__C7VIScenei(M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(var_19, s32 *, 0x8C));
    temp_2_4 = Sprite__7VIScenei(M2C_FIELD(arg0, void **, 0x14), temp_2_3);
    if (M2C_FIELD(temp_2_4, s32 *, 0x34) == 1) {
        SetActorSprite__7VISceneii(M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(var_19, s32 *, 0x8C), CopySprite__7VISceneii(M2C_FIELD(arg0, void **, 0x14), temp_2_3, 0));
        temp_2_5 = GetActorSpritePtr__C7VIScenei(M2C_FIELD(arg0, void **, 0x14), M2C_FIELD(var_19, s32 *, 0x8C));
        var_17 = CopyMaterialPal__8VIRasterii(temp_22, GetMaterialPal__C14VISimpleSprite(temp_2_5), 0);
        SetMaterialPal__14VISimpleSpriteiR12VIDictionaryR8VIRaster(temp_2_5, var_17, M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x4B98), temp_22);
        goto block_19;
    }
    temp_2_6 = GetFirstAttach__C9VIHSprite(temp_2_4, temp_2_3);
    var_2 = -1;
    if (temp_2_6 >= 0) {
        temp_17 = GetAttachSprite__C9VIHSpritei(temp_2_4, temp_2_6);
        temp_20 = GetAttachNode__C9VIHSpritei(temp_2_4, temp_2_6);
        if (temp_17 >= 0) {
            if (temp_20 < 0) {
                return -1;
            }
            temp_17_2 = CopySprite__7VISceneii(M2C_FIELD(arg0, void **, 0x14), temp_17, 0);
            Detach__9VIHSpriteiR7VIScene(temp_2_4, temp_2_6, M2C_FIELD(arg0, void **, 0x14));
            Attach__9VIHSpriteiiR7VIScene(temp_2_4, temp_17_2, temp_20, M2C_FIELD(arg0, void **, 0x14));
            temp_2_7 = Sprite__7VIScenei(M2C_FIELD(arg0, void **, 0x14), temp_17_2);
            var_17 = CopyMaterialPal__8VIRasterii(temp_22, GetMaterialPal__C14VISimpleSprite(temp_2_7), 0);
            SetMaterialPal__14VISimpleSpriteiR12VIDictionaryR8VIRaster(temp_2_7, var_17, M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x4B98), temp_22);
block_19:
            temp_2_8 = GetMaterialPalEntry__8VIRasterii(M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x4B9C), var_17, 0);
            if (temp_2_8 != 0) {
                sp0 = 0;
                sp3 = -1U;
                sp1 = 0;
                sp2 = 0;
                GetLayerColor__C10VIMateriali(&sp10, temp_2_8, 0);
                sp0 = M2C_UNALIGNED32(M2C_FIELD(&sp10, M2C_UNK *, 0));
                M2C_FIELD(temp_2_2, f32 *, 0x9C) = (f32) ((f32) sp3 * 0.0039215684f);
                AddTail__7VILListP7VILNode(arg0 + 0x4C, temp_2_2);
                var_2 = 0;
                /* Duplicate return node #21. Try simplifying control flow for better match */
                return var_2;
            }
            goto block_7;
        }
block_7:
        return -1;
    }
    return var_2;
}
