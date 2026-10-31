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

M2C_UNK bandwidth_recv__FP11bandwidth_tUii(void *, s32, s32); /* extern */
s32 drdp_get_time__FPC6drdp_t(s32);                 /* extern */

void route_record_arrival__FP7route_ti(void *arg0, s32 arg1) {
    bandwidth_recv__FP11bandwidth_tUii(arg0 + 0xC0, drdp_get_time__FPC6drdp_t(M2C_FIELD(arg0, s32 *, 0x24)), arg1 + 0x1C);
}
