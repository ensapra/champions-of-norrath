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

M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011D6768;

void *xmlNewInputStream(void *arg0) {
    M2C_UNK (*temp_2_2)(s32, M2C_UNK *, M2C_UNK);
    void *temp_2;
    void *temp_3;
    void *var_2;

    temp_2 = D_011B1E1C(0x38);
    if (temp_2 == NULL) {
        var_2 = NULL;
        if (arg0 != NULL) {
            temp_3 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(arg0, s32 *, 0x60) = 2;
            if (temp_3 != NULL) {
                temp_2_2 = M2C_FIELD(temp_3, M2C_UNK (**)(s32, M2C_UNK *, M2C_UNK), 0x58);
                if (temp_2_2 != NULL) {
                    temp_2_2(M2C_FIELD(arg0, s32 *, 4), &D_011D6768, 0x38);
                }
            }
            M2C_FIELD(arg0, s32 *, 0x60) = 2;
            return NULL;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_2;
    }
    memset(temp_2, 0, 0x38);
    M2C_FIELD(temp_2, s32 *, 0x20) = 1;
    M2C_FIELD(temp_2, s32 *, 0x34) = -1;
    var_2 = temp_2;
    M2C_FIELD(temp_2, s32 *, 0x1C) = 1;
    return var_2;
}
