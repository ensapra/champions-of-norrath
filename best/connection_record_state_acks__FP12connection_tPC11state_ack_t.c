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
M2C_UNK message_seqnum_remove_thru__FP16message_seqnum_tUs(void *, s32); /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(void *, s32);    /* extern */

void connection_record_state_acks__FP12connection_tPC11state_ack_t(void *arg0, void *arg1) {
    u16 var_17;
    u8 var_3;
    void *temp_16;
    void *var_18;

    var_3 = M2C_FIELD(arg1, u8 *, 0);
    var_17 = M2C_FIELD(arg1, u16 *, 2);
    if (var_3 != 0xF8) {
        var_18 = arg1;
        do {
            temp_16 = M2C_FIELD(arg0, s32 *, 0x1180) + (var_3 * 0x3C);
            if (((var_17 - M2C_FIELD(temp_16, u16 *, 6)) << 0x10) > 0) {
                if ((M2C_FIELD(temp_16, u8 *, 0xB) == 2) && (message_get_seqnum__FPC9message_t(M2C_FIELD(temp_16, s32 *, 0)) == var_17)) {
                    M2C_FIELD(temp_16, u8 *, 0xB) = 0U;
                    vlist_remove__FP7vlist_tPv(arg0 + 0xD4, M2C_FIELD(temp_16, s32 *, 0));
                    message_destroy__FP9message_t(M2C_FIELD(temp_16, s32 *, 0));
                    M2C_FIELD(temp_16, s32 *, 0) = 0;
                }
                M2C_FIELD(temp_16, u16 *, 6) = var_17;
                message_seqnum_remove_thru__FP16message_seqnum_tUs(temp_16 + 0xC, var_17 & 0xFFFF);
            }
            var_18 += 4;
            var_3 = M2C_FIELD(var_18, u8 *, 0);
            var_17 = M2C_FIELD(var_18, u16 *, 2);
        } while (var_3 != 0xF8);
    }
}
