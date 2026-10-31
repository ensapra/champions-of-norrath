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

M2C_UNK drdp_arrival_remove__FP6drdp_tP9message_t(s32); /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(void *, s32);    /* extern */

void endpoint_arrival_remove__FP10endpoint_tP9message_t(void *arg0, s32 arg1) {
    drdp_arrival_remove__FP6drdp_tP9message_t(M2C_FIELD(arg0, s32 *, 0x14));
    vlist_remove__FP7vlist_tPv(arg0 + 0x54, arg1);
}
