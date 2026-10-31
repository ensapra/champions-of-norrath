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

M2C_UNK Clear__12VINameSprite(void *);              /* extern */
M2C_UNK __8VISprite();                              /* extern */
extern M2C_UNK D_01207D08;

void __12VINameSprite(void *arg0) {
    void *temp_2;

    __8VISprite();
    temp_2 = arg0 + 0x64;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_01207D08;
    M2C_FIELD(temp_2, f32 *, 0xC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x64) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
    Clear__12VINameSprite(arg0);
}
