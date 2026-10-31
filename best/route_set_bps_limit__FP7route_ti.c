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

M2C_UNK bandwidth_set_bps_limit__FP11bandwidth_tUii(s32, s32, s32); /* extern */
M2C_UNK bandwidth_set_queue_size_max__FP11bandwidth_ti(s32, f32); /* extern */
f32 drdp_get_flush_interval__FP6drdp_t(s32);        /* extern */
s32 drdp_get_time__FPC6drdp_t(s32);                 /* extern */

void route_set_bps_limit__FP7route_ti(void *arg0, s32 arg1) {
    s32 temp_17;

    temp_17 = arg0 + 0xC0;
    bandwidth_set_bps_limit__FP11bandwidth_tUii(temp_17, drdp_get_time__FPC6drdp_t(M2C_FIELD(arg0, s32 *, 0x24)), arg1);
    bandwidth_set_queue_size_max__FP11bandwidth_ti(temp_17, drdp_get_flush_interval__FP6drdp_t(M2C_FIELD(arg0, s32 *, 0x24)));
}
