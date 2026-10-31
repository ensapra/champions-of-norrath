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

void __19VIRadialFloraSystem(void *arg0) {
    s32 *var_6;
    s32 var_2;

    M2C_FIELD((arg0 + 0x10), s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    var_2 = 8;
    M2C_FIELD((arg0 + 0x18), s32 *, 4) = 0;
    var_6 = arg0 + 0x40;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    do {
        var_2 -= 1;
        *var_6 = 0;
        var_6 -= 4;
    } while (var_2 >= 0);
}
