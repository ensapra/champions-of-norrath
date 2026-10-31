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

M2C_UNK MemorySegmCalcSegm__6VIFile(void *);        /* extern */

s32 MemorySegmSeek__6VIFilelQ26VIFile10SeekOrigin(void *arg0, s64 arg1, s32 arg2) {
    s32 var_2;
    s64 temp_3;
    s64 var_2_2;

    switch (arg2) {                                 /* irregular */
    case 1:
        M2C_FIELD(arg0, s64 *, 0x10) = arg1;
block_9:
        temp_3 = M2C_FIELD(arg0, s64 *, 0x10);
        var_2 = -1;
        if (temp_3 >= 0) {
            var_2 = -1;
            if (temp_3 < M2C_FIELD(arg0, s64 *, 0x28)) {
                MemorySegmCalcSegm__6VIFile(arg0);
                M2C_FIELD(arg0, s32 *, 8) = 0;
                var_2 = 0;
            }
        }
        break;
    case 0:
        var_2_2 = M2C_FIELD(arg0, s64 *, 0x10);
block_8:
        M2C_FIELD(arg0, s64 *, 0x10) = (s64) (var_2_2 + arg1);
        goto block_9;
    default:
        var_2 = -1;
        if (arg2 == 2) {
            var_2_2 = M2C_FIELD(arg0, s64 *, 0x28);
            goto block_8;
        }
        break;
    }
    return var_2;
}
