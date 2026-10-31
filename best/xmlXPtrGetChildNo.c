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

void *valuePop();                                   /* extern */
M2C_UNK valuePush(void *, void *);                  /* extern */
M2C_UNK xmlXPathFreeObject(void *, void *);         /* extern */
void *xmlXPathNewNodeSet(M2C_UNK);                  /* extern */
M2C_UNK xmlXPatherror(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_011DD800;

void xmlXPtrGetChildNo(void *arg0, s32 arg1) {
    s32 *temp_2;
    s32 temp_17;
    s32 temp_3_2;
    s32 var_6;
    s32 var_7;
    void **temp_8;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *var_19;
    void *var_4;

    temp_2 = M2C_FIELD(arg0, s32 **, 0x10);
    var_19 = NULL;
    if ((temp_2 == NULL) || (temp_17 = *temp_2, (temp_17 != 1))) {
        xmlXPatherror(&D_011DD800, 0x364, 0xB);
        M2C_FIELD(arg0, s32 *, 8) = 0xB;
        return;
    }
    temp_5 = valuePop();
    temp_3 = M2C_FIELD(temp_5, void **, 4);
    if ((arg1 > 0) && (temp_3 != NULL)) {
        if (M2C_FIELD(temp_3, s32 *, 0) == temp_17) {
            temp_8 = M2C_FIELD(temp_3, void ***, 8);
            temp_4 = *temp_8;
            if (temp_4 != NULL) {
                var_4 = M2C_FIELD(temp_4, void **, 0xC);
                var_6 = 0;
                var_7 = 0;
loop_16:
                var_19 = var_4;
                if (var_7 == 0) {
                    if (var_4 != NULL) {
                        temp_3_2 = M2C_FIELD(var_4, s32 *, 4);
                        if (((temp_3_2 == 1) || (temp_3_2 == 9) || (temp_3_2 == 0xD)) && (var_6 += 1, var_7 = arg1 < var_6, (var_6 == arg1))) {
                            var_19 = var_4;
                        } else {
                            var_4 = M2C_FIELD(var_4, void **, 0x18);
                            goto loop_16;
                        }
                    } else {
                        var_19 = NULL;
                    }
                }
            }
            if (var_19 != NULL) {
                *temp_8 = var_19;
                valuePush(arg0, temp_5);
                return;
            }
            xmlXPathFreeObject(temp_5, temp_5);
            valuePush(arg0, xmlXPathNewNodeSet(0));
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        xmlXPathFreeObject(temp_5, temp_5);
        valuePush(arg0, xmlXPathNewNodeSet(0));
        return;
    }
    xmlXPathFreeObject(temp_5, temp_5);
    valuePush(arg0, xmlXPathNewNodeSet(0));
}
