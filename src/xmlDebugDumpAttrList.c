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

M2C_UNK xmlDebugDumpAttr(s32, void *, s32);         /* extern */

void xmlDebugDumpAttrList(s32 arg0, void *arg1, s32 arg2) {
    void *var_16;
    void *var_5;

    var_16 = arg1;
    if (var_16 != NULL) {
        var_5 = var_16;
        do {
            xmlDebugDumpAttr(arg0, var_5, arg2);
            var_16 = M2C_FIELD(var_16, void **, 0x18);
            var_5 = var_16;
        } while (var_16 != NULL);
    }
}
