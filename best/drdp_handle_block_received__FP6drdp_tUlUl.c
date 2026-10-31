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

M2C_UNK connection_send_uns8_uns64_uns64__FP12connection_tUcUlUl(s32, M2C_UNK, s32, s32); /* extern */
void *vtree_get_next__FP7vtree_tPv(s32, void *);    /* extern */
void *vtree_peek_first__FP7vtree_t(s32);            /* extern */

void drdp_handle_block_received__FP6drdp_tUlUl(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_18;
    s64 var_2;
    void *var_16;

    temp_18 = arg0 + 0x98;
    var_16 = vtree_peek_first__FP7vtree_t(temp_18);
    if (var_16 != NULL) {
        var_2 = M2C_FIELD(var_16, s64 *, 0x10);
loop_2:
        if (arg2 != var_2) {
            connection_send_uns8_uns64_uns64__FP12connection_tUcUlUl(M2C_FIELD(var_16, s32 *, 0x18), 0x23, arg1, arg2);
        }
        var_16 = vtree_get_next__FP7vtree_tPv(temp_18, var_16);
        if (var_16 != NULL) {
            var_2 = M2C_FIELD(var_16, s64 *, 0x10);
            goto loop_2;
        }
    }
}
