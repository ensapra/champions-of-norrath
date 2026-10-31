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

s32 AddPlay__9VIHSpritei14VIPlaybackTypefR7VIScene(s32, s32, f32); /* extern */
s32 SyncTiming__9VIHSpriteiiR7VIScene(s32, s32, s32, s32); /* extern */

s32 AddInterpolatedPlayWithSync__9VIHSpriteiiiR7VIScene(s32 arg0, s32 arg2, s64 arg3, s32 arg4) {
    s32 temp_2;
    s32 var_2;
    void *temp_20;
    void *temp_2_2;
    void *temp_3;

    temp_20 = arg0 + 0x78;
    temp_3 = M2C_FIELD(temp_20, s32 *, 8) + (arg2 * 0x68);
    temp_2 = AddPlay__9VIHSpritei14VIPlaybackTypefR7VIScene(M2C_FIELD(temp_3, s32 *, 4), arg4, M2C_FIELD(temp_3, f32 *, 0x28));
    var_2 = -1;
    if (temp_2 >= 0) {
        temp_2_2 = M2C_FIELD(temp_20, s32 *, 8) + (temp_2 * 0x68);
        M2C_FIELD(temp_2_2, s32 *, 0xC) = 1;
        M2C_FIELD(temp_2_2, s64 *, 0x18) = arg3;
        var_2 = (SyncTiming__9VIHSpriteiiR7VIScene(arg0, temp_2, arg2, arg4) >= 0) ? temp_2 : -1;
    }
    return var_2;
}
