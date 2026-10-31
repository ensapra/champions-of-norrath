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

M2C_UNK perror(M2C_UNK *, void *);                  /* extern */
M2C_UNK xmlListClear(M2C_UNK *);                    /* extern */
extern M2C_UNK (*D_011B1E18)(M2C_UNK *);
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011D5058;

s32 xmlListCopy(M2C_UNK *arg0, void ***arg1) {
    M2C_UNK *var_16;
    s32 temp_17;
    s32 var_6;
    void *(*temp_2_2)(M2C_UNK);
    void **temp_2;
    void **temp_2_4;
    void *temp_2_3;
    void *var_19;

    temp_2 = *arg1;
    var_19 = *temp_2;
    if (var_19 != temp_2) {
loop_2:
        temp_17 = M2C_FIELD(var_19, s32 *, 8);
        var_16 = *M2C_FIELD(arg0, M2C_UNK **, 0);
loop_5:
        temp_2_2 = D_011B1E1C;
        if ((var_16 != M2C_FIELD(arg0, M2C_UNK **, 0)) && (M2C_FIELD(arg0, s32 (**)(s32, s32), 8)(M2C_FIELD(var_16, s32 *, 8), temp_17) < 0)) {
            var_16 = M2C_FIELD(var_16, M2C_UNK **, 0);
            goto loop_5;
        }
        temp_2_3 = temp_2_2(0xC);
        if (temp_2_3 != NULL) {
            temp_2_4 = M2C_FIELD(var_16, void ***, 4);
            var_6 = 0;
            M2C_FIELD(temp_2_3, s32 *, 8) = temp_17;
            M2C_FIELD(temp_2_3, void **, 0) = (void *) *temp_2_4;
            M2C_FIELD(*temp_2_4, void **, 4) = temp_2_3;
            *temp_2_4 = temp_2_3;
            M2C_FIELD(temp_2_3, void ***, 4) = temp_2_4;
        } else {
            perror(&D_011D5058, temp_2_3);
            var_6 = 1;
        }
        if (var_6 == 0) {
            var_19 = M2C_FIELD(var_19, void **, 0);
            if (var_19 == *arg1) {
                goto block_18;
            }
            goto loop_2;
        }
        xmlListClear(arg0);
        D_011B1E18(M2C_FIELD(arg0, M2C_UNK **, 0));
        D_011B1E18(arg0);
        return 1;
    }
block_18:
    return 0;
}
