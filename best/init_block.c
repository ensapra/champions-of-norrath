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

void init_block(void *arg0) {
    s16 *var_2;
    s16 *var_2_2;
    s16 *var_2_3;
    s32 var_3;
    s32 var_3_2;
    s32 var_3_3;

    var_3 = 0x11D;
    var_2 = arg0 + 0x518;
    do {
        var_3 -= 1;
        *var_2 = 0;
        var_2 -= 4;
    } while (var_3 >= 0);
    var_3_2 = 0x1D;
    var_2_2 = arg0 + 0xA0C;
    do {
        var_3_2 -= 1;
        *var_2_2 = 0;
        var_2_2 -= 4;
    } while (var_3_2 >= 0);
    var_3_3 = 0x12;
    var_2_3 = arg0 + 0xAD4;
    do {
        var_3_3 -= 1;
        *var_2_3 = 0;
        var_2_3 -= 4;
    } while (var_3_3 >= 0);
    M2C_FIELD(arg0, s32 *, 0x16B0) = 0;
    M2C_FIELD(arg0, s16 *, 0x4A4) = 1;
    M2C_FIELD(arg0, s64 *, 0x16C0) = 0;
    M2C_FIELD(arg0, s64 *, 0x16B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x16C8) = 0;
}
