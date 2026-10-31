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

s32 UTF16_convertCharToUTF8__FUsPci(s32 arg0, void *arg1, s32 arg2) {
    s32 var_7;
    u8 temp_3;

    temp_3 = arg0 & 0xFFFF;
    var_7 = 0;
    if (temp_3 < 0x81U) {
        if (arg2 > 0) {
            M2C_FIELD(arg1, u8 *, 0) = temp_3;
            var_7 = 1;
        }
    } else if (temp_3 < 0x800U) {
        if (arg2 >= 2) {
            var_7 = 2;
            M2C_FIELD(arg1, s8 *, 1) = (s8) ((temp_3 & 0x3F) - 0x80);
            M2C_FIELD(arg1, u8 *, 0) = (u8) (((u32) (temp_3 & 0x7C0) >> 6) + 0xC0);
        }
    } else if (arg2 >= 3) {
        M2C_FIELD(arg1, u8 *, 0) = (u8) ((temp_3 >> 0xC) + 0xE0);
        M2C_FIELD(arg1, s8 *, 2) = (s8) ((temp_3 & 0x3F) + 0x80);
        var_7 = 3;
        M2C_FIELD(arg1, s8 *, 1) = (s8) (((u32) (temp_3 & 0xFC0) >> 6) + 0x80);
    }
    return var_7;
}
