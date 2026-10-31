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

void *xmlCopyProp(s32, void *);                     /* extern */

void *xmlCopyPropList(s32 arg0, void *arg1) {
    void *temp_2;
    void *var_16;
    void *var_17;
    void *var_18;
    void *var_5;

    var_16 = arg1;
    var_17 = NULL;
    var_18 = NULL;
    if (var_16 != NULL) {
        var_5 = var_16;
        do {
            temp_2 = xmlCopyProp(arg0, var_5);
            if (var_17 != NULL) {
                M2C_FIELD(var_17, void **, 0x18) = temp_2;
                M2C_FIELD(temp_2, void **, 0x1C) = var_17;
                var_17 = temp_2;
            } else {
                var_17 = temp_2;
                var_18 = var_17;
            }
            var_16 = M2C_FIELD(var_16, void **, 0x18);
            var_5 = var_16;
        } while (var_16 != NULL);
    }
    return var_18;
}
