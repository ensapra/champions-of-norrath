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

M2C_UNK memset(s32 *, M2C_UNK, M2C_UNK);            /* extern */
s32 xmlXPtrNewRangeNodes(s32, s32);                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern s32 *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011DD7B8;
extern M2C_UNK D_011DD868;
extern M2C_UNK D_011DD8C0;

s32 *xmlXPtrNewLocationSetNodes(s32 arg0, s32 arg1) {
    s32 *temp_2;
    s32 *temp_2_2;
    s32 *temp_2_3;
    s32 *temp_2_4;
    s32 *var_16;
    s32 *var_20;
    s32 *var_2;
    s32 temp_17;
    s32 temp_3;
    s32 temp_3_2;
    s32 var_3;

    temp_2 = D_011B1E1C(0x30);
    if (temp_2 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011DD8C0, D_0118EDD0);
        return NULL;
    }
    memset(temp_2, 0, 0x30);
    M2C_FIELD(temp_2, s32 *, 0) = 7;
    if (arg1 == 0) {
        var_20 = NULL;
        if (arg0 != 0) {
            temp_2_2 = D_011B1E1C(0x30);
            if (temp_2_2 == NULL) {
                D_0118EDD0(D_0118EDD4, &D_011DD7B8, D_0118EDD0);
            } else {
                var_20 = temp_2_2;
                memset(temp_2_2, 0, 0x30);
                M2C_FIELD(temp_2_2, s32 *, 0) = 6;
                M2C_FIELD(temp_2_2, s32 *, 0x1C) = arg0;
                M2C_FIELD(temp_2_2, s32 *, 0x28) = -1;
                M2C_FIELD(temp_2_2, s32 *, 0x20) = -1;
                M2C_FIELD(temp_2_2, s32 *, 0x24) = 0;
            }
        }
        var_16 = D_011B1E1C(0xC);
        if (var_16 != NULL) {
            memset(var_16, 0, 0xC);
            var_2 = var_16;
            if (var_20 != NULL) {
                temp_2_3 = D_011B1E1C(0x28);
                M2C_FIELD(var_16, s32 **, 8) = temp_2_3;
                if (temp_2_3 != NULL) {
                    memset(temp_2_3, 0, 0x28);
                    temp_3 = M2C_FIELD(var_16, s32 *, 0);
                    var_3 = temp_3 + 1;
                    M2C_FIELD(var_16, s32 *, 4) = 0xA;
                    M2C_FIELD(var_16, s32 **, 8)[temp_3] = (s32) var_20;
                    goto block_20;
                }
                goto block_17;
            }
        } else {
            goto block_17;
        }
    } else {
        temp_17 = xmlXPtrNewRangeNodes(arg0, arg1);
        var_16 = D_011B1E1C(0xC);
        if (var_16 != NULL) {
            memset(var_16, 0, 0xC);
            var_2 = var_16;
            if (temp_17 != 0) {
                temp_2_4 = D_011B1E1C(0x28);
                M2C_FIELD(var_16, s32 **, 8) = temp_2_4;
                if (temp_2_4 == NULL) {
                    goto block_17;
                }
                memset(temp_2_4, 0, 0x28);
                temp_3_2 = M2C_FIELD(var_16, s32 *, 0);
                var_3 = temp_3_2 + 1;
                M2C_FIELD(var_16, s32 *, 4) = 0xA;
                M2C_FIELD(var_16, s32 **, 8)[temp_3_2] = temp_17;
block_20:
                *var_16 = var_3;
                var_2 = var_16;
            }
        } else {
block_17:
            D_0118EDD0(D_0118EDD4, &D_011DD868, D_0118EDD0);
            var_2 = NULL;
        }
    }
    M2C_FIELD(temp_2, s32 **, 0x1C) = var_2;
    return temp_2;
}
