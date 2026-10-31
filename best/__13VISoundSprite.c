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

M2C_UNK __8VISprite();                              /* extern */
extern M2C_UNK D_012277A0;

void __13VISoundSprite(void *arg0) {
    __8VISprite();
    M2C_FIELD(arg0, s32 *, 0x34) = 9;
    M2C_FIELD(arg0, f32 *, 0x54) = 1.0f;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_012277A0;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x10000000;
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
}
