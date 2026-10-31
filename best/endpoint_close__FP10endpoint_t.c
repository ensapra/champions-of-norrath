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

M2C_UNK _uassert(M2C_UNK *, M2C_UNK *, M2C_UNK);    /* extern */
s32 connection_is_in_sync__FP12connection_t(s32);   /* extern */
M2C_UNK drdp_arrival_remove__FP6drdp_tP9message_t(s32, s32); /* extern */
M2C_UNK drdp_endpoint_destroy__FP10endpoint_t(void *); /* extern */
M2C_UNK message_destroy_buffer__FP9message_tP8buffer_t(s32, M2C_UNK); /* extern */
s32 vlist_peek_head__FP7vlist_t(void *);            /* extern */
M2C_UNK vlist_remove__FP7vlist_tPv(void *, s32);    /* extern */
s32 vtree_get_next__FP7vtree_tPv(void *, s32);      /* extern */
s32 vtree_peek_first__FP7vtree_t(void *, s32);      /* extern */
extern M2C_UNK D_011CBA28;
extern M2C_UNK D_011CBA48;

void endpoint_close__FP10endpoint_t(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 var_16;
    s32 var_3;
    void *temp_18;
    void *var_18;

    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 1)) {
        var_18 = arg0 + 0x54;
    } else {
        _uassert(&D_011CBA28, &D_011CBA48, 0x4C2);
        var_18 = arg0 + 0x54;
    }
loop_5:
    temp_2 = vlist_peek_head__FP7vlist_t(var_18);
    if (temp_2 != 0) {
        drdp_arrival_remove__FP6drdp_tP9message_t(M2C_FIELD(arg0, s32 *, 0x14), temp_2);
        vlist_remove__FP7vlist_tPv(var_18, temp_2);
        message_destroy_buffer__FP9message_tP8buffer_t(temp_2, 0);
        goto loop_5;
    }
    temp_2_2 = M2C_FIELD(arg0, s32 *, 0x2C) | 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_2_2;
    if (!(temp_2_2 & 2)) {
        temp_18 = arg0 + 0x30;
        var_16 = vtree_peek_first__FP7vtree_t(temp_18, temp_2);
        var_3 = 1;
        if (var_16 != 0) {
loop_8:
            var_3 = 0;
            if (connection_is_in_sync__FP12connection_t(var_16) != 0) {
                var_16 = vtree_get_next__FP7vtree_tPv(temp_18, var_16);
                var_3 = 1;
                if (var_16 != 0) {
                    goto loop_8;
                }
            }
        }
        if (var_3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 2);
        }
    }
    if ((M2C_FIELD(arg0, s32 *, 0x2C) >> 1) & 1) {
        drdp_endpoint_destroy__FP10endpoint_t(arg0);
    }
}
