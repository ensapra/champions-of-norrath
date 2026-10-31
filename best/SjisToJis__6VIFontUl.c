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

s32 SjisToJis__6VIFontUl(u64 arg0) {
    s32 var_7;
    u32 temp_3;
    u32 temp_9;
    u32 var_8;
    u64 temp_6;
    u64 temp_7;

    temp_7 = (arg0 >> 8) & 0xFF;
    var_8 = arg0 & 0xFF;
    temp_6 = temp_7 - 0x81;
    temp_9 = var_8 - 0x40;
    var_7 = ((((temp_6 < 0x1FU) ^ 0) != 0) ? temp_6 : (((u32) (temp_7 - 0xE0) < 0x10U) ? (temp_7 - 0xC1) : temp_7)) * 2;
    if (temp_9 < 0x3FU) {
        var_8 = temp_9;
    } else {
        temp_3 = var_8 - 0x9F;
        if ((u32) (var_8 - 0x80) < 0x1FU) {
            var_8 -= 0x41;
        } else if (temp_3 < 0x5EU) {
            var_8 = temp_3;
            var_7 += 1;
        }
    }
    return ((var_7 + 1) << 8) + var_8 + 0x2021;
}
