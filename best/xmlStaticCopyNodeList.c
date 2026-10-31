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

void *xmlCopyDtd(void *);                           /* extern */
void *xmlStaticCopyNode(void *, s32, s32, M2C_UNK); /* extern */

void *xmlStaticCopyNodeList(void *arg0, s32 arg1, s32 arg2) {
    void *var_16;
    void *var_17;
    void *var_18;
    void *var_2;

    var_16 = arg0;
    var_17 = NULL;
    var_18 = NULL;
    if (var_16 != NULL) {
        do {
            if (M2C_FIELD(var_16, s32 *, 4) != 0xE) {
                var_2 = xmlStaticCopyNode(var_16, arg1, arg2, 1);
            } else {
                var_2 = xmlCopyDtd(var_16);
            }
            if (var_18 != NULL) {
                M2C_FIELD(var_17, void **, 0x18) = var_2;
                M2C_FIELD(var_2, void **, 0x1C) = var_17;
                var_17 = var_2;
            } else {
                var_17 = var_2;
                M2C_FIELD(var_2, void **, 0x1C) = NULL;
                var_18 = var_17;
            }
            var_16 = M2C_FIELD(var_16, void **, 0x18);
        } while (var_16 != NULL);
    }
    return var_18;
}
