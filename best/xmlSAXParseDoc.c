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

void *xmlCreateMemoryParserCtxt(u8 *, s32, s32);    /* extern */
M2C_UNK xmlFreeDoc(void *);                         /* extern */
M2C_UNK xmlFreeParserCtxt(void *);                  /* extern */
M2C_UNK xmlParseDocument(void *);                   /* extern */

void *xmlSAXParseDoc(s32 arg0, u8 *arg1, s32 arg2) {
    s32 var_6;
    u8 *var_3;
    void *var_17;
    void *var_2;

    var_2 = NULL;
    if (arg1 != NULL) {
        var_3 = arg1;
        var_6 = 0;
        if (*arg1 != 0) {
            do {
                var_3 += 1;
                var_6 += 1;
            } while (*var_3 != 0);
        }
        var_2 = xmlCreateMemoryParserCtxt(arg1, var_6, var_6);
        if (var_2 != NULL) {
            if (arg0 != 0) {
                M2C_FIELD(var_2, s32 *, 0) = arg0;
                M2C_FIELD(var_2, s32 *, 4) = 0;
            }
            xmlParseDocument(var_2);
            if (M2C_FIELD(var_2, s32 *, 0xC) != 0) {
                var_17 = M2C_FIELD(var_2, void **, 8);
            } else if (arg2 == 0) {
                var_17 = NULL;
                xmlFreeDoc(M2C_FIELD(var_2, void **, 8));
                M2C_FIELD(var_2, void **, 8) = NULL;
            } else {
                var_17 = M2C_FIELD(var_2, void **, 8);
            }
            if (arg0 != 0) {
                M2C_FIELD(var_2, s32 *, 0) = 0;
            }
            xmlFreeParserCtxt(var_2);
            var_2 = var_17;
        }
    }
    return var_2;
}
