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

M2C_UNK SetArmorSlot__9VICSprite18VICSpriteArmorSlot17VICSpriteArmorSet13VICSpriteTintR7VIScene(s32, s32, s32, s32, s32); /* extern */

s32 SetArmorSet__9VICSprite17VICSpriteArmorSet13VICSpriteTintR7VIScene(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_16;
    s32 var_5;

    var_16 = 0;
    var_5 = 0;
    do {
        var_16 += 1;
        SetArmorSlot__9VICSprite18VICSpriteArmorSlot17VICSpriteArmorSet13VICSpriteTintR7VIScene(arg0, var_5, arg1, arg2, arg3);
        var_5 = var_16;
    } while (var_16 < 6);
    return 0;
}
