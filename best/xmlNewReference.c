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
void *xmlGetDocEntity(s32, s32);                    /* extern */
s32 xmlStrdup(u8 *);                                /* extern */
s32 xmlStrlen(void *);                              /* extern */
s32 xmlStrndup(void *, s32);                        /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2910;

void *xmlNewReference(s32 arg0, u8 *arg1) {
    s32 temp_2_2;
    s32 var_2;
    void *temp_16;
    void *temp_2;
    void *temp_2_3;

    temp_2 = D_011B1E1C(0x34);
    if (temp_2 == NULL) {
        D_0118EDD0(D_0118EDD4, &D_011C2910, D_0118EDD0);
        return NULL;
    }
    memset(temp_2, 0, 0x34);
    M2C_FIELD(temp_2, s32 *, 4) = 5;
    M2C_FIELD(temp_2, s32 *, 0x20) = arg0;
    if (*arg1 == 0x26) {
        temp_16 = arg1 + 1;
        temp_2_2 = xmlStrlen(temp_16);
        if (M2C_FIELD((temp_16 + temp_2_2), u8 *, -1) == 0x3B) {
            var_2 = xmlStrndup(temp_16, temp_2_2 - 1);
        } else {
            var_2 = xmlStrndup(temp_16, temp_2_2);
        }
    } else {
        var_2 = xmlStrdup(arg1);
    }
    M2C_FIELD(temp_2, s32 *, 8) = var_2;
    temp_2_3 = xmlGetDocEntity(arg0, M2C_FIELD(temp_2, s32 *, 8));
    if (temp_2_3 != NULL) {
        M2C_FIELD(temp_2, void **, 0x10) = temp_2_3;
        M2C_FIELD(temp_2, s32 *, 0x28) = (s32) M2C_FIELD(temp_2_3, s32 *, 0x28);
        M2C_FIELD(temp_2, void **, 0xC) = temp_2_3;
    }
    return temp_2;
}
