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

void *xmlAddDocEntity(s32);                         /* extern */
void *xmlAddDtdEntity(s32);                         /* extern */
s32 xmlBuildURI(s32, s32);                          /* extern */
extern M2C_UNK D_011DBCB0;
extern M2C_UNK D_011DBCE8;
extern M2C_UNK D_011DBD20;

void entityDecl(void *arg0, s32 arg1, s32 arg4) {
    M2C_UNK (*temp_2_3)(M2C_UNK *, s32);
    M2C_UNK (*var_2)(void *, M2C_UNK *, s32);
    M2C_UNK *var_5;
    s32 temp_3;
    s32 var_5_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_2_5;
    void *var_17;

    temp_3 = M2C_FIELD(arg0, s32 *, 0xD8);
    if (temp_3 == 1) {
        var_17 = xmlAddDocEntity(M2C_FIELD(arg0, s32 *, 8));
        if (var_17 == NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x10C) != 0) {
                temp_2 = M2C_FIELD(arg0, void **, 0);
                if (temp_2 != NULL) {
                    var_2 = M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK *, s32), 0x54);
                    if (var_2 != NULL) {
                        var_5 = &D_011DBCB0;
                        goto block_15;
                    }
                }
            }
            goto block_16;
        }
        goto block_17;
    }
    if (temp_3 != 2) {
        temp_2_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_2_2 != NULL) {
            temp_2_3 = M2C_FIELD(temp_2_2, M2C_UNK (**)(M2C_UNK *, s32), 0x58);
            if (temp_2_3 != NULL) {
                temp_2_3(&D_011DBD20, arg1);
            }
        }
    } else {
        var_17 = xmlAddDtdEntity(M2C_FIELD(arg0, s32 *, 8));
        if (var_17 == NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x10C) != 0) {
                temp_2_4 = M2C_FIELD(arg0, void **, 0);
                if (temp_2_4 != NULL) {
                    var_2 = M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, M2C_UNK *, s32), 0x54);
                    if (var_2 != NULL) {
                        var_5 = &D_011DBCE8;
block_15:
                        var_2(arg0, var_5, arg1);
                    }
                }
            }
block_16:
            if (var_17 != NULL) {
                goto block_17;
            }
        } else {
block_17:
            if ((M2C_FIELD(var_17, s32 *, 0x40) == 0) && (arg4 != 0)) {
                temp_2_5 = M2C_FIELD(arg0, void **, 0x24);
                var_5_2 = 0;
                if (temp_2_5 != NULL) {
                    var_5_2 = M2C_FIELD(temp_2_5, s32 *, 4);
                }
                if (var_5_2 == 0) {
                    var_5_2 = M2C_FIELD(arg0, s32 *, 0xA8);
                }
                M2C_FIELD(var_17, s32 *, 0x40) = xmlBuildURI(arg4, var_5_2);
            }
        }
    }
}
