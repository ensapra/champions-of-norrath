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

s32 GetAttachSprite__C9VIHSpritei(s32);             /* extern */
s32 GetSpriteType__7VIScenei(s32, s32);             /* extern */
M2C_UNK SetVisible__11VILODSpritei(s32, s32);       /* extern */
M2C_UNK SetVisible__12VISkinSpritei(s32, s32);      /* extern */
s32 Sprite__7VIScenei(s32, s32);                    /* extern */

s32 SetSkinsVisible__9VICSpriteiR7VIScene(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_2;

    if (arg1 != 0) {
        var_2 = M2C_FIELD(arg0, s32 *, 0x190) | 2;
    } else {
        var_2 = M2C_FIELD(arg0, s32 *, 0x190) & ~2;
    }
    M2C_FIELD(arg0, s32 *, 0x190) = var_2;
    temp_2 = M2C_FIELD(arg0, s32 *, 0x113C);
    if (temp_2 != -1) {
        temp_2_2 = GetAttachSprite__C9VIHSpritei(temp_2);
        temp_2_3 = GetSpriteType__7VIScenei(arg2, temp_2_2);
        switch (temp_2_3) {                         /* irregular */
        case 3:
            SetVisible__12VISkinSpritei(Sprite__7VIScenei(arg2, temp_2_2), arg1);
            break;
        case 7:
            SetVisible__11VILODSpritei(Sprite__7VIScenei(arg2, temp_2_2), arg1);
            break;
        }
    }
    return 0;
}
