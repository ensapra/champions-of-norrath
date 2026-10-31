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

s32 xmlHashAddEntry(s32, s32, void *);              /* extern */
s32 xmlHashCreate(M2C_UNK);                         /* extern */
void *xmlStrdup(s32);                               /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern M2C_UNK (*D_011B1E18)(void *);
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011CC408;
extern M2C_UNK D_011CC428;
extern M2C_UNK D_011CC448;
extern M2C_UNK D_011CC468;
extern M2C_UNK D_011CC490;
extern M2C_UNK D_011CC4B0;

void *xmlAddID(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_UNK (*temp_2_3)(s32, M2C_UNK *, s32);
    M2C_UNK *var_5;
    s32 var_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_4;
    void *var_2;

    if (arg1 == NULL) {
        var_5 = &D_011CC408;
        goto block_16;
    }
    if (arg2 == 0) {
        var_5 = &D_011CC428;
        goto block_16;
    }
    if (arg3 != 0) {
        var_17 = M2C_FIELD(arg1, s32 *, 0x40);
        if (var_17 == 0) {
            var_17 = xmlHashCreate(0);
            M2C_FIELD(arg1, s32 *, 0x40) = var_17;
            if (var_17 == 0) {
                var_5 = &D_011CC468;
                goto block_16;
            }
            goto block_14;
        }
block_14:
        temp_2 = D_011B1E1C(0xC);
        if (temp_2 == NULL) {
            var_5 = &D_011CC490;
            goto block_16;
        }
        temp_2_2 = xmlStrdup(arg2);
        M2C_FIELD(temp_2, s32 *, 8) = arg3;
        M2C_FIELD(temp_2, void **, 4) = temp_2_2;
        var_2 = temp_2;
        if (xmlHashAddEntry(var_17, arg2, temp_2) < 0) {
            if (arg0 != NULL) {
                temp_2_3 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK *, s32), 4);
                if (temp_2_3 != NULL) {
                    temp_2_3(M2C_FIELD(arg0, s32 *, 0), &D_011CC4B0, arg2);
                }
            }
            var_2 = NULL;
            if (temp_2 != NULL) {
                temp_4 = M2C_FIELD(temp_2, void **, 4);
                if (temp_4 != NULL) {
                    D_011B1E18(temp_4);
                }
                D_011B1E18(temp_2);
                goto block_26;
            }
        }
    } else {
        var_5 = &D_011CC448;
block_16:
        ((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) D_0118EDD0)(D_0118EDD4, var_5, (M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) D_0118EDD0);
block_26:
        var_2 = NULL;
    }
    return var_2;
}
