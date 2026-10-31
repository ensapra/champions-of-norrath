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

M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);        /* extern */
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011CBF28;

M2C_UNK *xmlCopyEnumeration(void *arg0) {
    M2C_UNK *var_16;
    M2C_UNK *var_2;
    s32 temp_17;
    void *temp_4;

    var_2 = NULL;
    if (arg0 != NULL) {
        temp_17 = M2C_FIELD(arg0, s32 *, 4);
        var_16 = D_011B1E1C(8);
        if (var_16 == NULL) {
            var_16 = NULL;
            D_0118EDD0(D_0118EDD4, &D_011CBF28, 8, D_0118EDD0);
        } else {
            memset(var_16, 0, 8);
            if (temp_17 != 0) {
                M2C_FIELD(var_16, s32 *, 4) = xmlStrdup(temp_17);
            }
        }
        temp_4 = M2C_FIELD(arg0, void **, 0);
        if (temp_4 == NULL) {
            *var_16 = NULL;
        } else {
            *var_16 = xmlCopyEnumeration(temp_4);
        }
        var_2 = var_16;
    }
    return var_2;
}
