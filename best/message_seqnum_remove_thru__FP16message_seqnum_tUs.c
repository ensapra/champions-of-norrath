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
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */
s32 vlist_remove_head__FP7vlist_t(s32);             /* extern */

void message_seqnum_remove_thru__FP16message_seqnum_tUs(s32 arg0, s32 arg1) {
    s32 temp_2;

loop_3:
    temp_2 = vlist_peek_head__FP7vlist_t(arg0);
    if ((temp_2 != 0) && ((message_get_seqnum__FPC9message_t(temp_2) - (arg1 & 0xFFFF)) & 0x8000)) {
        message_destroy__FP9message_t(vlist_remove_head__FP7vlist_t(arg0));
        goto loop_3;
    }
}
