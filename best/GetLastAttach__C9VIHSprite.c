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

s32 End__Ct6VIPool1Z19VIHSpriteAttachment(s32);     /* extern */
s32 Prev__Ct6VIPool1Z19VIHSpriteAttachmenti(s32, s32); /* extern */
s32 Size__Ct6VIPool1Z19VIHSpriteAttachment(s32);    /* extern */

s32 GetLastAttach__C9VIHSprite(s32 arg0) {
    s32 temp_16;

    temp_16 = arg0 + 0x60;
    if (Size__Ct6VIPool1Z19VIHSpriteAttachment(temp_16) == 0) {
        return -1;
    }
    return Prev__Ct6VIPool1Z19VIHSpriteAttachmenti(temp_16, End__Ct6VIPool1Z19VIHSpriteAttachment(temp_16));
}
