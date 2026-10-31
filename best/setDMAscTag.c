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

void setDMAscTag(s64 *arg0, s64 arg1, s32 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6) {
    *arg0 = (arg1 << 0x3F) | ((u64) (arg6 << 0x20) >> 0x20) | (((u64) (arg4 << 0x20) >> 4) | ((u64) (arg3 << 0x20) >> 1)) | (((arg2 & ~0xF) << 0x20) | ((u64) (arg5 << 0x20) >> 6));
}
