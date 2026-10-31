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

s32 Begin__Ct6VIPool1Z13VIHSpritePlay(void *);      /* extern */
s32 End__Ct6VIPool1Z13VIHSpritePlay(void *);        /* extern */
s32 Next__Ct6VIPool1Z13VIHSpritePlayi(void *, s32); /* extern */
s32 ProcessPlayTiming__9VIHSpriteiR7VIScene(s32, s32, s32); /* extern */

s32 StopAllPlayback__9VIHSpriteR7VIScene(s32 arg0, s32 arg1) {
    s32 temp_18;
    s32 var_16;
    void *temp_17;
    void *temp_3;

    temp_17 = arg0 + 0x78;
    var_16 = Begin__Ct6VIPool1Z13VIHSpritePlay(temp_17);
loop_4:
    if (var_16 != End__Ct6VIPool1Z13VIHSpritePlay(temp_17)) {
        temp_18 = Next__Ct6VIPool1Z13VIHSpritePlayi(temp_17, var_16);
        if (ProcessPlayTiming__9VIHSpriteiR7VIScene(arg0, var_16, arg1) >= 0) {
            temp_3 = M2C_FIELD(temp_17, s32 *, 8) + (var_16 * 0x68);
            M2C_FIELD(temp_3, s32 *, 0xC) = 0;
            M2C_FIELD(temp_3, s32 *, 4) = 3;
        }
        var_16 = temp_18;
        goto loop_4;
    }
    return 0;
}
