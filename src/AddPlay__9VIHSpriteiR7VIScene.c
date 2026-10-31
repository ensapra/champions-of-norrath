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

M2C_UNK AddPlay__9VIHSpritei14VIPlaybackTypefR7VIScene(s32, s32, s32, s32, f32); /* extern */
void *Animation__7VIScenei(s32);                    /* extern */

void AddPlay__9VIHSpriteiR7VIScene(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_2;

    temp_2 = Animation__7VIScenei(arg2);
    AddPlay__9VIHSpritei14VIPlaybackTypefR7VIScene(arg0, arg1, M2C_FIELD(temp_2, s32 *, 0x20), arg2, M2C_FIELD(temp_2, f32 *, 0x1C));
}
