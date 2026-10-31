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
s32 xmlCopyAttributeTable(s32);                     /* extern */
s32 xmlCopyElementTable(s32);                       /* extern */
s32 xmlCopyEntitiesTable(s32);                      /* extern */
s32 xmlCopyNotationTable(s32);                      /* extern */
s32 xmlStrdup(s32);                                 /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C2840;

void *xmlCopyDtd(void *arg0) {
    s32 temp_18;
    s32 temp_19;
    s32 temp_20;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    void *var_16;
    void *var_2;

    var_2 = NULL;
    if (arg0 != NULL) {
        temp_18 = M2C_FIELD(arg0, s32 *, 8);
        temp_19 = M2C_FIELD(arg0, s32 *, 0x34);
        temp_20 = M2C_FIELD(arg0, s32 *, 0x38);
        var_16 = D_011B1E1C(0x40);
        if (var_16 == NULL) {
            var_16 = NULL;
            D_0118EDD0(D_0118EDD4, &D_011C2840, D_0118EDD0);
        } else {
            memset(var_16, 0, 0x40);
            M2C_FIELD(var_16, s32 *, 4) = 0xE;
            if (temp_18 != 0) {
                M2C_FIELD(var_16, s32 *, 8) = xmlStrdup(temp_18);
            }
            if (temp_19 != 0) {
                M2C_FIELD(var_16, s32 *, 0x34) = xmlStrdup(temp_19);
            }
            if (temp_20 != 0) {
                M2C_FIELD(var_16, s32 *, 0x38) = xmlStrdup(temp_20);
            }
            M2C_FIELD(var_16, s32 *, 0x20) = 0;
        }
        var_2 = NULL;
        if (var_16 != NULL) {
            temp_4 = M2C_FIELD(arg0, s32 *, 0x30);
            if (temp_4 != 0) {
                M2C_FIELD(var_16, s32 *, 0x30) = xmlCopyEntitiesTable(temp_4);
            }
            temp_4_2 = M2C_FIELD(arg0, s32 *, 0x24);
            if (temp_4_2 != 0) {
                M2C_FIELD(var_16, s32 *, 0x24) = xmlCopyNotationTable(temp_4_2);
            }
            temp_4_3 = M2C_FIELD(arg0, s32 *, 0x28);
            if (temp_4_3 != 0) {
                M2C_FIELD(var_16, s32 *, 0x28) = xmlCopyElementTable(temp_4_3);
            }
            temp_4_4 = M2C_FIELD(arg0, s32 *, 0x2C);
            var_2 = var_16;
            if (temp_4_4 != 0) {
                M2C_FIELD(var_16, s32 *, 0x2C) = xmlCopyAttributeTable(temp_4_4);
                var_2 = var_16;
            }
        }
    }
    return var_2;
}
