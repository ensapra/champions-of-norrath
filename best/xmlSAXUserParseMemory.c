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

void *xmlCreateMemoryParserCtxt(s32, s32);          /* extern */
M2C_UNK xmlFreeParserCtxt(void *);                  /* extern */
M2C_UNK xmlParseDocument(void *);                   /* extern */

s32 xmlSAXUserParseMemory(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2_2;
    s32 var_18;
    s32 var_20;
    s32 var_2;
    void *temp_2;

    var_18 = 0;
    var_20 = 0;
    temp_2 = xmlCreateMemoryParserCtxt(arg2, arg3);
    var_2 = -1;
    if (temp_2 != NULL) {
        if (arg0 != 0) {
            var_20 = M2C_FIELD(temp_2, s32 *, 0);
            M2C_FIELD(temp_2, s32 *, 0) = arg0;
        }
        M2C_FIELD(temp_2, s32 *, 4) = arg1;
        xmlParseDocument(temp_2);
        if (M2C_FIELD(temp_2, s32 *, 0xC) == 0) {
            temp_2_2 = M2C_FIELD(temp_2, s32 *, 0x60);
            var_18 = (temp_2_2 != 0) ? temp_2_2 : -1;
        }
        if (arg0 != 0) {
            M2C_FIELD(temp_2, s32 *, 0) = var_20;
        }
        xmlFreeParserCtxt(temp_2);
        var_2 = var_18;
    }
    return var_2;
}
