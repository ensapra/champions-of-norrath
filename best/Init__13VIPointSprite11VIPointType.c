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

s32 Init__13VIPointSprite11VIPointType(void *arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    void *temp_3;
    void *temp_6;
    void *temp_7;

    temp_3 = arg0 + 0x20;
    temp_6 = arg0 + 8;
    temp_7 = arg0 + 0x14;
    M2C_FIELD(arg0, f32 *, 0x2C) = 0.099999994f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    temp_f2 = M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 4) = temp_f2;
    temp_f1 = M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 8) = temp_f1;
    temp_f0 = M2C_FIELD(temp_3, f32 *, 0xC);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) (temp_f1 - temp_f0);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) (temp_f2 - temp_f0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) -temp_f0;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f3;
    temp_f2_2 = M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 4) = temp_f2_2;
    temp_f1_2 = M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_7, f32 *, 8) = temp_f1_2;
    temp_f0_2 = M2C_FIELD(temp_3, f32 *, 0xC);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) (temp_f1_2 + temp_f0_2);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_f3 + temp_f0_2);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) (temp_f2_2 + temp_f0_2);
    return 0;
}
