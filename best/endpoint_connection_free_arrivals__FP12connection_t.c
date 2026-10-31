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

void *connection_get_endpoint__FP12connection_t();  /* extern */
M2C_UNK drdp_arrival_remove__FP6drdp_tP9message_t(s32, s32); /* extern */
s32 drdp_is_software_endpoint__FUl(s32);            /* extern */
M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
s32 message_get_connection__FP9message_t(s32);      /* extern */
s32 message_get_dst__FPC9message_t(s32);            /* extern */
s32 message_get_src__FPC9message_t(s32);            /* extern */
M2C_UNK message_set_connection__FP9message_tP12connection_t(s32, M2C_UNK); /* extern */
s32 vlist_get_next__FP7vlist_tPv(s32, s32);         /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(s32, s32);       /* extern */

void endpoint_connection_free_arrivals__FP12connection_t(s32 arg0) {
    s32 temp_17;
    s32 temp_18;
    s32 temp_4;
    s32 var_16;
    s32 var_5;
    void *temp_2;

    temp_2 = connection_get_endpoint__FP12connection_t();
    temp_17 = temp_2 + 0x54;
    var_16 = vlist_peek_head__FP7vlist_t(temp_17);
    if (var_16 != 0) {
        var_5 = var_16;
        do {
            temp_18 = vlist_get_next__FP7vlist_tPv(temp_17, var_5);
            if (message_get_connection__FP9message_t(var_16) == arg0) {
                if ((drdp_is_software_endpoint__FUl(message_get_src__FPC9message_t(var_16)) != 0) && (temp_4 = var_16, (drdp_is_software_endpoint__FUl(message_get_dst__FPC9message_t(var_16)) != 0))) {
                    var_16 = temp_18;
                    message_set_connection__FP9message_tP12connection_t(temp_4, 0);
                } else {
                    drdp_arrival_remove__FP6drdp_tP9message_t(M2C_FIELD(temp_2, s32 *, 0x14), var_16);
                    vlist_remove__FP7vlist_tPv(temp_17, var_16);
                    message_destroy__FP9message_t(var_16);
                    goto block_7;
                }
            } else {
block_7:
                var_16 = temp_18;
            }
            var_5 = var_16;
        } while (var_16 != 0);
    }
}
