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

extern M2C_UNK D_00446070;
extern s32 D_00446074;
extern M2C_UNK D_008E6B40;
extern M2C_UNK D_008E8100;

M2C_UNK *func_002E0DB0(M2C_UNK **arg0, M2C_UNK **arg1) {
    *arg0 = &D_008E8100;
    *arg1 = &D_00446070;
    M2C_FIELD(&D_008E8100, s32 *, 0x3C) = (s32) D_00446074;
    return &D_008E6B40;
}
