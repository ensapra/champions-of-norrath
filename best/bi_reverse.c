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

u32 bi_reverse(u32 arg0, s32 arg1) {
    s32 temp_2;
    s32 var_5;
    u32 var_3;
    u32 var_4;

    var_4 = arg0;
    var_5 = arg1;
    var_3 = 0;
    do {
        temp_2 = var_4 & 1;
        var_4 = var_4 >> 1;
        var_5 -= 1;
        var_3 = (var_3 | temp_2) * 2;
    } while (var_5 > 0);
    return var_3 >> 1;
}
