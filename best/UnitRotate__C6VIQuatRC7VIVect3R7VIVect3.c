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

void UnitRotate__C6VIQuatRC7VIVect3R7VIVect3(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f7;

    temp_f14 = M2C_FIELD(arg0, f32 *, 0);
    temp_f12 = M2C_FIELD(arg0, f32 *, 4);
    temp_f13 = M2C_FIELD(arg0, f32 *, 8);
    temp_f2 = -temp_f12;
    temp_f7 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f1 = -temp_f13;
    temp_f5 = M2C_FIELD(arg1, f32 *, 0);
    temp_f4 = M2C_FIELD(arg1, f32 *, 8);
    sp4 = 0.0f;
    sp8 = 0.0f;
    spC = 0.0f;
    sp0 = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    sp1C = 0.0f;
    sp20 = 0.0f;
    sp24 = 0.0f;
    sp28 = 0.0f;
    sp2C = 0.0f;
    sp30 = 0.0f;
    sp34 = 0.0f;
    sp38 = 0.0f;
    sp3C = 0.0f;
    spC = temp_f7;
    sp4 = temp_f2;
    sp8 = temp_f1;
    sp0 = -temp_f14;
    sp30 = temp_f5;
    temp_f3 = M2C_FIELD(arg1, f32 *, 4);
    sp34 = temp_f3;
    sp3C = 0.0f;
    sp38 = temp_f4;
    sp10 = ((temp_f3 * temp_f1) - (temp_f4 * temp_f2)) + (temp_f5 * spC);
    temp_f3_2 = ((sp38 * sp0) - (sp30 * temp_f1)) + (sp3C * sp4) + (sp34 * spC);
    sp14 = temp_f3_2;
    temp_f0 = ((sp30 * sp4) - (sp34 * sp0)) + (sp3C * temp_f1) + (sp38 * spC);
    sp18 = temp_f0;
    temp_f2_2 = (((sp3C * spC) - (sp30 * sp0)) - (sp34 * sp4)) - (sp38 * temp_f1);
    sp1C = temp_f2_2;
    sp20 = ((temp_f12 * temp_f0) - (temp_f13 * temp_f3_2)) + (temp_f7 * sp10) + (temp_f14 * temp_f2_2);
    temp_f1_2 = ((temp_f13 * sp10) - (temp_f14 * sp18)) + (temp_f7 * sp14) + (temp_f12 * temp_f2_2);
    sp24 = temp_f1_2;
    M2C_FIELD(arg2, f32 *, 4) = temp_f1_2;
    temp_f0_2 = ((temp_f14 * sp14) - (temp_f12 * sp10)) + (temp_f7 * sp18) + (temp_f13 * temp_f2_2);
    sp28 = temp_f0_2;
    M2C_FIELD(arg2, f32 *, 8) = temp_f0_2;
    sp2C = (((temp_f7 * temp_f2_2) - (temp_f14 * sp10)) - (temp_f12 * sp14)) - (temp_f13 * sp18);
    M2C_FIELD(arg2, f32 *, 0) = (f32) sp20;
}
