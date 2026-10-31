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
s32 xmlStrEqual(s32, s32);                          /* extern */
extern s32 D_0118E5B0;

void *xmlHasProp(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_2;
    void *temp_16;
    void *var_16;
    void *var_2;

    if (arg0 != NULL) {
        var_2 = NULL;
        if (arg1 != 0) {
            var_16 = M2C_FIELD(arg0, void **, 0x2C);
            if (var_16 != NULL) {
loop_3:
                if (xmlStrEqual(M2C_FIELD(var_16, s32 *, 8), arg1) != 0) {
                    var_2 = var_16;
                } else {
                    var_16 = M2C_FIELD(var_16, void **, 0x18);
                    if (var_16 == NULL) {
                        goto block_8;
                    }
                    goto loop_3;
                }
            } else {
block_8:
                var_2 = NULL;
                if ((D_0118E5B0 != 0) && (temp_16 = M2C_FIELD(arg0, void **, 0x20), (temp_16 != NULL)) && (temp_4 = M2C_FIELD(temp_16, s32 *, 0x2C), (temp_4 != 0)) && (var_2 = xmlGetDtdAttrDesc(temp_4, M2C_FIELD(arg0, s32 *, 8), arg1), (var_2 == NULL))) {
                    temp_4_2 = M2C_FIELD(temp_16, s32 *, 0x30);
                    if (temp_4_2 != 0) {
                        var_2 = xmlGetDtdAttrDesc(temp_4_2, M2C_FIELD(arg0, s32 *, 8), arg1);
                    }
                    if (var_2 == NULL) {
                        goto block_15;
                    }
                }
            }
        }
    } else {
block_15:
        var_2 = NULL;
    }
    return var_2;
}
