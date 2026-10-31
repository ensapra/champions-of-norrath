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

M2C_UNK MoveCamera__12VIWalkCameraR7VIScene(void *, s32); /* extern */
f32 powf(f32, f32);                                 /* extern */

s32 InitCameraIntermediate__12VIWalkCameraR7VIScene(void *arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_16;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_7;
    void *temp_9;

    temp_f20 = (f32) M2C_FIELD(arg0, s32 *, 0) * 0.0009999999f;
    temp_f21 = powf(M2C_FIELD(arg0, f32 *, 0x258), temp_f20);
    temp_f0 = powf(M2C_FIELD(arg0, f32 *, 0x25C), temp_f20);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x250);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x254);
    temp_f2_2 = (temp_f2 - (temp_f2 * temp_f0)) / (temp_f0 * temp_f20);
    M2C_FIELD(arg0, f32 *, 0x1F0) = (f32) ((temp_f1 - (temp_f1 * temp_f21)) / (temp_f21 * temp_f20));
    M2C_FIELD(arg0, f32 *, 0x1F4) = temp_f2_2;
    MoveCamera__12VIWalkCameraR7VIScene(arg0, arg1);
    temp_4 = arg0 + 0x1F8;
    temp_5 = arg0 + 0x1AC;
    temp_7 = arg0 + 0x204;
    temp_9 = arg0 + 0x1B8;
    temp_10 = arg0 + 0x210;
    temp_12 = arg0 + 0x1C4;
    M2C_FIELD(arg0, f32 *, 0x204) = (f32) M2C_FIELD(arg0, f32 *, 0x1AC);
    temp_11 = arg0 + 0x21C;
    temp_3 = arg0 + 0x1A0;
    temp_13 = arg0 + 0x1DC;
    temp_16 = arg0 + 0x234;
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(arg0, s64 *, 0x1F8) = (s64) M2C_FIELD(arg0, s64 *, 0x1A0);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    M2C_FIELD(temp_4, s32 *, 8) = (s32) M2C_FIELD(temp_3, s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x210) = (f32) M2C_FIELD(arg0, f32 *, 0x1B8);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x21C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C4);
    M2C_FIELD(temp_11, f32 *, 4) = (f32) M2C_FIELD(temp_12, f32 *, 4);
    M2C_FIELD(temp_11, f32 *, 8) = (f32) M2C_FIELD(temp_12, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 0x30) = (f32) M2C_FIELD(temp_3, f32 *, 0x30);
    M2C_FIELD(temp_4, f32 *, 0x34) = (f32) M2C_FIELD(temp_3, f32 *, 0x34);
    M2C_FIELD(temp_4, f32 *, 0x38) = (f32) M2C_FIELD(temp_3, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x234) = (f32) M2C_FIELD(arg0, f32 *, 0x1DC);
    M2C_FIELD(temp_16, f32 *, 4) = (f32) M2C_FIELD(temp_13, f32 *, 4);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(temp_13, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 0x48) = (f32) M2C_FIELD(temp_3, f32 *, 0x48);
    M2C_FIELD(temp_4, f32 *, 0x4C) = (f32) M2C_FIELD(temp_3, f32 *, 0x4C);
    return 0;
}
