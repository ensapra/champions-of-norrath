/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

extern M2C_UNK func_01109848;

s32 func_001B7898(s32 arg0, s32 arg3) {
    s32 temp_4;
    s32 var_2;

    var_2 = M2C_FIELD(arg3, s32 (**)(s32, s32), 8)((arg3 * 0x10) | (arg0 & 0xFE) | 1, M2C_FIELD(arg3, s32 *, 0xC));
    if (var_2 == 0) {
        var_2 = -1;
        temp_4 = M2C_FIELD(&func_01109848, s32 *, 0x4038);
        M2C_FIELD(&func_01109848, s32 *, 0x4038) = arg3;
        M2C_FIELD(arg3, s32 *, 0) = temp_4;
        M2C_FIELD(arg3, s32 *, 4) = 0;
    }
    return var_2;
}
