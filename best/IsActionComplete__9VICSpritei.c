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

s32 IsPlaybackStopped__9VIHSpritei(s32);            /* extern */

s32 IsActionComplete__9VICSpritei(void *arg0, s32 arg1) {
    s32 temp_5;
    s32 var_2;

    var_2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0x11E8) == arg1) {
        temp_5 = M2C_FIELD(arg0, s32 *, 0x1190);
        if (temp_5 != -1) {
            if (IsPlaybackStopped__9VIHSpritei(temp_5) != 0) {
                return 1;
            }
            goto block_5;
        }
block_5:
        var_2 = 0;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
