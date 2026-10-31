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

M2C_UNK htmlCheckEncoding(void *, void *);          /* extern */
M2C_UNK htmlInitParserCtxt(void *);                 /* extern */
M2C_UNK inputPush(void *, void *, s32 *);           /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK perror(M2C_UNK *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK strcat(void *, s32);                        /* extern */
M2C_UNK strcpy(void *, M2C_UNK *);                  /* extern */
s32 strlen(s32);                                    /* extern */
void *xmlParserInputBufferCreateFilename(M2C_UNK);  /* extern */
s32 xmlStrlen(M2C_UNK *);                           /* extern */
extern M2C_UNK (*D_011B1E18)(void *);
extern void *(*D_011B1E1C)(s32);
extern s32 (*D_011B1E24)(s32);
extern M2C_UNK D_011D2218;
extern M2C_UNK D_011D24F8;

void *htmlCreateFileParserCtxt(s32 arg0, s32 arg1) {
    s32 *temp_6;
    s32 temp_16;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *var_2;

    var_2 = xmlParserInputBufferCreateFilename(0);
    if (var_2 != NULL) {
        temp_2 = D_011B1E1C(0x118);
        if (temp_2 == NULL) {
            perror(&D_011D24F8, 0, 0x118);
            return NULL;
        }
        memset(temp_2, 0, 0x118);
        htmlInitParserCtxt(temp_2);
        temp_2_2 = D_011B1E1C(0x38);
        if (temp_2_2 == NULL) {
            perror(&D_011D24F8, 0, 0x38);
            D_011B1E18(temp_2);
            return NULL;
        }
        memset(temp_2_2, 0, 0x38);
        temp_6 = M2C_FIELD(var_2, s32 **, 0x10);
        M2C_FIELD(temp_2_2, s32 *, 4) = D_011B1E24(arg0);
        M2C_FIELD(temp_2_2, s32 *, 0x20) = 1;
        M2C_FIELD(temp_2_2, s32 *, 0xC) = (s32) *temp_6;
        M2C_FIELD(temp_2_2, s32 *, 0x1C) = 1;
        M2C_FIELD(temp_2_2, void **, 0) = var_2;
        M2C_FIELD(temp_2_2, s32 *, 0x10) = (s32) *temp_6;
        M2C_FIELD(temp_2_2, s32 *, 8) = 0;
        M2C_FIELD(temp_2_2, s32 *, 0x28) = 0;
        inputPush(temp_2, temp_2_2, temp_6);
        if (arg1 != 0) {
            temp_16 = xmlStrlen(&D_011D2218);
            temp_2_3 = D_011B1E1C(temp_16 + strlen(arg1) + 1);
            if (temp_2_3 != NULL) {
                strcpy(temp_2_3, &D_011D2218);
                strcat(temp_2_3, arg1);
                htmlCheckEncoding(temp_2, temp_2_3);
                D_011B1E18(temp_2_3);
            }
        }
        var_2 = temp_2;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
