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

s32 Begin__Ct6VIPool1Z13VIHSpritePlay(s32);         /* extern */
s32 End__Ct6VIPool1Z13VIHSpritePlay(s32);           /* extern */
M2C_UNK ErasePlay__9VIHSpriteiR7VIScene(s32, s32, s32); /* extern */
s32 Next__Ct6VIPool1Z13VIHSpritePlayi(s32, s32);    /* extern */

s32 EraseAllPlay__9VIHSpriteR7VIScene(s32 arg0, s32 arg1) {
    s32 temp_18;
    s32 temp_5;
    s32 var_17;

    temp_18 = arg0 + 0x78;
    var_17 = Begin__Ct6VIPool1Z13VIHSpritePlay(temp_18);
loop_2:
    if (var_17 != End__Ct6VIPool1Z13VIHSpritePlay(temp_18)) {
        temp_5 = var_17;
        var_17 = Next__Ct6VIPool1Z13VIHSpritePlayi(temp_18, var_17);
        ErasePlay__9VIHSpriteiR7VIScene(arg0, temp_5, arg1);
        goto loop_2;
    }
    return 0;
}
