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

s32 ValidateCreditCardFormat__FPCc(s8 *arg0) {
    s8 *var_4;

    var_4 = arg0;
    if (var_4 == NULL) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return 0;
    }
loop_4:
    if (*var_4 == 0) {
        return 1;
    }
    if ((u32) ((s8) (u8) *var_4 - 0x30) < 0xAU) {
        var_4 += 1;
        goto loop_4;
    }
    return 0;
}
