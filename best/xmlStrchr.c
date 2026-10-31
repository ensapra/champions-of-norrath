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

u8 *xmlStrchr(u8 *arg0, s32 arg1) {
    u8 *var_2;
    u8 temp_3;

    var_2 = arg0;
    if (var_2 == NULL) {
        return NULL;
    }
loop_5:
    temp_3 = *var_2;
    if (temp_3 == 0) {
        var_2 = NULL;
    } else if (temp_3 != (arg1 & 0xFF)) {
        var_2 += 1;
        goto loop_5;
    }
    return var_2;
}
