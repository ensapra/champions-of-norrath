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

u8 func_0017DFE8(u8);                               /* extern */

void func_0017E008(void *arg0) {
    M2C_FIELD(arg0, u8 *, 7) = func_0017DFE8(M2C_FIELD(arg0, u8 *, 7));
    M2C_FIELD(arg0, u8 *, 6) = func_0017DFE8(M2C_FIELD(arg0, u8 *, 6));
    M2C_FIELD(arg0, u8 *, 5) = func_0017DFE8(M2C_FIELD(arg0, u8 *, 5));
    M2C_FIELD(arg0, u8 *, 3) = func_0017DFE8(M2C_FIELD(arg0, u8 *, 3));
    M2C_FIELD(arg0, u8 *, 2) = func_0017DFE8(M2C_FIELD(arg0, u8 *, 2));
    M2C_FIELD(arg0, u8 *, 1) = func_0017DFE8(M2C_FIELD(arg0, u8 *, 1));
}
