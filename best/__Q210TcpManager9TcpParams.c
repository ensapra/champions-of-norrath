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

void __Q210TcpManager9TcpParams(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x58) = 0x400;
    M2C_FIELD(arg0, s32 *, 0x44) = 0xA;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0x10000;
    M2C_FIELD(arg0, s32 *, 0x50) = 0x2000;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x10;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x10000;
}
