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

M2C_UNK __wrap_free(void *);                        /* extern */
M2C_UNK _endpoint_connection_destroy__FP12connection_tPCci(s32, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK connection_get_dst__FPC12connection_t(s32); /* extern */
void *vtree_get_next__FP7vtree_tPv(s32, void *);    /* extern */
s32 vtree_get_next_in_range__FP7vtree_tPvN21(s32, void *, void *, s32); /* extern */
void *vtree_peek_first__FP7vtree_t(s32);            /* extern */
s32 vtree_peek_first_in_range__FP7vtree_tPvT1(s32, void *, void *); /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32, void *);    /* extern */
extern M2C_UNK D_011CADF0;

void drdp_invalidate_all_endpoints_owned_by_leader__FP6drdp_tUl(void *arg0, s64 arg1) {
    s64 sp0;
    s32 temp_20;
    s32 temp_23;
    s32 temp_4;
    s32 var_16;
    u64 var_16_2;
    u64 var_5;
    void *temp_18;
    void *temp_30;
    void *var_17;

    temp_23 = arg0 + 0xF0;
    sp0 = arg1;
    var_17 = vtree_peek_first__FP7vtree_t(temp_23);
    if (var_17 != NULL) {
        do {
            temp_30 = vtree_get_next__FP7vtree_tPv(temp_23, var_17);
            if (M2C_FIELD(var_17, s64 *, 0x20) == sp0) {
                temp_18 = var_17 + 0x10;
                temp_20 = arg0 + 0xBC;
                var_16 = vtree_peek_first_in_range__FP7vtree_tPvT1(temp_20, temp_18, var_17 + 0x18);
                if (var_16 != 0) {
                    do {
                        connection_get_dst__FPC12connection_t(var_16);
                        temp_4 = var_16;
                        var_16 = vtree_get_next_in_range__FP7vtree_tPvN21(temp_20, temp_18, var_17 + 0x18, var_16);
                        _endpoint_connection_destroy__FP12connection_tPCci(temp_4, &D_011CADF0, 0x7DB);
                    } while (var_16 != 0);
                }
                if (M2C_FIELD(arg0, M2C_UNK (**)(void *, u64), 0x200) != NULL) {
                    var_16_2 = M2C_FIELD(var_17, u64 *, 0x10);
                    if ((u64) M2C_FIELD(temp_18, u64 *, 8) >= var_16_2) {
                        var_5 = var_16_2;
loop_9:
                        var_16_2 += 1;
                        M2C_FIELD(arg0, M2C_UNK (**)(void *, u64), 0x200)(arg0, var_5);
                        if ((u64) M2C_FIELD(temp_18, u64 *, 8) >= var_16_2) {
                            var_5 = var_16_2;
                            goto loop_9;
                        }
                    }
                }
                vtree_remove__FP7vtree_tPv(temp_23, var_17);
                __wrap_free(var_17);
            }
            var_17 = temp_30;
        } while (var_17 != NULL);
    }
}
