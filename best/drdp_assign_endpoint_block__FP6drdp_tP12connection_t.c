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
s32 connection_get_dst__FPC12connection_t(s32);     /* extern */
M2C_UNK connection_send_uns8_uns64__FP12connection_tUcUl(s32, M2C_UNK, s64); /* extern */
M2C_UNK route_table_update_block__FP13route_table_tUlUl(void *, s64, s32); /* extern */
extern M2C_UNK D_011CADB0;
extern M2C_UNK D_011CADF0;
extern M2C_UNK D_011CAE08;

void drdp_assign_endpoint_block__FP6drdp_tP12connection_t(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s64 *, 0x1E0) & 0x7FF) {
        _uassert(&D_011CAE08, &D_011CADF0, 0xDD);
    }
    if ((u64) M2C_FIELD(arg0, u64 *, 0x1E8) < 0x800U) {
        _uassert(&D_011CADB0, &D_011CADF0, 0xDE);
    }
    route_table_update_block__FP13route_table_tUlUl(arg0 + 0xE0, M2C_FIELD(arg0, s64 *, 0x1E0), connection_get_dst__FPC12connection_t(arg1));
    connection_send_uns8_uns64__FP12connection_tUcUl(arg1, 0x21, M2C_FIELD(arg0, s64 *, 0x1E0));
    M2C_FIELD(arg0, s64 *, 0x1E0) = (s64) (M2C_FIELD(arg0, s64 *, 0x1E0) + 0x800);
    M2C_FIELD(arg0, u64 *, 0x1E8) = (u64) (M2C_FIELD(arg0, u64 *, 0x1E8) - 0x800);
}
