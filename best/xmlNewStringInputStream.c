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
s32 xmlStrlen(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, s32, M2C_UNK);
extern s32 D_0118EDD4;
extern s32 D_011AFFC4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011D6768;
extern M2C_UNK D_011D68D8;
extern M2C_UNK D_011D6910;

void *xmlNewStringInputStream(void *arg0, s32 arg1) {
    M2C_UNK (*temp_2)(s32, M2C_UNK *);
    M2C_UNK (*temp_2_3)(s32, M2C_UNK *);
    s32 temp_2_4;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *var_17;
    void *var_2;

    if (arg1 == 0) {
        temp_3 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, s32 *, 0x60) = 1;
        if (temp_3 != NULL) {
            temp_2 = M2C_FIELD(temp_3, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
            if (temp_2 == NULL) {
                return NULL;
            }
            temp_2(M2C_FIELD(arg0, s32 *, 4), &D_011D68D8);
            goto block_6;
        }
block_6:
        return NULL;
    }
    if (D_011AFFC4 != 0) {
        D_0118EDD0(D_0118EDD4, &D_011D6910, arg1, D_0118EDD0);
    }
    temp_2_2 = D_011B1E1C(0x38);
    if (temp_2_2 != NULL) {
        var_17 = temp_2_2;
        memset(temp_2_2, 0, 0x38);
        M2C_FIELD(temp_2_2, s32 *, 0x20) = 1;
        M2C_FIELD(temp_2_2, s32 *, 0x34) = -1;
        M2C_FIELD(temp_2_2, s32 *, 0x1C) = 1;
    } else {
        if (arg0 != NULL) {
            temp_3_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(arg0, s32 *, 0x60) = 2;
            if (temp_3_2 != NULL) {
                temp_2_3 = M2C_FIELD(temp_3_2, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
                if (temp_2_3 != NULL) {
                    temp_2_3(M2C_FIELD(arg0, s32 *, 4), &D_011D6768);
                }
            }
            M2C_FIELD(arg0, s32 *, 0x60) = 2;
        }
        var_17 = NULL;
    }
    var_2 = NULL;
    if (var_17 != NULL) {
        M2C_FIELD(var_17, s32 *, 0xC) = arg1;
        M2C_FIELD(var_17, s32 *, 0x10) = arg1;
        temp_2_4 = xmlStrlen(arg1);
        var_2 = var_17;
        M2C_FIELD(var_17, s32 *, 0x18) = temp_2_4;
        M2C_FIELD(var_17, s32 *, 0x14) = (s32) (arg1 + temp_2_4);
    }
    return var_2;
}
