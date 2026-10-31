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

M2C_UNK buffer_append_packed_uns64__FP8buffer_tUl(s32, s32); /* extern */
M2C_UNK buffer_append_uns32__FP8buffer_tUi(s32, s32); /* extern */

void compress_flush_time_history__FP8buffer_tPUi(s32 arg0, s32 *arg1) {
    s32 *var_16;
    s32 temp_5;
    s32 var_17;
    s32 var_2;
    s32 var_5;

    var_16 = arg1;
    var_17 = 0;
    var_2 = *var_16;
loop_1:
    var_5 = 0;
    if ((var_2 == 0) && (var_17 < 0x400)) {
loop_3:
        var_16 += 4;
        var_17 += 1;
        var_5 += 1;
        if (*var_16 == 0) {
            if (var_17 < 0x400) {
                goto loop_3;
            }
        }
    }
    buffer_append_packed_uns64__FP8buffer_tUl(arg0, var_5);
    if (var_17 != 0x400) {
        temp_5 = *var_16;
        var_16 += 4;
        var_17 += 1;
        buffer_append_uns32__FP8buffer_tUi(arg0, temp_5);
        if (var_17 < 0x400) {
            var_2 = *var_16;
            goto loop_1;
        }
    }
    buffer_append_uns32__FP8buffer_tUi(arg0, 0xBAADF00D);
}
