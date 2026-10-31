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

void Frustum__8VIRasterR10VIMatrix44ffffff(void *arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5) {
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f1;
    f32 temp_f2;

    M2C_FIELD(arg1, s32 *, 0x3C) = 0;
    temp_f2 = 2.0f * fparg4;
    M2C_FIELD(arg1, f32 *, 0x2C) = 1.0f;
    temp_f13 = fparg1 - fparg0;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    temp_f1 = fparg5 - fparg4;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    temp_f14 = fparg2 - fparg3;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    M2C_FIELD(arg1, s32 *, 0x18) = 0;
    M2C_FIELD(arg1, s32 *, 0x1C) = 0;
    M2C_FIELD(arg1, s32 *, 0x30) = 0;
    M2C_FIELD(arg1, s32 *, 0x34) = 0;
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) ((fparg1 + fparg0) / temp_f13);
    M2C_FIELD(arg1, f32 *, 0x24) = (f32) ((fparg2 + fparg3) / temp_f14);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) (temp_f2 / temp_f14);
    M2C_FIELD(arg1, f32 *, 0x38) = (f32) ((fparg5 * -2.0f * fparg4) / temp_f1);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) ((fparg5 + fparg4) / temp_f1);
    M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_f2 / temp_f13);
}
