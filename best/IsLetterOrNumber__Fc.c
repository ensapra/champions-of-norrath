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

s32 IsLetterOrNumber__Fc(s8 arg0) {
    s32 var_2;

    if (((u32) (arg0 - 0x61) < 0x1AU) || ((var_2 = 1, (((u32) (arg0 - 0x41) < 0x1AU) == 0)) && (var_2 = 1, (((u32) (arg0 - 0x30) < 0xAU) == 0)) && (var_2 = 0, (arg0 == 0x5F)))) {
        var_2 = 1;
    }
    return var_2;
}
