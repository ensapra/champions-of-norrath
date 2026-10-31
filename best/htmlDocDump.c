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

M2C_UNK htmlDocContentDumpOutput(s32, void *, M2C_UNK); /* extern */
M2C_UNK *htmlGetMetaEncoding(void *);               /* extern */
s32 xmlFindCharEncodingHandler(M2C_UNK *);          /* extern */
s32 xmlOutputBufferClose(s32);                      /* extern */
s32 xmlOutputBufferCreateFile(s32, s32);            /* extern */
s32 xmlParseCharEncoding(M2C_UNK *);                /* extern */
extern M2C_UNK D_011D29B8;
extern M2C_UNK D_011D29C0;

s32 htmlDocDump(s32 arg0, void *arg1) {
    M2C_UNK *temp_2_2;
    s32 temp_2;
    s32 temp_4;
    s32 var_2;

    if (arg1 != NULL) {
        temp_2_2 = htmlGetMetaEncoding(arg1);
        if (temp_2_2 != NULL) {
            temp_4 = M2C_FIELD(arg1, s32 *, 0x4C);
            if (xmlParseCharEncoding(temp_2_2) != temp_4) {
                if (temp_4 == 1) {
                    var_2 = xmlFindCharEncodingHandler(temp_2_2);
                    if (var_2 == 0) {
                        return -1;
                    }
                    goto block_9;
                }
                /* Duplicate return node #12. Try simplifying control flow for better match */
                return -1;
            }
        }
        var_2 = xmlFindCharEncodingHandler(&D_011D29B8);
        if (var_2 == 0) {
            var_2 = xmlFindCharEncodingHandler(&D_011D29C0);
        }
block_9:
        temp_2 = xmlOutputBufferCreateFile(arg0, var_2);
        if (temp_2 != 0) {
            htmlDocContentDumpOutput(temp_2, arg1, 0);
            return xmlOutputBufferClose(temp_2);
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
