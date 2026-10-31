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

extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeNsList(void *arg0) {
    void *temp_17;
    void *temp_4;
    void *temp_4_2;
    void *var_16;
    void *var_2;

    var_16 = arg0;
    if (var_16 != NULL) {
        var_2 = M2C_FIELD(var_16, void **, 8);
loop_2:
        temp_17 = M2C_FIELD(var_16, void **, 0);
        if (var_2 != NULL) {
            D_011B1E18(var_2);
        }
        temp_4 = M2C_FIELD(var_16, void **, 0xC);
        if (temp_4 != NULL) {
            D_011B1E18(temp_4);
        }
        temp_4_2 = var_16;
        var_16 = temp_17;
        D_011B1E18(temp_4_2);
        if (var_16 != NULL) {
            var_2 = M2C_FIELD(var_16, void **, 8);
            goto loop_2;
        }
    }
}
