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
M2C_UNK endpoint_arrival_enqueue__FP10endpoint_tP9message_t(s32, s32); /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */
M2C_UNK memcpy(s32, s32, s32);                      /* extern */
s32 message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(s32 *, s32, void *, s64, s64, M2C_UNK, u32, s32, s32, s32); /* extern */
M2C_UNK message_destroy__FP9message_t(s32);         /* extern */
s32 message_get_data__FP9message_t(s32);            /* extern */
s32 message_get_seqnum__FPC9message_t(s32);         /* extern */
s32 message_get_size__FPC9message_t(s32);           /* extern */
s32 message_get_type__FPC9message_t(s32);           /* extern */
M2C_UNK vlist_add_tail__FP7vlist_tPv(void *, s32);  /* extern */
s32 vlist_get_next__FP7vlist_tPv(void *, s32);      /* extern */
s32 vlist_get_size__FP7vlist_t(void *);             /* extern */
s32 vlist_peek_head__FP7vlist_t(void *);            /* extern */
s32 vlist_remove_head__FP7vlist_t(void *);          /* extern */
extern M2C_UNK D_011C46E8;
extern M2C_UNK D_011C47A8;
extern M2C_UNK D_011C4868;

void connection_move_delayed_to_arrivals__FP12connection_t(void *arg0) {
    s32 sp10;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_16;
    s32 var_21_2;
    u16 temp_3;
    u32 var_21;
    void *temp_20;
    void *temp_22;

    temp_22 = arg0 + 0x104;
loop_18:
    temp_2 = vlist_peek_head__FP7vlist_t(temp_22);
    sp10 = temp_2;
    if (temp_2 != 0) {
        temp_3 = M2C_FIELD(arg0, u16 *, 0x1162) + 1;
        if (message_get_seqnum__FPC9message_t(temp_2) == (temp_3 & 0xFFFF)) {
            M2C_FIELD(arg0, u16 *, 0x1162) = temp_3;
            vlist_remove_head__FP7vlist_t(temp_22);
            temp_20 = arg0 + 0xEC;
            if (message_get_type__FPC9message_t(sp10) == 0xFA) {
                vlist_add_tail__FP7vlist_tPv(arg0 + 0xEC, sp10);
            } else if (vlist_get_size__FP7vlist_t(temp_20) != 0) {
                var_21 = 0;
                vlist_add_tail__FP7vlist_tPv(temp_20, sp10);
                var_16 = vlist_peek_head__FP7vlist_t(temp_20);
                if (var_16 != 0) {
                    do {
                        var_21 += message_get_size__FPC9message_t(var_16);
                        var_16 = vlist_get_next__FP7vlist_tPv(temp_20, var_16);
                    } while (var_16 != 0);
                }
                if (var_21 > 0x7FFFFU) {
                    _uassert(&D_011C4868, &D_011C46E8, 0xA27);
                }
                temp_16 = message_get_type__FPC9message_t(sp10);
                temp_17 = message_get_seqnum__FPC9message_t(vlist_peek_head__FP7vlist_t(temp_20));
                if (message_create__FPP9message_tP10endpoint_tP12connection_tUlUlPCvUiUcUsUi(&sp10, M2C_FIELD(arg0, s32 *, 0x34), arg0, M2C_FIELD(arg0, s64 *, 0x50), M2C_FIELD(arg0, s64 *, 0x48), 0, var_21, temp_16, temp_17, endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34))) != 0) {
                    _uassert(&D_011C47A8, &D_011C46E8, 0xA34);
                }
                var_21_2 = 0;
loop_16:
                temp_2_2 = vlist_remove_head__FP7vlist_t(temp_20);
                if (temp_2_2 != 0) {
                    temp_17_2 = message_get_data__FP9message_t(sp10) + var_21_2;
                    temp_16_2 = message_get_data__FP9message_t(temp_2_2);
                    memcpy(temp_17_2, temp_16_2, message_get_size__FPC9message_t(temp_2_2));
                    var_21_2 += message_get_size__FPC9message_t(temp_2_2);
                    message_destroy__FP9message_t(temp_2_2);
                    goto loop_16;
                }
                endpoint_arrival_enqueue__FP10endpoint_tP9message_t(M2C_FIELD(arg0, s32 *, 0x34), sp10);
            } else {
                endpoint_arrival_enqueue__FP10endpoint_tP9message_t(M2C_FIELD(arg0, s32 *, 0x34), sp10);
            }
            goto loop_18;
        }
    }
}
