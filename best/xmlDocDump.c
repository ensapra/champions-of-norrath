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

M2C_UNK xmlDocContentDumpOutput(s32, void *, M2C_UNK, M2C_UNK); /* extern */
s32 xmlFindCharEncodingHandler(s32, M2C_UNK *);     /* extern */
s32 xmlOutputBufferClose(s32);                      /* extern */
s32 xmlOutputBufferCreateFile(s32, s32);            /* extern */
s32 xmlParseCharEncoding(s32);                      /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(s32);
extern M2C_UNK D_011C2FC8;

s32 xmlDocDump(s32 arg0, void *arg1) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 var_18;

    var_18 = 0;
    if (arg1 != NULL) {
        temp_16 = M2C_FIELD(arg1, s32 *, 0x3C);
        if (temp_16 != 0) {
            temp_3 = M2C_FIELD(arg1, s32 *, 0x4C);
            temp_4 = xmlParseCharEncoding(temp_16);
            if (temp_3 != 1) {
                D_0118EDD0(D_0118EDD4, &D_011C2FC8, D_0118EDD0);
                return -1;
            }
            if (temp_4 != temp_3) {
                var_18 = xmlFindCharEncodingHandler(temp_16, &D_011C2FC8);
                if (var_18 == 0) {
                    D_011B1E18(M2C_FIELD(arg1, s32 *, 0x3C));
                    M2C_FIELD(arg1, s32 *, 0x3C) = 0;
                }
            }
            goto block_8;
        }
block_8:
        temp_2 = xmlOutputBufferCreateFile(arg0, var_18);
        if (temp_2 != 0) {
            xmlDocContentDumpOutput(temp_2, arg1, 0, 1);
            return xmlOutputBufferClose(temp_2);
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
