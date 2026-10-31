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
extern M2C_UNK D_011F63D0;

void __13VIGroupSprite(void *arg0) {
    s32 var_5;
    void *temp_2;
    void *temp_3;
    void *var_4;

    __8VISprite();
    var_4 = arg0 + 0x44;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_011F63D0;
    var_5 = 4;
    do {
        temp_2 = var_4 + 4;
        temp_3 = var_4 + 0x14;
        var_5 -= 1;
        M2C_FIELD(temp_2, f32 *, 8) = 0.0f;
        M2C_FIELD(var_4, f32 *, 4) = 0.0f;
        var_4 += 0x20;
        M2C_FIELD(temp_2, f32 *, 4) = 0.0f;
        M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
        M2C_FIELD(temp_3, f32 *, 0) = 0.0f;
        M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    } while (var_5 != -1);
    M2C_FIELD(arg0, s32 *, 0x34) = 0xB;
}
