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

M2C_UNK __14VIEffectVolume(void *, void *);         /* extern */
M2C_UNK __8VISprite();                              /* extern */
extern M2C_UNK D_01226580;

void __20VIEffectVolumeSprite(void *arg0) {
    void *temp_3;
    void *temp_5;

    __8VISprite();
    temp_3 = arg0 + 0x40;
    temp_5 = arg0 + 0x4C;
    M2C_FIELD(arg0, f32 *, 0x40) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &D_01226580;
    M2C_FIELD(arg0, f32 *, 0x4C) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x40) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x4C) = 0.0f;
    M2C_FIELD(temp_5, f32 *, 4) = 0.0f;
    __14VIEffectVolume(arg0 + 0x58, temp_5);
    M2C_FIELD(arg0, s32 *, 0x34) = 0xE;
}
