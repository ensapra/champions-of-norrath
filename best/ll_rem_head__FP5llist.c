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

void *ll_rem_head__FP5llist(void **arg0) {
    void **temp_2;
    void *temp_3;
    void *temp_4;
    void *var_5;

    temp_4 = *arg0;
    temp_3 = M2C_FIELD(temp_4, void **, 0);
    var_5 = NULL;
    if (temp_3 != NULL) {
        var_5 = temp_4;
        temp_2 = M2C_FIELD(var_5, void ***, 4);
        if (temp_2 != NULL) {
            *temp_2 = temp_3;
            M2C_FIELD(M2C_FIELD(var_5, void **, 0), void ***, 4) = (void **) M2C_FIELD(var_5, void ***, 4);
            M2C_FIELD(var_5, void **, 0) = NULL;
            M2C_FIELD(var_5, void ***, 4) = NULL;
        }
    }
    return var_5;
}
