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

M2C_UNK connection_record_message__FP12connection_tP9message_tP14message_list_t(void *, s32, void *); /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32, u16);    /* extern */
s32 vlist_remove_head__FP7vlist_t(void *);          /* extern */

void connection_record_segment_messages__FP12connection_tP14segment_body_t(void *arg0, void *arg1) {
    s32 temp_2;
    s32 var_5;
    u16 temp_5;
    u8 *temp_6;
    u8 *var_2;
    void *temp_16;

    temp_5 = M2C_FIELD(arg1, u16 *, 2);
    if (temp_5 != 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x1120) & 0xF)) {
            M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34), temp_5) + 0x64);
        }
        M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (M2C_FIELD(arg0, u16 *, 0x1120) | M2C_FIELD(arg1, u16 *, 2));
        var_5 = 0;
        if (M2C_FIELD(arg1, s32 *, 0xFC) > 0) {
            temp_6 = arg1 + 4;
            var_2 = temp_6;
            do {
                var_5 += 1;
                M2C_FIELD(((*var_2 * 0x3C) + M2C_FIELD(arg0, s32 *, 0x1180)), s8 *, 0xA) = 2;
                var_2 = temp_6 + var_5;
            } while (var_5 < M2C_FIELD(arg1, s32 *, 0xFC));
        }
    }
    temp_16 = arg1 + 0x514;
loop_8:
    temp_2 = vlist_remove_head__FP7vlist_t(temp_16);
    if (temp_2 != 0) {
        connection_record_message__FP12connection_tP9message_tP14message_list_t(arg0, temp_2, temp_16);
        goto loop_8;
    }
}
