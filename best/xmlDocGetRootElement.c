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

void *xmlDocGetRootElement(void *arg0) {
    void *var_2;
    void *var_4;

    if (arg0 != NULL) {
        var_4 = M2C_FIELD(arg0, void **, 0xC);
        var_2 = var_4;
        if (var_4 != NULL) {
loop_6:
            var_2 = var_4;
            if (M2C_FIELD(var_4, s32 *, 4) != 1) {
                var_4 = M2C_FIELD(var_4, void **, 0x18);
                if (var_4 == NULL) {
                    var_2 = var_4;
                } else {
                    goto loop_6;
                }
            }
        }
        return var_2;
    }
    return NULL;
}
