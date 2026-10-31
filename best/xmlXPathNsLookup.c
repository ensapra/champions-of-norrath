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

M2C_UNK *xmlHashLookup(s32, s32);                   /* extern */
M2C_UNK *xmlStrEqual(s32, M2C_UNK *);               /* extern */
extern M2C_UNK D_011DCB98;
extern M2C_UNK D_011DCBA0;

M2C_UNK *xmlXPathNsLookup(void *arg0, s32 arg1) {
    M2C_UNK *var_2;
    s32 temp_3;

    var_2 = NULL;
    if ((arg0 != NULL) && (arg1 != 0)) {
        var_2 = xmlStrEqual(arg1, &D_011DCB98);
        if (var_2 == NULL) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x58);
            if (temp_3 != 0) {
                return xmlHashLookup(temp_3, arg1);
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_2;
        }
        return &D_011DCBA0;
    }
    return var_2;
}
