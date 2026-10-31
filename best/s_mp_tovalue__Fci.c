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

extern M2C_UNK _ctype_;

s32 s_mp_tovalue__Fci(s8 arg0, s32 arg1) {
    s32 var_2;
    s32 var_4;
    s8 var_6;
    u8 temp_3;

    var_6 = arg0;
    if (arg1 < 0x25) {
        var_6 = (*(&_ctype_ + 1 + arg0) & 2) ? (arg0 - 0x20) : var_6;
    }
    temp_3 = *(&_ctype_ + 1 + var_6);
    var_4 = var_6 - 0x30;
    if (((temp_3 & 4) || (var_4 = var_6 - 0x37, ((temp_3 & 1) != 0)) || (var_4 = var_6 - 0x3D, ((temp_3 & 2) != 0)) || (var_4 = 0x3E, (var_6 == 0x2B)) || (var_4 = 0x3F, var_2 = -1, (var_6 == 0x2F))) && ((var_4 < 0) || (var_2 = var_4, ((var_4 < arg1) == 0)))) {
        var_2 = -1;
    }
    return var_2;
}
