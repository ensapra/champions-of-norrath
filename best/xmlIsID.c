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

void *xmlGetDtdAttrDesc(s32, s32, s32);             /* extern */
s32 xmlStrEqual(M2C_UNK *, s32);                    /* extern */
extern M2C_UNK D_011CC4C8;
extern M2C_UNK D_011CC4D0;

s32 xmlIsID(void *arg0, void *arg1, void *arg2) {
    s32 temp_4;
    s32 temp_4_2;
    s32 var_2;
    void *var_2_2;

    var_2 = 0;
    if ((arg0 != NULL) && (arg2 != NULL) && ((temp_4 = M2C_FIELD(arg0, s32 *, 0x2C), (temp_4 != 0)) || (M2C_FIELD(arg0, s32 *, 0x30) != 0))) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0xD) {
            if (xmlStrEqual(&D_011CC4C8, M2C_FIELD(arg2, s32 *, 8)) != 0) {
                var_2 = 1;
                goto block_17;
            }
            var_2 = xmlStrEqual(&D_011CC4D0, M2C_FIELD(arg2, s32 *, 8));
            if (var_2 != 0) {
                return 1;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_2;
        }
        var_2 = 0;
        if (arg1 != NULL) {
            var_2_2 = xmlGetDtdAttrDesc(temp_4, M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg2, s32 *, 8));
            if (var_2_2 == NULL) {
                temp_4_2 = M2C_FIELD(arg0, s32 *, 0x30);
                if (temp_4_2 != 0) {
                    var_2_2 = xmlGetDtdAttrDesc(temp_4_2, M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg2, s32 *, 8));
                }
                if (var_2_2 != NULL) {
                    goto block_15;
                }
                goto block_16;
            }
block_15:
            var_2 = 1;
            if (M2C_FIELD(var_2_2, s32 *, 0x28) != 2) {
block_16:
                var_2 = 0;
            }
        }
        goto block_17;
    }
block_17:
    return var_2;
}
