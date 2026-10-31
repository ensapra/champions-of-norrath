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

M2C_UNK xmlFreeDtd(s32);                            /* extern */
M2C_UNK xmlFreeIDTable(s32);                        /* extern */
M2C_UNK xmlFreeNodeList(s32);                       /* extern */
M2C_UNK xmlFreeRefTable(s32);                       /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeDoc(void *arg0) {
    s32 temp_4_10;
    s32 temp_4_11;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    void *temp_18;
    void *temp_2;
    void *temp_4;
    void *temp_4_12;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_7;
    void *temp_4_8;
    void *temp_4_9;
    void *var_16;

    if (arg0 != NULL) {
        temp_4 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_4 != NULL) {
            D_011B1E18(temp_4);
        }
        temp_4_2 = M2C_FIELD(arg0, void **, 8);
        if (temp_4_2 != NULL) {
            D_011B1E18(temp_4_2);
        }
        temp_4_3 = M2C_FIELD(arg0, void **, 0x3C);
        if (temp_4_3 != NULL) {
            D_011B1E18(temp_4_3);
        }
        temp_4_4 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_4_4 != 0) {
            xmlFreeNodeList(temp_4_4);
        }
        temp_4_5 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_4_5 != 0) {
            xmlFreeDtd(temp_4_5);
        }
        temp_4_6 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_4_6 != 0) {
            xmlFreeDtd(temp_4_6);
        }
        temp_4_7 = M2C_FIELD(arg0, void **, 0x34);
        if (temp_4_7 != NULL) {
            var_16 = temp_4_7;
            do {
                temp_2 = M2C_FIELD(var_16, void **, 8);
                temp_18 = M2C_FIELD(var_16, void **, 0);
                if (temp_2 != NULL) {
                    D_011B1E18(temp_2);
                }
                temp_4_8 = M2C_FIELD(var_16, void **, 0xC);
                if (temp_4_8 != NULL) {
                    D_011B1E18(temp_4_8);
                }
                temp_4_9 = var_16;
                var_16 = temp_18;
                D_011B1E18(temp_4_9);
            } while (var_16 != NULL);
        }
        temp_4_10 = M2C_FIELD(arg0, s32 *, 0x40);
        if (temp_4_10 != 0) {
            xmlFreeIDTable(temp_4_10);
        }
        temp_4_11 = M2C_FIELD(arg0, s32 *, 0x44);
        if (temp_4_11 != 0) {
            xmlFreeRefTable(temp_4_11);
        }
        temp_4_12 = M2C_FIELD(arg0, void **, 0x48);
        if (temp_4_12 != NULL) {
            D_011B1E18(temp_4_12);
        }
        D_011B1E18(arg0);
    }
}
