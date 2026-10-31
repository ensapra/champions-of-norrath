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

s32 Clear__t6VIPool1Z13VIHSpritePlay(s32);          /* extern */
s32 Clear__t6VIPool1Z17VIHSpritePlayNode(s32);      /* extern */
s32 Clear__t6VIPool1Z19VIHSpriteAttachment(s32);    /* extern */
s32 Clear__t7VIArray1Z16VIHSpriteTrigger(s32);      /* extern */
s32 Clear__t8VIVector1Z10VIMatrix44(s32);           /* extern */
s32 Clear__t8VIVector1Z13VIHSpriteNode(s32);        /* extern */

s32 Clear__9VIHSprite(void *arg0) {
    if (Clear__t8VIVector1Z13VIHSpriteNode(arg0 + 0x40) < 0) {
        return -1;
    }
    if (Clear__t8VIVector1Z10VIMatrix44(arg0 + 0x4C) < 0) {
        return -1;
    }
    if (Clear__t7VIArray1Z16VIHSpriteTrigger(arg0 + 0x58) < 0) {
        return -1;
    }
    if (Clear__t6VIPool1Z19VIHSpriteAttachment(arg0 + 0x60) < 0) {
        return -1;
    }
    if (Clear__t6VIPool1Z13VIHSpritePlay(arg0 + 0x78) < 0) {
        return -1;
    }
    if (Clear__t6VIPool1Z17VIHSpritePlayNode(arg0 + 0x90) < 0) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x180) = -1;
    M2C_FIELD(arg0, s32 *, 0x184) = -1;
    M2C_FIELD(arg0, f32 *, 0xD0) = 1.0f;
    return 0;
}
