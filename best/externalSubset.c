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

s32 xmlDetectCharEncoding(s32, M2C_UNK);            /* extern */
M2C_UNK xmlFreeInputStream(void *);                 /* extern */
M2C_UNK xmlNewDtd(s32, s32, s32, s32);              /* extern */
M2C_UNK xmlParseExternalSubset(void *, s32, s32, void *); /* extern */
M2C_UNK xmlPopInput(void *);                        /* extern */
M2C_UNK xmlPushInput(void *, void *);               /* extern */
s32 xmlStrdup(s32);                                 /* extern */
M2C_UNK xmlSwitchEncoding(void *, s32);             /* extern */
extern M2C_UNK (*D_011B1E18)(s32);
extern s32 (*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011DBC90;

void externalSubset(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK (*temp_2_4)(s32, M2C_UNK *);
    s32 temp_20;
    s32 temp_21;
    s32 temp_23;
    s32 temp_2_3;
    s32 temp_30;
    void *(*temp_2_2)(s32, s32, s32);
    void *temp_22;
    void *temp_2;
    void *temp_3;
    void *temp_7;
    void *var_17;

    if (((arg2 != 0) || (arg3 != 0)) && ((M2C_FIELD(arg0, s32 *, 0x74) != 0) || (M2C_FIELD(arg0, s32 *, 0x114) != 0)) && (M2C_FIELD(arg0, s32 *, 0xC) != 0) && (M2C_FIELD(arg0, s32 *, 8) != 0)) {
        temp_2 = M2C_FIELD(arg0, void **, 0);
        var_17 = NULL;
        if (temp_2 != NULL) {
            temp_2_2 = M2C_FIELD(temp_2, void *(**)(s32, s32, s32), 0x10);
            if (temp_2_2 != NULL) {
                var_17 = temp_2_2(M2C_FIELD(arg0, s32 *, 4), arg2, arg3);
            }
        }
        if (var_17 != NULL) {
            xmlNewDtd(M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3);
            temp_22 = M2C_FIELD(arg0, void **, 0x24);
            temp_21 = M2C_FIELD(arg0, s32 *, 0x28);
            temp_23 = M2C_FIELD(arg0, s32 *, 0x2C);
            temp_30 = M2C_FIELD(arg0, s32 *, 0x30);
            temp_20 = M2C_FIELD(arg0, s32 *, 0x100);
            temp_2_3 = D_011B1E1C(0x14);
            M2C_FIELD(arg0, s32 *, 0x30) = temp_2_3;
            if (temp_2_3 == 0) {
                temp_3 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(arg0, s32 *, 0x60) = 2;
                if (temp_3 != NULL) {
                    temp_2_4 = M2C_FIELD(temp_3, M2C_UNK (**)(s32, M2C_UNK *), 0x58);
                    if (temp_2_4 != NULL) {
                        temp_2_4(M2C_FIELD(arg0, s32 *, 4), &D_011DBC90);
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x100) = temp_20;
                M2C_FIELD(arg0, s32 *, 0x60) = 2;
                M2C_FIELD(arg0, void **, 0x24) = temp_22;
            } else {
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                M2C_FIELD(arg0, s32 *, 0x2C) = 5;
                M2C_FIELD(arg0, void **, 0x24) = NULL;
                xmlPushInput(arg0, var_17);
                xmlSwitchEncoding(arg0, xmlDetectCharEncoding(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x10), 4));
                if (M2C_FIELD(var_17, s32 *, 4) == 0) {
                    M2C_FIELD(var_17, s32 *, 4) = xmlStrdup(arg3);
                }
                temp_7 = M2C_FIELD(arg0, void **, 0x24);
                M2C_FIELD(var_17, s32 *, 0x20) = 1;
                M2C_FIELD(var_17, s32 *, 0x28) = 0;
                M2C_FIELD(var_17, s32 *, 0xC) = (s32) M2C_FIELD(temp_7, s32 *, 0x10);
                M2C_FIELD(var_17, s32 *, 0x1C) = 1;
                M2C_FIELD(var_17, s32 *, 0x10) = (s32) M2C_FIELD(temp_7, s32 *, 0x10);
                xmlParseExternalSubset(arg0, arg2, arg3, temp_7);
                if (M2C_FIELD(arg0, s32 *, 0x28) >= 2) {
                    do {
                        xmlPopInput(arg0);
                    } while (M2C_FIELD(arg0, s32 *, 0x28) >= 2);
                }
                xmlFreeInputStream(M2C_FIELD(arg0, void **, 0x24));
                D_011B1E18(M2C_FIELD(arg0, s32 *, 0x30));
                M2C_FIELD(arg0, void **, 0x24) = temp_22;
                M2C_FIELD(arg0, s32 *, 0x100) = temp_20;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = temp_21;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_23;
            M2C_FIELD(arg0, s32 *, 0x30) = temp_30;
        }
    }
}
