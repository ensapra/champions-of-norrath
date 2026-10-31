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
s32 CreateActor__7VISceneRC7VIVect3T1fi(s32, f32 *, f32 *, s32, f32); /* extern */
M2C_UNK EnablePan__13VISoundSpriteb(s32, s32);      /* extern */
s32 GetActorSpritePtr__C7VIScenei(s32, s32);        /* extern */
s64 GetTime__7VIScene(s32);                         /* extern */
M2C_UNK ProcessCreateSound__18VISpellEventDriverP18VISpellActiveEventb(void *, void *, M2C_UNK); /* extern */
M2C_UNK SetAttenuationMode__13VISoundSpriteQ213VISoundSprite15ATTENUATIONMODE(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK __18VISpellActiveEventP12VISpellEventP7VIScene(void *, void *, s32); /* extern */
void *__builtin_new(M2C_UNK, s32);                  /* extern */

s32 NewCreateSound__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_6;
    void *temp_2;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_6 != -1) {
        temp_2 = __builtin_new(0xB8, temp_6);
        if (temp_2 != NULL) {
            __18VISpellActiveEventP12VISpellEventP7VIScene(temp_2, arg1, M2C_FIELD(arg0, s32 *, 0x14));
        }
        M2C_FIELD(temp_2, s64 *, 0xB0) = GetTime__7VIScene(M2C_FIELD(arg0, s32 *, 0x14));
        sp20 = 0.0f;
        sp24 = 0.0f;
        sp28 = 0.0f;
        sp30 = 0.0f;
        sp38 = 0.0f;
        sp34 = 0.0f;
        temp_2_2 = CreateActor__7VISceneRC7VIVect3T1fi(M2C_FIELD(arg0, s32 *, 0x14), &sp20, &sp30, M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, f32 *, 0x14));
        M2C_FIELD(temp_2, s32 *, 0x8C) = temp_2_2;
        temp_2_3 = GetActorSpritePtr__C7VIScenei(M2C_FIELD(arg0, s32 *, 0x14), temp_2_2);
        EnablePan__13VISoundSpriteb(temp_2_3, ((s32) M2C_FIELD(arg1, s32 *, 0xC) >> 0x12) & 1);
        temp_2_4 = M2C_FIELD(arg1, s32 *, 0xC);
        if (temp_2_4 & 0x80000) {
            SetAttenuationMode__13VISoundSpriteQ213VISoundSprite15ATTENUATIONMODE(temp_2_3, 1, 0x80000);
        } else if (temp_2_4 & 0x100000) {
            SetAttenuationMode__13VISoundSpriteQ213VISoundSprite15ATTENUATIONMODE(temp_2_3, 2, 0x80000);
        } else {
            SetAttenuationMode__13VISoundSpriteQ213VISoundSprite15ATTENUATIONMODE(temp_2_3, 0, 0x80000);
        }
        AddTail__7VILListP7VILNode(arg0 + 0x4C, temp_2);
        ProcessCreateSound__18VISpellEventDriverP18VISpellActiveEventb(arg0, temp_2, 1);
    }
    return 0;
}
