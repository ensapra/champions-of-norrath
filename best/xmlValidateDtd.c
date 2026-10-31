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
s32 xmlValidateElement(void *, void *, void *);     /* extern */
s32 xmlValidateOneAttribute(void *, void *, void *, void *, s32); /* extern */
s32 xmlValidateOneElement(void *, void *, void *);  /* extern */
s32 xmlValidateRoot();                              /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(s32);
extern M2C_UNK D_011CD0E0;
extern M2C_UNK xmlFreeID;
extern M2C_UNK xmlFreeRefList;
extern M2C_UNK xmlValidateCheckRefCallback;

s32 xmlValidateDtd(void *arg0, void *arg1, s32 arg2) {
    s32 temp_23;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_16;
    s32 var_19;
    s32 var_2;
    s32 var_4;
    s32 var_5;
    void *temp_2;
    void *var_16_2;
    void *var_17;

    var_2 = 0;
    if (arg2 != 0) {
        if (arg1 != NULL) {
            temp_23 = M2C_FIELD(arg1, s32 *, 0x30);
            M2C_FIELD(arg1, s32 *, 0x30) = arg2;
            var_2 = xmlValidateRoot();
            if (var_2 != 0) {
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
                var_16 = 0;
                temp_2 = xmlDocGetRootElement(arg1);
                if (temp_2 != NULL) {
                    var_16 = 1;
                    if ((u32) (M2C_FIELD(temp_2, s32 *, 4) - 0x13) >= 2U) {
                        if (M2C_FIELD(arg1, s32 *, 0x2C) == 0) {
                            var_16 = 0;
                            if (M2C_FIELD(arg1, s32 *, 0x30) != 0) {
                                goto block_16;
                            }
                        } else {
block_16:
                            var_17 = M2C_FIELD(temp_2, void **, 0x2C);
                            var_19 = xmlValidateOneElement(arg0, arg1, temp_2) & 1;
                            if (var_17 != NULL) {
                                var_5 = M2C_FIELD(var_17, s32 *, 0xC);
loop_18:
                                temp_2_2 = xmlNodeListGetString(arg1, var_5, 0);
                                var_19 &= xmlValidateOneAttribute(arg0, arg1, temp_2, var_17, temp_2_2);
                                if (temp_2_2 != 0) {
                                    D_011B1E18(temp_2_2);
                                }
                                var_17 = M2C_FIELD(var_17, void **, 0x18);
                                if (var_17 != NULL) {
                                    var_5 = M2C_FIELD(var_17, s32 *, 0xC);
                                    goto loop_18;
                                }
                            }
                            var_16_2 = M2C_FIELD(temp_2, void **, 0xC);
                            if (var_16_2 != NULL) {
                                do {
                                    temp_2_3 = xmlValidateElement(arg0, arg1, var_16_2);
                                    var_16_2 = M2C_FIELD(var_16_2, void **, 0x18);
                                    var_19 &= temp_2_3;
                                } while (var_16_2 != NULL);
                            }
                            var_16 = var_19;
                        }
                    }
                }
                if (arg1 == NULL) {
                    D_0118EDD0(D_0118EDD4, &D_011CD0E0, D_0118EDD0);
                    var_4 = 0;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x24) = 1;
                    M2C_FIELD(arg0, void **, 0x20) = arg1;
                    xmlHashScan(M2C_FIELD(arg1, s32 *, 0x44), &xmlValidateCheckRefCallback, arg0);
                    var_4 = M2C_FIELD(arg0, s32 *, 0x24);
                }
                M2C_FIELD(arg1, s32 *, 0x30) = temp_23;
                var_2 = var_16 & var_4;
            } else {
                M2C_FIELD(arg1, s32 *, 0x30) = temp_23;
            }
        }
    }
    return var_2;
}
