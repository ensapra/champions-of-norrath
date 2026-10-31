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

void *Project__C7VIPlaneRC7VIVect3(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;

    temp_f4 = M2C_FIELD(arg1, f32 *, 0);
    temp_f3 = M2C_FIELD(arg1, f32 *, 4);
    temp_f8 = M2C_FIELD(arg2, f32 *, 0);
    temp_f9 = M2C_FIELD(arg2, f32 *, 4);
    temp_f7 = M2C_FIELD(arg2, f32 *, 8);
    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    temp_f0 = -((temp_f8 * temp_f4) + (temp_f9 * temp_f3) + (temp_f7 * temp_f1) + M2C_FIELD(arg1, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_f1 * temp_f0) + temp_f7);
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_f4 * temp_f0) + temp_f8);
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_f3 * temp_f0) + temp_f9);
    return arg0;
}
