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

M2C_UNK xmlDocContentDumpOutput(s32, void *, s32, M2C_UNK); /* extern */
s32 xmlFindCharEncodingHandler(s32, M2C_UNK);       /* extern */
s32 xmlOutputBufferClose(s32);                      /* extern */
s32 xmlOutputBufferCreateFilename(s32, s32, M2C_UNK); /* extern */
s32 xmlParseCharEncoding(s32);                      /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK D_011C2FF0;

s32 xmlSaveFileEnc(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 var_16;
    s32 var_5;

    var_16 = 0;
    if (arg2 != 0) {
        temp_3 = M2C_FIELD(arg1, s32 *, 0x4C);
        temp_4 = xmlParseCharEncoding(arg2);
        if (temp_3 != 1) {
            D_0118EDD0(D_0118EDD4, &D_011C2FF0, D_0118EDD0);
            return -1;
        }
        var_5 = 0;
        if (temp_4 != temp_3) {
            var_16 = xmlFindCharEncodingHandler(arg2, 0);
            if (var_16 != 0) {
                goto block_6;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return -1;
        }
        goto block_7;
    }
block_6:
    var_5 = var_16;
block_7:
    temp_2 = xmlOutputBufferCreateFilename(arg0, var_5, 0);
    if (temp_2 != 0) {
        xmlDocContentDumpOutput(temp_2, arg1, arg2, 1);
        return xmlOutputBufferClose(temp_2);
    }
    return -1;
}
