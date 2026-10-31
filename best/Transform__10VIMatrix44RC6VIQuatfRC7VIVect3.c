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

void Transform__10VIMatrix44RC6VIQuatfRC7VIVect3(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;
    f32 temp_f9;

    temp_f5 = M2C_FIELD(arg1, f32 *, 8);
    temp_f8 = M2C_FIELD(arg1, f32 *, 4);
    temp_f4 = M2C_FIELD(arg1, f32 *, 0);
    temp_f6 = 2.0f * temp_f8;
    temp_f2 = 2.0f * temp_f4;
    temp_f0 = 2.0f * M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_f9 = 2.0f * temp_f5 * temp_f5;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    temp_f1 = temp_f6 * temp_f8;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    temp_f3 = temp_f2 * temp_f4;
    temp_f10 = temp_f2 * temp_f5;
    temp_f13 = temp_f0 * temp_f5;
    temp_f6_2 = temp_f6 * temp_f5;
    temp_f4_2 = temp_f0 * temp_f4;
    temp_f2_2 = temp_f2 * temp_f8;
    temp_f0_2 = temp_f0 * temp_f8;
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((1.0f - (temp_f1 + temp_f9)) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((1.0f - (temp_f3 + temp_f1)) * fparg0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_f2_2 + temp_f13) * fparg0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_f10 - temp_f0_2) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((temp_f2_2 - temp_f13) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((1.0f - (temp_f3 + temp_f9)) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((temp_f6_2 + temp_f4_2) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((temp_f10 + temp_f0_2) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((temp_f6_2 - temp_f4_2) * fparg0);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x3C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg2, f32 *, 8);
}
