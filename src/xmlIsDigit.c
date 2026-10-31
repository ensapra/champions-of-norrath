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

s32 xmlIsDigit(s32 arg0) {
    s32 var_3;

    var_3 = 0;
    if (((u32) (arg0 - 0x30) < 0xAU) || ((arg0 >= 0x660) && (((u32) (arg0 - 0x660) < 0xAU) || ((u32) (arg0 - 0x6F0) < 0xAU) || ((u32) (arg0 - 0x966) < 0xAU) || ((u32) (arg0 - 0x9E6) < 0xAU) || ((u32) (arg0 - 0xA66) < 0xAU) || ((u32) (arg0 - 0xAE6) < 0xAU) || ((u32) (arg0 - 0xB66) < 0xAU) || ((u32) (arg0 - 0xBE7) < 9U) || ((u32) (arg0 - 0xC66) < 0xAU) || ((u32) (arg0 - 0xCE6) < 0xAU) || ((u32) (arg0 - 0xD66) < 0xAU) || ((u32) (arg0 - 0xE50) < 0xAU) || ((u32) (arg0 - 0xED0) < 0xAU) || ((u32) (arg0 - 0xF20) < 0xAU)))) {
        var_3 = 1;
    }
    return var_3;
}
