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

s32 xmlIsChar(s32 arg0) {
    s32 var_5;

    var_5 = 0;
    if (((u32) (arg0 - 9) < 2U) || (arg0 == 0xD) || ((u32) (arg0 - 0x20) <= 0xD7DFU) || ((u32) (arg0 + 0xFFFF2000) < 0x1FFEU) || ((u32) (arg0 + 0xFFFF0000) <= 0xFFFFFU)) {
        var_5 = 1;
    }
    return var_5;
}
