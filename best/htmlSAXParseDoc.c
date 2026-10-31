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

M2C_UNK htmlInitParserCtxt(void *);                 /* extern */
M2C_UNK htmlParseDocument(void *);                  /* extern */
M2C_UNK inputPush(void *, void *);                  /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK perror(M2C_UNK *);                          /* extern */
M2C_UNK xmlFreeParserCtxt(void *);                  /* extern */
extern M2C_UNK (*D_011B1E18)(void *);
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011D24F8;

s32 htmlSAXParseDoc(s32 arg0, s32 arg2, s32 arg3) {
    s32 temp_16;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *var_19;

    var_2 = 0;
    if (arg0 != 0) {
        temp_2 = D_011B1E1C(0x118);
        var_19 = NULL;
        if (temp_2 == NULL) {
            perror(&D_011D24F8);
        } else {
            htmlInitParserCtxt(temp_2);
            temp_2_2 = D_011B1E1C(0x38);
            if (temp_2_2 != NULL) {
                var_19 = temp_2;
                memset(temp_2_2, 0, 0x38);
                M2C_FIELD(temp_2_2, s32 *, 0x20) = 1;
                M2C_FIELD(temp_2_2, s32 *, 0x10) = arg0;
                M2C_FIELD(temp_2_2, s32 *, 0x1C) = 1;
                M2C_FIELD(temp_2_2, s32 *, 0xC) = arg0;
                inputPush(temp_2, temp_2_2);
            } else {
                var_19 = NULL;
                perror(&D_011D24F8);
                D_011B1E18(temp_2);
            }
        }
        var_2 = 0;
        if (var_19 != NULL) {
            if (arg2 != 0) {
                M2C_FIELD(var_19, s32 *, 4) = arg3;
                M2C_FIELD(var_19, s32 *, 0) = arg2;
            }
            htmlParseDocument(var_19);
            temp_16 = M2C_FIELD(var_19, s32 *, 8);
            if (arg2 != 0) {
                M2C_FIELD(var_19, s32 *, 0) = 0;
                M2C_FIELD(var_19, s32 *, 4) = 0;
            }
            xmlFreeParserCtxt(var_19);
            var_2 = temp_16;
        }
    }
    return var_2;
}
