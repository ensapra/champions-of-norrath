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
s32 connection_is_terminated__FP12connection_t(void *); /* extern */
s32 connection_send_guaranteed__FP12connection_tPCUcii(void *, s32, s32, s32); /* extern */
s32 connection_send_state__FP12connection_tPCUcii(void *, s32, s32, s32); /* extern */
M2C_UNK connection_terminate_reason__FP12connection_tiUc(void *, M2C_UNK, M2C_UNK); /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32, s32);    /* extern */
s32 endpoint_is_closed__FP10endpoint_t(s32);        /* extern */
s32 message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(s32 *, s32, void *, s64, s64, s32, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
M2C_UNK route_resort__FP12connection_t(void *);     /* extern */
M2C_UNK vlist_add_tail__FP7vlist_tPv(void *, s32);  /* extern */
extern M2C_UNK D_011C46E8;
extern M2C_UNK D_011C4750;
extern M2C_UNK D_011C4778;

s32 connection_send_internal__FP12connection_tPCUcii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;
    s32 var_16;

    if (((u16) M2C_FIELD(arg0, u16 *, 0x1120) >> 0xB) & 1) {
        _uassert(&D_011C4750, &D_011C46E8, 0x4CE);
    }
    if (endpoint_is_closed__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)) != 0) {
        _uassert(&D_011C4778, &D_011C46E8, 0x4CF);
    }
    var_16 = 0;
    if (connection_is_terminated__FP12connection_t(arg0) == 0) {
        switch (arg3) {                             /* irregular */
        case 0xFC:
            sp10 = 0;
            var_16 = message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(&sp10, M2C_FIELD(arg0, s32 *, 0x34), arg0, M2C_FIELD(arg0, s64 *, 0x48), M2C_FIELD(arg0, s64 *, 0x50), arg1, arg2, 0xFC, 0xFFFF, endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34), arg1));
            if (var_16 == 0) {
                vlist_add_tail__FP7vlist_tPv(arg0 + 0xBC, sp10);
                sp10 = 0;
            }
            if (sp10 != 0) {
                message_destroy__FP9message_t(sp10);
            }
block_16:
            if (var_16 != 0) {

            } else {
block_19:
                var_16 = 0;
                route_resort__FP12connection_t(arg0);
            }
            goto block_20;
        case 0xFB:
        case 0xF9:
            var_16 = connection_send_guaranteed__FP12connection_tPCUcii(arg0, arg1, arg2, arg3);
            goto block_16;
        default:
            var_16 = connection_send_state__FP12connection_tPCUcii(arg0, arg1, arg2, arg3);
            if (var_16 == 0) {
                goto block_19;
            }
            goto block_21;
        }
    } else {
block_20:
        if (var_16 != 0) {
block_21:
            connection_terminate_reason__FP12connection_tiUc(arg0, 1, 7);
        }
    }
    return var_16;
}
