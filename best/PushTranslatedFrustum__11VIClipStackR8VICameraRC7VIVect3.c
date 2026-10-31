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

void PushTranslatedFrustum__11VIClipStackR8VICameraRC7VIVect3(void *arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    s32 temp_8;
    s32 temp_9;
    s32 var_4;
    s32 var_7;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_13_2;
    void *temp_24;
    void *temp_25;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_6_2;
    void *temp_9_2;
    void *var_2;
    void *var_3;

    temp_25 = arg0 + 4;
    temp_24 = M2C_FIELD(temp_25, s32 *, 4) + (M2C_FIELD(arg0, s32 *, 0) * 0x10);
    var_4 = 4;
    M2C_FIELD(temp_24, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    var_3 = arg1 + 0x1A0;
    temp_13 = arg1 + 0x130;
    M2C_FIELD(temp_24, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    var_7 = M2C_FIELD(arg0, s32 *, 0x18);
    var_2 = (var_7 * 0x10) + M2C_FIELD(arg0, s32 *, 0x20);
    do {
        temp_f6 = M2C_FIELD(var_3, f32 *, 0);
        var_4 -= 1;
        var_7 += 1;
        M2C_FIELD(var_2, f32 *, 0) = temp_f6;
        temp_f5 = M2C_FIELD(var_3, f32 *, 4);
        M2C_FIELD(var_2, f32 *, 4) = temp_f5;
        temp_f4 = M2C_FIELD(var_3, f32 *, 8);
        M2C_FIELD(var_2, f32 *, 8) = temp_f4;
        temp_f3 = M2C_FIELD(var_3, f32 *, 0xC);
        var_3 += 0x10;
        M2C_FIELD(var_2, f32 *, 0xC) = temp_f3;
        M2C_FIELD(var_2, f32 *, 0xC) = (f32) (temp_f3 - ((M2C_FIELD(arg2, f32 *, 0) * temp_f6) + (M2C_FIELD(arg2, f32 *, 4) * temp_f5) + (M2C_FIELD(arg2, f32 *, 8) * temp_f4)));
        var_2 += 0x10;
    } while (var_4 >= 0);
    temp_8 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_6 = arg1 + 0x1C;
    temp_9 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_11 = temp_13 + 0x30;
    temp_f3_2 = M2C_FIELD(arg1, f32 *, 0x1C);
    temp_3 = temp_9 + (temp_8 * 0xC);
    M2C_FIELD(temp_3, f32 *, 0) = temp_f3_2;
    temp_4 = temp_9 + ((temp_8 + 1) * 0xC);
    temp_f1 = M2C_FIELD(temp_6, f32 *, 4);
    temp_10 = temp_13 + 0x3C;
    M2C_FIELD(temp_3, f32 *, 4) = temp_f1;
    temp_5 = temp_9 + ((temp_8 + 2) * 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = var_7;
    temp_f2 = M2C_FIELD(temp_6, f32 *, 8);
    temp_12 = temp_13 + 0x48;
    M2C_FIELD(temp_3, f32 *, 8) = temp_f2;
    temp_6_2 = temp_9 + ((temp_8 + 3) * 0xC);
    temp_13_2 = temp_13 + 0x54;
    temp_9_2 = temp_9 + ((temp_8 + 4) * 0xC);
    M2C_FIELD(temp_3, f32 *, 0) = (f32) (temp_f3_2 + M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(temp_3, f32 *, 4) = (f32) (temp_f1 + M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(temp_3, f32 *, 8) = (f32) (temp_f2 + M2C_FIELD(arg2, f32 *, 8));
    temp_f1_2 = M2C_FIELD(temp_13, f32 *, 0x30);
    M2C_FIELD(temp_4, f32 *, 0) = temp_f1_2;
    temp_f2_2 = M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 4) = temp_f2_2;
    temp_f3_3 = M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 8) = temp_f3_3;
    M2C_FIELD(temp_4, f32 *, 0) = (f32) (temp_f1_2 + M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(temp_4, f32 *, 4) = (f32) (temp_f2_2 + M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(temp_4, f32 *, 8) = (f32) (temp_f3_3 + M2C_FIELD(arg2, f32 *, 8));
    temp_f1_3 = M2C_FIELD(temp_13, f32 *, 0x3C);
    M2C_FIELD(temp_5, f32 *, 0) = temp_f1_3;
    temp_f2_3 = M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 4) = temp_f2_3;
    temp_f3_4 = M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(temp_5, f32 *, 8) = temp_f3_4;
    M2C_FIELD(temp_5, f32 *, 0) = (f32) (temp_f1_3 + M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_8 + 5);
    M2C_FIELD((M2C_FIELD(temp_25, s32 *, 4) + (M2C_FIELD(arg0, s32 *, 0) * 0x10)), s32 *, 8) = 5;
    M2C_FIELD(temp_5, f32 *, 4) = (f32) (temp_f2_3 + M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(temp_5, f32 *, 8) = (f32) (temp_f3_4 + M2C_FIELD(arg2, f32 *, 8));
    temp_f1_4 = M2C_FIELD(temp_13, f32 *, 0x48);
    M2C_FIELD(temp_6_2, f32 *, 0) = temp_f1_4;
    temp_f2_4 = M2C_FIELD(temp_12, f32 *, 4);
    M2C_FIELD(temp_6_2, f32 *, 4) = temp_f2_4;
    temp_f3_5 = M2C_FIELD(temp_12, f32 *, 8);
    M2C_FIELD(temp_6_2, f32 *, 8) = temp_f3_5;
    M2C_FIELD(temp_6_2, f32 *, 0) = (f32) (temp_f1_4 + M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(temp_6_2, f32 *, 4) = (f32) (temp_f2_4 + M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(temp_6_2, f32 *, 8) = (f32) (temp_f3_5 + M2C_FIELD(arg2, f32 *, 8));
    temp_f1_5 = M2C_FIELD(temp_13, f32 *, 0x54);
    M2C_FIELD(temp_9_2, f32 *, 0) = temp_f1_5;
    temp_f2_5 = M2C_FIELD(temp_13_2, f32 *, 4);
    M2C_FIELD(temp_9_2, f32 *, 4) = temp_f2_5;
    temp_f3_6 = M2C_FIELD(temp_13_2, f32 *, 8);
    M2C_FIELD(temp_9_2, f32 *, 8) = temp_f3_6;
    M2C_FIELD(temp_9_2, f32 *, 0) = (f32) (temp_f1_5 + M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(temp_9_2, f32 *, 4) = (f32) (temp_f2_5 + M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(temp_9_2, f32 *, 8) = (f32) (temp_f3_6 + M2C_FIELD(arg2, f32 *, 8));
    M2C_FIELD(temp_24, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - M2C_FIELD(temp_24, s32 *, 4));
    M2C_FIELD(temp_24, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(temp_24, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}
