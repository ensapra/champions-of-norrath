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
s32 xmlXPathNewCompExpr();                          /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(void *);
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011DCD20;

void *xmlXPathNewParserContext(s32 arg0, s32 arg1) {
    s32 temp_2_2;
    void *temp_2;
    void *var_2;

    temp_2 = D_011B1E1C(0x28);
    if (temp_2 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011DCD20, 0x28);
        goto block_5;
    }
    memset(temp_2, 0, 0x28);
    M2C_FIELD(temp_2, s32 *, 0) = arg0;
    M2C_FIELD(temp_2, s32 *, 4) = arg0;
    M2C_FIELD(temp_2, s32 *, 0xC) = arg1;
    temp_2_2 = xmlXPathNewCompExpr();
    var_2 = temp_2;
    M2C_FIELD(temp_2, s32 *, 0x20) = temp_2_2;
    if (temp_2_2 == 0) {
        D_011B1E18(M2C_FIELD(temp_2, void **, 0x1C));
        D_011B1E18(temp_2);
block_5:
        var_2 = NULL;
    }
    return var_2;
}
