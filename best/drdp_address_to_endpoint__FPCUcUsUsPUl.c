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

void drdp_address_to_endpoint__FPCUcUsUsPUl(s32 arg0, s32 arg1, s32 arg2, s64 *arg3) {
    s32 var_9;
    s64 var_8;
    u8 *temp_2;

    var_8 = 0;
    var_9 = 0;
    do {
        temp_2 = arg0 + var_9;
        var_9 += 1;
        var_8 = (var_8 << 8) | *temp_2;
    } while (var_9 < 4);
    *arg3 = (arg2 & 0xFFFF) | (((arg1 & 0xFFFF) | (var_8 << 0x10)) << 0x10);
}
