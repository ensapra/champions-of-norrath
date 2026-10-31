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

void *__wrap_malloc(M2C_UNK);                       /* extern */
M2C_UNK connection_destroy__FP12connection_t(void *); /* extern */
M2C_UNK connection_init__FP12connection_t(void *);  /* extern */
s32 connection_is_sw_sw__FP12connection_t(void *);  /* extern */
M2C_UNK drdp_format_endpoint__FPcUl(void *, s64);   /* extern */
s64 endpoint_get_id__FPC10endpoint_t(s32);          /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */
s32 message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(void *, s32, void *, s64, s64, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

s32 connection_create__FPP12connection_tP10endpoint_tUlUii(void **arg0, s32 arg1, s64 arg2, s32 arg3, s32 arg4) {
    s32 temp_2_2;
    s32 var_18;
    s32 var_2;
    s32 var_2_2;
    s64 temp_2;
    void *var_16;

    var_16 = __wrap_malloc(0x1188);
    var_2 = -2;
    if (var_16 != NULL) {
        connection_init__FP12connection_t(var_16);
        M2C_FIELD(var_16, s32 *, 0x34) = arg1;
        temp_2 = endpoint_get_id__FPC10endpoint_t(arg1);
        M2C_FIELD(var_16, s64 *, 0x50) = arg2;
        M2C_FIELD(var_16, s64 *, 0x48) = temp_2;
        M2C_FIELD(var_16, s32 *, 0xB4) = endpoint_get_time__FP10endpoint_t(arg1);
        M2C_FIELD(var_16, s32 *, 0xA8) = endpoint_get_time__FP10endpoint_t(arg1);
        M2C_FIELD(var_16, s32 *, 0xAC) = endpoint_get_time__FP10endpoint_t(arg1);
        temp_2_2 = endpoint_get_time__FP10endpoint_t(arg1);
        M2C_FIELD(var_16, s32 *, 0x98) = arg3;
        M2C_FIELD(var_16, s32 *, 0xB0) = temp_2_2;
        drdp_format_endpoint__FPcUl(var_16 + 0x58, M2C_FIELD(var_16, s64 *, 0x50));
        var_2_2 = arg4 & 2;
        if (arg4 & 1) {
            M2C_FIELD(var_16, s32 *, 0x9C) = (s32) M2C_FIELD(var_16, s32 *, 0x98);
            M2C_FIELD(var_16, u16 *, 0x1120) = (u16) (M2C_FIELD(var_16, u16 *, 0x1120) | 0xA0);
            var_2_2 = arg4 & 2;
        }
        if (var_2_2 != 0) {
            M2C_FIELD(var_16, u16 *, 0x1120) = (u16) (M2C_FIELD(var_16, u16 *, 0x1120) | 0x40);
        }
        if ((connection_is_sw_sw__FP12connection_t(var_16) != 0) || (var_18 = message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(var_16 + 0x11C, arg1, var_16, M2C_FIELD(var_16, s64 *, 0x50), M2C_FIELD(var_16, s64 *, 0x48), 0, 0x100, 0xFD, 0xFFFF, endpoint_get_time__FP10endpoint_t(arg1)), (var_18 == 0))) {
            *arg0 = var_16;
            var_16 = NULL;
            var_18 = 0;
        }
        var_2 = var_18;
        if (var_16 != NULL) {
            connection_destroy__FP12connection_t(var_16);
            var_2 = var_18;
        }
    }
    return var_2;
}
