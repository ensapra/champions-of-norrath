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

s32 AddPlay__9VIHSpritei14VIPlaybackTypefR7VIScene(s32, f32); /* extern */
s32 SyncTiming__9VIHSpriteiiR7VIScene(void *, s32, s32, s32); /* extern */

s32 AddPlayWithSync__9VIHSpriteiiR7VIScene(void *arg0, s32 arg2, s32 arg3) {
    s32 temp_2;
    s32 var_2;
    void *temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x80) + (arg2 * 0x68);
    temp_2 = AddPlay__9VIHSpritei14VIPlaybackTypefR7VIScene(M2C_FIELD(temp_3, s32 *, 4), M2C_FIELD(temp_3, f32 *, 0x28));
    var_2 = -1;
    if (temp_2 >= 0) {
        var_2 = (SyncTiming__9VIHSpriteiiR7VIScene(arg0, temp_2, arg2, arg3) >= 0) ? temp_2 : -1;
    }
    return var_2;
}
