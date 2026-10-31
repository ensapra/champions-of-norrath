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
M2C_UNK connection_free_outstanding__FP12connection_t(void *); /* extern */
s32 connection_is_terminated__FP12connection_t(void *); /* extern */
M2C_UNK drdp_connection_terminate__FP6drdp_tUlPCvi(s32, s64, s32, u32); /* extern */
s32 drdp_is_hardware_endpoint__FUl(s64);            /* extern */
M2C_UNK endpoint_arrival_enqueue__FP10endpoint_tP9message_t(s32, s32); /* extern */
s32 endpoint_get_drdp__FP10endpoint_t(s32);         /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */
M2C_UNK memcpy(s32, s32, u32);                      /* extern */
s32 message_get_data__FP9message_t(s32);            /* extern */
u32 message_get_size__FPC9message_t(s32);           /* extern */
M2C_UNK message_set_time__FP9message_tUi(s32, s32); /* extern */
M2C_UNK route_send_reset_connection__FP7route_tUlUliUiUi(s32, s64, s64, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_011C46E8;
extern M2C_UNK D_011C4E98;
extern M2C_UNK D_011C4EC0;

void connection_terminate__FP12connection_tiPvi(void *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 temp_18;
    u32 var_2;

    if (~M2C_FIELD(arg0, u16 *, 0x1120) & 0x100) {
        drdp_connection_terminate__FP6drdp_tUlPCvi(endpoint_get_drdp__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)), M2C_FIELD(arg0, s64 *, 0x50), arg2, arg3);
        if ((drdp_is_hardware_endpoint__FUl(M2C_FIELD(arg0, s64 *, 0x50)) == 0) && (drdp_is_hardware_endpoint__FUl(M2C_FIELD(arg0, s64 *, 0x48)) == 0)) {
            _uassert(&D_011C4EC0, &D_011C46E8, 0xEA6);
        }
        message_set_time__FP9message_tUi(M2C_FIELD(arg0, s32 *, 0x11C), endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)));
        temp_18 = message_get_data__FP9message_t(M2C_FIELD(arg0, s32 *, 0x11C));
        if (arg3 < message_get_size__FPC9message_t(M2C_FIELD(arg0, s32 *, 0x11C))) {
            var_2 = arg3;
        } else {
            var_2 = message_get_size__FPC9message_t(M2C_FIELD(arg0, s32 *, 0x11C));
        }
        memcpy(temp_18, arg2, var_2);
        endpoint_arrival_enqueue__FP10endpoint_tP9message_t(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0x11C));
        M2C_FIELD(arg0, s32 *, 0x11C) = 0;
        connection_free_outstanding__FP12connection_t(arg0);
        M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (M2C_FIELD(arg0, u16 *, 0x1120) | 0x100);
        if (arg1 & 1) {
            if (connection_is_terminated__FP12connection_t(arg0) == 0) {
                _uassert(&D_011C4E98, &D_011C46E8, 0xE89);
            }
            route_send_reset_connection__FP7route_tUlUliUiUi(M2C_FIELD(arg0, s32 *, 0x38), M2C_FIELD(arg0, s64 *, 0x48), M2C_FIELD(arg0, s64 *, 0x50), (M2C_FIELD(arg0, u16 *, 0x1120) & 0x20) ? 3 : 1, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C));
        }
    }
}
