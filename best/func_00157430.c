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

extern f32 D_0047FECC;
extern f32 D_0047FED0;

s32 func_00157430(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
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
    f32 temp_f10;
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
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f9;
    f32 var_f1;
    s32 var_2;

    temp_f7 = M2C_FIELD(arg4, f32 *, 4);
    var_2 = 0;
    temp_f10 = M2C_FIELD(arg4, f32 *, 0);
    temp_f2 = M2C_FIELD(arg3, f32 *, 4) - temp_f7;
    temp_f3 = M2C_FIELD(arg3, f32 *, 0) - temp_f10;
    temp_f6 = M2C_FIELD(arg4, f32 *, 8);
    temp_f8 = M2C_FIELD(arg2, f32 *, 4);
    temp_f9 = M2C_FIELD(arg2, f32 *, 0);
    temp_f1 = M2C_FIELD(arg3, f32 *, 8) - temp_f6;
    temp_f5 = M2C_FIELD(arg2, f32 *, 8);
    sp0 = temp_f3;
    sp4 = temp_f2;
    sp8 = temp_f1;
    if (!(((temp_f3 * temp_f9) + (temp_f2 * temp_f8) + (temp_f1 * temp_f5)) >= 0.0f)) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0) - temp_f10;
        temp_f3_2 = M2C_FIELD(arg0, f32 *, 4) - temp_f7;
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 8) - temp_f6;
        sp10 = temp_f0;
        sp14 = temp_f3_2;
        sp18 = temp_f2_2;
        var_f1 = (sp0 * temp_f9) + (sp4 * temp_f8) + (sp8 * temp_f5);
        if ((var_f1 > 0.0f) && (var_f1 < D_0047FECC)) {
            var_f1 = D_0047FECC;
        }
        if ((var_f1 < 0.0f) && (D_0047FED0 < var_f1)) {
            var_f1 = D_0047FED0;
        }
        temp_f1_2 = ((temp_f0 * temp_f9) + (temp_f3_2 * temp_f8) + (temp_f2_2 * temp_f5)) / var_f1;
        var_2 = 0;
        if (!(temp_f1_2 < 0.0f) && !(temp_f1_2 > 1.0f)) {
            temp_f7_2 = temp_f10 + (sp0 * temp_f1_2);
            M2C_FIELD(arg5, f32 *, 0) = temp_f7_2;
            temp_f5_2 = M2C_FIELD(arg4, f32 *, 4) + (sp4 * temp_f1_2);
            M2C_FIELD(arg5, f32 *, 4) = temp_f5_2;
            temp_f4 = M2C_FIELD(arg4, f32 *, 8) + (sp8 * temp_f1_2);
            M2C_FIELD(arg5, f32 *, 8) = temp_f4;
            temp_f1_3 = M2C_FIELD(arg1, f32 *, 8);
            temp_f6_2 = M2C_FIELD(arg1, f32 *, 0);
            temp_f3_3 = M2C_FIELD(arg0, f32 *, 8) - temp_f1_3;
            temp_f2_3 = M2C_FIELD(arg1, f32 *, 4);
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0) - temp_f6_2;
            temp_f1_4 = M2C_FIELD(arg0, f32 *, 4) - temp_f2_3;
            temp_f6_3 = temp_f3_3 * temp_f3_3;
            sp20 = temp_f0_2;
            sp28 = temp_f3_3;
            sp24 = temp_f1_4;
            M2C_ERROR(/* unknown instruction: c1 0x184 */);
            temp_f3_4 = 1.0f / temp_f6_3;
            sp20 = temp_f0_2 * temp_f3_4;
            temp_f1_5 = temp_f1_4 * temp_f3_4;
            temp_f2_4 = sp28 * temp_f3_4;
            sp24 = temp_f1_5;
            sp28 = temp_f2_4;
            temp_f1_6 = (sp20 * (temp_f7_2 - temp_f6_2)) + (temp_f1_5 * (temp_f5_2 - temp_f2_3)) + (temp_f2_4 * (temp_f4 - temp_f1_3));
            var_2 = 0;
            if (!(temp_f1_6 < -0.25f)) {
                var_2 = 1;
                if ((temp_f6_3 + 0.25f) < temp_f1_6) {
                    var_2 = 0;
                }
            }
        }
    }
    return var_2;
}
