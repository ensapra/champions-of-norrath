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

extern M2C_UNK D_0118ED60;

s8 UTF8_charSize__FPCc(u8 *arg0) {
    s8 var_2;
    u8 temp_3;

    temp_3 = *arg0;
    var_2 = 1;
    if (temp_3 & 0x80) {
        var_2 = *(&D_0118ED60 + ((u32) (temp_3 & 0x3C) >> 2));
    }
    return var_2;
}
