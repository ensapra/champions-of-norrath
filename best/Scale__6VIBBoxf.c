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

void Scale__6VIBBoxf(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    void *temp_2;

    temp_2 = arg0 + 0xC;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0);
    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = M2C_FIELD(arg0, f32 *, 8);
    temp_f3 = temp_f0 + M2C_FIELD(arg0, f32 *, 0xC);
    temp_f4 = temp_f1 + M2C_FIELD(temp_2, f32 *, 4);
    temp_f5 = temp_f2 + M2C_FIELD(temp_2, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (((temp_f0 - temp_f3) * fparg0) + temp_f3);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (((temp_f1 - temp_f4) * fparg0) + temp_f4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (((temp_f2 - temp_f5) * fparg0) + temp_f5);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (((M2C_FIELD(arg0, f32 *, 0xC) - temp_f3) * fparg0) + temp_f3);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) (((M2C_FIELD(temp_2, f32 *, 4) - temp_f4) * fparg0) + temp_f4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) (((M2C_FIELD(temp_2, f32 *, 8) - temp_f5) * fparg0) + temp_f5);
}
