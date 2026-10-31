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

s32 FirstChannel__13VISoundDeviceUl(u64 arg1) {
    s32 var_2;
    s32 var_6;
    u64 var_3;

    var_6 = 0;
    var_3 = arg1 >> 0;
loop_1:
    var_2 = var_6;
    var_6 += 1;
    if (((s64) ((var_3 & 1) << 0x20) >> 0x20) == 0) {
        var_3 = arg1 >> var_6;
        if (var_6 >= 0x2E) {
            var_2 = -1;
        } else {
            goto loop_1;
        }
    }
    return var_2;
}
