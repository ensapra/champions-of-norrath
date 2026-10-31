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

M2C_UNK connection_send_uns8_uns64__FP12connection_tUcUl(s32, M2C_UNK, s32); /* extern */
M2C_UNK endpoint_destroy__FP10endpoint_t(s32);      /* extern */
void *endpoint_get_drdp__FP10endpoint_t();          /* extern */
s32 endpoint_get_id__FPC10endpoint_t(s32);          /* extern */
M2C_UNK route_table_update__FP13route_table_tUlUl(void *, s32, M2C_UNK); /* extern */
M2C_UNK vtree_remove__FP7vtree_tPv(void *, s32);    /* extern */

void drdp_endpoint_destroy__FP10endpoint_t(s32 arg0) {
    void *temp_16;

    temp_16 = endpoint_get_drdp__FP10endpoint_t();
    route_table_update__FP13route_table_tUlUl(temp_16 + 0xE0, endpoint_get_id__FPC10endpoint_t(arg0), -1);
    if (M2C_FIELD(temp_16, M2C_UNK (**)(void *, s32), 0x200) != NULL) {
        M2C_FIELD(temp_16, M2C_UNK (**)(void *, s32), 0x200)(temp_16, endpoint_get_id__FPC10endpoint_t(arg0));
    }
    connection_send_uns8_uns64__FP12connection_tUcUl(M2C_FIELD(temp_16, s32 *, 0x204), 0x15, endpoint_get_id__FPC10endpoint_t(arg0));
    vtree_remove__FP7vtree_tPv(temp_16 + 0x14, arg0);
    endpoint_destroy__FP10endpoint_t(arg0);
}
