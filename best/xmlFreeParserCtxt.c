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

void *inputPop(void *);                             /* extern */
void *namePop(void *);                              /* extern */
M2C_UNK xmlFreeParserInputBuffer(s32);              /* extern */
extern M2C_UNK D_011B1CA8;
extern M2C_UNK (*D_011B1E18)(void *);

void xmlFreeParserCtxt(void *arg0) {
    M2C_UNK (*temp_2_2)(s32);
    M2C_UNK (*temp_2_3)(void *);
    s32 temp_4_5;
    s32 temp_4_6;
    void *temp_2;
    void *temp_2_4;
    void *temp_4;
    void *temp_4_10;
    void *temp_4_11;
    void *temp_4_12;
    void *temp_4_13;
    void *temp_4_14;
    void *temp_4_15;
    void *temp_4_16;
    void *temp_4_17;
    void *temp_4_18;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_7;
    void *temp_4_8;
    void *temp_4_9;

    if (arg0 != NULL) {
loop_17:
        temp_2 = inputPop(arg0);
        if (temp_2 != NULL) {
            temp_4 = M2C_FIELD(temp_2, void **, 4);
            if (temp_4 != NULL) {
                D_011B1E18(temp_4);
            }
            temp_4_2 = M2C_FIELD(temp_2, void **, 8);
            if (temp_4_2 != NULL) {
                D_011B1E18(temp_4_2);
            }
            temp_4_3 = M2C_FIELD(temp_2, void **, 0x2C);
            if (temp_4_3 != NULL) {
                D_011B1E18(temp_4_3);
            }
            temp_4_4 = M2C_FIELD(temp_2, void **, 0x30);
            if (temp_4_4 != NULL) {
                D_011B1E18(temp_4_4);
            }
            temp_2_2 = M2C_FIELD(temp_2, M2C_UNK (**)(s32), 0x28);
            if (temp_2_2 != NULL) {
                temp_4_5 = M2C_FIELD(temp_2, s32 *, 0xC);
                if (temp_4_5 != 0) {
                    temp_2_2(temp_4_5);
                }
            }
            temp_4_6 = M2C_FIELD(temp_2, s32 *, 0);
            temp_2_3 = D_011B1E18;
            if (temp_4_6 != 0) {
                xmlFreeParserInputBuffer(temp_4_6);
            }
            temp_2_3(temp_2);
            goto loop_17;
        }
loop_22:
        temp_2_4 = namePop(arg0);
        if (temp_2_4 != NULL) {
            D_011B1E18(temp_2_4);
            goto loop_22;
        }
        temp_4_7 = M2C_FIELD(arg0, void **, 0xF4);
        if (temp_4_7 != NULL) {
            D_011B1E18(temp_4_7);
        }
        temp_4_8 = M2C_FIELD(arg0, void **, 0xB8);
        if (temp_4_8 != NULL) {
            D_011B1E18(temp_4_8);
        }
        temp_4_9 = M2C_FIELD(arg0, void **, 0x40);
        if (temp_4_9 != NULL) {
            D_011B1E18(temp_4_9);
        }
        temp_4_10 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_4_10 != NULL) {
            D_011B1E18(temp_4_10);
        }
        temp_4_11 = M2C_FIELD(arg0, void **, 0x14);
        if (temp_4_11 != NULL) {
            D_011B1E18(temp_4_11);
        }
        temp_4_12 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_4_12 != NULL) {
            D_011B1E18(temp_4_12);
        }
        temp_4_13 = M2C_FIELD(arg0, void **, 0xDC);
        if (temp_4_13 != NULL) {
            D_011B1E18(temp_4_13);
        }
        temp_4_14 = M2C_FIELD(arg0, void **, 0xE0);
        if (temp_4_14 != NULL) {
            D_011B1E18(temp_4_14);
        }
        temp_4_15 = M2C_FIELD(arg0, void **, 0xE4);
        if (temp_4_15 != NULL) {
            D_011B1E18(temp_4_15);
        }
        temp_4_16 = M2C_FIELD(arg0, void **, 0x90);
        if (temp_4_16 != NULL) {
            D_011B1E18(temp_4_16);
        }
        temp_4_17 = M2C_FIELD(arg0, void **, 0);
        if ((temp_4_17 != NULL) && (temp_4_17 != &D_011B1CA8)) {
            D_011B1E18(temp_4_17);
        }
        temp_4_18 = M2C_FIELD(arg0, void **, 0xA8);
        if (temp_4_18 != NULL) {
            D_011B1E18(temp_4_18);
        }
        D_011B1E18(arg0);
    }
}
