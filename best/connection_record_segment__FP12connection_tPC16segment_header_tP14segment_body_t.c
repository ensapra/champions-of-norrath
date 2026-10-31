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

M2C_UNK connection_record_acks__FP12connection_tP14segment_body_t(void *, void *); /* extern */
M2C_UNK connection_record_message__FP12connection_tP9message_tP14message_list_t(void *, s32, void *); /* extern */
s32 endpoint_get_time__FP10endpoint_t(s32);         /* extern */
M2C_UNK route_resort__FP12connection_t(void *, s32, void *); /* extern */
s32 vlist_remove_head__FP7vlist_t(void *);          /* extern */

void connection_record_segment__FP12connection_tPC16segment_header_tP14segment_body_t(void *arg0, void *arg1, void *arg2) {
    s16 temp_2_2;
    s32 temp_2_3;
    s32 var_5;
    s64 temp_4_2;
    u16 temp_2;
    u16 temp_4;
    u8 *temp_6;
    u8 *var_2;
    u8 temp_3;
    void *var_17;

    M2C_FIELD(arg0, s32 *, 0xA8) = endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34));
    if (M2C_FIELD(arg1, s32 *, 0) & 0x2000) {
        temp_4 = M2C_FIELD(arg0, u16 *, 0x1120);
        M2C_FIELD(arg0, s32 *, 0xAC) = endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34));
        if (~temp_4 & 0x20) {
            M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (temp_4 | 0x20);
            M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg1, s32 *, 8);
        }
        if (M2C_FIELD(arg1, s32 *, 0) & 0x80000) {
            if (!(M2C_FIELD(arg0, u16 *, 0x1120) & 0xF)) {
                M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)) + 0x64);
            }
            M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (M2C_FIELD(arg0, u16 *, 0x1120) | 9);
        }
    }
    if (M2C_FIELD(arg2, s32 *, 0x104) == 0) {
        M2C_FIELD(arg0, u8 *, 0x1123) = 0U;
    } else {
        temp_3 = M2C_FIELD(arg0, u8 *, 0x1123);
        if (temp_3 < 0xFFU) {
            M2C_FIELD(arg0, u8 *, 0x1123) = (u8) (temp_3 + 1);
        }
        temp_2 = M2C_FIELD(arg0, u16 *, 0x1120);
        if (M2C_FIELD(arg2, u8 *, 0) & 0x20) {
            M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (temp_2 & 0xFFEF);
        } else {
            M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (temp_2 | 0x10);
        }
    }
    if (M2C_FIELD(arg2, s32 *, 0x104) != 0) {
        M2C_FIELD(arg0, u16 *, 0x1148) = (u16) (M2C_FIELD(arg0, u16 *, 0x1148) + 1);
        temp_4_2 = (M2C_FIELD(arg0, s64 *, 0x1158) * 2) | 1;
        temp_2_2 = M2C_FIELD(arg2, u16 *, 0x110) - M2C_FIELD(arg0, u16 *, 0x1148);
        M2C_FIELD(arg0, s64 *, 0x1158) = temp_4_2;
        if (temp_2_2 > 0) {
            M2C_FIELD(arg0, s64 *, 0x1158) = (s64) (temp_4_2 << (s64) temp_2_2);
        }
        M2C_FIELD(arg0, u16 *, 0x1148) = (u16) M2C_FIELD(arg2, u16 *, 0x110);
    } else {
        M2C_FIELD(arg0, s64 *, 0x1158) = (s64) (M2C_FIELD(arg0, s64 *, 0x1158) | (1 << ((s16) (M2C_FIELD(arg0, u16 *, 0x1148) - M2C_FIELD(arg2, u16 *, 0x110)) - 1)));
    }
    if (M2C_FIELD(arg2, s32 *, 0x10C) != 0) {
        connection_record_acks__FP12connection_tP14segment_body_t(arg0, arg2);
    }
    if (M2C_FIELD(arg2, u16 *, 2) == 0) {
        var_17 = arg2 + 0x514;
    } else {
        if (!(M2C_FIELD(arg0, u16 *, 0x1120) & 0xF)) {
            M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (endpoint_get_time__FP10endpoint_t(M2C_FIELD(arg0, s32 *, 0x34)) + 0x64);
        }
        var_5 = 0;
        M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (M2C_FIELD(arg0, u16 *, 0x1120) | M2C_FIELD(arg2, u16 *, 2));
        if (M2C_FIELD(arg2, s32 *, 0xFC) > 0) {
            temp_6 = arg2 + 4;
            var_2 = temp_6;
            do {
                var_5 += 1;
                M2C_FIELD(((*var_2 * 0x3C) + M2C_FIELD(arg0, s32 *, 0x1180)), s8 *, 0xA) = 2;
                var_2 = temp_6 + var_5;
            } while (var_5 < M2C_FIELD(arg2, s32 *, 0xFC));
        }
        var_17 = arg2 + 0x514;
    }
loop_36:
    temp_2_3 = vlist_remove_head__FP7vlist_t(var_17);
    if (temp_2_3 != 0) {
        connection_record_message__FP12connection_tP9message_tP14message_list_t(arg0, temp_2_3, var_17);
        goto loop_36;
    }
    route_resort__FP12connection_t(arg0, temp_2_3, var_17);
}
