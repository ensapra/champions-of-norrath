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
M2C_UNK xmlNodeAddContentLen(void *, s32, s32);     /* extern */
s32 xmlStrlen(s32);                                 /* extern */

void *xmlTextMerge(void *arg0, void *arg1) {
    s32 temp_17;
    s32 temp_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *var_2;

    var_2 = arg1;
    if (arg0 != NULL) {
        var_2 = arg0;
        if (arg1 != NULL) {
            temp_4 = M2C_FIELD(arg0, s32 *, 4);
            if ((temp_4 == 3) && (M2C_FIELD(arg1, s32 *, 4) == temp_4) && (M2C_FIELD(arg1, s32 *, 8) == M2C_FIELD(arg0, s32 *, 8))) {
                temp_17 = M2C_FIELD(arg1, s32 *, 0x28);
                if (temp_17 != 0) {
                    xmlNodeAddContentLen(arg0, temp_17, xmlStrlen(temp_17));
                }
                temp_3 = M2C_FIELD(arg1, void **, 0x14);
                if (temp_3 != NULL) {
                    if (M2C_FIELD(temp_3, void **, 0xC) == arg1) {
                        M2C_FIELD(temp_3, void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0x18);
                    }
                    if ((M2C_FIELD(arg1, void **, 0x14) != NULL) && (M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), void **, 0x10) == arg1)) {
                        M2C_FIELD(M2C_FIELD(arg1, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(arg1, void **, 0x1C);
                    }
                }
                temp_3_2 = M2C_FIELD(arg1, void **, 0x18);
                if (temp_3_2 != NULL) {
                    M2C_FIELD(temp_3_2, void **, 0x1C) = (void *) M2C_FIELD(arg1, void **, 0x1C);
                }
                temp_3_3 = M2C_FIELD(arg1, void **, 0x1C);
                if (temp_3_3 != NULL) {
                    M2C_FIELD(temp_3_3, void **, 0x18) = (void *) M2C_FIELD(arg1, void **, 0x18);
                }
                M2C_FIELD(arg1, void **, 0x1C) = NULL;
                M2C_FIELD(arg1, void **, 0x18) = NULL;
                M2C_FIELD(arg1, void **, 0x14) = NULL;
                xmlFreeNode(arg1);
                var_2 = arg0;
            }
        }
    }
    return var_2;
}
