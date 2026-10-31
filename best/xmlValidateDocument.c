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

void *xmlDocGetRootElement(void *);                 /* extern */
M2C_UNK xmlHashFree(s32, M2C_UNK *);                /* extern */
M2C_UNK xmlHashScan(s32, M2C_UNK *, void *);        /* extern */
s32 xmlNodeListGetString(void *, s32, M2C_UNK);     /* extern */
void *xmlParseDTD(s32, s32);                        /* extern */
s32 xmlValidateElement(void *, void *, void *);     /* extern */
s32 xmlValidateOneAttribute(void *, void *, void *, void *, s32); /* extern */
s32 xmlValidateOneElement(void *, void *, void *);  /* extern */
s32 xmlValidateRoot(void *, void *);                /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(s32);
extern M2C_UNK D_011CD0E0;
extern M2C_UNK D_011CD108;
extern M2C_UNK xmlFreeID;
extern M2C_UNK xmlFreeRefList;
extern M2C_UNK xmlValidateAttributeCallback;
extern M2C_UNK xmlValidateCheckRefCallback;

s32 xmlValidateDocument(void *arg0, void *arg1) {
    M2C_UNK (*temp_2_2)(s32, M2C_UNK *, s32);
    M2C_UNK (*temp_2_3)(s32, M2C_UNK *, s32);
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_5;
    s32 temp_5;
    s32 temp_6;
    s32 var_19;
    s32 var_23;
    s32 var_2;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    void *temp_2;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4_4;
    void *var_16;
    void *var_17;

    temp_3 = M2C_FIELD(arg1, void **, 0x2C);
    if (temp_3 == NULL) {
        if (M2C_FIELD(arg1, void **, 0x30) == NULL) {
            goto block_2;
        }
        goto block_17;
    }
    temp_5 = M2C_FIELD(temp_3, s32 *, 0x38);
    if (((temp_5 != 0) || (M2C_FIELD(temp_3, s32 *, 0x34) != 0)) && (M2C_FIELD(arg1, void **, 0x30) == NULL) && (temp_2 = xmlParseDTD(M2C_FIELD(temp_3, s32 *, 0x34), temp_5), M2C_FIELD(arg1, void **, 0x30) = temp_2, (temp_2 == NULL))) {
        temp_3_2 = M2C_FIELD(arg1, void **, 0x2C);
        temp_6 = M2C_FIELD(temp_3_2, s32 *, 0x38);
        if (temp_6 != 0) {
            var_2 = 0;
            if (arg0 != NULL) {
                temp_2_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK *, s32), 4);
                if (temp_2_2 != NULL) {
                    temp_2_2(M2C_FIELD(arg0, s32 *, 0), &D_011CD108, temp_6);
                    var_2 = 0;
                } else {
                    goto block_2;
                }
            }
        } else {
            var_2 = 0;
            if (arg0 != NULL) {
                temp_2_3 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK *, s32), 4);
                if (temp_2_3 != NULL) {
                    temp_2_3(M2C_FIELD(arg0, s32 *, 0), &D_011CD108, M2C_FIELD(temp_3_2, s32 *, 0x34));
                    var_2 = 0;
                } else {
block_2:
                    var_2 = 0;
                }
            }
        }
    } else {
block_17:
        temp_4 = M2C_FIELD(arg1, s32 *, 0x40);
        if (temp_4 != 0) {
            xmlHashFree(temp_4, &xmlFreeID);
            M2C_FIELD(arg1, s32 *, 0x40) = 0;
        }
        temp_4_2 = M2C_FIELD(arg1, s32 *, 0x44);
        if (temp_4_2 != 0) {
            xmlHashFree(temp_4_2, &xmlFreeRefList);
            M2C_FIELD(arg1, s32 *, 0x44) = 0;
        }
        var_23 = 0;
        if ((arg1 != NULL) && ((temp_3_3 = M2C_FIELD(arg1, void **, 0x2C), (temp_3_3 != NULL)) || (M2C_FIELD(arg1, void **, 0x30) != NULL))) {
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
            M2C_FIELD(arg0, void **, 0x20) = arg1;
            if (temp_3_3 != NULL) {
                temp_4_3 = M2C_FIELD(temp_3_3, s32 *, 0x2C);
                if (temp_4_3 != 0) {
                    xmlHashScan(temp_4_3, &xmlValidateAttributeCallback, arg0);
                }
            }
            temp_4_4 = M2C_FIELD(arg1, void **, 0x30);
            if (temp_4_4 != NULL) {
                temp_4_5 = M2C_FIELD(temp_4_4, s32 *, 0x2C);
                if (temp_4_5 != 0) {
                    xmlHashScan(temp_4_5, &xmlValidateAttributeCallback, arg0);
                }
            }
            var_23 = M2C_FIELD(arg0, s32 *, 0x24);
        }
        var_2 = xmlValidateRoot(arg0, arg1);
        if (var_2 != 0) {
            temp_2_4 = xmlDocGetRootElement(arg1);
            var_3 = 0;
            if (temp_2_4 != NULL) {
                var_3 = 1;
                if ((u32) (M2C_FIELD(temp_2_4, s32 *, 4) - 0x13) >= 2U) {
                    var_3 = 0;
                    if ((arg1 != NULL) && ((M2C_FIELD(arg1, void **, 0x2C) != NULL) || (M2C_FIELD(arg1, void **, 0x30) != NULL))) {
                        var_17 = M2C_FIELD(temp_2_4, void **, 0x2C);
                        var_19 = xmlValidateOneElement(arg0, arg1, temp_2_4) & 1;
                        if (var_17 != NULL) {
                            var_5 = M2C_FIELD(var_17, s32 *, 0xC);
loop_39:
                            temp_2_5 = xmlNodeListGetString(arg1, var_5, 0);
                            var_19 &= xmlValidateOneAttribute(arg0, arg1, temp_2_4, var_17, temp_2_5);
                            if (temp_2_5 != 0) {
                                D_011B1E18(temp_2_5);
                            }
                            var_17 = M2C_FIELD(var_17, void **, 0x18);
                            if (var_17 != NULL) {
                                var_5 = M2C_FIELD(var_17, s32 *, 0xC);
                                goto loop_39;
                            }
                        }
                        var_16 = M2C_FIELD(temp_2_4, void **, 0xC);
                        var_3 = var_19;
                        if (var_16 != NULL) {
                            do {
                                temp_2_6 = xmlValidateElement(arg0, arg1, var_16);
                                var_16 = M2C_FIELD(var_16, void **, 0x18);
                                var_19 &= temp_2_6;
                            } while (var_16 != NULL);
                            var_3 = var_19;
                        }
                    }
                }
            }
            if (arg1 == NULL) {
                D_0118EDD0(D_0118EDD4, &D_011CD0E0, D_0118EDD0);
                var_4 = 0;
            } else {
                M2C_FIELD(arg0, void **, 0x20) = arg1;
                M2C_FIELD(arg0, s32 *, 0x24) = 1;
                xmlHashScan(M2C_FIELD(arg1, s32 *, 0x44), &xmlValidateCheckRefCallback, arg0);
                var_4 = M2C_FIELD(arg0, s32 *, 0x24);
            }
            var_2 = var_23 & var_3 & var_4;
        }
    }
    return var_2;
}
