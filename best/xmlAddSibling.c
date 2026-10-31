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
M2C_UNK xmlUnlinkNode(void *);                      /* extern */

void *xmlAddSibling(void *arg0, void *arg1) {
    s32 temp_18;
    s32 temp_3_3;
    s32 temp_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *var_17;
    void *var_2;
    void *var_3;

    var_2 = NULL;
    var_17 = arg0;
    if ((var_17 != NULL) && (arg1 != NULL)) {
        temp_3 = M2C_FIELD(var_17, void **, 0x14);
        if (temp_3 == NULL) {
            var_3 = M2C_FIELD(var_17, void **, 0x18);
            goto block_16;
        }
        if (M2C_FIELD(temp_3, s32 *, 0xC) == 0) {
            var_3 = M2C_FIELD(var_17, void **, 0x18);
            goto block_16;
        }
        temp_3_2 = M2C_FIELD(temp_3, void **, 0x10);
        if (temp_3_2 == NULL) {
            var_3 = M2C_FIELD(var_17, void **, 0x18);
            goto block_16;
        }
        if (M2C_FIELD(temp_3_2, s32 *, 0x18) != 0) {
            var_3 = M2C_FIELD(var_17, void **, 0x18);
block_16:
            if (var_3 != NULL) {
                do {
                    var_17 = var_3;
                    temp_2 = M2C_FIELD(var_17, void **, 0x18);
                    var_3 = temp_2;
                } while (temp_2 != NULL);
            }
        } else {
            var_17 = temp_3_2;
        }
        xmlUnlinkNode(arg1);
        temp_3_3 = M2C_FIELD(var_17, s32 *, 4);
        if (temp_3_3 != 3) {
            goto block_26;
        }
        if (M2C_FIELD(arg1, s32 *, 4) != temp_3_3) {
block_26:
            temp_18 = M2C_FIELD(var_17, s32 *, 0x20);
            if ((M2C_FIELD(arg1, s32 *, 0x20) != temp_18) && (arg1 != NULL) && (M2C_FIELD(arg1, s32 *, 4) != 0x11)) {
                temp_4 = M2C_FIELD(arg1, s32 *, 0xC);
                if (temp_4 != 0) {
                    xmlSetListDoc(temp_4, temp_18);
                }
                M2C_FIELD(arg1, s32 *, 0x20) = temp_18;
            }
            temp_2_2 = M2C_FIELD(var_17, void **, 0x14);
            M2C_FIELD(arg1, void **, 0x1C) = var_17;
            M2C_FIELD(arg1, s32 *, 0x18) = 0;
            M2C_FIELD(arg1, void **, 0x14) = temp_2_2;
            M2C_FIELD(var_17, void **, 0x18) = arg1;
            if (temp_2_2 != NULL) {
                M2C_FIELD(temp_2_2, void **, 0x10) = arg1;
            }
            var_2 = arg1;
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return var_2;
        }
        xmlNodeAddContent(var_17, M2C_FIELD(arg1, s32 *, 0x28));
        xmlFreeNode(arg1);
        return var_17;
    }
    return var_2;
}
