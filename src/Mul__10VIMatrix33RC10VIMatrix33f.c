/* machine draft (m2c) for ee-gcc-2.96 -O2 -G0 -mno-check-zero-division, tried by autopilot */
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

void Mul__10VIMatrix33RC10VIMatrix33f(void *arg0, void *arg1, f32 fparg0) {
    void *temp_2;
    void *temp_3;
    void *temp_6;
    void *temp_7;

    temp_2 = arg1 + 0xC;
    temp_3 = arg0 + 0xC;
    temp_6 = arg1 + 0x18;
    temp_7 = arg0 + 0x18;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * fparg0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * fparg0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) * fparg0);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg1, f32 *, 0xC) * fparg0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) (M2C_FIELD(temp_2, f32 *, 4) * fparg0);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) (M2C_FIELD(temp_2, f32 *, 8) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg1, f32 *, 0x18) * fparg0);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) (M2C_FIELD(temp_6, f32 *, 4) * fparg0);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) (M2C_FIELD(temp_6, f32 *, 8) * fparg0);
}
