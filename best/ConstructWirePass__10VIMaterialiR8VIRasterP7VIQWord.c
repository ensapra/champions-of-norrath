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

s32 ConstructWirePass__10VIMaterialiR8VIRasterP7VIQWord(s32 arg0, s32 arg1, void *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f3;
    void *temp_4;
    void *temp_4_2;
    void *temp_7;
    void *temp_7_2;
    void *temp_7_3;
    void *temp_7_4;
    void *temp_7_5;
    void *temp_7_6;
    void *temp_7_7;

    M2C_FIELD(arg3, s32 *, 4) = 0;
    M2C_FIELD(arg3, s32 *, 8) = 0;
    M2C_FIELD(arg3, s32 *, 0xC) = 0;
    M2C_FIELD(arg3, s32 *, 0) = 2;
    temp_7 = arg3 + 0x10;
    M2C_FIELD(temp_7, s64 *, 8) = 0xE;
    M2C_FIELD(arg3, s64 *, 0x10) = (s64) ((0x10000000 << 0x20) | 0x8002);
    temp_7_2 = temp_7 + 0x10;
    M2C_FIELD(temp_7_2, s64 *, 8) = 0x47;
    M2C_FIELD(temp_7, s64 *, 0x10) = 0x50000;
    temp_7_3 = temp_7_2 + 0x10;
    M2C_FIELD(temp_7_3, s64 *, 8) = 0x42;
    M2C_FIELD(temp_7_2, s64 *, 0x10) = (s64) ((0x80 << 0x20) | 0x64);
    temp_7_4 = temp_7_3 + 0x70;
    M2C_FIELD(temp_7_4, s64 *, 8) = 0x41;
    M2C_FIELD(temp_7_3, s64 *, 0x70) = (s64) ((0x20064000 << 0x20) | 0x8003);
    temp_7_5 = temp_7_4 + 0x10;
    M2C_FIELD(temp_7_5, s64 *, 8) = 0x41;
    temp_4 = arg0 + (arg1 * 0x90);
    M2C_FIELD(temp_7_4, s64 *, 0x10) = (s64) ((0x2006C000 << 0x20) | 0x8003);
    temp_7_6 = temp_7_5 + 0x10;
    M2C_FIELD(temp_7_6, s64 *, 8) = 0x41;
    M2C_FIELD(temp_7_5, s64 *, 0x10) = (s64) ((0x20054000 << 0x20) | 0x8003);
    temp_7_7 = temp_7_6 + 0x10;
    temp_4_2 = temp_4 + 0x38;
    temp_f2 = (f32) M2C_FIELD(temp_4_2, u8 *, 1) * 0.0039215684f * 128.0f;
    temp_f0 = (f32) M2C_FIELD(temp_4_2, u8 *, 2) * 0.0039215684f * 128.0f;
    temp_f3 = (f32) M2C_FIELD(temp_4, u8 *, 0x38) * 0.0039215684f * 128.0f;
    spC = (f32) M2C_FIELD(temp_4_2, u8 *, 3) * 0.0039215684f * 128.0f;
    sp4 = temp_f2;
    sp8 = temp_f0;
    M2C_FIELD(temp_7_6, f32 *, 0x10) = temp_f3;
    M2C_FIELD(temp_7_7, f32 *, 0xC) = spC;
    M2C_FIELD(temp_7_7, f32 *, 4) = temp_f2;
    M2C_FIELD(temp_7_7, f32 *, 8) = temp_f0;
    sp0 = temp_f3;
    return 0;
}
