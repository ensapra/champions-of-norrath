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

s32 xmlIsBaseChar();                                /* extern */

s32 xmlIsLetter(s32 arg0) {
    s32 var_2;
    s32 var_3;

    if (xmlIsBaseChar() == 0) {
        var_3 = 0;
        if ((arg0 >= 0x100) && (((u32) (arg0 - 0x4E00) < 0x51A6U) || ((u32) (arg0 + 0xFFFF0700) < 0x12EU) || ((u32) (arg0 - 0x3021) < 9U) || (arg0 == 0x3007))) {
            var_3 = 1;
        }
        var_2 = 0;
        if (var_3 != 0) {
            goto block_8;
        }
    } else {
block_8:
        var_2 = 1;
    }
    return var_2;
}
