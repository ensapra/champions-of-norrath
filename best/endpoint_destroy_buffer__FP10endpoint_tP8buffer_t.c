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

M2C_UNK __wrap_free(void *);                        /* extern */
M2C_UNK buffer_append_packed_uns32__FP8buffer_tUi(s32, s32); /* extern */
M2C_UNK buffer_append_packed_uns64__FP8buffer_tUl(s32, s64); /* extern */
M2C_UNK buffer_append_uns32__FP8buffer_tUi(s32, s32); /* extern */
M2C_UNK buffer_appendm_uns8__FP8buffer_tPCUci(s32, void *, M2C_UNK); /* extern */
M2C_UNK close_set_destroy_buffer__FP11close_set_tP8buffer_tUi(void *, s32, s32); /* extern */
M2C_UNK connection_destroy_buffer__FP12connection_tP8buffer_t(s32, s32); /* extern */
s32 connection_get_endpoint__FP12connection_t(s32); /* extern */
M2C_UNK drdp_arrival_remove__FP6drdp_tP9message_t(s32, s32); /* extern */
M2C_UNK drdp_connection_remove__FP12connection_t(s32); /* extern */
M2C_UNK drdp_format_endpoint1__FUl(s64);            /* extern */
s32 drdp_get_time__FPC6drdp_t(s32);                 /* extern */
s32 endpoint_is_closed__FP10endpoint_t(void *);     /* extern */
M2C_UNK message_destroy_buffer__FP9message_tP8buffer_t(s32, s32); /* extern */
M2C_UNK route_unlink_connection__FP12connection_t(s32); /* extern */
s64 vlist_get_size__FP7vlist_t(s32);                /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(s32, s32);       /* extern */
s64 vtree_get_size__FP7vtree_t(s32);                /* extern */
s32 vtree_peek_first__FP7vtree_t(s32);              /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32, s32);       /* extern */
extern M2C_UNK D_011CBB48;

void endpoint_destroy_buffer__FP10endpoint_tP8buffer_t(void *arg0, s32 arg1) {
    s32 temp_19;
    s32 temp_20;
    s32 temp_2;
    s32 temp_2_2;
    s64 temp_16;

    temp_20 = arg0 + 0x30;
    temp_19 = arg0 + 0x54;
    vtree_get_size__FP7vtree_t(temp_20);
    vlist_get_size__FP7vlist_t(temp_19);
    drdp_format_endpoint1__FUl(M2C_FIELD(arg0, s64 *, 0x20));
    if (arg1 != 0) {
        temp_16 = vtree_get_size__FP7vtree_t(temp_20);
        buffer_appendm_uns8__FP8buffer_tPCUci(arg1, arg0, 4);
        buffer_append_packed_uns64__FP8buffer_tUl(arg1, M2C_FIELD(arg0, s64 *, 0x20));
        buffer_append_uns32__FP8buffer_tUi(arg1, M2C_FIELD(arg0, s32 *, 0x28));
        buffer_append_uns32__FP8buffer_tUi(arg1, M2C_FIELD(arg0, s32 *, 0x2C));
        buffer_append_packed_uns64__FP8buffer_tUl(arg1, temp_16);
        buffer_append_packed_uns64__FP8buffer_tUl(arg1, vlist_get_size__FP7vlist_t(temp_19));
        buffer_append_packed_uns32__FP8buffer_tUi(arg1, M2C_FIELD(arg0, s32 *, 0xA8));
    }
    close_set_destroy_buffer__FP11close_set_tP8buffer_tUi(arg0 + 0x6C, arg1, drdp_get_time__FPC6drdp_t(M2C_FIELD(arg0, s32 *, 0x14)));
loop_4:
    temp_2 = vtree_peek_first__FP7vtree_t(temp_20);
    if (temp_2 != 0) {
        vtree_remove__FP7vtree_tPv(connection_get_endpoint__FP12connection_t(temp_2) + 0x30, temp_2);
        drdp_connection_remove__FP12connection_t(temp_2);
        route_unlink_connection__FP12connection_t(temp_2);
        connection_destroy_buffer__FP12connection_tP8buffer_t(temp_2, arg1);
        goto loop_4;
    }
    if (endpoint_is_closed__FP10endpoint_t(arg0) == 0) {
loop_9:
        temp_2_2 = vlist_peek_head__FP7vlist_t(temp_19);
        if (temp_2_2 != 0) {
            drdp_arrival_remove__FP6drdp_tP9message_t(M2C_FIELD(arg0, s32 *, 0x14), temp_2_2);
            vlist_remove__FP7vlist_tPv(temp_19, temp_2_2);
            message_destroy_buffer__FP9message_tP8buffer_t(temp_2_2, arg1);
            goto loop_9;
        }
    }
    M2C_FIELD(arg0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_011CBB48, M2C_UNK *, 0));
    __wrap_free(arg0);
}
