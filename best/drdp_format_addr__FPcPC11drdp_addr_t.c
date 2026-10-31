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

M2C_UNK sprintf(M2C_UNK *, u8, u8, u8, u8, u16);    /* extern */
extern M2C_UNK D_011CB280;

s32 drdp_format_addr__FPcPC11drdp_addr_t(s32 arg0, void *arg1) {
    sprintf(&D_011CB280, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1), M2C_FIELD(arg1, u8 *, 2), M2C_FIELD(arg1, u8 *, 3), M2C_FIELD(arg1, u16 *, 4));
    return arg0;
}
