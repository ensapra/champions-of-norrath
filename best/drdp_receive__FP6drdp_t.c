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
s32 drdp_is_software_endpoint__FUl(s32);            /* extern */
M2C_UNK drdp_process_system_message__FP6drdp_tP9message_t(s32, s32); /* extern */
M2C_UNK endpoint_arrival_remove__FP10endpoint_tP9message_t(s32, s32); /* extern */
s32 memcmp(M2C_UNK *, M2C_UNK);                     /* extern */
M2C_UNK message_get_connection__FP9message_t(s32);  /* extern */
s32 message_get_dst__FPC9message_t(s32);            /* extern */
s32 message_get_endpoint__FP9message_t(s32);        /* extern */
s32 message_get_src__FPC9message_t(s32);            /* extern */
s32 message_get_type__FPC9message_t(s32);           /* extern */
M2C_UNK message_set_connection__FP9message_tP12connection_t(s32, M2C_UNK); /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(s32, s32);       /* extern */
extern M2C_UNK D_011CADF0;
extern M2C_UNK D_011CAE50;
extern M2C_UNK D_011CAEC8;
extern M2C_UNK D_011CB210;

s32 drdp_receive__FP6drdp_t(s32 arg0) {
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;

    if (memcmp(&D_011CAE50, 4) != 0) {
        _uassert(&D_011CAEC8, &D_011CADF0, 0xBA7);
    }
    temp_17 = arg0 + 0x80;
    temp_2 = vlist_peek_head__FP7vlist_t(temp_17);
    if (temp_2 != 0) {
        temp_2_2 = message_get_endpoint__FP9message_t(temp_2);
        if (temp_2_2 == 0) {
            vlist_remove__FP7vlist_tPv(temp_17, temp_2);
        } else {
            endpoint_arrival_remove__FP10endpoint_tP9message_t(temp_2_2, temp_2);
        }
        if (message_get_type__FPC9message_t(temp_2) == 0xF9) {
            drdp_process_system_message__FP6drdp_tP9message_t(arg0, temp_2);
        }
        if ((drdp_is_software_endpoint__FUl(message_get_src__FPC9message_t(temp_2)) != 0) && (drdp_is_software_endpoint__FUl(message_get_dst__FPC9message_t(temp_2)) != 0)) {
            if ((message_get_type__FPC9message_t(temp_2) == 0xFF) || (message_get_type__FPC9message_t(temp_2) == 0xFD)) {
                _uassert(&D_011CB210, &D_011CADF0, 0xBC8);
            }
            message_set_connection__FP9message_tP12connection_t(temp_2, 0);
        }
        if (temp_2 != 0) {
            message_get_connection__FP9message_t(temp_2);
            message_get_endpoint__FP9message_t(temp_2);
        }
    }
    return temp_2;
}
