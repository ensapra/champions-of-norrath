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

M2C_UNK ReleaseSprite__7VIScenei(s32, s32);         /* extern */
M2C_UNK ShareSprite__7VIScenei(s32, s32);           /* extern */

s32 SetLevelSprite__11VILODSpriteiiR7VIScene(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    void *temp_5;

    temp_5 = (arg1 * 8) + arg0;
    temp_2 = M2C_FIELD(temp_5, s32 *, 0x4C);
    if (temp_2 != -1) {
        ReleaseSprite__7VIScenei(arg3, temp_2);
        M2C_FIELD(temp_5, s32 *, 0x4C) = -1;
    }
    M2C_FIELD(temp_5, s32 *, 0x4C) = arg2;
    ShareSprite__7VIScenei(arg3, arg2);
    return 0;
}
