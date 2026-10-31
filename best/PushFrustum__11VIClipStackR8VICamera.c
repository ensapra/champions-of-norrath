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

void PushFrustum__11VIClipStackR8VICamera(void *arg0, void *arg1) {
    f32 temp_f0;
    s32 temp_7;
    s32 temp_8;
    s32 var_15;
    s32 var_4;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_24;
    void *temp_25;
    void *temp_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7_2;
    void *temp_9;
    void *temp_9_2;
    void *var_2;
    void *var_3;

    temp_25 = arg0 + 4;
    temp_13 = arg1 + 0x130;
    temp_24 = M2C_FIELD(temp_25, s32 *, 4) + (M2C_FIELD(arg0, s32 *, 0) * 0x10);
    var_4 = 4;
    M2C_FIELD(temp_24, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    var_3 = arg1 + 0x1A0;
    M2C_FIELD(temp_24, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    var_15 = M2C_FIELD(arg0, s32 *, 0x18);
    var_2 = (var_15 * 0x10) + M2C_FIELD(arg0, s32 *, 0x20);
    do {
        var_4 -= 1;
        var_15 += 1;
        M2C_FIELD(var_2, f32 *, 0) = (f32) M2C_FIELD(var_3, f32 *, 0);
        M2C_FIELD(var_2, f32 *, 4) = (f32) M2C_FIELD(var_3, f32 *, 4);
        M2C_FIELD(var_2, f32 *, 8) = (f32) M2C_FIELD(var_3, f32 *, 8);
        temp_f0 = M2C_FIELD(var_3, f32 *, 0xC);
        var_3 += 0x10;
        M2C_FIELD(var_2, f32 *, 0xC) = temp_f0;
        var_2 += 0x10;
    } while (var_4 >= 0);
    temp_8 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_9 = arg1 + 0x1C;
    temp_7 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_12 = temp_13 + 0x30;
    temp_2 = temp_7 + (temp_8 * 0xC);
    M2C_FIELD(temp_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    temp_6 = temp_7 + ((temp_8 + 1) * 0xC);
    temp_11 = temp_13 + 0x3C;
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    temp_5 = temp_7 + ((temp_8 + 2) * 0xC);
    temp_9_2 = temp_13 + 0x54;
    temp_10 = temp_13 + 0x48;
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    temp_4 = temp_7 + ((temp_8 + 3) * 0xC);
    M2C_FIELD(temp_6, f32 *, 0) = (f32) M2C_FIELD(temp_13, f32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x18) = var_15;
    temp_7_2 = temp_7 + ((temp_8 + 4) * 0xC);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_12, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_12, f32 *, 8);
    M2C_FIELD(temp_5, f32 *, 0) = (f32) M2C_FIELD(temp_13, f32 *, 0x3C);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 0) = (f32) M2C_FIELD(temp_13, f32 *, 0x48);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(temp_7_2, f32 *, 0) = (f32) M2C_FIELD(temp_13, f32 *, 0x54);
    M2C_FIELD(temp_7_2, f32 *, 4) = (f32) M2C_FIELD(temp_9_2, f32 *, 4);
    M2C_FIELD(temp_7_2, f32 *, 8) = (f32) M2C_FIELD(temp_9_2, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_8 + 5);
    M2C_FIELD((M2C_FIELD(temp_25, s32 *, 4) + (M2C_FIELD(arg0, s32 *, 0) * 0x10)), s32 *, 8) = 5;
    M2C_FIELD(temp_24, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(temp_24, s32 *, 4));
    M2C_FIELD(temp_24, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(temp_24, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}
