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

M2C_UNK _endpoint_connection_destroy__FP12connection_tPCci(void *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK connection_tx_reset__FP12connection_t(void *); /* extern */
M2C_UNK drdp_format_endpoint1__FUl(s64);            /* extern */
M2C_UNK drdp_format_endpoint2__FUl(s64);            /* extern */
s32 drdp_is_software_endpoint__FUl(s64);            /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */
s32 vlist_get_size__FP7vlist_t(void *);             /* extern */
extern M2C_UNK D_011C46E8;

s32 connection_idle_check__FP12connection_t(void *arg0) {
    s32 var_17;
    s32 var_18;
    u16 temp_3;

    var_17 = 0;
    var_18 = 0;
    if (drdp_is_software_endpoint__FUl(M2C_FIELD(arg0, s64 *, 0x48)) != 0) {
        var_17 = drdp_is_software_endpoint__FUl(M2C_FIELD(arg0, s64 *, 0x50)) != 0;
    }
    if (var_17 != 0) {
        if (((M2C_FIELD(arg0, s64 *, 0x1120) & 0x240) == 0x240) && (vlist_get_size__FP7vlist_t(arg0 + 0xBC) == 0) && (vlist_get_size__FP7vlist_t(arg0 + 0xD4) == 0) && !((u16) M2C_FIELD(arg0, s64 *, 0x1120) & 0xF) && ((endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)) - (M2C_FIELD(arg0, s32 *, 0xA4) + 0x1D4C0)) >= 0)) {
            var_18 = 1;
            connection_tx_reset__FP12connection_t(arg0);
        }
        temp_3 = (u16) M2C_FIELD(arg0, s64 *, 0x1120);
        if ((~temp_3 & 0x200) && (temp_3 & 0x20) && (vlist_get_size__FP7vlist_t(arg0 + 0x104) == 0) && (vlist_get_size__FP7vlist_t(arg0 + 0xEC) == 0) && ((endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)) - (M2C_FIELD(arg0, s32 *, 0xA8) + 0x57E40)) >= 0)) {
            var_18 |= 2;
            drdp_format_endpoint1__FUl(M2C_FIELD(arg0, s64 *, 0x48));
            drdp_format_endpoint2__FUl(M2C_FIELD(arg0, s64 *, 0x50));
            _endpoint_connection_destroy__FP12connection_tPCci(arg0, &D_011C46E8, 0x755);
        }
    }
    return var_18;
}
