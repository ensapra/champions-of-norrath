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
s32 connection_is_terminated__FP12connection_t();   /* extern */
M2C_UNK route_send_reset_connection__FP7route_tUlUliUiUi(s32, s64, s64, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_011C46E8;
extern M2C_UNK D_011C4E98;

void connection_send_reset__FP12connection_tPvi(void *arg0) {
    if (connection_is_terminated__FP12connection_t() == 0) {
        _uassert(&D_011C4E98, &D_011C46E8, 0xE89);
    }
    route_send_reset_connection__FP7route_tUlUliUiUi(M2C_FIELD(arg0, s32 *, 0x38), M2C_FIELD(arg0, s64 *, 0x48), M2C_FIELD(arg0, s64 *, 0x50), (M2C_FIELD(arg0, u16 *, 0x1120) & 0x20) ? 3 : 1, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C));
}
