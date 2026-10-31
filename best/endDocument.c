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

s32 xmlStrdup(s32);                                 /* extern */
s32 xmlValidateDocumentFinal(void *, void *);       /* extern */

void endDocument(void *arg0) {
    s32 temp_3_2;
    s32 temp_4;
    s32 temp_4_2;
    void *temp_2;
    void *temp_3;
    void *temp_4_3;
    void *temp_5;

    if ((M2C_FIELD(arg0, s32 *, 0x74) != 0) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        temp_5 = M2C_FIELD(arg0, void **, 8);
        if ((temp_5 != NULL) && (M2C_FIELD(temp_5, s32 *, 0x2C) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) & xmlValidateDocumentFinal(arg0 + 0x78, temp_5));
        }
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_4 != 0) {
        temp_3 = M2C_FIELD(arg0, void **, 8);
        if ((temp_3 != NULL) && (M2C_FIELD(temp_3, s32 *, 0x3C) == 0)) {
            M2C_FIELD(temp_3, s32 *, 0x3C) = temp_4;
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
    }
    temp_4_2 = M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x30), s32 *, 0x2C);
    if (temp_4_2 != 0) {
        temp_2 = M2C_FIELD(arg0, void **, 8);
        if ((temp_2 != NULL) && (M2C_FIELD(temp_2, s32 *, 0x3C) == 0)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x3C) = xmlStrdup(temp_4_2);
        }
    }
    temp_3_2 = M2C_FIELD(arg0, s32 *, 0x100);
    if (temp_3_2 != 0) {
        temp_4_3 = M2C_FIELD(arg0, void **, 8);
        if (temp_4_3 != NULL) {
            if (M2C_FIELD(temp_4_3, s32 *, 0x4C) == 0) {
                M2C_FIELD(temp_4_3, s32 *, 0x4C) = temp_3_2;
            }
        }
    }
}
