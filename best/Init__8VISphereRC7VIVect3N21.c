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

s32 Init__8VISphereRC7VIVect3N21(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
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
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 var_f2;

    temp_f3 = M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0) = temp_f3;
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 4) = temp_f1;
    temp_f4 = M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 8) = temp_f4;
    temp_f3_2 = temp_f3 + M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0) = temp_f3_2;
    temp_f1_2 = temp_f1 + M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 4) = temp_f1_2;
    temp_f4_2 = temp_f4 + M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 8) = temp_f4_2;
    temp_f3_3 = temp_f3_2 + M2C_FIELD(arg3, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0) = temp_f3_3;
    temp_f3_4 = temp_f3_3 * 0.3333333f;
    temp_f1_3 = temp_f1_2 + M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 4) = temp_f1_3;
    temp_f1_4 = temp_f1_3 * 0.3333333f;
    M2C_FIELD(arg0, f32 *, 0) = temp_f3_4;
    M2C_FIELD(arg0, f32 *, 4) = temp_f1_4;
    temp_f4_3 = (temp_f4_2 + M2C_FIELD(arg3, f32 *, 8)) * 0.3333333f;
    M2C_FIELD(arg0, f32 *, 8) = temp_f4_3;
    temp_f5 = temp_f1_4 - M2C_FIELD(arg2, f32 *, 4);
    temp_f1_5 = temp_f1_4 - M2C_FIELD(arg1, f32 *, 4);
    temp_f2 = temp_f3_4 - M2C_FIELD(arg2, f32 *, 0);
    temp_f3_5 = temp_f3_4 - M2C_FIELD(arg1, f32 *, 0);
    temp_f0 = temp_f4_3 - M2C_FIELD(arg2, f32 *, 8);
    sp4 = temp_f5;
    temp_f4_4 = temp_f4_3 - M2C_FIELD(arg1, f32 *, 8);
    sp0 = temp_f2;
    sp8 = temp_f0;
    var_f2 = (temp_f2 * temp_f2) + (temp_f5 * temp_f5) + (temp_f0 * temp_f0);
    temp_f5_2 = (temp_f3_5 * temp_f3_5) + (temp_f1_5 * temp_f1_5) + (temp_f4_4 * temp_f4_4);
    if (!(temp_f5_2 < var_f2)) {
        var_f2 = temp_f5_2;
    }
    temp_f0_2 = M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg3, f32 *, 0);
    sp0 = temp_f0_2;
    temp_f1_6 = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg3, f32 *, 4);
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg3, f32 *, 8);
    sp4 = temp_f1_6;
    temp_f0_3 = temp_f2_2 * temp_f2_2;
    sp8 = temp_f2_2;
    if (!(var_f2 < ((temp_f0_2 * temp_f0_2) + (temp_f1_6 * temp_f1_6) + temp_f0_3))) {

    }
    M2C_ERROR(/* unknown instruction: c1 0x30004 */);
    M2C_FIELD(arg0, f32 *, 0xC) = temp_f0_3;
    return 0;
}
