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
s32 xmlCopyElementContent(s32);                     /* extern */
void *xmlNewElementContent(s32, s32);               /* extern */
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011CBC38;
extern M2C_UNK D_011CBE98;

void *xmlCopyElement(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    void *temp_16;
    void *temp_2;
    void *temp_2_2;
    void *var_2;

    temp_2 = D_011B1E1C(0x34);
    if (temp_2 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011CBE98, D_0118EDD0);
        return NULL;
    }
    memset(temp_2, 0, 0x34);
    temp_4 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(temp_2, s32 *, 4) = 0xF;
    M2C_FIELD(temp_2, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_4 != 0) {
        M2C_FIELD(temp_2, s32 *, 8) = xmlStrdup(temp_4);
    } else {
        M2C_FIELD(temp_2, s32 *, 8) = 0;
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_4_2 == 0) {
        M2C_FIELD(temp_2, s32 *, 0x30) = 0;
    } else {
        M2C_FIELD(temp_2, s32 *, 0x30) = xmlStrdup(temp_4_2);
    }
    temp_16 = M2C_FIELD(arg0, void **, 0x28);
    var_2 = NULL;
    if (temp_16 != NULL) {
        temp_2_2 = xmlNewElementContent(M2C_FIELD(temp_16, s32 *, 8), M2C_FIELD(temp_16, s32 *, 0));
        if (temp_2_2 != NULL) {
            temp_4_3 = M2C_FIELD(temp_16, s32 *, 0xC);
            M2C_FIELD(temp_2_2, s32 *, 4) = (s32) M2C_FIELD(temp_16, s32 *, 4);
            if (temp_4_3 != 0) {
                M2C_FIELD(temp_2_2, s32 *, 0xC) = xmlCopyElementContent(temp_4_3);
            }
            temp_4_4 = M2C_FIELD(temp_16, s32 *, 0x10);
            var_2 = temp_2_2;
            if (temp_4_4 != 0) {
                M2C_FIELD(temp_2_2, s32 *, 0x10) = xmlCopyElementContent(temp_4_4);
                var_2 = temp_2_2;
            }
        } else {
            D_0118EDD0(D_0118EDD4, &D_011CBC38, D_0118EDD0);
            var_2 = NULL;
        }
    }
    M2C_FIELD(temp_2, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_2, void **, 0x28) = var_2;
    return temp_2;
}
