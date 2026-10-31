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
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK, s32);
extern M2C_UNK D_011C2840;

void *xmlCreateIntSubset(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_18;
    s32 var_2_2;
    s32 var_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *var_2;
    void *var_3;
    void *var_4;
    void *var_4_2;

    var_5 = arg1;
    temp_18 = var_5;
    if (arg0 != NULL) {
        var_3 = M2C_FIELD(arg0, void **, 0xC);
        if (var_3 != NULL) {
            var_5 = 0xE;
            var_2_2 = M2C_FIELD(var_3, s32 *, 4);
loop_3:
            var_4 = var_3;
            if (var_2_2 != 0xE) {
                var_3 = M2C_FIELD(var_3, void **, 0x18);
                if (var_3 != NULL) {
                    var_2_2 = M2C_FIELD(var_3, s32 *, 4);
                    goto loop_3;
                }
                goto block_7;
            }
        } else {
block_7:
            var_4 = M2C_FIELD(arg0, void **, 0x2C);
        }
        var_2 = NULL;
        if (var_4 == NULL) {
            goto block_9;
        }
        /* Duplicate return node #39. Try simplifying control flow for better match */
        return var_2;
    }
block_9:
    temp_2 = D_011B1E1C(0x40, var_5);
    if (temp_2 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011C2840, D_0118EDD0);
        return NULL;
    }
    memset(temp_2, 0, 0x40);
    M2C_FIELD(temp_2, s32 *, 4) = 0xE;
    if (temp_18 != 0) {
        M2C_FIELD(temp_2, s32 *, 8) = xmlStrdup(temp_18);
    }
    if (arg2 != 0) {
        M2C_FIELD(temp_2, s32 *, 0x34) = xmlStrdup(arg2);
    }
    if (arg3 != 0) {
        M2C_FIELD(temp_2, s32 *, 0x38) = xmlStrdup(arg3);
    }
    var_2 = temp_2;
    if (arg0 != NULL) {
        var_4_2 = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(arg0, void **, 0x2C) = temp_2;
        M2C_FIELD(temp_2, void **, 0x14) = arg0;
        M2C_FIELD(temp_2, void **, 0x20) = arg0;
        if (var_4_2 == NULL) {
            M2C_FIELD(arg0, void **, 0x10) = temp_2;
            M2C_FIELD(arg0, void **, 0xC) = temp_2;
            return var_2;
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0xD) {
            if (M2C_FIELD(var_4_2, s32 *, 4) != 1) {
loop_26:
                var_4_2 = M2C_FIELD(var_4_2, void **, 0x18);
                if (var_4_2 != NULL) {
                    if (M2C_FIELD(var_4_2, s32 *, 4) == 1) {
                        goto block_28;
                    }
                    goto loop_26;
                }
                goto block_31;
            }
block_28:
            if (var_4_2 != NULL) {
                M2C_FIELD(temp_2, void **, 0x18) = var_4_2;
                temp_2_2 = M2C_FIELD(var_4_2, void **, 0x1C);
                M2C_FIELD(temp_2, void **, 0x1C) = temp_2_2;
                if (temp_2_2 == NULL) {
                    M2C_FIELD(arg0, void **, 0xC) = temp_2;
                } else {
                    M2C_FIELD(temp_2_2, void **, 0x18) = temp_2;
                }
                M2C_FIELD(var_4_2, void **, 0x1C) = temp_2;
            } else {
block_31:
                temp_2_3 = M2C_FIELD(arg0, void **, 0x10);
                M2C_FIELD(temp_2, void **, 0x1C) = temp_2_3;
                M2C_FIELD(temp_2_3, void **, 0x18) = temp_2;
                M2C_FIELD(temp_2, void **, 0x18) = NULL;
                M2C_FIELD(arg0, void **, 0x10) = temp_2;
            }
        } else {
            M2C_FIELD(var_4_2, void **, 0x1C) = temp_2;
            M2C_FIELD(temp_2, void **, 0x18) = var_4_2;
            M2C_FIELD(arg0, void **, 0xC) = temp_2;
        }
        var_2 = temp_2;
        /* Duplicate return node #39. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
