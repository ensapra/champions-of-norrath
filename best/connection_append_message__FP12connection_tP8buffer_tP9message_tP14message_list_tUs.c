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

M2C_UNK buffer_append_uns16__FP8buffer_tUs(void *, u32); /* extern */
M2C_UNK buffer_append_uns8__FP8buffer_tUc(void *, s32); /* extern */
M2C_UNK buffer_appendm_uns8__FP8buffer_tPCUci(void *, s32, s32); /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */
M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
s32 message_get_data__FP9message_t(s32);            /* extern */
u32 message_get_seqnum__FPC9message_t(s32);         /* extern */
s32 message_get_size__FPC9message_t(s32);           /* extern */
s32 message_get_type__FPC9message_t(s32);           /* extern */
M2C_UNK message_set_flush__FP9message_tUs(s32, s32); /* extern */
M2C_UNK message_set_time__FP9message_tUi(s32, s32); /* extern */
M2C_UNK vlist_add_tail__FP7vlist_tPv(void *, s32);  /* extern */
s32 vlist_remove_head__FP7vlist_t(s32, s32, s32);   /* extern */

s32 connection_append_message__FP12connection_tP8buffer_tP9message_tP14message_list_tUs(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16;
    s32 temp_17_2;
    s32 temp_19;
    s32 temp_20;
    s32 temp_21;
    s32 temp_5;
    s32 temp_6;
    s32 var_2;
    u32 temp_17;
    u32 temp_22;

    temp_20 = message_get_type__FPC9message_t(arg2);
    temp_19 = message_get_size__FPC9message_t(arg2);
    temp_21 = temp_20 + 7;
    temp_22 = message_get_seqnum__FPC9message_t(arg2);
    temp_6 = temp_19 + 6;
    temp_5 = ((u32) (temp_21 & 0xFF) < 3U) ? temp_6 : (temp_19 + 4);
    var_2 = -1;
    if (M2C_FIELD(arg1, s32 *, 4) >= (M2C_FIELD(arg1, s32 *, 8) + temp_5)) {
        temp_17 = temp_19 & 0xFFFF;
        temp_16 = vlist_remove_head__FP7vlist_t(arg3, temp_5, temp_6);
        buffer_append_uns8__FP8buffer_tUc(arg1, temp_20);
        if (temp_17 >= 0xFFU) {
            buffer_append_uns8__FP8buffer_tUc(arg1, 0xFF);
            buffer_append_uns16__FP8buffer_tUs(arg1, temp_17);
        } else {
            buffer_append_uns8__FP8buffer_tUc(arg1, temp_17 & 0xFF);
        }
        temp_17_2 = (u32) (temp_21 & 0xFF) < 3U;
        if (temp_17_2 != 0) {
            buffer_append_uns16__FP8buffer_tUs(arg1, temp_22);
        }
        buffer_appendm_uns8__FP8buffer_tPCUci(arg1, message_get_data__FP9message_t(temp_16), temp_19);
        if (temp_17_2 != 0) {
            message_set_time__FP9message_tUi(temp_16, endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)));
            message_set_flush__FP9message_tUs(temp_16, arg4 & 0xFFFF);
            vlist_add_tail__FP7vlist_tPv(arg0 + 0xD4, temp_16);
            message_get_type__FPC9message_t(temp_16);
        } else {
            message_destroy__FP9message_t(temp_16);
        }
        var_2 = 0;
    }
    return var_2;
}
