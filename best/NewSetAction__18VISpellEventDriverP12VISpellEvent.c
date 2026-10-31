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

M2C_UNK FindTrigger__9VIHSpriteiRi(void *, s32, void *); /* extern */
void *GetActorSpritePtr__C7VIScenei(s32, s32);      /* extern */
M2C_UNK ResetTrigger__9VIHSpritei(void *, s32);     /* extern */
s32 SetAction__9VICSprite15VICSpriteAnimIDR7VIScene(void *, s32, s32); /* extern */
s32 VIHashResourceID(M2C_UNK *);                    /* extern */
extern M2C_UNK D_011DDFD0;
extern M2C_UNK D_011DDFE0;
extern M2C_UNK D_011DDFF0;
extern M2C_UNK D_011DE000;

s32 NewSetAction__18VISpellEventDriverP12VISpellEvent(void *arg0, void *arg1) {
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 temp_5_4;
    void *temp_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_3 != -1) {
        temp_2 = GetActorSpritePtr__C7VIScenei(M2C_FIELD(arg0, s32 *, 0x14), temp_3);
        if (temp_2 != NULL) {
            if (M2C_FIELD(temp_2, s32 *, 0x34) != 5) {
                M2C_FIELD(arg0, s32 *, 0x44) = -1;
                M2C_FIELD(arg0, s32 *, 0x34) = -1;
                M2C_FIELD(arg0, s32 *, 0x38) = -1;
                M2C_FIELD(arg0, s32 *, 0x3C) = -1;
                M2C_FIELD(arg0, s32 *, 0x40) = -1;
                return -1;
            }
            temp_2_2 = SetAction__9VICSprite15VICSpriteAnimIDR7VIScene(temp_2, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x14));
            M2C_FIELD(arg0, s32 *, 0x38) = -1;
            M2C_FIELD(arg0, s32 *, 0x34) = temp_2_2;
            M2C_FIELD(arg0, s32 *, 0x3C) = -1;
            M2C_FIELD(arg0, s32 *, 0x40) = -1;
            M2C_FIELD(arg0, s32 *, 0x44) = -1;
            FindTrigger__9VIHSpriteiRi(temp_2, VIHashResourceID(&D_011DDFD0), arg0 + 0x38);
            FindTrigger__9VIHSpriteiRi(temp_2, VIHashResourceID(&D_011DDFE0), arg0 + 0x3C);
            FindTrigger__9VIHSpriteiRi(temp_2, VIHashResourceID(&D_011DDFF0), arg0 + 0x40);
            FindTrigger__9VIHSpriteiRi(temp_2, VIHashResourceID(&D_011DE000), arg0 + 0x44);
            temp_5 = M2C_FIELD(arg0, s32 *, 0x38);
            if (temp_5 != -1) {
                ResetTrigger__9VIHSpritei(temp_2, temp_5);
            }
            temp_5_2 = M2C_FIELD(arg0, s32 *, 0x3C);
            if (temp_5_2 != -1) {
                ResetTrigger__9VIHSpritei(temp_2, temp_5_2);
            }
            temp_5_3 = M2C_FIELD(arg0, s32 *, 0x40);
            if (temp_5_3 != -1) {
                ResetTrigger__9VIHSpritei(temp_2, temp_5_3);
            }
            temp_5_4 = M2C_FIELD(arg0, s32 *, 0x44);
            if (temp_5_4 != -1) {
                ResetTrigger__9VIHSpritei(temp_2, temp_5_4);
            }
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
