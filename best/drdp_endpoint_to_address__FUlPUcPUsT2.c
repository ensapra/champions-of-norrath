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

void drdp_endpoint_to_address__FUlPUcPUsT2(u64 arg0, s32 arg1, s16 *arg2, s16 *arg3) {
    s32 var_7;
    s8 *var_5;
    s8 temp_2;
    u64 temp_4;
    u64 var_4;

    temp_4 = arg0 >> 0x10;
    var_4 = temp_4 >> 0x10;
    *arg3 = arg0 & 0xFFFF;
    var_7 = 3;
    *arg2 = temp_4 & 0xFFFF;
    var_5 = arg1 + 3;
    do {
        temp_2 = var_4 & 0xFF;
        var_4 = var_4 >> 8;
        var_7 -= 1;
        *var_5 = temp_2;
        var_5 -= 1;
    } while (var_7 >= 0);
}
