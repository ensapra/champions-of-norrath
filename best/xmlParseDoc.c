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

void *xmlCreateMemoryParserCtxt(s32);               /* extern */
M2C_UNK xmlFreeDoc(s32);                            /* extern */
M2C_UNK xmlFreeParserCtxt(void *);                  /* extern */
M2C_UNK xmlParseDocument(void *);                   /* extern */

s32 xmlParseDoc(u8 *arg0) {
    s32 var_17;
    s32 var_2;
    s32 var_5;
    u8 *var_3;
    void *temp_2;

    var_2 = 0;
    if (arg0 != NULL) {
        var_3 = arg0;
        var_5 = 0;
        if (*arg0 != 0) {
            do {
                var_3 += 1;
                var_5 += 1;
            } while (*var_3 != 0);
        }
        temp_2 = xmlCreateMemoryParserCtxt(var_5);
        var_2 = 0;
        if (temp_2 != NULL) {
            xmlParseDocument(temp_2);
            if (M2C_FIELD(temp_2, s32 *, 0xC) == 0) {
                var_17 = 0;
                xmlFreeDoc(M2C_FIELD(temp_2, s32 *, 8));
                M2C_FIELD(temp_2, s32 *, 8) = 0;
            } else {
                var_17 = M2C_FIELD(temp_2, s32 *, 8);
            }
            xmlFreeParserCtxt(temp_2);
            var_2 = var_17;
        }
    }
    return var_2;
}
