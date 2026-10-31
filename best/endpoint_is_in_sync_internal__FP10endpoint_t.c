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

s32 connection_is_in_sync__FP12connection_t(s32);   /* extern */
s32 vtree_get_next__FP7vtree_tPv(s32, s32);         /* extern */
s32 vtree_peek_first__FP7vtree_t(s32);              /* extern */

s32 endpoint_is_in_sync_internal__FP10endpoint_t(s32 arg0) {
    s32 temp_17;
    s32 var_16;
    s32 var_2;

    temp_17 = arg0 + 0x30;
    var_16 = vtree_peek_first__FP7vtree_t(temp_17);
    var_2 = 1;
    if (var_16 != 0) {
loop_1:
        var_2 = connection_is_in_sync__FP12connection_t(var_16);
        if (var_2 != 0) {
            var_16 = vtree_get_next__FP7vtree_tPv(temp_17, var_16);
            var_2 = 1;
            if (var_16 != 0) {
                goto loop_1;
            }
        }
    }
    return var_2;
}
