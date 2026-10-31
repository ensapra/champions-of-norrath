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

void *xmlGetIntSubset(void *arg0) {
    void *var_2;
    void *var_5;

    if (arg0 != NULL) {
        var_5 = M2C_FIELD(arg0, void **, 0xC);
        if (var_5 != NULL) {
loop_6:
            var_2 = var_5;
            if (M2C_FIELD(var_5, s32 *, 4) != 0xE) {
                var_5 = M2C_FIELD(var_5, void **, 0x18);
                if (var_5 == NULL) {
                    goto block_8;
                }
                goto loop_6;
            }
        } else {
block_8:
            var_2 = M2C_FIELD(arg0, void **, 0x2C);
        }
        return var_2;
    }
    return NULL;
}
