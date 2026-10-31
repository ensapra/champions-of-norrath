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
s32 xmlEncodeEntitiesReentrant(s32, s32);           /* extern */
s32 xmlStrdup(s32);                                 /* extern */
void *xmlStringGetNodeList(s32, s32);               /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(s32);
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2888;

void *xmlNewProp(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2_2;
    s32 var_18;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *var_2;
    void *var_2_2;
    void *var_3;
    void *var_3_2;
    void *var_4;

    var_2 = NULL;
    var_18 = 0;
    if (arg1 != 0) {
        temp_2 = D_011B1E1C(0x2C);
        if (temp_2 == NULL) {
            D_0118EDD0(D_0118EDD4, &D_011C2888, D_0118EDD0);
            return NULL;
        }
        memset(temp_2, 0, 0x2C);
        M2C_FIELD(temp_2, s32 *, 4) = 2;
        M2C_FIELD(temp_2, void **, 0x14) = arg0;
        if (arg0 != NULL) {
            var_18 = M2C_FIELD(arg0, s32 *, 0x20);
            M2C_FIELD(temp_2, s32 *, 0x20) = var_18;
        }
        M2C_FIELD(temp_2, s32 *, 8) = xmlStrdup(arg1);
        if (arg2 != 0) {
            temp_2_2 = xmlEncodeEntitiesReentrant(var_18, arg2);
            temp_2_3 = xmlStringGetNodeList(var_18, temp_2_2);
            M2C_FIELD(temp_2, void **, 0x10) = NULL;
            var_3 = temp_2_3;
            M2C_FIELD(temp_2, void **, 0xC) = temp_2_3;
            if (var_3 != NULL) {
                var_2_2 = M2C_FIELD(var_3, void **, 0x18);
loop_9:
                M2C_FIELD(var_3, void **, 0x14) = temp_2;
                M2C_FIELD(var_3, s32 *, 0x20) = var_18;
                if (var_2_2 == NULL) {
                    M2C_FIELD(temp_2, void **, 0x10) = var_3;
                    var_2_2 = M2C_FIELD(var_3, void **, 0x18);
                }
                var_3 = var_2_2;
                if (var_3 != NULL) {
                    var_2_2 = M2C_FIELD(var_3, void **, 0x18);
                    goto loop_9;
                }
            }
            D_011B1E18(temp_2_2);
        }
        var_2 = temp_2;
        if (arg0 != NULL) {
            temp_2_4 = M2C_FIELD(arg0, void **, 0x2C);
            var_3_2 = temp_2_4;
            if (temp_2_4 == NULL) {
                M2C_FIELD(arg0, void **, 0x2C) = temp_2;
            } else {
                var_4 = M2C_FIELD(var_3_2, void **, 0x18);
                if (var_4 != NULL) {
                    do {
                        var_3_2 = var_4;
                        temp_2_5 = M2C_FIELD(var_3_2, void **, 0x18);
                        var_4 = temp_2_5;
                    } while (temp_2_5 != NULL);
                }
                M2C_FIELD(var_3_2, void **, 0x18) = temp_2;
                M2C_FIELD(temp_2, void **, 0x1C) = var_3_2;
            }
            var_2 = temp_2;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
