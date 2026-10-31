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

s32 xmlIsPubidChar(s32 arg0) {
    s32 var_3;

    var_3 = 0;
    if ((arg0 == 0x20) || (arg0 == 0xD) || (arg0 == 0xA) || ((u32) (arg0 - 0x61) < 0x1AU) || ((u32) (arg0 - 0x41) < 0x1AU) || ((u32) (arg0 - 0x30) < 0xAU) || (arg0 == 0x2D) || (arg0 == 0x27) || (arg0 == 0x28) || (arg0 == 0x29) || (arg0 == 0x2B) || (arg0 == 0x2C) || (arg0 == 0x2E) || (arg0 == 0x2F) || (arg0 == 0x3A) || (arg0 == 0x3D) || (arg0 == 0x3F) || (arg0 == 0x3B) || (arg0 == 0x21) || (arg0 == 0x2A) || (arg0 == 0x23) || (arg0 == 0x40) || (arg0 == 0x24) || (arg0 == 0x5F) || (arg0 == 0x25)) {
        var_3 = 1;
    }
    return var_3;
}
