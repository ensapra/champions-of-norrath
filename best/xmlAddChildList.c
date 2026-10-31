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

M2C_UNK xmlFreeNode(void *);                        /* extern */
M2C_UNK xmlNodeAddContent(void *, s32);             /* extern */
M2C_UNK xmlSetListDoc(s32, s32);                    /* extern */

void *xmlAddChildList(void *arg0, void *arg1) {
    s32 temp_2_3;
    s32 temp_3;
    void *temp_2;
    void *temp_2_2;
    void *temp_4;
    void *temp_4_2;
    void *var_16;
    void *var_2;
    void *var_3;

    var_2 = NULL;
    var_16 = arg1;
    if ((arg0 != NULL) && (var_16 != NULL)) {
        if (M2C_FIELD(arg0, void **, 0xC) != NULL) {
            temp_3 = M2C_FIELD(var_16, s32 *, 4);
            temp_4 = M2C_FIELD(arg0, void **, 0x10);
            if ((temp_3 == 3) && (M2C_FIELD(temp_4, s32 *, 4) == temp_3) && (M2C_FIELD(var_16, s32 *, 8) == M2C_FIELD(temp_4, s32 *, 8))) {
                xmlNodeAddContent(temp_4, M2C_FIELD(var_16, s32 *, 0x28));
                temp_2 = M2C_FIELD(var_16, void **, 0x18);
                if (temp_2 != NULL) {
                    temp_4_2 = var_16;
                    var_16 = temp_2;
                    xmlFreeNode(temp_4_2);
                    goto block_16;
                }
                xmlFreeNode(var_16);
                return M2C_FIELD(arg0, void **, 0x10);
            }
block_16:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x18) = var_16;
            M2C_FIELD(var_16, void **, 0x1C) = M2C_FIELD(arg0, void **, 0x10);
            goto block_17;
        }
        M2C_FIELD(arg0, void **, 0xC) = var_16;
block_17:
        var_3 = M2C_FIELD(var_16, void **, 0x18);
        if (var_3 != NULL) {
            do {
                M2C_FIELD(var_16, void **, 0x14) = arg0;
                if ((M2C_FIELD(var_16, s32 *, 0x20) != M2C_FIELD(arg0, s32 *, 0x20)) && (var_16 != NULL) && (M2C_FIELD(var_16, s32 *, 4) != 0x11)) {
                    temp_2_3 = M2C_FIELD(var_16, s32 *, 0xC);
                    if (temp_2_3 != 0) {
                        xmlSetListDoc(temp_2_3, M2C_FIELD(arg0, s32 *, 0x20));
                        var_3 = M2C_FIELD(var_16, void **, 0x18);
                    }
                    M2C_FIELD(var_16, s32 *, 0x20) = M2C_FIELD(arg0, s32 *, 0x20);
                }
                var_16 = var_3;
                temp_2_2 = M2C_FIELD(var_16, void **, 0x18);
                var_3 = temp_2_2;
            } while (temp_2_2 != NULL);
        }
        M2C_FIELD(var_16, void **, 0x14) = arg0;
        var_2 = var_16;
        M2C_FIELD(var_16, s32 *, 0x20) = M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, void **, 0x10) = var_16;
        /* Duplicate return node #29. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
