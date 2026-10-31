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

M2C_UNK xmlListClear(M2C_UNK *);                    /* extern */
M2C_UNK *xmlListDup();                              /* extern */
M2C_UNK xmlListMerge(void *, M2C_UNK *);            /* extern */
extern M2C_UNK (*D_011B1E18)(M2C_UNK *);

void xmlListSort(void *arg0) {
    M2C_UNK (*temp_5)(M2C_UNK *, M2C_UNK);
    M2C_UNK **temp_2_2;
    M2C_UNK **temp_3;
    M2C_UNK *temp_18;
    M2C_UNK *temp_2;
    M2C_UNK *temp_4;
    M2C_UNK *var_16;

    temp_3 = M2C_FIELD(arg0, M2C_UNK ***, 0);
    if (*temp_3 != temp_3) {
        temp_2 = xmlListDup();
        if (temp_2 != NULL) {
            temp_2_2 = M2C_FIELD(arg0, M2C_UNK ***, 0);
            var_16 = *temp_2_2;
            if (var_16 != temp_2_2) {
                do {
                    temp_18 = M2C_FIELD(var_16, M2C_UNK **, 0);
                    temp_5 = M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4);
                    *M2C_FIELD(var_16, M2C_UNK ***, 4) = temp_18;
                    M2C_FIELD(M2C_FIELD(var_16, M2C_UNK **, 0), M2C_UNK ***, 4) = (M2C_UNK **) M2C_FIELD(var_16, M2C_UNK ***, 4);
                    if (temp_5 != NULL) {
                        temp_5(var_16, temp_5);
                    }
                    temp_4 = var_16;
                    var_16 = temp_18;
                    D_011B1E18(temp_4);
                } while (var_16 != M2C_FIELD(arg0, M2C_UNK ***, 0));
            }
            xmlListMerge(arg0, temp_2);
            xmlListClear(temp_2);
            D_011B1E18(*temp_2);
            D_011B1E18(temp_2);
        }
    }
}
