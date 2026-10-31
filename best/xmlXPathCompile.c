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

s64 dpmul(s64, s64, s64, s64);                      /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK xmlXPathCompileExpr(void *);                /* extern */
M2C_UNK xmlXPathFreeObject(void *);                 /* extern */
s32 xmlXPathNewCompExpr();                          /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(void *);
extern void *(*D_011B1E1C)(M2C_UNK);
extern s64 D_011B1F50;
extern s64 D_011B1F58;
extern s64 D_011B1F60;
extern s32 D_011B1F68;
extern M2C_UNK D_011DCD20;
extern s64 D_011DD370;

void *xmlXPathCompile(s32 arg0) {
    s32 temp_2_2;
    s32 var_18;
    s64 temp_6;
    void *temp_16;
    void *temp_17;
    void *temp_22;
    void *temp_2;
    void *temp_2_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *var_19;

    if (D_011B1F68 == 0) {
        temp_6 = 0xBFF0 << 0x30;
        D_011B1F50 = 0;
        D_011B1F58 = D_011DD370;
        D_011B1F60 = temp_6;
        D_011B1F60 = dpmul(temp_6, D_011DD370, temp_6, D_011DD370);
        D_011B1F68 = 1;
    }
    temp_2 = D_011B1E1C(0x28);
    if (temp_2 == NULL) {
        var_19 = NULL;
        D_0118EDD0(D_0118EDD4, &D_011DCD20, D_0118EDD0);
    } else {
        memset(temp_2, 0, 0x28);
        M2C_FIELD(temp_2, s32 *, 4) = arg0;
        M2C_FIELD(temp_2, s32 *, 0) = arg0;
        M2C_FIELD(temp_2, s32 *, 0xC) = 0;
        temp_2_2 = xmlXPathNewCompExpr();
        M2C_FIELD(temp_2, s32 *, 0x20) = temp_2_2;
        if (temp_2_2 == 0) {
            var_19 = NULL;
            D_011B1E18(M2C_FIELD(temp_2, void **, 0x1C));
            D_011B1E18(temp_2);
        } else {
            var_19 = temp_2;
        }
    }
    xmlXPathCompileExpr(var_19);
    temp_22 = M2C_FIELD(var_19, void **, 0x20);
    temp_4 = M2C_FIELD(var_19, void **, 0x1C);
    M2C_FIELD(var_19, void **, 0x20) = NULL;
    if (temp_4 != NULL) {
        D_011B1E18(temp_4);
    }
    temp_17 = M2C_FIELD(var_19, void **, 0x20);
    if (temp_17 != NULL) {
        var_18 = 0;
        if (M2C_FIELD(temp_17, s32 *, 0) > 0) {
loop_12:
            temp_16 = M2C_FIELD(temp_17, void **, 8) + (var_18 << 5);
            temp_4_2 = M2C_FIELD(temp_16, void **, 0x18);
            var_18 += 1;
            if (temp_4_2 != NULL) {
                if (M2C_FIELD(temp_16, s32 *, 0) != 0xC) {
                    D_011B1E18(temp_4_2);
                } else {
                    xmlXPathFreeObject(temp_4_2);
                }
            }
            temp_2_3 = M2C_FIELD(temp_16, void **, 0x1C);
            if (temp_2_3 != NULL) {
                D_011B1E18(temp_2_3);
            }
            if (var_18 < M2C_FIELD(temp_17, s32 *, 0)) {
                goto loop_12;
            }
        }
        temp_4_3 = M2C_FIELD(temp_17, void **, 8);
        if (temp_4_3 != NULL) {
            D_011B1E18(temp_4_3);
        }
        D_011B1E18(temp_17);
    }
    D_011B1E18(var_19);
    return temp_22;
}
