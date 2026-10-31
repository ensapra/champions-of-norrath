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

extern s32 D_011B0248;

s32 BgmBufferSize__13VISoundDevice(void) {
    s32 var_4;

    var_4 = 0x4000;
    if (D_011B0248 != 0) {
        var_4 = ((D_011B0248 ^ 1) == 0) ? 0x10000 : 0x4000;
    }
    return var_4 * 2;
}
