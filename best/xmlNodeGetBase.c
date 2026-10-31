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

s32 xmlGetProp(void *, M2C_UNK *);                  /* extern */
s32 xmlStrcasecmp(s32, M2C_UNK *);                  /* extern */
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK D_011C29D8;
extern M2C_UNK D_011C29E8;
extern M2C_UNK D_011C29F0;
extern M2C_UNK D_011C29F8;
extern M2C_UNK D_011C2A00;

s32 xmlNodeGetBase(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_4;
    s32 var_2;
    s32 var_2_2;
    s32 var_4;
    void *var_16;
    void *var_16_2;
    void *var_17;

    var_16 = arg1;
    var_17 = arg0;
    if (var_16 == NULL) {
        if (var_17 == NULL) {
            goto block_33;
        }
        goto block_5;
    }
    if ((var_17 != NULL) || (var_17 = M2C_FIELD(var_16, void **, 0x20), (var_17 != NULL))) {
block_5:
        if (M2C_FIELD(var_17, s32 *, 4) == 0xD) {
            var_16_2 = M2C_FIELD(var_17, void **, 0xC);
            var_2 = 0;
            if (var_16_2 != NULL) {
                var_4 = M2C_FIELD(var_16_2, s32 *, 8);
                if (var_4 != 0) {
loop_9:
                    if (M2C_FIELD(var_16_2, s32 *, 4) == 1) {
                        if ((xmlStrcasecmp(var_4, &D_011C29E8) == 0) || (xmlStrcasecmp(M2C_FIELD(var_16_2, s32 *, 8), &D_011C29F0) == 0)) {
                            var_16_2 = M2C_FIELD(var_16_2, void **, 0xC);
                            goto block_16;
                        }
                        if (xmlStrcasecmp(M2C_FIELD(var_16_2, s32 *, 8), &D_011C29F8) != 0) {
                            goto block_15;
                        }
                        return xmlGetProp(var_16_2, &D_011C2A00);
                    }
block_15:
                    var_16_2 = M2C_FIELD(var_16_2, void **, 0x18);
block_16:
                    var_2 = 0;
                    if (var_16_2 != NULL) {
                        temp_2 = M2C_FIELD(var_16_2, s32 *, 8);
                        var_4 = temp_2;
                        if (temp_2 == 0) {
                            goto block_33;
                        }
                        goto loop_9;
                    }
                    /* Duplicate return node #34. Try simplifying control flow for better match */
                    return var_2;
                }
            }
            /* Duplicate return node #34. Try simplifying control flow for better match */
            return var_2;
        }
        goto block_19;
    }
block_19:
    if (var_16 != NULL) {
        var_2_2 = M2C_FIELD(var_16, s32 *, 4);
loop_21:
        if (var_2_2 != 0x11) {
            var_2 = xmlGetProp(var_16, &D_011C29D8);
            if (var_2 == 0) {
                var_16 = M2C_FIELD(var_16, void **, 0x14);
                if (var_16 != NULL) {
                    var_2_2 = M2C_FIELD(var_16, s32 *, 4);
                    goto loop_21;
                }
                goto block_26;
            }
            /* Duplicate return node #34. Try simplifying control flow for better match */
            return var_2;
        }
        return xmlStrdup(M2C_FIELD(var_16, s32 *, 0x40));
    }
block_26:
    if (var_17 != NULL) {
        temp_4 = M2C_FIELD(var_17, s32 *, 0x48);
        if (temp_4 != 0) {
            return xmlStrdup(temp_4);
        }
    }
block_33:
    var_2 = 0;
    return var_2;
}
