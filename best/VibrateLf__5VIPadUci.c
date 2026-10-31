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

void VibrateLf__5VIPadUci(void *arg0, s32 arg1, s32 arg2) {
    if (((s64) ((M2C_FIELD(arg0, s64 *, 0x20) == 2) << 0x20) >> 0x20) != 0) {
        M2C_FIELD(arg0, s8 *, 0x29) = (s8) (arg1 & 0xFF);
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
        M2C_FIELD(arg0, s64 *, 0x10) = (s64) (arg2 + M2C_FIELD(arg0, s64 *, 8));
    }
}
