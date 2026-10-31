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
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2840;

void *xmlNewDtd(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_2;
    void *var_2;

    if ((arg0 == NULL) || (var_2 = NULL, (M2C_FIELD(arg0, void **, 0x30) == NULL))) {
        temp_2 = D_011B1E1C(0x40);
        if (temp_2 == NULL) {
            D_0118EDD0(D_0118EDD4, &D_011C2840, D_0118EDD0);
            return NULL;
        }
        memset(temp_2, 0, 0x40);
        M2C_FIELD(temp_2, s32 *, 4) = 0xE;
        if (arg1 != 0) {
            M2C_FIELD(temp_2, s32 *, 8) = xmlStrdup(arg1);
        }
        if (arg2 != 0) {
            M2C_FIELD(temp_2, s32 *, 0x34) = xmlStrdup(arg2);
        }
        if (arg3 != 0) {
            M2C_FIELD(temp_2, s32 *, 0x38) = xmlStrdup(arg3);
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0x30) = temp_2;
        }
        M2C_FIELD(temp_2, void **, 0x20) = arg0;
        var_2 = temp_2;
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
