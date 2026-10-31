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

f32 sinf(f32, f32, f32, f32);                       /* extern */

void *Sample__14VIBoltHarmonici(void *arg0, void *arg1, s32 arg2) {
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    void *temp_16;
    void *temp_16_2;
    void *temp_4;

    temp_16 = arg1 + (arg2 * 0xC);
    temp_4 = temp_16 + 4;
    temp_16_2 = temp_16 + 0xD0;
    temp_f6 = M2C_FIELD(temp_4, f32 *, 8);
    temp_f4 = M2C_FIELD(temp_16, f32 *, 4);
    temp_f5 = M2C_FIELD(temp_4, f32 *, 4);
    temp_f3 = 1.0f - ((sinf((M2C_FIELD(arg1, f32 *, 0x1A0) * 3.1415925f) + 1.5707963f, 0.0f, 0.0f, 0.0f) * 0.5f) + 0.5f);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (((M2C_FIELD(temp_16_2, f32 *, 8) - temp_f6) * temp_f3) + temp_f6);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (((M2C_FIELD(temp_16, f32 *, 0xD0) - temp_f4) * temp_f3) + temp_f4);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (((M2C_FIELD(temp_16_2, f32 *, 4) - temp_f5) * temp_f3) + temp_f5);
    return arg0;
}
