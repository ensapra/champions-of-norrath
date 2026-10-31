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

s32 Add__t8VIVector1Z10VIMatrix44(void *);          /* extern */
s32 Add__t8VIVector1Z13VIHSpriteNode(s32, s32);     /* extern */

s32 AddRoot__9VIHSprite(void *arg0) {
    s32 temp_2;
    s32 temp_5;
    s32 var_2;

    var_2 = -1;
    temp_5 = arg0 + 0x40;
    if (M2C_FIELD(arg0, s32 *, 0x40) == 0) {
        temp_2 = Add__t8VIVector1Z13VIHSpriteNode(temp_5, temp_5);
        var_2 = -1;
        if (temp_2 >= 0) {
            var_2 = (Add__t8VIVector1Z10VIMatrix44(arg0 + 0x4C) >= 0) ? temp_2 : -1;
        }
    }
    return var_2;
}
