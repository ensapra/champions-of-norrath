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
M2C_UNK perror(M2C_UNK *);                          /* extern */
s32 xmlListCopy(M2C_UNK *, void *);                 /* extern */
extern M2C_UNK (*D_011B1E18)(M2C_UNK *);
extern M2C_UNK *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011D5008;
extern M2C_UNK D_011D5030;
extern M2C_UNK xmlLinkCompare;

M2C_UNK *xmlListDup(void *arg0) {
    M2C_UNK *temp_17;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *var_17;
    M2C_UNK *var_2;

    temp_17 = M2C_FIELD(arg0, M2C_UNK **, 8);
    temp_2 = D_011B1E1C(0xC);
    if (temp_2 != NULL) {
        memset(temp_2, 0, 0xC);
        temp_2_2 = D_011B1E1C(0xC);
        M2C_FIELD(temp_2, M2C_UNK **, 0) = temp_2_2;
        if (temp_2_2 == NULL) {
            var_17 = NULL;
            perror(&D_011D5030);
            D_011B1E18(temp_2);
        } else {
            *temp_2_2 = temp_2_2;
            temp_2_3 = M2C_FIELD(temp_2, M2C_UNK **, 0);
            M2C_FIELD(temp_2_3, M2C_UNK **, 4) = temp_2_3;
            M2C_FIELD(M2C_FIELD(temp_2, M2C_UNK **, 0), s32 *, 8) = 0;
            if (temp_17 != NULL) {
                M2C_FIELD(temp_2, M2C_UNK **, 8) = temp_17;
            } else {
                M2C_FIELD(temp_2, M2C_UNK **, 8) = &xmlLinkCompare;
            }
            var_17 = temp_2;
        }
    } else {
        var_17 = NULL;
        perror(&D_011D5008);
    }
    var_2 = NULL;
    if (var_17 != NULL) {
        var_2 = (xmlListCopy(var_17, arg0) != 0) ? NULL : var_17;
    }
    return var_2;
}
