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

s32 LineIntersection__C7VIPlaneRC7VIVect3T1RfR7VIVect3(void *arg0, void *arg1, void *arg2, f32 *arg3, void *arg4) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    temp_f6 = M2C_FIELD(arg0, f32 *, 4);
    temp_f6_2 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f7 = M2C_FIELD(arg0, f32 *, 8);
    temp_f0 = (M2C_FIELD(arg2, f32 *, 0) * temp_f1) + (M2C_FIELD(arg2, f32 *, 4) * temp_f6) + (M2C_FIELD(arg2, f32 *, 8) * temp_f7) + temp_f6_2;
    temp_f2 = (M2C_FIELD(arg1, f32 *, 0) * temp_f1) + (M2C_FIELD(arg1, f32 *, 4) * temp_f6) + (M2C_FIELD(arg1, f32 *, 8) * temp_f7) + temp_f6_2;
    if (temp_f2 == temp_f0) {
        *arg3 = 0.0f;
        temp_f0_2 = *arg3;
        M2C_FIELD(arg4, f32 *, 8) = temp_f0_2;
        M2C_FIELD(arg4, f32 *, 0) = temp_f0_2;
        M2C_FIELD(arg4, f32 *, 4) = temp_f0_2;
        return 0;
    }
    *arg3 = temp_f2 / (temp_f2 - temp_f0);
    temp_f1_2 = M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg4, f32 *, 0) = temp_f1_2;
    temp_f2_2 = M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg4, f32 *, 4) = temp_f2_2;
    temp_f3 = M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg4, f32 *, 8) = temp_f3;
    temp_f1_3 = temp_f1_2 - M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg4, f32 *, 0) = temp_f1_3;
    temp_f2_3 = temp_f2_2 - M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg4, f32 *, 4) = temp_f2_3;
    temp_f3_2 = temp_f3 - M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg4, f32 *, 8) = temp_f3_2;
    temp_f0_3 = *arg3;
    temp_f3_3 = temp_f3_2 * temp_f0_3;
    temp_f1_4 = temp_f1_3 * temp_f0_3;
    temp_f2_4 = temp_f2_3 * temp_f0_3;
    M2C_FIELD(arg4, f32 *, 8) = temp_f3_3;
    M2C_FIELD(arg4, f32 *, 0) = temp_f1_4;
    M2C_FIELD(arg4, f32 *, 4) = temp_f2_4;
    M2C_FIELD(arg4, f32 *, 0) = (f32) (temp_f1_4 + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg4, f32 *, 4) = (f32) (temp_f2_4 + M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg4, f32 *, 8) = (f32) (temp_f3_3 + M2C_FIELD(arg1, f32 *, 8));
    return 1;
}
