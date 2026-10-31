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

M2C_UNK *xmlNewNs(M2C_UNK, s32, s32);               /* extern */

M2C_UNK *xmlCopyNamespaceList(void *arg0) {
    M2C_UNK *var_17;
    M2C_UNK *var_18;
    M2C_UNK *var_3;
    void *var_16;

    var_16 = arg0;
    var_17 = NULL;
    var_18 = NULL;
    if (var_16 != NULL) {
        do {
            var_3 = NULL;
            if (M2C_FIELD(var_16, s32 *, 4) == 0x12) {
                var_3 = xmlNewNs(0, M2C_FIELD(var_16, s32 *, 8), M2C_FIELD(var_16, s32 *, 0xC));
            }
            if (var_17 != NULL) {
                *var_17 = var_3;
                var_17 = var_3;
            } else {
                var_17 = var_3;
                var_18 = var_17;
            }
            var_16 = M2C_FIELD(var_16, void **, 0);
        } while (var_16 != NULL);
    }
    return var_18;
}
