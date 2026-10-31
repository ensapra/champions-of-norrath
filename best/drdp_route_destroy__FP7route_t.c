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

M2C_UNK route_destroy__FP7route_t(s32);             /* extern */
s32 route_get_drdp__FP7route_t();                   /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32, s32);       /* extern */

void drdp_route_destroy__FP7route_t(s32 arg0) {
    s32 temp_2;

    temp_2 = route_get_drdp__FP7route_t();
    vtree_remove__FP7vtree_tPv(temp_2 + 0x5C, arg0);
    vtree_remove__FP7vtree_tPv(temp_2 + 0x38, arg0);
    route_destroy__FP7route_t(arg0);
}
