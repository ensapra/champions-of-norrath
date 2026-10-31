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

void PushBBox__11VIClipStackR6VIBBox(void *arg0, void *arg1) {
    f32 *sp0;
    f32 *sp4;
    f32 *sp8;
    s32 temp_10;
    s32 temp_11;
    s32 temp_12;
    s32 temp_12_2;
    s32 temp_9_2;
    void *temp_10_2;
    void *temp_11_2;
    void *temp_15;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_6;
    void *temp_6_2;
    void *temp_7;
    void *temp_7_2;
    void *temp_8;
    void *temp_8_2;
    void *temp_9;

    sp0 = arg1 + 0xC;
    temp_15 = M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 0) * 0x10);
    temp_10 = M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(temp_15, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    sp4 = arg1 + 0x10;
    sp8 = arg1 + 0x14;
    M2C_FIELD(temp_15, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    temp_12 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_9 = temp_10 + (temp_12 * 0x10);
    M2C_FIELD(temp_9, f32 *, 0) = 1.0f;
    temp_3 = temp_10 + ((temp_12 + 1) * 0x10);
    M2C_FIELD(temp_9, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_9, f32 *, 8) = 0.0f;
    temp_6 = temp_10 + ((temp_12 + 2) * 0x10);
    temp_7 = temp_10 + ((temp_12 + 3) * 0x10);
    temp_8 = temp_10 + ((temp_12 + 4) * 0x10);
    temp_10_2 = temp_10 + ((temp_12 + 5) * 0x10);
    temp_12_2 = temp_12 + 6;
    M2C_FIELD(temp_9, f32 *, 0xC) = (f32) -*sp0;
    M2C_FIELD(temp_3, f32 *, 0) = -1.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_6, f32 *, 0) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_6, f32 *, 8) = 0.0f;
    temp_9_2 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_11 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_2 = temp_11 + (temp_9_2 * 0xC);
    M2C_FIELD(temp_6, f32 *, 0xC) = (f32) -*sp4;
    M2C_FIELD(temp_7, f32 *, 0) = 0.0f;
    M2C_FIELD(temp_7, f32 *, 4) = -1.0f;
    M2C_FIELD(temp_7, f32 *, 8) = 0.0f;
    temp_3_2 = temp_11 + ((temp_9_2 + 1) * 0xC);
    M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 0) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 8) = 1.0f;
    M2C_FIELD(temp_8, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) -*sp8;
    M2C_FIELD(temp_10_2, f32 *, 0) = 0.0f;
    M2C_FIELD(temp_10_2, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_10_2, f32 *, 8) = -1.0f;
    M2C_FIELD(temp_10_2, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_2_2 = temp_11 + ((temp_9_2 + 2) * 0xC);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    temp_8_2 = temp_11 + ((temp_9_2 + 3) * 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_12_2;
    M2C_FIELD(temp_3_2, f32 *, 0) = (f32) *sp0;
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    temp_3_3 = temp_11 + ((temp_9_2 + 4) * 0xC);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    temp_6_2 = temp_11 + ((temp_9_2 + 5) * 0xC);
    temp_7_2 = temp_11 + ((temp_9_2 + 6) * 0xC);
    M2C_FIELD(temp_2_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_2_2, f32 *, 4) = (f32) *sp4;
    temp_11_2 = temp_11 + ((temp_9_2 + 7) * 0xC);
    M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_9_2 + 8);
    M2C_FIELD(temp_8_2, f32 *, 0) = (f32) *sp0;
    M2C_FIELD(temp_8_2, f32 *, 4) = (f32) *sp4;
    M2C_FIELD(temp_8_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_3_3, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_3_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_3_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(temp_15, s32 *, 0) = (s32) (temp_12_2 - M2C_FIELD(temp_15, s32 *, 4));
    M2C_FIELD(temp_6_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(temp_6_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_15, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(temp_15, s32 *, 0xC));
    M2C_FIELD(temp_6_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(temp_7_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
    M2C_FIELD(temp_7_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(temp_7_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(temp_11_2, f32 *, 0) = (f32) *sp0;
    M2C_FIELD(temp_11_2, f32 *, 4) = (f32) *sp4;
    M2C_FIELD(temp_11_2, f32 *, 8) = (f32) *sp8;
}
