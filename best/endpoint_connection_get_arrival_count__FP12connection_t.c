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

s32 connection_get_endpoint__FP12connection_t();    /* extern */
s32 message_get_connection__FP9message_t(s32);      /* extern */
s32 vlist_get_next__FP7vlist_tPv(s32, s32);         /* extern */
s32 vlist_peek_head__FP7vlist_t(s32);               /* extern */

s32 endpoint_connection_get_arrival_count__FP12connection_t(s32 arg0) {
    s32 temp_16;
    s32 temp_19;
    s32 temp_2;
    s32 var_17;
    s32 var_18;
    s32 var_2;

    var_18 = 0;
    temp_19 = connection_get_endpoint__FP12connection_t() + 0x54;
    var_17 = vlist_peek_head__FP7vlist_t(temp_19);
    var_2 = 0;
    if (var_17 != 0) {
        do {
            temp_16 = vlist_get_next__FP7vlist_tPv(temp_19, var_17);
            temp_2 = message_get_connection__FP9message_t(var_17) ^ arg0;
            var_17 = temp_16;
            var_18 = (temp_2 == 0) ? (var_18 + 1) : var_18;
        } while (var_17 != 0);
        var_2 = var_18;
    }
    return var_2;
}
