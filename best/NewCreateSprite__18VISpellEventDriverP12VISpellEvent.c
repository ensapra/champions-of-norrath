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

M2C_UNK AddPlay__9VIHSpritei14VIPlaybackTypeR7VIScene(void *, s32, M2C_UNK, s32); /* extern */
M2C_UNK AddPlay__9VIHSpriteiR7VIScene(void *, s32, s32); /* extern */
M2C_UNK AddTail__7VILListP7VILNode(void *, void *); /* extern */
s32 CopySprite__7VISceneii(s32, s32, M2C_UNK);      /* extern */
s32 CreateActor__7VISceneRC7VIVect3T1fi(s32, f32 *, f32 *, s32, M2C_UNK); /* extern */
M2C_UNK EraseAllPlay__9VIHSpriteR7VIScene(void *, s32); /* extern */
M2C_UNK GetActorSpritePtr__C7VIScenei(s32, s32);    /* extern */
s64 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK ProcessCreateSprite__18VISpellEventDriverP18VISpellActiveEventb(void *, void *, M2C_UNK); /* extern */
M2C_UNK SetActorCollideable__7VISceneii(s32, s32, M2C_UNK); /* extern */
void *Sprite__7VIScenei(s32, s32);                  /* extern */
M2C_UNK __18VISpellActiveEventP12VISpellEventP7VIScene(void *, void *, s32); /* extern */
void *__builtin_new(M2C_UNK);                       /* extern */

s32 NewCreateSprite__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 temp_2_3;
    s32 temp_5;
    s32 var_20;
    void *temp_2;
    void *temp_2_2;

    if (M2C_FIELD(arg0, s32 *, 0x18) != -1) {
        temp_2 = __builtin_new(0xB8);
        if (temp_2 != NULL) {
            __18VISpellActiveEventP12VISpellEventP7VIScene(temp_2, arg1, M2C_FIELD(arg0, s32 *, 0x14));
        }
        M2C_FIELD(temp_2, s64 *, 0xB0) = GetTime__7VIScene(M2C_FIELD(arg0, s32 *, 0x14));
        if (M2C_FIELD(Sprite__7VIScenei(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 8)), s32 *, 0x34) != 4) {
            var_20 = M2C_FIELD(arg1, s32 *, 8);
            goto block_9;
        }
        var_20 = CopySprite__7VISceneii(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 8), 0);
        if (var_20 < 0) {
            return -1;
        }
block_9:
        temp_2_2 = Sprite__7VIScenei(M2C_FIELD(arg0, s32 *, 0x14), var_20);
        if (M2C_FIELD(temp_2_2, s32 *, 0x34) == 4) {
            EraseAllPlay__9VIHSpriteR7VIScene(temp_2_2, M2C_FIELD(arg0, s32 *, 0x14));
            temp_5 = M2C_FIELD(arg1, s32 *, 0xC);
            if (temp_5 & 0x40000) {
                AddPlay__9VIHSpritei14VIPlaybackTypeR7VIScene(temp_2_2, M2C_FIELD(temp_2_2, s32 *, 0x184), 1, M2C_FIELD(arg0, s32 *, 0x14));
            } else if (!(temp_5 & 0x80000)) {
                AddPlay__9VIHSpriteiR7VIScene(temp_2_2, M2C_FIELD(temp_2_2, s32 *, 0x184), M2C_FIELD(arg0, s32 *, 0x14));
            } else {
                AddPlay__9VIHSpritei14VIPlaybackTypeR7VIScene(temp_2_2, M2C_FIELD(temp_2_2, s32 *, 0x184), 0, M2C_FIELD(arg0, s32 *, 0x14));
            }
        }
        sp20 = 0.0f;
        sp24 = 0.0f;
        sp28 = 0.0f;
        sp30 = 0.0f;
        sp38 = 0.0f;
        sp34 = 0.0f;
        temp_2_3 = CreateActor__7VISceneRC7VIVect3T1fi(M2C_FIELD(arg0, s32 *, 0x14), &sp20, &sp30, var_20, 0x3F800000);
        M2C_FIELD(temp_2, s32 *, 0x8C) = temp_2_3;
        SetActorCollideable__7VISceneii(M2C_FIELD(arg0, s32 *, 0x14), temp_2_3, 0);
        GetActorSpritePtr__C7VIScenei(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(temp_2, s32 *, 0x8C));
        AddTail__7VILListP7VILNode(arg0 + 0x4C, temp_2);
        ProcessCreateSprite__18VISpellEventDriverP18VISpellActiveEventb(arg0, temp_2, 1);
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
