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

s32 xmlEncodeEntitiesReentrant(s32, s32);           /* extern */
M2C_UNK xmlFreeNode(void *);                        /* extern */
void *xmlNewProp(void *, s32, s32);                 /* extern */
s32 xmlStrEqual(s32, s32);                          /* extern */
void *xmlStringGetNodeList(s32, s32);               /* extern */
extern M2C_UNK (*D_011B1E18)(s32);

void *xmlSetProp(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_20;
    s32 temp_2;
    void *temp_16;
    void *temp_2_2;
    void *var_17;
    void *var_2;
    void *var_3;
    void *var_4;

    var_17 = M2C_FIELD(arg0, void **, 0x2C);
    if ((arg0 == NULL) || (arg1 == 0)) {
        return NULL;
    }
    temp_20 = M2C_FIELD(arg0, s32 *, 0x20);
    if (var_17 != NULL) {
loop_6:
        if (xmlStrEqual(M2C_FIELD(var_17, s32 *, 8), arg1) == 0) {
            var_17 = M2C_FIELD(var_17, void **, 0x18);
            if (var_17 == NULL) {
                /* Duplicate return node #23. Try simplifying control flow for better match */
                return xmlNewProp(arg0, arg1, arg2);
            }
            goto loop_6;
        }
        var_4 = M2C_FIELD(var_17, void **, 0xC);
        if (var_4 != NULL) {
            do {
                temp_16 = M2C_FIELD(var_4, void **, 0x18);
                xmlFreeNode(var_4);
                var_4 = temp_16;
            } while (var_4 != NULL);
        }
        M2C_FIELD(var_17, void **, 0xC) = NULL;
        M2C_FIELD(var_17, void **, 0x10) = NULL;
        if (arg2 != 0) {
            temp_2 = xmlEncodeEntitiesReentrant(M2C_FIELD(arg0, s32 *, 0x20), arg2);
            temp_2_2 = xmlStringGetNodeList(M2C_FIELD(arg0, s32 *, 0x20), temp_2);
            M2C_FIELD(var_17, void **, 0x10) = NULL;
            var_3 = temp_2_2;
            M2C_FIELD(var_17, void **, 0xC) = temp_2_2;
            M2C_FIELD(var_17, s32 *, 0x20) = temp_20;
            if (var_3 != NULL) {
                var_2 = M2C_FIELD(var_3, void **, 0x18);
loop_15:
                M2C_FIELD(var_3, void **, 0x14) = var_17;
                M2C_FIELD(var_3, s32 *, 0x20) = temp_20;
                if (var_2 == NULL) {
                    M2C_FIELD(var_17, void **, 0x10) = var_3;
                    var_2 = M2C_FIELD(var_3, void **, 0x18);
                }
                var_3 = var_2;
                if (var_3 != NULL) {
                    var_2 = M2C_FIELD(var_3, void **, 0x18);
                    goto loop_15;
                }
            }
            D_011B1E18(temp_2);
        }
        return var_17;
    }
    return xmlNewProp(arg0, arg1, arg2);
}
