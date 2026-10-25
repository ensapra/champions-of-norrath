/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

extern M2C_UNK D_00362D08;

s32 func_0018D068(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x38C) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x388) = arg1;
    M2C_FIELD(arg0, s32 *, 0x384) = arg2;
    return M2C_FIELD(arg0, s32 (**)(void *, M2C_UNK *), 0x394)(arg0, &D_00362D08);
}
