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
extern M2C_UNK D_011C46B8;
extern M2C_UNK D_011C46E8;

s32 connection_get_key_offset__Fi(u32 arg0) {
    s32 var_17;

    if (arg0 >= 2U) {
        _uassert(&D_011C46B8, &D_011C46E8, 0x14A);
    }
    switch (arg0) {                                 /* irregular */
    case 0:
        var_17 = 0x50;
block_7:
        return var_17;
    case 1:
        var_17 = 0xB4;
        goto block_7;
    default:
        return -1;
    }
}
