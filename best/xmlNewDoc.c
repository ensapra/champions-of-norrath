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
s32 xmlStrdup(M2C_UNK *);                           /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2860;
extern M2C_UNK D_011C2868;

void *xmlNewDoc(M2C_UNK *arg0) {
    M2C_UNK *var_17;
    s32 temp_2_2;
    void *temp_2;

    var_17 = arg0;
    if (var_17 == NULL) {
        var_17 = &D_011C2860;
    }
    temp_2 = D_011B1E1C(0x50);
    if (temp_2 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011C2868, 0x50);
        return NULL;
    }
    memset(temp_2, 0, 0x50);
    M2C_FIELD(temp_2, s32 *, 4) = 9;
    temp_2_2 = xmlStrdup(var_17);
    M2C_FIELD(temp_2, s32 *, 0x24) = -1;
    M2C_FIELD(temp_2, s32 *, 0x28) = -1;
    M2C_FIELD(temp_2, void **, 0x20) = temp_2;
    M2C_FIELD(temp_2, s32 *, 0x38) = temp_2_2;
    return temp_2;
}
