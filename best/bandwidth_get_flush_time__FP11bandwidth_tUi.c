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

M2C_UNK bandwidth_process__FP11bandwidth_tUi();     /* extern */

s32 bandwidth_get_flush_time__FP11bandwidth_tUi(void *arg0, s32 arg1) {
    f32 temp_f1;
    f32 var_f1;
    s32 var_2;

    bandwidth_process__FP11bandwidth_tUi();
    var_f1 = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg0, f32 *, 8);
    if (var_f1 < 0.0f) {
        var_f1 = 0.0f;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    var_2 = arg1 + M2C_BITWISE(s32, temp_f1);
    if (((var_f1 * 1000.0f) / temp_f1) >= 2.1474836e9f) {
        var_2 = arg1 + (M2C_BITWISE(s32, temp_f1) | 0x80000000);
    }
    return var_2;
}
