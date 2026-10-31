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

s32 MemorySeek__6VIFilelQ26VIFile10SeekOrigin(void *arg0, s64 arg1, s32 arg2) {
    s64 temp_3;
    s64 var_2;

    switch (arg2) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s64 *, 0x10) = arg1;
block_10:
        temp_3 = M2C_FIELD(arg0, s64 *, 0x10);
        if (temp_3 >= 0) {
            if (temp_3 < M2C_FIELD(arg0, s64 *, 0x28)) {
                M2C_FIELD(arg0, s32 *, 8) = 0;
                return 0;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            return -1;
        }
    default:
        return -1;
    case 0:
        var_2 = M2C_FIELD(arg0, s64 *, 0x10);
block_9:
        M2C_FIELD(arg0, s64 *, 0x10) = (s64) (var_2 + arg1);
        goto block_10;
    case 2:
        var_2 = M2C_FIELD(arg0, s64 *, 0x28);
        goto block_9;
    }
}
