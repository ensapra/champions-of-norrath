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

s32 route_get_drdp__FP7route_t();                   /* extern */
M2C_UNK route_recalc_desired_flush_time__FP7route_t(s32); /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(s32, s32);       /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32, s32);       /* extern */

void drdp_resort__FP7route_t(s32 arg0) {
    s32 temp_17;

    temp_17 = route_get_drdp__FP7route_t() + 0x38;
    vtree_remove__FP7vtree_tPv(temp_17, arg0);
    route_recalc_desired_flush_time__FP7route_t(arg0);
    vtree_insert__FP7vtree_tPv(temp_17, arg0);
}
