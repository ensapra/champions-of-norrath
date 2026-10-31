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

M2C_UNK drdp_format_endpoint1__FUl(s64);            /* extern */
M2C_UNK drdp_format_endpoint2__FUl(s64);            /* extern */
M2C_UNK drdp_format_endpoint4__FUl(s64);            /* extern */

void segment_header_print__FP16segment_header_t(void *arg0) {
    drdp_format_endpoint1__FUl(M2C_FIELD(arg0, s64 *, 0x18));
    drdp_format_endpoint2__FUl(M2C_FIELD(arg0, s64 *, 0x20));
    drdp_format_endpoint4__FUl(M2C_FIELD(arg0, s64 *, 0x10));
}
