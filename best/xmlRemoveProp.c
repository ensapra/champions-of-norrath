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

M2C_UNK xmlFreeNodeList(s32);                       /* extern */
s32 xmlIsID(s32, void *, void *);                   /* extern */
M2C_UNK xmlRemoveID(s32, void *);                   /* extern */
extern M2C_UNK (*D_011B1E18)(void *);

s32 xmlRemoveProp(void *arg0) {
    s32 temp_4_2;
    s32 temp_4_4;
    s32 var_2;
    void *temp_2;
    void *temp_4;
    void *temp_4_3;
    void *temp_5;
    void *var_16;
    void *var_17;
    void *var_4;

    var_2 = -1;
    if (arg0 != NULL) {
        temp_5 = M2C_FIELD(arg0, void **, 0x14);
        if (temp_5 != NULL) {
            var_17 = M2C_FIELD(temp_5, void **, 0x2C);
            if (var_17 == arg0) {
                M2C_FIELD(temp_5, void **, 0x2C) = (void *) M2C_FIELD(var_17, void **, 0x18);
                if (var_17 != NULL) {
                    if (xmlIsID(M2C_FIELD(temp_5, s32 *, 0x20), temp_5, var_17) != 0) {
                        xmlRemoveID(M2C_FIELD(M2C_FIELD(var_17, void **, 0x14), s32 *, 0x20), var_17);
                    }
                    temp_4 = M2C_FIELD(var_17, void **, 8);
                    if (temp_4 != NULL) {
                        D_011B1E18(temp_4);
                    }
                    temp_4_2 = M2C_FIELD(var_17, s32 *, 0xC);
                    if (temp_4_2 != 0) {
                        xmlFreeNodeList(temp_4_2);
                    }
                    var_4 = var_17;
                    goto block_28;
                }
                goto block_29;
            }
            var_2 = -1;
            if (var_17 != NULL) {
                var_16 = M2C_FIELD(var_17, void **, 0x18);
loop_14:
                if (var_16 != arg0) {
                    var_17 = var_16;
                    if (var_17 != NULL) {
                        var_16 = M2C_FIELD(var_17, void **, 0x18);
                        goto loop_14;
                    }
                    var_2 = -1;
                    /* Duplicate return node #35. Try simplifying control flow for better match */
                    return var_2;
                }
                temp_2 = M2C_FIELD(var_16, void **, 0x18);
                M2C_FIELD(var_17, void **, 0x18) = temp_2;
                if (temp_2 != NULL) {
                    M2C_FIELD(temp_2, void **, 0x1C) = var_17;
                }
                var_2 = 0;
                if (var_16 != NULL) {
                    if ((temp_5 != NULL) && (xmlIsID(M2C_FIELD(temp_5, s32 *, 0x20), temp_5, var_16) != 0)) {
                        xmlRemoveID(M2C_FIELD(M2C_FIELD(var_16, void **, 0x14), s32 *, 0x20), var_16);
                    }
                    temp_4_3 = M2C_FIELD(arg0, void **, 8);
                    if (temp_4_3 != NULL) {
                        D_011B1E18(temp_4_3);
                    }
                    temp_4_4 = M2C_FIELD(arg0, s32 *, 0xC);
                    if (temp_4_4 != 0) {
                        xmlFreeNodeList(temp_4_4);
                    }
                    var_4 = arg0;
block_28:
                    D_011B1E18(var_4);
block_29:
                    return 0;
                }
                /* Duplicate return node #35. Try simplifying control flow for better match */
                return var_2;
            }
            /* Duplicate return node #35. Try simplifying control flow for better match */
            return var_2;
        }
    }
    return var_2;
}
