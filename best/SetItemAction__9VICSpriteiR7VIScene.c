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

s32 AddPlay__9VIHSpritei14VIPlaybackTypefR7VIScene(void *, s32, M2C_UNK, s32, f32); /* extern */
s32 EraseAllPlay__9VIHSpriteR7VIScene(void *, s32); /* extern */
s32 GetAttachSprite__C9VIHSpritei(void *, s32);     /* extern */
s32 GetSpriteType__7VIScenei(s32, s32);             /* extern */
void *Sprite__7VIScenei(s32, s32);                  /* extern */

s32 SetItemAction__9VICSpriteiR7VIScene(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_2;
    s32 var_2;
    s32 var_5;
    void *temp_2_2;

    temp_16 = M2C_FIELD(((arg1 * 0x10) + arg0), s32 *, 0x118C);
    var_5 = -1;
    switch (temp_16) {                              /* irregular */
    case 25:
    case 28:
    case 35:
    case 41:
        var_5 = M2C_FIELD(arg0, s32 *, 0x1130);
        break;
    case 24:
    case 27:
    case 32:
    case 40:
    case 31:
    case 33:
        var_5 = M2C_FIELD(arg0, s32 *, 0x1134);
        break;
    }
    var_2 = 0;
    if (var_5 != -1) {
        temp_2 = GetAttachSprite__C9VIHSpritei(arg0, var_5);
        if (GetSpriteType__7VIScenei(arg2, temp_2) != 4) {
            return 0;
        }
        temp_2_2 = Sprite__7VIScenei(arg2, temp_2);
        if (EraseAllPlay__9VIHSpriteR7VIScene(temp_2_2, arg2) >= 0) {
            if (AddPlay__9VIHSpritei14VIPlaybackTypefR7VIScene(temp_2_2, M2C_FIELD(temp_2_2, s32 *, 0x184), 1, arg2, M2C_FIELD(((temp_16 * 0x34) + arg0), f32 *, 0x1B0)) >= 0) {
                return 0;
            }
            goto block_22;
        }
block_22:
        var_2 = -1;
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
