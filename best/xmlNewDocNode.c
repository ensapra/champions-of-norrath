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
void *xmlStringGetNodeList(s32, s32);               /* extern */
extern M2C_UNK (*D_0118EDD0)(s32, M2C_UNK *, M2C_UNK);
extern s32 D_0118EDD4;
extern void *(*D_011B1E1C)(M2C_UNK);
extern M2C_UNK D_011C28C8;

void *xmlNewDocNode(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2_2;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *var_17;
    void *var_3;
    void *var_4;

    var_17 = NULL;
    if (arg2 != 0) {
        temp_2 = D_011B1E1C(0x34);
        if (temp_2 == NULL) {
            D_0118EDD0(D_0118EDD4, &D_011C28C8, D_0118EDD0);
        } else {
            var_17 = temp_2;
            memset(temp_2, 0, 0x34);
            M2C_FIELD(temp_2, s32 *, 4) = 1;
            temp_2_2 = xmlStrdup(arg2);
            M2C_FIELD(temp_2, s32 *, 0x24) = arg1;
            M2C_FIELD(temp_2, s32 *, 8) = temp_2_2;
        }
    }
    if (var_17 != NULL) {
        M2C_FIELD(var_17, s32 *, 0x20) = arg0;
        if (arg3 != 0) {
            temp_2_3 = xmlStringGetNodeList(arg0, arg3);
            var_3 = temp_2_3;
            M2C_FIELD(var_17, void **, 0xC) = temp_2_3;
            if (var_3 == NULL) {
                M2C_FIELD(var_17, void **, 0x10) = NULL;
            } else {
                temp_2_4 = M2C_FIELD(var_3, void **, 0x18);
                if (temp_2_4 != NULL) {
                    var_4 = temp_2_4;
                    do {
                        M2C_FIELD(var_3, void **, 0x14) = var_17;
                        var_3 = var_4;
                        temp_2_5 = M2C_FIELD(var_3, void **, 0x18);
                        var_4 = temp_2_5;
                    } while (temp_2_5 != NULL);
                }
                M2C_FIELD(var_3, void **, 0x14) = var_17;
                M2C_FIELD(var_17, void **, 0x10) = var_3;
            }
        }
    }
    return var_17;
}
