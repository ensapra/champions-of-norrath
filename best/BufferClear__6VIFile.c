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

s32 BufferClear__6VIFile(void *arg0) {
    M2C_FIELD(arg0, s64 *, 0x88) = 0;
    M2C_FIELD(arg0, s64 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s64 *, 0x90) = 0;
    M2C_FIELD(arg0, s64 *, 0x98) = 0;
    M2C_FIELD(arg0, s64 *, 0xA0) = 0;
    return 0;
}
