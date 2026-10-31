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

void *List__C7VILNode(void *arg0) {
    void *temp_2;
    void *var_3;
    void *var_4;

    var_4 = arg0;
    var_3 = M2C_FIELD(var_4, void **, 4);
    if (var_3 != NULL) {
        do {
            var_4 = var_3;
            temp_2 = M2C_FIELD(var_4, void **, 4);
            var_3 = temp_2;
        } while (temp_2 != NULL);
    }
    return var_4;
}
