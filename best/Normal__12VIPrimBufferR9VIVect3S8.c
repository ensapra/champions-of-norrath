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

extern M2C_UNK D_011B0140;

s32 Normal__12VIPrimBufferR9VIVect3S8(void *arg1) {
    M2C_FIELD(&D_011B0140, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(&D_011B0140, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(&D_011B0140, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
    return 0;
}
