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
extern M2C_UNK D_011D5728;
extern M2C_UNK D_011D5740;
extern M2C_UNK D_011D5758;

s32 message_get_key_offset__Fi(s32 arg0) {
    s32 var_16;

    var_16 = -1;
    if (arg0 == 0) {
        var_16 = 0x34;
    } else if (&D_011D5728 != NULL) {
        _uassert(&D_011D5740, &D_011D5758, 0x18D);
    }
    return var_16;
}
