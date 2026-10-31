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

M2C_UNK _endpoint_connection_destroy__FP12connection_tPCci(s32, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK connection_get_dst__FPC12connection_t(s32); /* extern */
s32 vtree_get_next_in_range__FP7vtree_tPvN21(s32, void *, s32, s32); /* extern */
s32 vtree_peek_first_in_range__FP7vtree_tPvT1(s32, s32); /* extern */
extern M2C_UNK D_011CADF0;

void drdp_invalidate_range__FP6drdp_tP13uns64_range_t(void *arg0, void *arg1) {
    s32 temp_18;
    s32 temp_19;
    s32 temp_4;
    s32 var_16;
    u64 var_16_2;
    u64 var_5;

    temp_18 = arg1 + 8;
    temp_19 = arg0 + 0xBC;
    var_16 = vtree_peek_first_in_range__FP7vtree_tPvT1(temp_19, temp_18);
    if (var_16 != 0) {
        do {
            connection_get_dst__FPC12connection_t(var_16);
            temp_4 = var_16;
            var_16 = vtree_get_next_in_range__FP7vtree_tPvN21(temp_19, arg1, temp_18, var_16);
            _endpoint_connection_destroy__FP12connection_tPCci(temp_4, &D_011CADF0, 0x7DB);
        } while (var_16 != 0);
    }
    if (M2C_FIELD(arg0, M2C_UNK (**)(void *, u64), 0x200) != NULL) {
        var_16_2 = M2C_FIELD(arg1, u64 *, 0);
        if ((u64) M2C_FIELD(arg1, u64 *, 8) >= var_16_2) {
            var_5 = var_16_2;
loop_7:
            var_16_2 += 1;
            M2C_FIELD(arg0, M2C_UNK (**)(void *, u64), 0x200)(arg0, var_5);
            if ((u64) M2C_FIELD(arg1, u64 *, 8) >= var_16_2) {
                var_5 = var_16_2;
                goto loop_7;
            }
        }
    }
}
