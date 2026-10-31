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

s32 message_get_flush__FPC9message_t(s32);          /* extern */
s32 message_get_time__FPC9message_t(s32);           /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */

void connection_get_next_message__FP12connection_tPP14message_list_tPUii(void *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_18;
    s32 var_21;
    s32 var_23;
    u16 temp_16_2;

    temp_16 = arg0 + 0xBC;
    *arg1 = 0;
    var_23 = arg3;
    temp_2 = vlist_peek_head__FP7vlist_t(temp_16);
    if (temp_2 == 0) {
        var_21 = arg0 + 0xD4;
    } else {
        if (var_23 == 0) {
            var_23 = 1;
            goto block_10;
        }
        var_21 = arg0 + 0xD4;
        if ((message_get_time__FPC9message_t(temp_2) - *arg2) < 0) {
block_10:
            var_21 = arg0 + 0xD4;
            temp_2_2 = message_get_time__FPC9message_t(temp_2);
            *arg1 = temp_16;
            *arg2 = temp_2_2;
        }
    }
    temp_2_3 = vlist_peek_head__FP7vlist_t(var_21);
    if (temp_2_3 != 0) {
        var_18 = message_get_time__FPC9message_t(temp_2_3) + M2C_FIELD(arg0, u16 *, 0x1124) + 0x64;
        if (M2C_FIELD(arg0, u16 *, 0x1120) & 0x10) {
            temp_16_2 = M2C_FIELD(arg0, u16 *, 0x114A);
            if (((temp_16_2 - message_get_flush__FPC9message_t(temp_2_3)) << 0x10) > 0) {
                var_18 = message_get_time__FPC9message_t(temp_2_3);
            }
        }
        if ((var_23 == 0) || ((var_18 - *arg2) < 0)) {
            *arg2 = var_18;
            *arg1 = var_21;
        }
    }
}
