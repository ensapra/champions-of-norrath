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

extern M2C_UNK *D_004459C8;
extern u32 D_004459CC;
extern M2C_UNK D_008E4548;

s32 func_002DF758(s32 arg0) {
    M2C_UNK *var_5;
    s32 var_4;
    u32 var_2;

    var_4 = arg0;
    if (var_4 >= 0) {
        var_5 = D_004459C8;
        var_2 = D_004459CC;
    } else {
        var_5 = &D_008E4548;
        var_4 &= 0x7FFFFFFF;
        var_2 = 0x20;
    }
    if ((u32) var_4 >= var_2) {
        return -0x69;
    }
    *((var_4 * 0x10) + var_5) = 0;
    return 0;
}
