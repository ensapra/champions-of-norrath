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

void SubMatrixBlendAccum__C10VIMatrix44RC7VIVect3fR7VIVect3(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) + (M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0) * fparg0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0) * fparg0));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg2, f32 *, 8) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0) * fparg0));
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) + (M2C_FIELD(arg0, f32 *, 0x10) * M2C_FIELD(arg1, f32 *, 4) * fparg0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 0x14) * M2C_FIELD(arg1, f32 *, 4) * fparg0));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg2, f32 *, 8) + (M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 4) * fparg0));
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) + (M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(arg1, f32 *, 8) * fparg0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 0x24) * M2C_FIELD(arg1, f32 *, 8) * fparg0));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg2, f32 *, 8) + (M2C_FIELD(arg0, f32 *, 0x28) * M2C_FIELD(arg1, f32 *, 8) * fparg0));
}
