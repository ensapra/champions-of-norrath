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

M2C_UNK xmlAddChild(void *, s32, M2C_UNK);          /* extern */
M2C_UNK xmlAddSibling(void *, s32, M2C_UNK);        /* extern */
s32 xmlNewDocComment(void *);                       /* extern */

void comment(void *arg0) {
    s32 temp_2;
    s32 temp_3;
    void *temp_17;
    void *temp_4;

    temp_17 = M2C_FIELD(arg0, void **, 0x34);
    temp_2 = xmlNewDocComment(M2C_FIELD(arg0, void **, 8));
    if (temp_2 != 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0xD8);
        if (temp_3 == 1) {
            xmlAddChild(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x2C), temp_2, 1);
            return;
        }
        if (temp_3 != 2) {
            temp_4 = M2C_FIELD(arg0, void **, 8);
            if (M2C_FIELD(temp_4, s32 *, 0xC) != 0) {
                if (temp_17 != NULL) {
                    if (M2C_FIELD(temp_17, s32 *, 4) == 1) {
                        xmlAddChild(temp_17, temp_2, 1);
                        return;
                    }
                    xmlAddSibling(temp_17, temp_2, 1);
                } else {
                    /* Duplicate return node #13. Try simplifying control flow for better match */
                    xmlAddChild(temp_4, temp_2, 1);
                }
            } else {
                xmlAddChild(temp_4, temp_2, 1);
            }
        } else {
            xmlAddChild(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x30), temp_2, 1);
        }
    }
}
