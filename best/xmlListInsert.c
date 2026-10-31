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

M2C_UNK perror(M2C_UNK *);                          /* extern */
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011D5058;

s32 xmlListInsert(void *arg0, s32 arg1) {
    void **temp_3;
    void *temp_2;
    void *var_16;

    var_16 = *M2C_FIELD(arg0, void ***, 0);
loop_2:
    if ((var_16 != M2C_FIELD(arg0, void ***, 0)) && (M2C_FIELD(arg0, s32 (**)(s32, s32), 8)(M2C_FIELD(var_16, s32 *, 8), arg1) < 0)) {
        var_16 = M2C_FIELD(var_16, void **, 0);
        goto loop_2;
    }
    temp_2 = D_011B1E1C(0xC);
    if (temp_2 != NULL) {
        temp_3 = M2C_FIELD(var_16, void ***, 4);
        M2C_FIELD(temp_2, s32 *, 8) = arg1;
        M2C_FIELD(temp_2, void **, 0) = (void *) *temp_3;
        M2C_FIELD(*temp_3, void **, 4) = temp_2;
        *temp_3 = temp_2;
        M2C_FIELD(temp_2, void ***, 4) = temp_3;
        return 0;
    }
    perror(&D_011D5058);
    return 1;
}
