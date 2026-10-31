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

void xmlListReverse(void **arg0) {
    s32 var_2;
    void *var_3;
    void *var_5;

    var_5 = *arg0;
    var_3 = M2C_FIELD(var_5, void **, 0);
    var_2 = M2C_FIELD(var_5, s32 *, 4);
    if (var_3 != var_5) {
        do {
            M2C_FIELD(var_5, void **, 4) = var_3;
            M2C_FIELD(var_5, s32 *, 0) = var_2;
            var_5 = var_3;
            var_3 = M2C_FIELD(var_3, void **, 0);
            var_2 = M2C_FIELD(var_5, s32 *, 4);
        } while (var_3 != *arg0);
    }
    M2C_FIELD(var_5, void **, 4) = var_3;
    M2C_FIELD(var_5, s32 *, 0) = var_2;
}
