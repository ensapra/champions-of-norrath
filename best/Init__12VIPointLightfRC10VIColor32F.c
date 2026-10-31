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

s32 Init__12VIPointLightfRC10VIColor32F(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    void *temp_3;
    void *temp_6;
    void *temp_7;

    M2C_FIELD(arg0, f32 *, 0x2C) = fparg0;
    temp_3 = arg0 + 0x20;
    temp_6 = arg0 + 8;
    temp_7 = arg0 + 0x14;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 8) = temp_f3;
    temp_f2 = M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 4) = temp_f2;
    temp_f1 = M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 8) = temp_f1;
    temp_f0 = M2C_FIELD(temp_3, f32 *, 0xC);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) (temp_f1 - temp_f0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f3 - temp_f0);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) (temp_f2 - temp_f0);
    temp_f3_2 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f3_2;
    temp_f2_2 = M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 4) = temp_f2_2;
    temp_f1_2 = M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_7, f32 *, 8) = temp_f1_2;
    temp_f0_2 = M2C_FIELD(temp_3, f32 *, 0xC);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) (temp_f1_2 + temp_f0_2);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_f3_2 + temp_f0_2);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) (temp_f2_2 + temp_f0_2);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a1) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($a1) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($a1) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x47($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x40($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x4f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x48($a0) */);
    return 0;
}
