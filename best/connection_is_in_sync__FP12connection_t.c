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

s32 message_get_type__FPC9message_t(s32);           /* extern */
s32 vlist_get_next__FP7vlist_tPv(void *, s32);      /* extern */
s32 vlist_peek_head__FP7vlist_t(void *);            /* extern */

s32 connection_is_in_sync__FP12connection_t(void *arg0) {
    s32 var_16;
    s32 var_16_2;
    s32 var_19;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    u16 temp_3;
    void *temp_17;
    void *temp_17_2;

    temp_3 = M2C_FIELD(arg0, u16 *, 0x1120);
    if (((temp_3 >> 8) & 1) || (var_19 = 0, ((temp_3 & 0x1000) != 0))) {
        var_19 = 1;
    }
    var_2 = var_19;
    if (var_19 == 0) {
        temp_17 = arg0 + 0xBC;
        var_16 = vlist_peek_head__FP7vlist_t(temp_17);
        var_2_2 = 1;
        if (var_16 != 0) {
loop_6:
            if ((message_get_type__FPC9message_t(var_16) == 0xFB) || (message_get_type__FPC9message_t(var_16) == 0xFA) || (message_get_type__FPC9message_t(var_16) == 0xF9)) {
                var_2_2 = 0;
            } else {
                var_16 = vlist_get_next__FP7vlist_tPv(temp_17, var_16);
                var_2_2 = 1;
                if (var_16 != 0) {
                    goto loop_6;
                }
            }
        }
        temp_17_2 = arg0 + 0xD4;
        if (var_2_2 != 0) {
            var_16_2 = vlist_peek_head__FP7vlist_t(temp_17_2);
            if (var_16_2 != 0) {
loop_15:
                if ((message_get_type__FPC9message_t(var_16_2) == 0xFB) || (message_get_type__FPC9message_t(var_16_2) == 0xFA) || (message_get_type__FPC9message_t(var_16_2) == 0xF9)) {
                    var_2_3 = 0;
                } else {
                    var_16_2 = vlist_get_next__FP7vlist_tPv(temp_17_2, var_16_2);
                    if (var_16_2 == 0) {
                        goto block_21;
                    }
                    goto loop_15;
                }
            } else {
block_21:
                var_2_3 = 1;
            }
            var_2 = var_19;
            if (var_2_3 != 0) {
                var_19 = 1;
                M2C_FIELD(arg0, u16 *, 0x1120) = (u16) (M2C_FIELD(arg0, u16 *, 0x1120) | 0x1000);
                goto block_24;
            }
        } else {
block_24:
            var_2 = var_19;
        }
    }
    return var_2;
}
