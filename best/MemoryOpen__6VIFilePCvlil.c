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

s32 MemoryOpen__6VIFilePCvlil(void *arg0, s32 arg1, s64 arg2, s32 arg3, s64 arg4) {
    s32 var_2;

    M2C_FIELD(arg0, s32 *, 4) = arg3;
    var_2 = -1;
    if (arg3 & 7) {
        M2C_FIELD(arg0, s64 *, 0x20) = arg2;
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
        M2C_FIELD(arg0, s64 *, 0x28) = arg4;
        if (arg3 & 8) {
            M2C_FIELD(arg0, s64 *, 0x28) = 0;
            goto block_7;
        }
        if ((arg3 & 0x10) && (arg3 & 6)) {
            M2C_FIELD(arg0, s64 *, 0x10) = arg4;
        } else {
block_7:
            M2C_FIELD(arg0, s64 *, 0x10) = 0;
        }
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_2 = 0;
    }
    return var_2;
}
