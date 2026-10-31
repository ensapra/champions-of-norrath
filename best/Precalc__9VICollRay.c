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

f32 Magnitude__C7VIVect3(void *);                   /* extern */

s32 Precalc__9VICollRay(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    void *temp_17;
    void *temp_2;
    void *temp_3;

    temp_17 = arg0 + 0x24;
    temp_3 = arg0 + 0xC;
    temp_2 = arg0 + 0x18;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x18) = temp_f3;
    temp_f1 = M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 4) = temp_f1;
    temp_f2 = M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_2, f32 *, 8) = temp_f2;
    temp_f3_2 = temp_f3 - M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x18) = temp_f3_2;
    M2C_FIELD(temp_2, f32 *, 4) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 4));
    M2C_FIELD(temp_2, f32 *, 8) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f3_2;
    M2C_FIELD(temp_17, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(temp_17, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    temp_f0 = Magnitude__C7VIVect3(temp_17);
    M2C_FIELD(arg0, f32 *, 0x30) = temp_f0;
    if (temp_f0 != 0.0f) {
        temp_f0_2 = 1.0f / temp_f0;
        M2C_FIELD(arg0, f32 *, 0x34) = temp_f0_2;
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * temp_f0_2);
        M2C_FIELD(temp_17, f32 *, 4) = (f32) (M2C_FIELD(temp_17, f32 *, 4) * temp_f0_2);
        M2C_FIELD(temp_17, f32 *, 8) = (f32) (M2C_FIELD(temp_17, f32 *, 8) * temp_f0_2);
        return 0;
    }
    M2C_FIELD(arg0, f32 *, 0x34) = 0.0f;
    return 0;
}
