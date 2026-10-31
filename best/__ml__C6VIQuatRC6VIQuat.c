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

void *__ml__C6VIQuatRC6VIQuat(void *arg0, void *arg1, void *arg2) {
    f32 temp_f10;
    f32 temp_f13;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f9;

    temp_f2 = M2C_FIELD(arg2, f32 *, 0);
    temp_f13 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_f7 = M2C_FIELD(arg2, f32 *, 4);
    temp_f10 = M2C_FIELD(arg1, f32 *, 8);
    temp_f9 = M2C_FIELD(arg2, f32 *, 8);
    temp_f6 = M2C_FIELD(arg1, f32 *, 4);
    temp_f5 = M2C_FIELD(arg2, f32 *, 0xC);
    temp_f3 = M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (((temp_f7 * temp_f10) - (temp_f9 * temp_f6)) + (temp_f5 * temp_f3) + (temp_f2 * temp_f13));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (((temp_f9 * temp_f3) - (temp_f2 * temp_f10)) + (temp_f5 * temp_f6) + (temp_f7 * temp_f13));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) ((((temp_f5 * temp_f13) - (temp_f2 * temp_f3)) - (temp_f7 * temp_f6)) - (temp_f9 * temp_f10));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (((temp_f2 * temp_f6) - (temp_f7 * temp_f3)) + (temp_f5 * temp_f10) + (temp_f9 * temp_f13));
    return arg0;
}
