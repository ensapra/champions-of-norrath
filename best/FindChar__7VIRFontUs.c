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

s32 FindChar__7VIRFontUs(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_4;
    s32 var_10;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s32 var_9;
    u32 temp_5;

    var_6 = arg2;
    var_10 = 0;
    var_8 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
    var_9 = var_8 < 0;
    temp_5 = arg1 & 0xFFFF;
    if (var_9 == 0) {
        var_6 = var_8 >> 1;
        temp_4 = M2C_FIELD(arg0, s32 *, 0x40);
        var_7 = var_6 * 2;
loop_8:
        if (M2C_FIELD((((var_7 + var_6) * 4) + temp_4), u16 *, 6) != temp_5) {
            if (temp_5 >= (u16) M2C_FIELD((((var_7 + var_6) * 4) + temp_4), u16 *, 6)) {
                var_10 = var_6 + 1;
            } else {
                var_8 = var_6 - 1;
            }
            var_9 = var_8 < var_10;
            if (var_9 == 0) {
                var_6 = (s32) (var_10 + var_8) >> 1;
                var_7 = var_6 * 2;
                goto loop_8;
            }
        }
    }
    return (var_9 == 0) ? var_6 : -1;
}
