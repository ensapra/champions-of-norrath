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

M2C_UNK Normalize__7VIVect3(void *, f32 *, M2C_UNK, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */

s32 CollideNoCaps__9VICollideR9VICollRayRC10VICylinder(void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
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
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f9;
    f32 var_f20;
    s32 var_7;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;

    temp_3 = arg2 + 0xC;
    temp_2 = arg1 + 0x24;
    temp_f9 = M2C_FIELD(arg2, f32 *, 0xC);
    temp_f19 = M2C_FIELD(arg1, f32 *, 0x24);
    temp_f21 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f11 = M2C_FIELD(temp_3, f32 *, 8);
    temp_f22 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f10 = M2C_FIELD(temp_3, f32 *, 4);
    temp_f5 = (temp_f21 * temp_f11) - (temp_f22 * temp_f10);
    temp_f0 = (-temp_f19 * temp_f11) + (temp_f22 * temp_f9);
    sp0 = 0.0f;
    temp_f1 = (temp_f19 * temp_f10) - (temp_f21 * temp_f9);
    sp4 = 0.0f;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    sp20 = 0.0f;
    sp24 = 0.0f;
    sp28 = 0.0f;
    sp2C = 0.0f;
    sp20 = temp_f5;
    sp24 = temp_f0;
    sp28 = temp_f1;
    var_7 = 0;
    if (((temp_f5 * temp_f5) + (temp_f0 * temp_f0) + (temp_f1 * temp_f1)) > 0.0f) {
        temp_f14 = M2C_FIELD(arg2, f32 *, 4);
        temp_f7 = M2C_ERROR(/* unknown instruction: rsqrt.s $f7, $f0, $f1 */);
        temp_f15 = M2C_FIELD(arg2, f32 *, 8);
        temp_f16 = M2C_FIELD(arg1, f32 *, 0);
        temp_f17 = M2C_FIELD(arg1, f32 *, 4);
        temp_f18 = M2C_FIELD(arg1, f32 *, 8);
        temp_f12 = M2C_FIELD(arg2, f32 *, 0x1C);
        temp_f13 = M2C_FIELD(arg2, f32 *, 0);
        sp20 = temp_f5 * temp_f7;
        temp_f2 = sp24 * temp_f7;
        temp_f3 = sp28 * temp_f7;
        sp24 = temp_f2;
        sp28 = temp_f3;
        temp_f1_2 = -((sp20 * temp_f13) + (temp_f2 * temp_f14) + (temp_f3 * temp_f15));
        sp2C = temp_f1_2;
        temp_f6 = (temp_f16 * sp20) + (temp_f17 * temp_f2) + (temp_f18 * temp_f3) + temp_f1_2;
        if ((-temp_f12 < temp_f6) && (temp_f6 < temp_f12)) {
            temp_f1_3 = temp_f17 - temp_f14;
            temp_f3_2 = temp_f18 - temp_f15;
            sp4 = temp_f1_3;
            sp8 = temp_f3_2;
            sp0 = temp_f16 - temp_f13;
            sp10 = (temp_f1_3 * temp_f11) - (temp_f3_2 * temp_f10);
            temp_f3_3 = (sp0 * temp_f10) - (sp4 * temp_f9);
            temp_f2_2 = (-sp0 * temp_f11) + (sp8 * temp_f9);
            sp18 = temp_f3_3;
            sp14 = temp_f2_2;
            temp_f20 = -((sp10 * sp20) + (temp_f2_2 * sp24) + (temp_f3_3 * sp28)) * temp_f7;
            if (temp_f20 > 0.0f) {
                temp_f2_3 = (sp24 * temp_f11) - (sp28 * temp_f10);
                sp0 = temp_f2_3;
                M2C_ERROR(/* unknown instruction: c1 0x100c4 */);
                temp_f0_2 = (-sp20 * temp_f11) + (sp28 * temp_f9);
                sp4 = temp_f0_2;
                temp_f1_4 = (sp20 * temp_f10) - (sp24 * temp_f9);
                var_f20 = temp_f20 + ((temp_f6 * temp_f6) / ((temp_f19 * temp_f2_3) + (temp_f21 * temp_f0_2) + (temp_f22 * temp_f1_4)));
                sp8 = temp_f1_4;
                if (var_f20 < 0.0f) {
                    var_f20 = 0.0f;
                }
                temp_f20_2 = var_f20 * M2C_FIELD(arg1, f32 *, 0x34);
                if (temp_f20_2 < M2C_FIELD(arg1, f32 *, 0x44)) {
                    temp_2_2 = arg1 + 0x18;
                    temp_f4 = (M2C_FIELD(arg1, f32 *, 0x18) * temp_f20_2) + temp_f16;
                    temp_f6_2 = (M2C_FIELD(temp_2_2, f32 *, 4) * temp_f20_2) + temp_f17;
                    temp_f7_2 = (M2C_FIELD(temp_2_2, f32 *, 8) * temp_f20_2) + temp_f18;
                    sp0 = temp_f4;
                    sp4 = temp_f6_2;
                    temp_f3_4 = ((temp_f4 * temp_f9) + (temp_f6_2 * temp_f10) + (temp_f7_2 * temp_f11)) - ((temp_f13 * temp_f9) + (temp_f14 * temp_f10) + (temp_f15 * temp_f11));
                    sp8 = temp_f7_2;
                    if ((temp_f3_4 >= 0.0f) && (temp_f3_4 <= M2C_FIELD(arg2, f32 *, 0x18))) {
                        temp_2_3 = arg1 + 0x4C;
                        M2C_FIELD(arg1, f32 *, 0x4C) = temp_f4;
                        M2C_FIELD(temp_2_3, f32 *, 4) = temp_f6_2;
                        M2C_FIELD(temp_2_3, f32 *, 8) = temp_f7_2;
                        temp_f3_5 = temp_f4 - M2C_FIELD(arg2, f32 *, 0);
                        M2C_FIELD(arg1, f32 *, 0x4C) = temp_f3_5;
                        temp_f4_2 = temp_f6_2 - M2C_FIELD(arg2, f32 *, 4);
                        M2C_FIELD(temp_2_3, f32 *, 4) = temp_f4_2;
                        temp_f5_2 = temp_f7_2 - M2C_FIELD(arg2, f32 *, 8);
                        M2C_FIELD(temp_2_3, f32 *, 8) = temp_f5_2;
                        temp_f6_3 = M2C_FIELD(arg2, f32 *, 0xC);
                        temp_f1_5 = (temp_f3_5 * temp_f6_3) + (temp_f4_2 * M2C_FIELD(temp_3, f32 *, 4)) + (temp_f5_2 * M2C_FIELD(temp_3, f32 *, 8));
                        M2C_FIELD(arg1, f32 *, 0x4C) = (f32) (temp_f3_5 - (temp_f6_3 * temp_f1_5));
                        M2C_FIELD(temp_2_3, f32 *, 4) = (f32) (temp_f4_2 - (M2C_FIELD(temp_3, f32 *, 4) * temp_f1_5));
                        M2C_FIELD(temp_2_3, f32 *, 8) = (f32) (temp_f5_2 - (M2C_FIELD(temp_3, f32 *, 8) * temp_f1_5));
                        Normalize__7VIVect3(temp_2_3, &sp10, 0, temp_f12, temp_f13, temp_f14, temp_f15, temp_f16, temp_f17, temp_f18, temp_f19);
                        M2C_FIELD(arg1, f32 *, 0x44) = temp_f20_2;
                        var_7 = 1;
                    }
                }
            }
        }
    }
    return var_7;
}
