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

s64 GetTime__7VIScene(s32);                         /* extern */
s32 ProcessHierarchy__9VIHSprite(void *);           /* extern */
s32 ProcessPlayList__9VIHSpriteiR7VIScene(void *, s32, s32); /* extern */
s32 SetBindPose__9VIHSprite(void *, s32);           /* extern */
s32 Size__Ct6VIPool1Z13VIHSpritePlay(void *);       /* extern */

s32 Process__9VIHSpriteiR7VIScene(void *arg0, s32 arg1, s32 arg2) {
    s32 var_2;

    if (GetTime__7VIScene(arg2) != M2C_FIELD(arg0, s64 *, 0xC8)) {
        if (Size__Ct6VIPool1Z13VIHSpritePlay(arg0 + 0x78) > 0) {
            if (ProcessPlayList__9VIHSpriteiR7VIScene(arg0, arg1, arg2) >= 0) {
                var_2 = ProcessHierarchy__9VIHSprite(arg0);
                goto block_5;
            }
            goto block_6;
        }
        var_2 = SetBindPose__9VIHSprite(arg0, arg1);
block_5:
        if (var_2 < 0) {
block_6:
            return -1;
        }
        goto block_7;
    }
block_7:
    M2C_FIELD(arg0, s64 *, 0xC8) = GetTime__7VIScene(arg2);
    return 0;
}
