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

void setGIFtag(void *arg0, s64 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((arg6 << 0xF) | arg7);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1 >> 0x20);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg5 << 0xE) | (arg2 << 0x1C) | ((arg3 << 0x1A) | (arg4 << 0xF)));
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s64) ((arg1 & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20);
}
