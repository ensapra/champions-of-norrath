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
s32 xmlStrdup(s32);                                 /* extern */
void *xmlStringGetNodeList(s32, s32);               /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C28C8;

void *xmlNewChild(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_20;
    s32 temp_22;
    s32 temp_22_2;
    s32 temp_2_2;
    s32 temp_2_7;
    void *temp_2;
    void *temp_2_10;
    void *temp_2_11;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_8;
    void *temp_2_9;
    void *var_17;
    void *var_2;
    void *var_3;
    void *var_4;
    void *var_4_2;
    void *var_5;

    var_2 = NULL;
    if ((arg0 != NULL) && (arg2 != 0)) {
        if (arg1 == 0) {
            temp_22 = M2C_FIELD(arg0, s32 *, 0x20);
            temp_20 = M2C_FIELD(arg0, s32 *, 0x24);
            temp_2 = D_011B1E1C(0x34);
            if (temp_2 == NULL) {
                var_17 = NULL;
                D_0118EDD0(D_0118EDD4, &D_011C28C8, D_0118EDD0);
            } else {
                var_17 = temp_2;
                memset(temp_2, 0, 0x34);
                M2C_FIELD(temp_2, s32 *, 4) = 1;
                temp_2_2 = xmlStrdup(arg2);
                M2C_FIELD(temp_2, s32 *, 0x24) = temp_20;
                M2C_FIELD(temp_2, s32 *, 8) = temp_2_2;
            }
            var_5 = var_17;
            if (var_17 != NULL) {
                M2C_FIELD(var_17, s32 *, 0x20) = temp_22;
                if (arg3 != 0) {
                    temp_2_3 = xmlStringGetNodeList(temp_22, arg3);
                    var_3 = temp_2_3;
                    M2C_FIELD(var_17, void **, 0xC) = temp_2_3;
                    if (var_3 != NULL) {
                        temp_2_4 = M2C_FIELD(var_3, void **, 0x18);
                        if (temp_2_4 != NULL) {
                            var_4 = temp_2_4;
                            do {
                                M2C_FIELD(var_3, void **, 0x14) = var_17;
                                var_3 = var_4;
                                temp_2_5 = M2C_FIELD(var_3, void **, 0x18);
                                var_4 = temp_2_5;
                            } while (temp_2_5 != NULL);
                        }
                        goto block_26;
                    }
                    goto block_22;
                    goto block_27;
                }
            }
        } else {
            temp_22_2 = M2C_FIELD(arg0, s32 *, 0x20);
            temp_2_6 = D_011B1E1C(0x34);
            if (temp_2_6 == NULL) {
                var_17 = NULL;
                D_0118EDD0(D_0118EDD4, &D_011C28C8, D_0118EDD0);
            } else {
                var_17 = temp_2_6;
                memset(temp_2_6, 0, 0x34);
                M2C_FIELD(temp_2_6, s32 *, 4) = 1;
                temp_2_7 = xmlStrdup(arg2);
                M2C_FIELD(temp_2_6, s32 *, 0x24) = arg1;
                M2C_FIELD(temp_2_6, s32 *, 8) = temp_2_7;
            }
            var_5 = var_17;
            if (var_17 != NULL) {
                M2C_FIELD(var_17, s32 *, 0x20) = temp_22_2;
                if (arg3 != 0) {
                    temp_2_8 = xmlStringGetNodeList(temp_22_2, arg3);
                    var_3 = temp_2_8;
                    M2C_FIELD(var_17, void **, 0xC) = temp_2_8;
                    if (var_3 == NULL) {
block_22:
                        M2C_FIELD(var_17, s32 *, 0x10) = 0;
                    } else {
                        temp_2_9 = M2C_FIELD(var_3, void **, 0x18);
                        if (temp_2_9 != NULL) {
                            var_4_2 = temp_2_9;
                            do {
                                M2C_FIELD(var_3, void **, 0x14) = var_17;
                                var_3 = var_4_2;
                                temp_2_10 = M2C_FIELD(var_3, void **, 0x18);
                                var_4_2 = temp_2_10;
                            } while (temp_2_10 != NULL);
                        }
block_26:
                        M2C_FIELD(var_3, void **, 0x14) = var_17;
                        M2C_FIELD(var_17, void **, 0x10) = var_3;
                    }
block_27:
                    var_5 = var_17;
                }
            }
        }
        var_2 = NULL;
        if (var_5 != NULL) {
            M2C_FIELD(var_5, void **, 0x14) = arg0;
            M2C_FIELD(var_5, s32 *, 4) = 1;
            M2C_FIELD(var_5, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
            if (M2C_FIELD(arg0, void **, 0xC) == NULL) {
                M2C_FIELD(arg0, void **, 0x10) = var_5;
                M2C_FIELD(arg0, void **, 0xC) = var_5;
            } else {
                temp_2_11 = M2C_FIELD(arg0, void **, 0x10);
                M2C_FIELD(temp_2_11, void **, 0x18) = var_5;
                M2C_FIELD(var_5, void **, 0x1C) = temp_2_11;
                M2C_FIELD(arg0, void **, 0x10) = var_5;
            }
            var_2 = var_5;
        }
    }
    return var_2;
}
