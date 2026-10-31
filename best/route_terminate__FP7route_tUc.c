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

s32 connection_get_dst__FPC12connection_t(s32);     /* extern */
s32 connection_get_src__FPC12connection_t(s32);     /* extern */
M2C_UNK connection_terminate_reason__FP12connection_tiUc(s32, M2C_UNK, s32); /* extern */
s32 drdp_is_hardware_endpoint__FUl(s32);            /* extern */
s32 vtree_get_next__FP7vtree_tPv(s32, s32);         /* extern */
s32 vtree_peek_first__FP7vtree_t(s32);              /* extern */

void route_terminate__FP7route_tUc(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 var_16;

    temp_17 = arg0 + 0x50;
    var_16 = vtree_peek_first__FP7vtree_t(temp_17);
    if (var_16 != 0) {
        do {
            if ((drdp_is_hardware_endpoint__FUl(connection_get_src__FPC12connection_t(var_16)) != 0) || (drdp_is_hardware_endpoint__FUl(connection_get_dst__FPC12connection_t(var_16)) != 0)) {
                connection_terminate_reason__FP12connection_tiUc(var_16, 0, arg1 & 0xFF);
            }
            var_16 = vtree_get_next__FP7vtree_tPv(temp_17, var_16);
        } while (var_16 != 0);
    }
    M2C_FIELD(arg0, s32 *, 0xF0) = 1;
}
