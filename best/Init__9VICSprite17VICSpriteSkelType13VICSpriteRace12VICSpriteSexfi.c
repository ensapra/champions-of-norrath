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

s32 Clear__9VICSprite();                            /* extern */
s32 Init__9VIHSprite(void *);                       /* extern */

s32 Init__9VICSprite17VICSpriteSkelType13VICSpriteRace12VICSpriteSexfi(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 fparg0) {
    s32 temp_2;
    s32 var_2;

    if ((Clear__9VICSprite() < 0) || (Init__9VIHSprite(arg0) < 0)) {
        return -1;
    }
    temp_2 = M2C_FIELD(arg0, s32 *, 0x190);
    if (arg4 != 0) {
        var_2 = temp_2 | 1;
    } else {
        var_2 = temp_2 & ~1;
    }
    M2C_FIELD(arg0, s32 *, 0x190) = var_2;
    M2C_FIELD(arg0, s32 *, 0x19C) = arg3;
    M2C_FIELD(arg0, f32 *, 0xD0) = fparg0;
    M2C_FIELD(arg0, s32 *, 0x194) = arg1;
    M2C_FIELD(arg0, s32 *, 0x198) = arg2;
    return 0;
}
