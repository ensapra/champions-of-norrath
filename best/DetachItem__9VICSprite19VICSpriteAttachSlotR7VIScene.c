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

s32 Detach__9VIHSpriteiR7VIScene(s32);              /* extern */
M2C_UNK ReleaseSprite__7VIScenei(s32, s32);         /* extern */

s32 DetachItem__9VICSprite19VICSpriteAttachSlotR7VIScene(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_16;
    s32 *temp_17;
    s32 temp_17_2;
    s32 temp_2;
    s32 temp_3;

    temp_17 = arg0 + ((arg1 * 4) + 0x1130);
    temp_3 = *temp_17;
    if (temp_3 != -1) {
        if (Detach__9VIHSpriteiR7VIScene(temp_3) >= 0) {
            *temp_17 = -1;
            goto block_6;
        }
        return -1;
    }
block_6:
    temp_17_2 = (arg1 * 0xC) + 0x1100;
    temp_16 = arg0 + 0x14 + temp_17_2;
    temp_2 = *temp_16;
    if (temp_2 != -1) {
        ReleaseSprite__7VIScenei(arg2, temp_2);
        *temp_16 = -1;
    }
    M2C_FIELD((arg0 + temp_17_2), s32 *, 0x10) = 0xB;
    return 0;
}
