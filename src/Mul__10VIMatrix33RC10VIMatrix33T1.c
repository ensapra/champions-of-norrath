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

void Mul__10VIMatrix33RC10VIMatrix33T1(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f4_5;
    f32 temp_f4_6;
    void *temp_2;
    void *temp_3;
    void *temp_7;
    void *temp_8;

    temp_f0 = M2C_FIELD(arg1, f32 *, 0);
    temp_3 = arg2 + 0xC;
    temp_7 = arg2 + 0x18;
    temp_2 = arg0 + 0xC;
    temp_8 = arg0 + 0x18;
    temp_f3 = M2C_FIELD(arg2, f32 *, 0) * temp_f0;
    M2C_FIELD(arg0, f32 *, 0) = temp_f3;
    temp_f1 = M2C_FIELD(arg2, f32 *, 4) * temp_f0;
    M2C_FIELD(arg0, f32 *, 4) = temp_f1;
    temp_f2 = M2C_FIELD(arg2, f32 *, 8) * temp_f0;
    M2C_FIELD(arg0, f32 *, 8) = temp_f2;
    temp_f4 = M2C_FIELD(arg1, f32 *, 4);
    temp_f3_2 = temp_f3 + (M2C_FIELD(arg2, f32 *, 0xC) * temp_f4);
    M2C_FIELD(arg0, f32 *, 0) = temp_f3_2;
    temp_f1_2 = temp_f1 + (M2C_FIELD(temp_3, f32 *, 4) * temp_f4);
    M2C_FIELD(arg0, f32 *, 4) = temp_f1_2;
    temp_f2_2 = temp_f2 + (M2C_FIELD(temp_3, f32 *, 8) * temp_f4);
    M2C_FIELD(arg0, f32 *, 8) = temp_f2_2;
    temp_f4_2 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f3_2 + (M2C_FIELD(arg2, f32 *, 0x18) * temp_f4_2));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_f1_2 + (M2C_FIELD(temp_7, f32 *, 4) * temp_f4_2));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f2_2 + (M2C_FIELD(temp_7, f32 *, 8) * temp_f4_2));
    temp_f0_2 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_f1_3 = M2C_FIELD(arg2, f32 *, 0) * temp_f0_2;
    M2C_FIELD(arg0, f32 *, 0xC) = temp_f1_3;
    temp_f2_3 = M2C_FIELD(arg2, f32 *, 4) * temp_f0_2;
    M2C_FIELD(temp_2, f32 *, 4) = temp_f2_3;
    temp_f3_3 = M2C_FIELD(arg2, f32 *, 8) * temp_f0_2;
    M2C_FIELD(temp_2, f32 *, 8) = temp_f3_3;
    temp_f4_3 = M2C_FIELD(arg1, f32 *, 0x10);
    temp_f1_4 = temp_f1_3 + (M2C_FIELD(arg2, f32 *, 0xC) * temp_f4_3);
    M2C_FIELD(arg0, f32 *, 0xC) = temp_f1_4;
    temp_f2_4 = temp_f2_3 + (M2C_FIELD(temp_3, f32 *, 4) * temp_f4_3);
    M2C_FIELD(temp_2, f32 *, 4) = temp_f2_4;
    temp_f3_4 = temp_f3_3 + (M2C_FIELD(temp_3, f32 *, 8) * temp_f4_3);
    M2C_FIELD(temp_2, f32 *, 8) = temp_f3_4;
    temp_f4_4 = M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_f1_4 + (M2C_FIELD(arg2, f32 *, 0x18) * temp_f4_4));
    M2C_FIELD(temp_2, f32 *, 4) = (f32) (temp_f2_4 + (M2C_FIELD(temp_7, f32 *, 4) * temp_f4_4));
    M2C_FIELD(temp_2, f32 *, 8) = (f32) (temp_f3_4 + (M2C_FIELD(temp_7, f32 *, 8) * temp_f4_4));
    temp_f0_3 = M2C_FIELD(arg1, f32 *, 0x18);
    temp_f1_5 = M2C_FIELD(arg2, f32 *, 0) * temp_f0_3;
    M2C_FIELD(arg0, f32 *, 0x18) = temp_f1_5;
    temp_f2_5 = M2C_FIELD(arg2, f32 *, 4) * temp_f0_3;
    M2C_FIELD(temp_8, f32 *, 4) = temp_f2_5;
    temp_f3_5 = M2C_FIELD(arg2, f32 *, 8) * temp_f0_3;
    M2C_FIELD(temp_8, f32 *, 8) = temp_f3_5;
    temp_f4_5 = M2C_FIELD(arg1, f32 *, 0x1C);
    temp_f1_6 = temp_f1_5 + (M2C_FIELD(arg2, f32 *, 0xC) * temp_f4_5);
    M2C_FIELD(arg0, f32 *, 0x18) = temp_f1_6;
    temp_f2_6 = temp_f2_5 + (M2C_FIELD(temp_3, f32 *, 4) * temp_f4_5);
    M2C_FIELD(temp_8, f32 *, 4) = temp_f2_6;
    temp_f3_6 = temp_f3_5 + (M2C_FIELD(temp_3, f32 *, 8) * temp_f4_5);
    M2C_FIELD(temp_8, f32 *, 8) = temp_f3_6;
    temp_f4_6 = M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_f1_6 + (M2C_FIELD(arg2, f32 *, 0x18) * temp_f4_6));
    M2C_FIELD(temp_8, f32 *, 4) = (f32) (temp_f2_6 + (M2C_FIELD(temp_7, f32 *, 4) * temp_f4_6));
    M2C_FIELD(temp_8, f32 *, 8) = (f32) (temp_f3_6 + (M2C_FIELD(temp_7, f32 *, 8) * temp_f4_6));
}
