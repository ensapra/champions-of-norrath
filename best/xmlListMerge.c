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

M2C_UNK xmlListCopy();                              /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlListMerge(void *arg1) {
    M2C_UNK (*temp_5)(void *, M2C_UNK);
    void **temp_3;
    void **var_2;
    void *temp_17;
    void *temp_4;
    void *var_16;

    xmlListCopy();
    temp_3 = M2C_FIELD(arg1, void ***, 0);
    var_16 = *temp_3;
    if (var_16 != temp_3) {
        var_2 = M2C_FIELD(var_16, void ***, 4);
loop_2:
        temp_17 = M2C_FIELD(var_16, void **, 0);
        temp_5 = M2C_FIELD(arg1, M2C_UNK (**)(void *, M2C_UNK), 4);
        *var_2 = temp_17;
        M2C_FIELD(M2C_FIELD(var_16, void **, 0), void ***, 4) = (void **) M2C_FIELD(var_16, void ***, 4);
        if (temp_5 != NULL) {
            temp_5(var_16, temp_5);
        }
        temp_4 = var_16;
        var_16 = temp_17;
        D_011B1E18(temp_4);
        if (var_16 != M2C_FIELD(arg1, void ***, 0)) {
            var_2 = M2C_FIELD(var_16, void ***, 4);
            goto loop_2;
        }
    }
}
