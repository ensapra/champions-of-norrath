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
s32 vlist_get_next__FP7vlist_tPv(s32, s32);         /* extern */
s32 vlist_peek_head__FP7vlist_t();                  /* extern */

s32 message_list_is_in_sync__FP14message_list_t(s32 arg0) {
    s32 var_16;

    var_16 = vlist_peek_head__FP7vlist_t();
    if (var_16 != 0) {
loop_2:
        if ((message_get_type__FPC9message_t(var_16) == 0xFB) || (message_get_type__FPC9message_t(var_16) == 0xFA) || (message_get_type__FPC9message_t(var_16) == 0xF9)) {
            return 0;
        }
        var_16 = vlist_get_next__FP7vlist_tPv(arg0, var_16);
        if (var_16 == 0) {
            goto block_8;
        }
        goto loop_2;
    }
block_8:
    return 1;
}
