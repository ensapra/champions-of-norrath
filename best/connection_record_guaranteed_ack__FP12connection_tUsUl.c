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

M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
s32 message_get_seqnum__FPC9message_t(s32);         /* extern */
s32 message_get_type__FPC9message_t(s32);           /* extern */
s32 vlist_get_next__FP7vlist_tPv(s32, s32);         /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(s32, s32);       /* extern */

void connection_record_guaranteed_ack__FP12connection_tUsUl(void *arg0, s32 arg1, s64 arg2) {
    s16 temp_19;
    s16 temp_2;
    s32 temp_17;
    s32 temp_18;
    s32 var_16;
    s32 var_5;
    u64 temp_3;

    temp_17 = arg0 + 0xD4;
    temp_19 = arg1 & 0xFFFF;
    var_16 = vlist_peek_head__FP7vlist_t(temp_17);
    if (var_16 != 0) {
        var_5 = var_16;
        do {
            temp_18 = vlist_get_next__FP7vlist_tPv(temp_17, var_5);
            if ((message_get_type__FPC9message_t(var_16) == 0xFB) || (message_get_type__FPC9message_t(var_16) == 0xFA) || (message_get_type__FPC9message_t(var_16) == 0xF9)) {
                temp_2 = message_get_seqnum__FPC9message_t(var_16) - temp_19;
                if (temp_2 <= 0) {
                    vlist_remove__FP7vlist_tPv(temp_17, var_16);
                    message_destroy__FP9message_t(var_16);
                } else {
                    temp_3 = temp_2 - 2;
                    if ((temp_2 != 1) && (temp_3 < 0x40U) && ((1 << temp_3) & arg2)) {
                        vlist_remove__FP7vlist_tPv(temp_17, var_16);
                        message_destroy__FP9message_t(var_16);
                    }
                }
            }
            var_16 = temp_18;
            var_5 = var_16;
        } while (var_16 != 0);
    }
    M2C_FIELD(arg0, s64 *, 0x1168) = arg2;
    M2C_FIELD(arg0, s16 *, 0x1164) = temp_19;
}
