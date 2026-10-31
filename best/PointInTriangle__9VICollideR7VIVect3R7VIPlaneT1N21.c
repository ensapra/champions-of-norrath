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

s32 PointInTriangle__9VICollideR7VIVect3R7VIPlaneT1N21(void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f16;
    f32 temp_f17;
    f32 temp_f18;
    f32 temp_f19;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    s32 var_2;

    temp_f16 = M2C_FIELD(arg1, f32 *, 0);
    temp_f5 = M2C_FIELD(arg4, f32 *, 4);
    temp_f19 = M2C_FIELD(arg3, f32 *, 4);
    temp_f11 = M2C_FIELD(arg4, f32 *, 8);
    temp_f0 = temp_f5 - temp_f19;
    temp_f20 = M2C_FIELD(arg3, f32 *, 8);
    temp_f6 = M2C_FIELD(arg4, f32 *, 0);
    temp_f18 = M2C_FIELD(arg3, f32 *, 0);
    temp_f17 = M2C_FIELD(arg1, f32 *, 8);
    temp_f15 = M2C_FIELD(arg1, f32 *, 4);
    sp8 = 0.0f;
    sp0 = 0.0f;
    sp4 = 0.0f;
    sp10 = 0.0f;
    sp18 = 0.0f;
    sp14 = 0.0f;
    sp20 = 0.0f;
    sp4 = temp_f0;
    sp8 = temp_f11 - temp_f20;
    sp0 = temp_f6 - temp_f18;
    sp24 = 0.0f;
    sp28 = 0.0f;
    sp10 = temp_f16;
    sp18 = temp_f17;
    sp14 = temp_f15;
    sp10 = temp_f16 - temp_f6;
    temp_f2 = sp14 - temp_f5;
    temp_f3 = sp18 - temp_f11;
    sp14 = temp_f2;
    sp18 = temp_f3;
    sp20 = (sp4 * temp_f3) - (sp8 * temp_f2);
    temp_f1 = sp10;
    temp_f2_2 = (-sp0 * sp18) + (sp8 * temp_f1);
    sp24 = temp_f2_2;
    temp_f12 = M2C_FIELD(arg2, f32 *, 4);
    temp_f13 = M2C_FIELD(arg2, f32 *, 8);
    temp_f14 = M2C_FIELD(arg2, f32 *, 0);
    temp_f3_2 = (sp0 * sp14) - (temp_f0 * temp_f1);
    sp28 = temp_f3_2;
    var_2 = 0;
    if (!(((sp20 * temp_f14) + (temp_f2_2 * temp_f12) + (temp_f3_2 * temp_f13)) > 0.0f)) {
        temp_f9 = M2C_FIELD(arg5, f32 *, 8);
        temp_f8 = M2C_FIELD(arg5, f32 *, 4);
        temp_f7 = M2C_FIELD(arg5, f32 *, 0);
        temp_f0_2 = temp_f9 - temp_f11;
        sp8 = temp_f0_2;
        sp4 = temp_f8 - temp_f5;
        sp0 = temp_f7 - temp_f6;
        sp10 = temp_f16;
        sp14 = temp_f15;
        sp18 = temp_f17;
        sp10 -= temp_f7;
        temp_f2_3 = sp14 - temp_f8;
        temp_f3_3 = sp18 - temp_f9;
        sp14 = temp_f2_3;
        sp18 = temp_f3_3;
        sp20 = (sp4 * temp_f3_3) - (temp_f0_2 * temp_f2_3);
        temp_f1_2 = (-sp0 * sp18) + (temp_f0_2 * sp10);
        sp24 = temp_f1_2;
        temp_f2_4 = (sp0 * sp14) - (sp4 * sp10);
        sp28 = temp_f2_4;
        if (!(((sp20 * temp_f14) + (temp_f1_2 * temp_f12) + (temp_f2_4 * temp_f13)) > 0.0f)) {
            temp_f2_5 = temp_f18 - temp_f7;
            sp0 = temp_f2_5;
            sp4 = temp_f19 - temp_f8;
            sp8 = temp_f20 - temp_f9;
            sp10 = temp_f16;
            sp14 = temp_f15;
            sp18 = temp_f17;
            sp10 -= temp_f18;
            temp_f2_6 = sp14 - temp_f19;
            temp_f3_4 = sp18 - temp_f20;
            sp14 = temp_f2_6;
            sp18 = temp_f3_4;
            sp20 = (sp4 * temp_f3_4) - (sp8 * temp_f2_6);
            temp_f1_3 = (-temp_f2_5 * sp18) + (sp8 * sp10);
            sp24 = temp_f1_3;
            temp_f2_7 = (temp_f2_5 * sp14) - (sp4 * sp10);
            sp28 = temp_f2_7;
            if (!(((sp20 * temp_f14) + (temp_f1_3 * temp_f12) + (temp_f2_7 * temp_f13)) > 0.0f)) {
                var_2 = 1;
            }
        }
    }
    return var_2;
}
