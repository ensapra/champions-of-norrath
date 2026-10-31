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

M2C_UNK connection_append_message__FP12connection_tP8buffer_tP9message_tP14message_list_tUs(s32, s32, s32, s32, s32); /* extern */
M2C_UNK connection_append_state__FP12connection_tP8buffer_tP9message_tP14message_list_tUs(s32, s32, s32, s32, s32); /* extern */
s32 message_get_type__FPC9message_t(s32);           /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */

void connection_append__FP12connection_tP8buffer_tP14message_list_tUs(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_20;
    s32 temp_2;
    s32 temp_2_2;

    temp_20 = arg3 & 0xFFFF;
    temp_2 = vlist_peek_head__FP7vlist_t(arg2);
    temp_2_2 = message_get_type__FPC9message_t(temp_2);
    if (temp_2_2 < 0xFD) {
        if (temp_2_2 >= 0xF9) {
            connection_append_message__FP12connection_tP8buffer_tP9message_tP14message_list_tUs(arg0, arg1, temp_2, arg2, temp_20);
            return;
        }
        goto block_4;
    }
block_4:
    connection_append_state__FP12connection_tP8buffer_tP9message_tP14message_list_tUs(arg0, arg1, temp_2, arg2, temp_20);
}
