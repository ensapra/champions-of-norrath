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

s32 ChannelCount__13VISoundDeviceUl(u64 arg1) {
    s32 var_4;
    s32 var_6;
    u64 temp_2;

    var_6 = 0;
    var_4 = 0;
    do {
        temp_2 = arg1 >> var_4;
        var_4 += 1;
        var_6 += (s64) ((temp_2 & 1) << 0x20) >> 0x20;
    } while (var_4 < 0x2E);
    return var_6;
}
