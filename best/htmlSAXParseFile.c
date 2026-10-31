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

void *htmlCreateFileParserCtxt();                   /* extern */
M2C_UNK htmlParseDocument(void *);                  /* extern */
M2C_UNK xmlFreeParserCtxt(void *);                  /* extern */

void *htmlSAXParseFile(s32 arg2, s32 arg3) {
    s32 var_19;
    void *temp_18;
    void *var_2;

    var_19 = 0;
    var_2 = htmlCreateFileParserCtxt();
    if (var_2 != NULL) {
        if (arg2 != 0) {
            var_19 = M2C_FIELD(var_2, s32 *, 0);
            M2C_FIELD(var_2, s32 *, 4) = arg3;
            M2C_FIELD(var_2, s32 *, 0) = arg2;
        }
        htmlParseDocument(var_2);
        temp_18 = M2C_FIELD(var_2, void **, 8);
        if (arg2 != 0) {
            M2C_FIELD(var_2, s32 *, 0) = var_19;
            M2C_FIELD(var_2, s32 *, 4) = 0;
        }
        xmlFreeParserCtxt(var_2);
        var_2 = temp_18;
    }
    return var_2;
}
