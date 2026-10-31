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

s32 RayIntersection__C7VIPlaneRC7VIVect3T1RfR7VIVect3(void *arg0, void *arg1, void *arg2, f32 *arg3, void *arg4) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f6;

    temp_f6 = (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(arg0, f32 *, 8)) + M2C_FIELD(arg0, f32 *, 0xC);
    *arg3 = temp_f6;
    temp_f1 = (M2C_FIELD(arg2, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + (M2C_FIELD(arg2, f32 *, 4) * M2C_FIELD(arg0, f32 *, 4)) + (M2C_FIELD(arg2, f32 *, 8) * M2C_FIELD(arg0, f32 *, 8));
    if (temp_f1 == 0.0f) {
        *arg3 = 0.0f;
        M2C_FIELD(arg4, f32 *, 8) = 0.0f;
        M2C_FIELD(arg4, f32 *, 0) = 0.0f;
        M2C_FIELD(arg4, f32 *, 4) = 0.0f;
        return 0;
    }
    *arg3 = -temp_f6 / temp_f1;
    temp_f1_2 = M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg4, f32 *, 0) = temp_f1_2;
    temp_f2 = M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg4, f32 *, 4) = temp_f2;
    temp_f3 = M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(arg4, f32 *, 8) = temp_f3;
    temp_f0 = *arg3;
    temp_f3_2 = temp_f3 * temp_f0;
    temp_f1_3 = temp_f1_2 * temp_f0;
    temp_f2_2 = temp_f2 * temp_f0;
    M2C_FIELD(arg4, f32 *, 8) = temp_f3_2;
    M2C_FIELD(arg4, f32 *, 0) = temp_f1_3;
    M2C_FIELD(arg4, f32 *, 4) = temp_f2_2;
    M2C_FIELD(arg4, f32 *, 0) = (f32) (temp_f1_3 + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg4, f32 *, 4) = (f32) (temp_f2_2 + M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg4, f32 *, 8) = (f32) (temp_f3_2 + M2C_FIELD(arg1, f32 *, 8));
    return 1;
}
