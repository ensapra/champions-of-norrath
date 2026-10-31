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

s32 connection_get_route__FP12connection_t(s32);    /* extern */
M2C_UNK connection_set_route__FP12connection_tP7route_t(s32, s32); /* extern */
M2C_UNK vtree_insert__FP7vtree_tPv(s32, s32);       /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(s32, s32);       /* extern */

void route_link_connection__FP7route_tP12connection_t(s32 arg0, s32 arg1) {
    s32 temp_2;

    temp_2 = connection_get_route__FP12connection_t(arg1);
    if (temp_2 != 0) {
        vtree_remove__FP7vtree_tPv(temp_2 + 0x50, arg1);
        connection_set_route__FP12connection_tP7route_t(arg1, 0);
    }
    vtree_insert__FP7vtree_tPv(arg0 + 0x50, arg1);
    connection_set_route__FP12connection_tP7route_t(arg1, arg0);
}
