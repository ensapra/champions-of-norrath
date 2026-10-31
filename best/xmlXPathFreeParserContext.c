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

M2C_UNK xmlXPathFreeObject(void *);                 /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlXPathFreeParserContext(void *arg0) {
    M2C_UNK (*temp_2)(void *);
    s32 var_18;
    void *temp_16;
    void *temp_17;
    void *temp_2_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;

    temp_4 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_4 != NULL) {
        D_011B1E18(temp_4);
    }
    temp_17 = M2C_FIELD(arg0, void **, 0x20);
    temp_2 = D_011B1E18;
    if (temp_17 != NULL) {
        var_18 = 0;
        if (M2C_FIELD(temp_17, s32 *, 0) > 0) {
            do {
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
                temp_2_2 = M2C_FIELD(temp_16, void **, 0x1C);
                if (temp_2_2 != NULL) {
                    D_011B1E18(temp_2_2);
                }
            } while (var_18 < M2C_FIELD(temp_17, s32 *, 0));
        }
        temp_4_3 = M2C_FIELD(temp_17, void **, 8);
        if (temp_4_3 != NULL) {
            D_011B1E18(temp_4_3);
        }
        D_011B1E18(temp_17);
    }
    temp_2(arg0);
}
