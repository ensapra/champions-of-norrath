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

s32 bandwidth_get_flush_time__FP11bandwidth_tUi(void *, u32); /* extern */
M2C_UNK route_cache_release_expired__FP13route_cache_tUi(s32, u32); /* extern */
M2C_UNK route_destroy__FP7route_t(s32);             /* extern */
s32 route_destroy_check__FP7route_t(s32);           /* extern */
M2C_UNK route_flush__FP7route_t(s32);               /* extern */
u32 route_get_desired_flush_time__FP7route_t(s32);  /* extern */
s32 route_get_drdp__FP7route_t(s32, s32);           /* extern */
M2C_UNK route_get_first_connection__FP7route_t(s32); /* extern */
M2C_UNK route_recalc_desired_flush_time__FP7route_t(s32); /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(void *, s32);    /* extern */
s32 vtree_peek_first__FP7vtree_t(void *);           /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(void *, s32);    /* extern */

void drdp_flush__FP6drdp_t(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    void *temp_19;

    route_cache_release_expired__FP13route_cache_tUi(arg0 + 0x118, M2C_FIELD(arg0, u32 *, 0x1A8));
    temp_19 = arg0 + 0x38;
loop_7:
    if ((bandwidth_get_flush_time__FP11bandwidth_tUi(arg0 + 0x178, M2C_FIELD(arg0, u32 *, 0x1A8)) - M2C_FIELD(arg0, u32 *, 0x1A8)) > 0) {
        temp_2 = vtree_peek_first__FP7vtree_t(temp_19);
        if (temp_2 != 0) {
            route_get_first_connection__FP7route_t(temp_2);
        }
        goto block_11;
    }
    temp_2_2 = vtree_peek_first__FP7vtree_t(temp_19);
    if (temp_2_2 != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1A8) >= route_get_desired_flush_time__FP7route_t(temp_2_2)) {
            route_flush__FP7route_t(temp_2_2);
            if (route_destroy_check__FP7route_t(temp_2_2) != 0) {
                temp_2_3 = route_get_drdp__FP7route_t(temp_2_2, temp_2_2);
                vtree_remove__FP7vtree_tPv(temp_2_3 + 0x5C, temp_2_2);
                vtree_remove__FP7vtree_tPv(temp_2_3 + 0x38, temp_2_2);
                route_destroy__FP7route_t(temp_2_2);
            } else {
                vtree_remove__FP7vtree_tPv(temp_19, temp_2_2);
                route_recalc_desired_flush_time__FP7route_t(temp_2_2);
                vtree_insert__FP7vtree_tPv(temp_19, temp_2_2);
            }
            goto loop_7;
        }
block_11:
        M2C_FIELD(arg0, u32 *, 0x1C4) = M2C_FIELD(arg0, u32 *, 0x1A8);
    }
}
