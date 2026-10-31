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

M2C_UNK buffer_append_packed_uns64__FP8buffer_tUl(s64, s32); /* extern */

void buffer_append_packed_int16__FP8buffer_ts(s16 arg1) {
    s16 var_2;
    s32 var_6;

    var_2 = arg1;
    var_6 = 0;
    if (var_2 < 0) {
        var_6 = 1;
        var_2 = ~(var_2 & 0xFFFF);
    }
    buffer_append_packed_uns64__FP8buffer_tUl((s64) (((s16) (var_2 * 2) | var_6) << 0x30) >> 0x30, var_6);
}
