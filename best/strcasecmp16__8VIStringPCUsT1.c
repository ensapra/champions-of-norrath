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

s32 strcasecmp16__8VIStringPCUsT1(u16 *arg0, u16 *arg1) {
    s32 var_10;
    u16 *var_4;
    u16 *var_5;
    u16 var_2;
    u16 var_6;
    u16 var_7;

    var_4 = arg0;
    var_5 = arg1;
    var_2 = *var_4;
    var_10 = 0;
loop_14:
    if (var_2 != 0) {
        var_7 = *var_4;
        goto block_2;
    }
    if (*var_5 != 0) {
        var_7 = *var_4;
block_2:
        var_4 += 2;
        var_6 = *var_5;
        var_5 += 2;
        if ((u32) ((var_7 + 0xFFBF) & 0xFFFF) < 0x1AU) {
            var_7 = (var_7 + 0x20) & 0xFFFF;
        }
        if ((u32) ((var_6 + 0xFFBF) & 0xFFFF) < 0x1AU) {
            var_6 = (var_6 + 0x20) & 0xFFFF;
        }
        if (var_6 >= var_7) {
            if (var_7 >= var_6) {
                var_2 = *var_4;
                goto loop_14;
            }
            var_10 = -1;
        } else {
            var_10 = 1;
        }
    }
    return var_10;
}
