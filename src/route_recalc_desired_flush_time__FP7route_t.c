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

s32 bandwidth_get_flush_time__FP11bandwidth_tUi(void *, s32); /* extern */
s32 connection_get_desired_flush_time__FP12connection_t(s32); /* extern */
s32 drdp_get_time__FPC6drdp_t(s32);                 /* extern */
s32 vset_get_size__FP6vset_t(void *);               /* extern */
s32 vtree_peek_first__FP7vtree_t(s32);              /* extern */

void route_recalc_desired_flush_time__FP7route_t(void *arg0) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_4;
    s32 var_2;

    temp_4 = vtree_peek_first__FP7vtree_t(arg0 + 0x50);
    if ((M2C_FIELD(arg0, s32 *, 0xF0) != 0) || (temp_4 == 0)) {
        var_2 = drdp_get_time__FPC6drdp_t(M2C_FIELD(arg0, s32 *, 0x24)) + 0x05265C00;
    } else {
        var_2 = connection_get_desired_flush_time__FP12connection_t(temp_4);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_2;
    if ((vset_get_size__FP6vset_t(arg0 + 0x74) != 0) || (vset_get_size__FP6vset_t(arg0 + 0x98) != 0)) {
        temp_16 = M2C_FIELD(arg0, s32 *, 0x28);
        if ((temp_16 - drdp_get_time__FPC6drdp_t(M2C_FIELD(arg0, s32 *, 0x24))) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x28) = drdp_get_time__FPC6drdp_t(M2C_FIELD(arg0, s32 *, 0x24));
        }
    }
    temp_2 = bandwidth_get_flush_time__FP11bandwidth_tUi(arg0 + 0xC0, drdp_get_time__FPC6drdp_t(M2C_FIELD(arg0, s32 *, 0x24)));
    if ((temp_2 - M2C_FIELD(arg0, s32 *, 0x28)) > 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = temp_2;
    }
}
