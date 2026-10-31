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

M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
s32 drdp_get_route_endpoint__FP6drdp_tUl(s32, s32); /* extern */
s32 drdp_is_endpoint__FUl(s32);                     /* extern */
M2C_UNK endpoint_connection_create__FP10endpoint_tPP12connection_tUlUlUii(s32, s32, s32, s32, s32, M2C_UNK); /* extern */
s32 endpoint_get_drdp__FP10endpoint_t(s32);         /* extern */
s32 endpoint_get_instance__FP10endpoint_t(s32);     /* extern */
extern M2C_UNK D_011C46E8;
extern M2C_UNK D_011C4FC8;

void connection_open__FPP12connection_tP10endpoint_tUl(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_16;

    if (drdp_is_endpoint__FUl(arg2) == 0) {
        _uassert(&D_011C4FC8, &D_011C46E8, 0xF19);
    }
    temp_16 = drdp_get_route_endpoint__FP6drdp_tUl(endpoint_get_drdp__FP10endpoint_t(arg1), arg2);
    endpoint_connection_create__FP10endpoint_tPP12connection_tUlUlUii(arg1, arg0, arg2, temp_16, endpoint_get_instance__FP10endpoint_t(arg1), 1);
}
