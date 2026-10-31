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

s32 Normalize__7VIVect3(void *);                    /* extern */

s32 CalcAxes__8VICameraRC7VIVect3R7VIVect3N22(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f0_2;
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
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f6;
    void *temp_16;

    temp_16 = arg0 + 8;
    sp0 = 0.0f;
    M2C_FIELD(arg4, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    sp4 = 0.0f;
    M2C_FIELD(arg4, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    sp8 = 0.0f;
    M2C_FIELD(arg4, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    Normalize__7VIVect3(arg4);
    sp0 = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg4, f32 *, 0);
    sp4 = 1.0f;
    sp8 = 0.0f;
    M2C_FIELD(temp_16, f32 *, 4) = (f32) M2C_FIELD(arg4, f32 *, 4);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(arg4, f32 *, 8);
    temp_f1 = M2C_FIELD(arg4, f32 *, 0);
    temp_f2 = M2C_FIELD(arg4, f32 *, 4);
    temp_f0 = M2C_FIELD(arg4, f32 *, 8);
    temp_f1_2 = (temp_f1 * sp4) - (temp_f2 * sp0);
    temp_f2_2 = (temp_f2 * sp8) - (temp_f0 * sp4);
    temp_f3 = (-temp_f1 * sp8) + (temp_f0 * sp0);
    M2C_FIELD(arg2, f32 *, 8) = temp_f1_2;
    M2C_FIELD(arg2, f32 *, 4) = temp_f3;
    sp10 = temp_f2_2;
    M2C_FIELD(arg2, f32 *, 0) = temp_f2_2;
    sp14 = temp_f3;
    sp18 = temp_f1_2;
    if (Normalize__7VIVect3(arg2) == 0) {
        temp_f1_3 = M2C_FIELD(arg4, f32 *, 0);
        sp0 = 1.0f;
        sp4 = 0.0f;
        sp8 = 0.0f;
        temp_f2_3 = M2C_FIELD(arg4, f32 *, 4);
        temp_f3_2 = M2C_FIELD(arg4, f32 *, 8);
        temp_f1_4 = (temp_f1_3 * sp4) - (temp_f2_3 * sp0);
        temp_f4 = (-temp_f1_3 * sp8) + (temp_f3_2 * sp0);
        temp_f2_4 = (temp_f2_3 * sp8) - (temp_f3_2 * sp4);
        M2C_FIELD(arg2, f32 *, 8) = temp_f1_4;
        M2C_FIELD(arg2, f32 *, 4) = temp_f4;
        sp20 = temp_f2_4;
        M2C_FIELD(arg2, f32 *, 0) = temp_f2_4;
        sp24 = temp_f4;
        sp28 = temp_f1_4;
        Normalize__7VIVect3(arg2);
    }
    temp_f1_5 = M2C_FIELD(arg2, f32 *, 0);
    temp_f2_5 = M2C_FIELD(arg2, f32 *, 4);
    temp_f5 = M2C_FIELD(arg4, f32 *, 8);
    temp_f0_2 = M2C_FIELD(arg2, f32 *, 8);
    temp_f6 = M2C_FIELD(arg4, f32 *, 4);
    temp_f4_2 = M2C_FIELD(arg4, f32 *, 0);
    temp_f3_3 = (-temp_f1_5 * temp_f5) + (temp_f0_2 * temp_f4_2);
    temp_f2_6 = (temp_f2_5 * temp_f5) - (temp_f0_2 * temp_f6);
    temp_f1_6 = (temp_f1_5 * temp_f6) - (temp_f2_5 * temp_f4_2);
    M2C_FIELD(arg3, f32 *, 4) = temp_f3_3;
    M2C_FIELD(arg3, f32 *, 8) = temp_f1_6;
    M2C_FIELD(arg3, f32 *, 0) = temp_f2_6;
    sp30 = temp_f2_6;
    sp34 = temp_f3_3;
    sp38 = temp_f1_6;
    return 0;
}
