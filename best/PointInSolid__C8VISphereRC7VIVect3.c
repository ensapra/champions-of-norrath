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

s32 PointInSolid__C8VISphereRC7VIVect3(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f5;
    s32 var_2;

    var_2 = 0;
    temp_f3 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f1 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8);
    sp4 = temp_f3;
    sp0 = temp_f2;
    sp8 = temp_f1;
    if (((temp_f2 * temp_f2) + (temp_f3 * temp_f3) + (temp_f1 * temp_f1)) <= (temp_f5 * temp_f5)) {
        var_2 = 1;
    }
    return var_2;
}
