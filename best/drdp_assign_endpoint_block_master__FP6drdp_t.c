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
M2C_UNK connection_send_uns8_uns64__FP12connection_tUcUl(s32, M2C_UNK, s64); /* extern */
s32 endpoint_get_id__FPC10endpoint_t(s32);          /* extern */
M2C_UNK route_table_update_block__FP13route_table_tUlUl(void *, s64, s32); /* extern */
void *vtree_get_next__FP7vtree_tPv(void *, void *); /* extern */
void *vtree_peek_first__FP7vtree_t(void *);         /* extern */
extern M2C_UNK D_011CADB0;
extern M2C_UNK D_011CADF0;

void drdp_assign_endpoint_block_master__FP6drdp_t(void *arg0) {
    s32 var_4;
    void *temp_18;
    void *var_16;

    if ((u64) M2C_FIELD(arg0, u64 *, 0x1E8) < 0x800U) {
        _uassert(&D_011CADB0, &D_011CADF0, 0xAE);
    }
    temp_18 = arg0 + 0x98;
    M2C_FIELD(arg0, s64 *, 0x1D0) = (s64) M2C_FIELD(arg0, s64 *, 0x1E0);
    M2C_FIELD(arg0, s64 *, 0x1D8) = 0x800;
    route_table_update_block__FP13route_table_tUlUl(arg0 + 0xE0, M2C_FIELD(arg0, s64 *, 0x1E0), endpoint_get_id__FPC10endpoint_t(M2C_FIELD(arg0, s32 *, 0x1F0)));
    var_16 = vtree_peek_first__FP7vtree_t(temp_18);
    if (var_16 != NULL) {
        var_4 = M2C_FIELD(var_16, s32 *, 0x18);
loop_4:
        connection_send_uns8_uns64__FP12connection_tUcUl(var_4, 0x24, M2C_FIELD(arg0, s64 *, 0x1E0));
        var_16 = vtree_get_next__FP7vtree_tPv(temp_18, var_16);
        if (var_16 != NULL) {
            var_4 = M2C_FIELD(var_16, s32 *, 0x18);
            goto loop_4;
        }
    }
    M2C_FIELD(arg0, s64 *, 0x1E0) = (s64) (M2C_FIELD(arg0, s64 *, 0x1E0) + 0x800);
    M2C_FIELD(arg0, u64 *, 0x1E8) = (u64) (M2C_FIELD(arg0, u64 *, 0x1E8) - 0x800);
}
