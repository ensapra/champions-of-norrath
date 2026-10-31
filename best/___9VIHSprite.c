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

M2C_UNK Clear__9VIHSprite();                        /* extern */
M2C_UNK ___10VIMatrix44(void *, M2C_UNK);           /* extern */
M2C_UNK ___8VISprite(void *, M2C_UNK);              /* extern */
M2C_UNK ___t6VIPool1Z13VIHSpritePlay(void *, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1Z17VIHSpritePlayNode(void *, M2C_UNK); /* extern */
M2C_UNK ___t6VIPool1Z19VIHSpriteAttachment(void *, M2C_UNK); /* extern */
M2C_UNK ___t7VIArray1Z16VIHSpriteTrigger(void *, M2C_UNK); /* extern */
M2C_UNK ___t8VIVector1Z10VIMatrix44(void *, M2C_UNK); /* extern */
M2C_UNK ___t8VIVector1Z13VIHSpriteNode(void *, M2C_UNK); /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
extern M2C_UNK D_012032E8;

void ___9VIHSprite(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_012032E8;
    Clear__9VIHSprite();
    ___10VIMatrix44(arg0 + 0x140, 2);
    ___t6VIPool1Z17VIHSpritePlayNode(arg0 + 0x90, 2);
    ___t6VIPool1Z13VIHSpritePlay(arg0 + 0x78, 2);
    ___t6VIPool1Z19VIHSpriteAttachment(arg0 + 0x60, 2);
    ___t7VIArray1Z16VIHSpriteTrigger(arg0 + 0x58, 2);
    ___t8VIVector1Z10VIMatrix44(arg0 + 0x4C, 2);
    ___t8VIVector1Z13VIHSpriteNode(arg0 + 0x40, 2);
    ___8VISprite(arg0, 0);
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
