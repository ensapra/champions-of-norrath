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

s32 UTF16_convertToUTF8__FPCUsPci(u16 *arg0, u8 *arg1, s32 arg2) {
    s32 var_6;
    s32 var_7;
    u16 *var_8;
    u16 var_3;
    u8 *var_5;

    var_5 = arg1;
    var_6 = arg2;
    var_8 = arg0;
    if ((*var_8 != 0) && (var_6 != 0)) {
        var_3 = *var_8;
loop_3:
        var_7 = 0;
        if (var_3 < 0x81U) {
            if (var_6 > 0) {
                M2C_FIELD(var_5, u8 *, 0) = (u8) var_3;
                var_7 = 1;
            }
        } else if (var_3 < 0x800U) {
            if (var_6 >= 2) {
                M2C_FIELD(var_5, s8 *, 1) = (s8) ((var_3 & 0x3F) - 0x80);
                M2C_FIELD(var_5, u8 *, 0) = ((u32) (var_3 & 0x7C0) >> 6) + 0xC0;
                var_7 = 2;
            }
        } else if (var_6 >= 3) {
            M2C_FIELD(var_5, u8 *, 0) = (var_3 >> 0xC) + 0xE0;
            M2C_FIELD(var_5, s8 *, 1) = (s8) (((u32) (var_3 & 0xFC0) >> 6) + 0x80);
            var_7 = 3;
            M2C_FIELD(var_5, s8 *, 2) = (s8) ((var_3 & 0x3F) + 0x80);
        }
        if (var_7 != 0) {
            var_8 += 2;
            var_6 -= var_7;
            var_5 += var_7;
            if (*var_8 != 0) {
                if (var_6 != 0) {
                    var_3 = *var_8;
                    goto loop_3;
                }
            }
        }
    }
    *var_5 = 0;
    return 0;
}
