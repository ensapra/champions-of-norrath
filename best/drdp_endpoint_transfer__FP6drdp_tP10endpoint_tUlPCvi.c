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

M2C_UNK drdp_format_endpoint__FPcUl(M2C_UNK *, s32); /* extern */
s32 endpoint_get_id__FPC10endpoint_t(s32);          /* extern */
M2C_UNK endpoint_transfer__FP10endpoint_tUlPCvi(s32, s32, s32, s32); /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32);            /* extern */
extern M2C_UNK D_011E5CA0;
extern M2C_UNK D_011E5CC0;

void drdp_endpoint_transfer__FP6drdp_tP10endpoint_tUlPCvi(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    vtree_remove__FP7vtree_tPv(arg0 + 0x14);
    drdp_format_endpoint__FPcUl(&D_011E5CA0, endpoint_get_id__FPC10endpoint_t(arg1));
    drdp_format_endpoint__FPcUl(&D_011E5CC0, arg2);
    endpoint_transfer__FP10endpoint_tUlPCvi(arg1, arg2, arg3, arg4);
}
