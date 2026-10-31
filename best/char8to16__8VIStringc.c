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

extern M2C_UNK D_0118E558;

u16 char8to16__8VIStringc(s32 arg0) {
    u16 var_2;

    var_2 = arg0 & 0xFF;
    if ((u32) ((var_2 + 0x80) & 0xFF) < 0x20U) {
        var_2 = *(&D_0118E558 + (var_2 * 2));
    }
    return var_2;
}
