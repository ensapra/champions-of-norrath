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
s32 xmlXPathCmpNodes(s32, s32, s32, M2C_UNK);       /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011DD7E0;
extern M2C_UNK D_011DD800;
extern M2C_UNK D_011DD818;
extern M2C_UNK D_011DD848;

void *xmlXPtrNewRangeNodeObject(s32 arg0, void *arg1) {
    M2C_UNK *var_5;
    M2C_UNK var_7;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_4_3;
    s32 temp_5;
    s32 temp_6;
    s32 var_5_2;
    void *temp_2;
    void *temp_4_2;
    void *var_2;

    var_2 = NULL;
    if ((arg0 != 0) && (arg1 != NULL)) {
        temp_3 = M2C_FIELD(arg1, s32 *, 0);
        if (temp_3 != 1) {
            if (temp_3 != 5) {
                var_5 = &D_011DD7E0;
                var_7 = 0x1F7;
                goto block_11;
            }
            goto block_6;
        }
        var_2 = NULL;
        if (M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0) > 0) {
block_6:
            temp_2 = D_011B1E1C(0x30);
            if (temp_2 == NULL) {
                D_0118EDD0(D_0118EDD4, &D_011DD818, D_0118EDD0);
                return NULL;
            }
            memset(temp_2, 0, 0x30);
            M2C_FIELD(temp_2, s32 *, 0) = 6;
            M2C_FIELD(temp_2, s32 *, 0x1C) = arg0;
            temp_4 = M2C_FIELD(arg1, s32 *, 0);
            M2C_FIELD(temp_2, s32 *, 0x20) = -1;
            if (temp_4 != 1) {
                if (temp_4 != 5) {
                    var_5 = &D_011DD848;
                    var_7 = 0x20F;
block_11:
                    ((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK)) D_0118EDD0)(D_0118EDD4, var_5, &D_011DD800, var_7, (M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK)) D_0118EDD0);
                    return NULL;
                }
                M2C_FIELD(temp_2, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
                M2C_FIELD(temp_2, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
                goto block_13;
            }
block_13:
            temp_4_2 = M2C_FIELD(arg1, void **, 4);
            temp_6 = M2C_FIELD(temp_2, s32 *, 0);
            M2C_FIELD(temp_2, s32 *, 0x28) = -1;
            temp_2_2 = M2C_FIELD((M2C_FIELD(temp_4_2, s32 *, 8) + (M2C_FIELD(temp_4_2, s32 *, 0) * 4)), s32 *, -4);
            M2C_FIELD(temp_2, s32 *, 0x24) = temp_2_2;
            if ((temp_6 == 6) && (var_5_2 = -2, (temp_2_2 != 0))) {
                temp_4_3 = M2C_FIELD(temp_2, s32 *, 0x1C);
                temp_3_2 = M2C_FIELD(temp_2, s32 *, 0x20);
                if (temp_4_3 != 0) {
                    if (temp_4_3 == temp_2_2) {
                        var_5_2 = 1;
                        if (temp_3_2 >= -1) {
                            var_5_2 = (temp_3_2 <= -1) ? 0 : -1;
                        }
                    } else {
                        var_5_2 = xmlXPathCmpNodes(temp_4_3, temp_2_2, temp_6, -1);
                    }
                }
                var_2 = temp_2;
                if (var_5_2 == -1) {
                    temp_2_3 = M2C_FIELD(temp_2, s32 *, 0x1C);
                    temp_5 = M2C_FIELD(temp_2, s32 *, 0x20);
                    M2C_FIELD(temp_2, s32 *, 0x1C) = (s32) M2C_FIELD(temp_2, s32 *, 0x24);
                    M2C_FIELD(temp_2, s32 *, 0x24) = temp_2_3;
                    M2C_FIELD(temp_2, s32 *, 0x20) = (s32) M2C_FIELD(temp_2, s32 *, 0x28);
                    M2C_FIELD(temp_2, s32 *, 0x28) = temp_5;
                    goto block_22;
                }
            } else {
block_22:
                var_2 = temp_2;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return var_2;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
