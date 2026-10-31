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

M2C_UNK func_00106C78(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK message_set_connection__FP9message_tP12connection_t;

void func_00137788(void) {
    s32 *var_16;
    s32 temp_5;
    s32 var_17;

    var_16 = &message_set_connection__FP9message_tP12connection_t + 8;
    var_17 = 3;
    do {
        temp_5 = *var_16;
        var_16 += 4;
        var_17 -= 1;
        func_00106C78(0, temp_5, 0);
    } while (var_17 >= 0);
}
