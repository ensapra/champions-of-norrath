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

s32 message_get_seqnum__FPC9message_t(s32);         /* extern */
s32 vlist_get_next__FP7vlist_tPv(s32, s32);         /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */

void connection_get_ack_mask__FP12connection_tPUl(void *arg0, s64 *arg1) {
    s32 temp_17;
    s32 var_2;
    s64 temp_2;
    s64 var_19;

    temp_17 = arg0 + 0x104;
    var_19 = 0;
    var_2 = vlist_peek_head__FP7vlist_t(temp_17);
loop_3:
    if (var_2 != 0) {
        temp_2 = (s16) (message_get_seqnum__FPC9message_t(var_2) - M2C_FIELD(arg0, u16 *, 0x1162)) - 2;
        if (temp_2 < 0x40) {
            var_19 |= 1 << temp_2;
            var_2 = vlist_get_next__FP7vlist_tPv(temp_17, var_2);
            goto loop_3;
        }
    }
    *arg1 = var_19;
}
